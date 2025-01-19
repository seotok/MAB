"""latest version of SuperpointNet. Use it!

"""

import torch
import torch.nn as nn
from torch.nn.init import xavier_uniform_, zeros_
from models.unet_parts import *
import numpy as np

# class double_conv(nn.Module):
#     '''(conv => BN => ReLU) * 2'''
#     def __init__(self, in_ch, out_ch):
#         super(double_conv, self).__init__()
#         self.conv = nn.Sequential(
#             nn.Conv2d(in_ch, out_ch, 3, padding=1),
#             nn.BatchNorm2d(out_ch),
#             nn.ReLU(inplace=True),
#             nn.Conv2d(out_ch, out_ch, 3, padding=1),
#             nn.BatchNorm2d(out_ch),
#             nn.ReLU(inplace=True)
#         )

#     def forward(self, x):
#         x = self.conv(x)
#         return x

from collections import OrderedDict
class double_conv(nn.Module):
    '''(conv => BN => ReLU) * 2'''
    def __init__(self, in_ch, out_ch):
        super(double_conv, self).__init__()
        self.conv = nn.Sequential(OrderedDict([
            ('conv0', nn.Conv2d(in_ch, out_ch, 3, padding=1)),
            ('bn0', nn.BatchNorm2d(out_ch)),
            ('relu0', nn.ReLU(inplace=True)),
            ('conv1', nn.Conv2d(out_ch, out_ch, 3, padding=1)),
            ('bn1', nn.BatchNorm2d(out_ch)),
            ('relu1', nn.ReLU(inplace=True)),
        ]))

    def forward(self, x):
        with nvtx.annotate("conv0", color="blue"):
            x = self.conv.conv0(x)
        with nvtx.annotate("bn0", color="blue"):
            x = self.conv.bn0(x)
        with nvtx.annotate("relu0", color="blue"):
            x = self.conv.relu0(x)
        with nvtx.annotate("conv1", color="blue"):
            x = self.conv.conv1(x)
        with nvtx.annotate("bn1", color="blue"):
            x = self.conv.bn1(x)
        with nvtx.annotate("relu1", color="blue"):
            x = self.conv.relu1(x)
        return x


# class inconv(nn.Module):
#     def __init__(self, in_ch, out_ch):
#         super(inconv, self).__init__()
#         self.conv = double_conv(in_ch, out_ch)

#     def forward(self, x):
#         x = self.conv(x)
#         return x


# class down(nn.Module):
#     def __init__(self, in_ch, out_ch):
#         super(down, self).__init__()
#         self.mpconv = nn.Sequential(
#             nn.MaxPool2d(2),
#             double_conv(in_ch, out_ch)
#         )

#     def forward(self, x):
#         x = self.mpconv(x)
#         return x

class inconv(nn.Module):
    def __init__(self, in_ch, out_ch):
        super(inconv, self).__init__()
        self.conv = double_conv(in_ch, out_ch)

    def forward(self, x):
        with nvtx.annotate("double_conv", color="blue"):
            x = self.conv(x)
        return x


class down(nn.Module):
    def __init__(self, in_ch, out_ch):
        super(down, self).__init__()
        self.mpconv = nn.Sequential(
            nn.MaxPool2d(2),
            double_conv(in_ch, out_ch)
        )

    def forward(self, x):
        with nvtx.annotate("maxpool", color="blue"):
            x = self.mpconv[0](x)  # MaxPool2d
        with nvtx.annotate("double_conv", color="blue"):
            x = self.mpconv[1](x)  # double_conv
        return x


# from models.SubpixelNet import SubpixelNet
class SuperPointNet_gauss2(torch.nn.Module):
    """ Pytorch definition of SuperPoint Network. """
    def __init__(self, subpixel_channel=1):
        super(SuperPointNet_gauss2, self).__init__()
        c1, c2, c3, c4, c5, d1 = 64, 64, 128, 128, 256, 256
        det_h = 65
        self.inc = inconv(1, c1)
        self.down1 = down(c1, c2)
        self.down2 = down(c2, c3)
        self.down3 = down(c3, c4)
        self.relu = torch.nn.ReLU(inplace=True)
        # Detector Head.
        self.convPa = torch.nn.Conv2d(c4, c5, kernel_size=3, stride=1, padding=1)
        self.bnPa = nn.BatchNorm2d(c5)
        self.convPb = torch.nn.Conv2d(c5, det_h, kernel_size=1, stride=1, padding=0)
        self.bnPb = nn.BatchNorm2d(det_h)
        # Descriptor Head.
        self.convDa = torch.nn.Conv2d(c4, c5, kernel_size=3, stride=1, padding=1)
        self.bnDa = nn.BatchNorm2d(c5)
        self.convDb = torch.nn.Conv2d(c5, d1, kernel_size=1, stride=1, padding=0)
        self.bnDb = nn.BatchNorm2d(d1)
        self.output = None



    def forward(self, x):
        """ Forward pass that jointly computes unprocessed point and descriptor
        tensors.
        Input
          x: Image pytorch tensor shaped N x 1 x patch_size x patch_size.
        Output
          semi: Output point pytorch tensor shaped N x 65 x H/8 x W/8.
          desc: Output descriptor pytorch tensor shaped N x 256 x H/8 x W/8.
        """
        # # Let's stick to this version: first BN, then relu
        # x1 = self.inc(x)
        # x2 = self.down1(x1)
        # x3 = self.down2(x2)
        # x4 = self.down3(x3)

        # # Detector Head.
        # cPa = self.relu(self.bnPa(self.convPa(x4)))
        # semi = self.bnPb(self.convPb(cPa))
        # # Descriptor Head.
        # cDa = self.relu(self.bnDa(self.convDa(x4)))
        # desc = self.bnDb(self.convDb(cDa))
        # Let's stick to this version: first BN, then relu
        with nvtx.annotate("inc", color="blue"):
            x1 = self.inc(x)

        with nvtx.annotate("down1", color="blue"):
            x2 = self.down1(x1)

        with nvtx.annotate("down2", color="blue"):
            x3 = self.down2(x2)

        with nvtx.annotate("down3", color="blue"):
            x4 = self.down3(x3)

        # Detector Head
        with nvtx.annotate("convPa", color="blue"):
            cPa = self.convPa(x4)
        with nvtx.annotate("bnPa", color="blue"):
            cPa = self.bnPa(cPa)
        with nvtx.annotate("relu", color="blue"):
            cPa = self.relu(cPa)

        with nvtx.annotate("convPb", color="blue"):
            semi = self.convPb(cPa)
        with nvtx.annotate("bnPb", color="blue"):
            semi = self.bnPb(semi)

        # Descriptor Head
        with nvtx.annotate("convDa", color="blue"):
            cDa = self.convDa(x4)
        with nvtx.annotate("bnDa", color="blue"):
            cDa = self.bnDa(cDa)
        with nvtx.annotate("relu", color="blue"):
            cDa = self.relu(cDa)

        with nvtx.annotate("convDb", color="blue"):
            desc = self.convDb(cDa)
        with nvtx.annotate("bnDb", color="blue"):
            desc = self.bnDb(desc)

        dn = torch.norm(desc, p=2, dim=1) # Compute the norm.
        desc = desc.div(torch.unsqueeze(dn, 1)) # Divide by norm to normalize.


        output = {'semi': semi, 'desc': desc}
        self.output = output

        return output
