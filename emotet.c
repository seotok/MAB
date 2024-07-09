/* Function: FUN_10001000 */

void __fastcall
FUN_10001000(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined param_4,
            undefined param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x2f5,extraout_ECX,0x90bdc3a8,0xd873a625);
  (*pcVar1)(param_7,param_12,param_10,0,param_9,param_2,0,0);
  return;
}



/* Function: FUN_100010cf */

void FUN_100010cf(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar3 = 0;
  uVar2 = 0x39201c;
  uVar5 = 0xccc;
  uVar6 = 0x253f;
  uVar7 = 0x829;
  uVar4 = 0x7455;
  pcVar1 = (code *)FUN_10007d5b(0x21b,0x69,0x90bdc3a8,0xe6de7372);
  (*pcVar1)(uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  return;
}



/* Function: FUN_1000117a */

undefined4 FUN_1000117a(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar4;
  int iVar5;
  int local_1c;
  void *local_18;
  void *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  uVar4 = 0;
  iVar5 = 0x2b00393e;
  uVar3 = 0x68;
  iVar1 = local_1c;
  iVar2 = local_1c;
LAB_1000141d:
  do {
    if (iVar5 < 0x24c6cb69) {
      if (iVar5 == 0x24c6cb68) {
        uVar3 = 0x1211;
        FUN_1000d4e0(local_18,0x43,0x50ce,0x1211);
        iVar5 = 0x33122d7f;
        goto LAB_1000141d;
      }
      if (iVar5 == 0x14631220) {
        iVar5 = FUN_10013b85(&local_18,0x6a25,&local_10);
        iVar5 = (-(uint)(iVar5 != 0) & 0xfdc8cb7d) + 0x24c6cb68;
        uVar3 = extraout_ECX_01;
        goto LAB_1000141d;
      }
      if (iVar5 == 0x19ba30fb) {
        iVar5 = 0x33122d7f;
        if ((2 < local_1c) &&
           (local_18 = (void *)FUN_100015c0(0x1258,0x2393,&local_14), uVar3 = extraout_ECX_00,
           local_18 != (void *)0x0)) {
          iVar5 = 0x14631220;
        }
        goto LAB_1000141d;
      }
      if (iVar5 == 0x228f96e5) {
        FUN_1000195d(DAT_1001fa14 + 0xc,local_8 + 1,0x41b1,0x4bfc,local_c,0x6c7a);
        uVar4 = 1;
        iVar5 = 0x24c6cb68;
        *(undefined4 *)(DAT_1001fa14 + 0x43c) = local_10;
        uVar3 = local_10;
        goto LAB_1000141d;
      }
      if (iVar5 == 0x229e6440) {
        iVar1 = FUN_1000e923(uVar3);
        iVar5 = 0x34f19d6e;
        uVar3 = extraout_ECX;
        goto LAB_1000141d;
      }
    }
    else if (iVar5 == 0x2b00393e) {
      iVar5 = 0x229e6440;
    }
    else {
      if (iVar5 == 0x33122d7f) {
        FUN_1001385b(0x4d8c,iVar2,0x2a59,0x4ac);
        return uVar4;
      }
      if (iVar5 == 0x34f19d6e) {
        iVar2 = FUN_1000aee5(iVar1,&local_1c,0x3c4f);
        if (iVar2 == 0) {
          return uVar4;
        }
        iVar5 = 0x19ba30fb;
        uVar3 = extraout_ECX_02;
        goto LAB_1000141d;
      }
    }
    if (iVar5 == 0x49187b4) {
      return uVar4;
    }
  } while( true );
}



/* Function: FUN_100015c0 */

int __cdecl FUN_100015c0(undefined4 param_1,undefined4 param_2,void **param_3)

{
  int iVar1;
  undefined4 in_ECX;
  int iVar2;
  int iVar3;
  undefined uVar4;
  void *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_10017e12();
  local_10 = 0x4f25d9;
  local_c = 0;
  iVar3 = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  iVar2 = 0x2701cc73;
LAB_10001877:
  do {
    if (iVar2 == 0x33352fc) {
      iVar3 = FUN_10017f68(0x33352fc,local_14);
      if (iVar3 != 0) {
        iVar2 = 0x2b6208ce;
        goto LAB_10001877;
      }
      iVar2 = 0x2341e0c6;
    }
    else {
      if (iVar2 == 0x2701cc73) {
        iVar2 = 0x3a9ff965;
        goto LAB_10001877;
      }
      uVar4 = (undefined)iVar2;
      if (iVar2 == 0x2b6208ce) {
        FUN_1000cba6(0x4bfc,uVar4,uVar4,iVar3,1,0xf47,&local_14,0x3a56,uVar4,0xbf0,in_ECX);
        *param_3 = local_14;
        return iVar3;
      }
      if (iVar2 == 0x3a9ff965) {
        iVar1 = FUN_1000cba6(0x7e8f,uVar4,uVar4,0,1,0x1df3,&local_14,0x3273,uVar4,0x4802,in_ECX);
        iVar2 = 0x33352fc;
        if (iVar1 == 0) {
          return iVar3;
        }
        goto LAB_10001877;
      }
    }
    if (iVar2 == 0x2341e0c6) {
      return iVar3;
    }
  } while( true );
}



/* Function: FUN_1000195d */

void __fastcall
FUN_1000195d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x37c,extraout_ECX,0x90bdc3a8,0x13c5ecbe);
  (*pcVar1)(param_1,param_5,param_2);
  return;
}



/* Function: FUN_10001a12 */

uint __fastcall FUN_10001a12(undefined4 param_1)

{
  int iVar1;
  uint in_EDX;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_20 = 4;
  local_10 = 0x20000000;
  local_1c = 0x612e;
  local_18 = 0xe54;
  local_14 = 0x692e;
  local_c = 0x4dba;
  local_8 = 0x3c82;
  iVar1 = FUN_1001b62d(&local_24,param_1,param_1,&local_20,0x612e,0xe54,0x692e,0x4dba,0x3c82,
                       in_EDX | 0x20000000);
  return -(uint)(iVar1 != 0) & local_24;
}



/* Function: FUN_10001b03 */

void __thiscall FUN_10001b03(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  FUN_1000732d(0x1330,(uint *)&DAT_1001f930,0x6612);
  FUN_1001cf1c(extraout_ECX,0xd0c,this,0x88d,0xa81,param_3,param_2,0x3532);
  FUN_10007c8f(0x34a7);
  return;
}



/* Function: FUN_10001c78 */

undefined * __fastcall
FUN_10001c78(int param_1,undefined4 *param_2,uint *param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  ushort *puVar4;
  undefined *puVar5;
  undefined *extraout_ECX;
  undefined *extraout_ECX_00;
  int iVar6;
  undefined *puVar7;
  undefined local_410 [520];
  undefined local_208 [520];
  
  iVar6 = 0x148afb32;
  puVar5 = (undefined *)0x46;
  iVar1 = param_1;
  puVar7 = (undefined *)0x0;
LAB_10002172:
  do {
    if (iVar6 == 0x6661f3b) {
      puVar4 = FUN_1000732d(0x3147,param_3,0x6c82);
      FUN_10013b36(0x33e2,0x3e22,0x104,0x47e5,param_4,puVar4,0x4ea2,param_1,local_208);
      FUN_10007c8f(0x34d4);
      iVar6 = 0x1f52feaf;
      puVar5 = extraout_ECX_00;
    }
    else {
      if (iVar6 == 0xd1d4bb8) {
        FUN_10002ec6(iVar1,0xbb,0x1176,0x3df5,0x7223);
        return puVar7;
      }
      if (iVar6 == 0x13899d6a) {
        iVar3 = FUN_10007911(0xc93,*param_2,puVar5,0x5e39,iVar1,param_2[1],0x5259,param_2 + 1,0x4f41
                            );
        puVar5 = (undefined *)0x1;
        iVar6 = 0xd1d4bb8;
        if (iVar3 != 0) {
          puVar7 = puVar5;
        }
        goto LAB_10002172;
      }
      if (iVar6 == 0x148afb32) {
        iVar6 = 0x16774757;
        goto LAB_10002172;
      }
      if (iVar6 == 0x16774757) {
        FUN_1000d67e(0x540a,(char)puVar5,0x4f3);
        puVar2 = (undefined2 *)FUN_1001500e(0x5894,local_410,0x11ac);
        iVar6 = 0x2f8445f8;
        puVar5 = (undefined *)0x0;
        *puVar2 = 0;
        goto LAB_10002172;
      }
      if (iVar6 == 0x1f52feaf) {
        iVar1 = FUN_1000d00e(param_4,0x40000000,0x7811,0x16fc,0,puVar5,0x10,0x7d1f,0x1c52,
                             (char)puVar5,0x4d80,2,0x684a,0x69f4);
        if (iVar1 == -1) {
          return puVar7;
        }
        iVar6 = 0x13899d6a;
        puVar5 = extraout_ECX;
        goto LAB_10002172;
      }
      if (iVar6 == 0x2f8445f8) {
        puVar5 = local_208;
        FUN_10007479((int)puVar5);
        iVar6 = 0x6661f3b;
        goto LAB_10002172;
      }
    }
    if (iVar6 == 0xd3b78bf) {
      return puVar7;
    }
  } while( true );
}



/* Function: FUN_10002375 */

void __thiscall FUN_10002375(void *this,undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar4 = 0;
  uVar2 = 0x75d906;
  uVar3 = 0x30cdcc;
  uVar7 = 0x50f6;
  uVar5 = 0x690f;
  uVar6 = 0x5e19;
  uVar8 = 0x5710;
  pcVar1 = (code *)FUN_10007d5b(0x1f2,this,0x2de3bdc6,0x2874293d);
  (*pcVar1)(param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  return;
}



/* Function: FUN_1000241a */

void FUN_1000241a(undefined4 param_1,undefined4 param_2,undefined param_3,undefined4 param_4,
                 undefined4 param_5,undefined param_6,undefined4 param_7,undefined param_8,
                 undefined4 param_9)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x121,extraout_ECX,0x90bdc3a8,0xc0d5a275);
  (*pcVar1)(param_4,0,0,param_9,0,0,0,0);
  return;
}



/* Function: FUN_100024e4 */

void __fastcall
FUN_100024e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined param_6,undefined4 param_7)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x25d,0x2b,0x2175dc,0xa1e7c2af);
  (*pcVar1)(param_2,0x41,param_4,4);
  return;
}



/* Function: FUN_10002594 */

undefined4 FUN_10002594(void)

{
  ushort *puVar1;
  int iVar2;
  undefined local_410 [520];
  undefined local_208 [520];
  
  iVar2 = 0x38f41ed9;
LAB_100027e3:
  do {
    if (iVar2 == 0x189a45cf) {
      puVar1 = FUN_1000732d(0x1adc,(uint *)&DAT_1001f5c0,0x58ad);
      FUN_10013b36(0xd1e,0x1f46,0x104,0x724d,local_208,puVar1,0x509e,DAT_1001fa14 + 0xc,
                   DAT_1001fa14 + 0x218);
      FUN_10007c8f(0x67a2);
      iVar2 = 0x1d016592;
    }
    else {
      if (iVar2 == 0x1d016592) {
        iVar2 = FUN_10012c99(0,0x6f6b,(undefined4 *)0x0);
        if (iVar2 == 0) {
          return 0;
        }
        return 1;
      }
      if (iVar2 == 0x38f41ed9) {
        FUN_100145b5(0x574c,local_410,0x40a3,0x29,0x19b7,0xd9,0x641a);
        iVar2 = 0x189a45cf;
        goto LAB_100027e3;
      }
    }
    if (iVar2 == 0x881d53f) {
      return 0;
    }
  } while( true );
}



/* Function: FUN_100028ce */

void __cdecl FUN_100028ce(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_10017e12();
  uVar3 = 0xad4;
  uVar4 = 0x13dd;
  uVar2 = 0x17aa;
  uVar5 = 0x6a9f;
  pcVar1 = (code *)FUN_10007d5b(0x1e,0x7a,0x90bdc3a8,0xbb6f6820);
  (*pcVar1)(param_2,uVar2,uVar3,uVar4,uVar5);
  return;
}



/* Function: FUN_10002992 */

void __fastcall
FUN_10002992(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined param_7,undefined4 param_8)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x224,0x22,0x90bdc3a8,0x980c1907);
  (*pcVar1)(param_4,0,param_8,param_2);
  return;
}



/* Function: FUN_10002a73 */

void __fastcall
FUN_10002a73(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x11,0x75,0x2de3bdc6,0x1766b9f3);
  (*pcVar1)(param_2,param_3,param_1,param_7);
  return;
}



/* Function: FUN_10002b48 */

void * FUN_10002b48(void)

{
  return ProcessEnvironmentBlock;
}



/* Function: FUN_10002b4f */

void FUN_10002b4f(undefined4 param_1,undefined4 param_2,undefined param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined param_10,undefined4 param_11)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x71,0x7b,0x2175dc,0x26e080);
  (*pcVar1)(param_6,param_7,param_4,0,0,param_8,0,0);
  return;
}



/* Function: FUN_10002c2d */

undefined4 __cdecl FUN_10002c2d(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  FUN_10017e12();
  iVar2 = FUN_1000d0f6(param_2 + 1);
  if (iVar2 != 0) {
    iVar2 = param_2[1];
    uVar1 = iVar2 + *(int *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x1c) || uVar1 == *(uint *)(param_1 + 0x1c)) {
      *param_2 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar2;
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_10002cd1 */

void __cdecl FUN_10002cd1(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x357,0x1c,0x90bdc3a8,0x9b0b6421);
  (*pcVar1)(param_2,param_1);
  return;
}



/* Function: Control_RunDLL */

void Control_RunDLL(void)

{
                    /* 0x2d9e  1  Control_RunDLL */
  FUN_1001900c();
  FUN_10017d5a();
  return;
}



/* Function: RunDLL */

void RunDLL(void)

{
                    /* 0x2e1f  2  RunDLL */
  FUN_1001900c();
  FUN_10017d5a();
  return;
}



/* Function: FUN_10002ec6 */

void __fastcall
FUN_10002ec6(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0xc4,0x58,0x90bdc3a8,0x1eef4aae);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_10002f65 */

int __fastcall
FUN_10002f65(undefined4 param_1,void **param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  FUN_10017e12();
  iVar4 = 0;
  pvVar2 = (void *)0x17f5;
  iVar1 = 0x34a67837;
LAB_1000315d:
  do {
    iVar3 = iVar1;
    if (iVar3 == 0xa2d7c04) {
      pvVar2 = (void *)FUN_100045e5(param_4,0x6f43,0,0,0x26e,param_3,0x39cc,0xa58,(char)iVar3,
                                    param_5);
      if (pvVar2 != (void *)0x0) {
        iVar1 = 0x19b5eeb7;
        goto LAB_1000315d;
      }
      iVar3 = 0x20c38139;
    }
    else {
      if (iVar3 == 0x172b6d6e) {
        FUN_100045e5(param_4,0x7584,pvVar2,iVar4,0x7e5b,param_3,0x61ba,0x6bb0,(char)iVar3,param_5);
        if (param_2 == (void **)0x0) {
          return iVar4;
        }
        *param_2 = pvVar2;
        return iVar4;
      }
      if (iVar3 == 0x19b5eeb7) {
        iVar4 = FUN_10017f68(0x19b5eeb7,pvVar2);
        if (iVar4 == 0) {
          return 0;
        }
        iVar1 = 0x172b6d6e;
        goto LAB_1000315d;
      }
      iVar1 = 0xa2d7c04;
      if (iVar3 == 0x34a67837) goto LAB_1000315d;
    }
    iVar1 = iVar3;
    if (iVar3 == 0x20c38139) {
      return iVar4;
    }
  } while( true );
}



/* Function: FUN_1000323c */

undefined4 __fastcall FUN_1000323c(undefined4 *param_1,int param_2,int *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar3;
  int iVar4;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined local_80 [4];
  undefined auStack_7c [60];
  undefined local_40 [4];
  undefined auStack_3c [60];
  
  local_8c = 0x2175d0;
  local_88 = 0;
  local_84 = 0;
  iVar3 = 0xf4e9d7;
  iVar4 = param_2;
  local_90 = param_2;
LAB_100037ff:
  do {
    if (iVar3 == 0xf4e9d7) {
      local_94 = FUN_100010cf();
      iVar3 = 0xacc66de;
    }
    else {
      if (iVar3 == 0x129e93e) {
        puVar2 = FUN_1000d126(0x12b1,0x596e);
        FUN_1000d26b(0x20b,0x3e84,0x3277,0x6257,local_90,puVar2);
        FUN_10007c8f(0x4c2b);
        return 1;
      }
      if (iVar3 == 0xa998086) {
        FUN_1001b713(*param_1,0x3222,iVar4,(void *)param_1[1]);
        iVar3 = 0x129e93e;
        iVar4 = iVar4 + param_1[1];
        goto LAB_100037ff;
      }
      if (iVar3 == 0xacc66de) {
        iVar3 = 0x253c525e;
        param_3[1] = param_1[1] + 0x1000;
        goto LAB_100037ff;
      }
      if (iVar3 == 0x253c525e) {
        iVar4 = FUN_10017f68(param_3,(void *)param_3[1]);
        *param_3 = iVar4;
        if (iVar4 == 0) {
          return 0;
        }
        iVar3 = 0x2de836b3;
        param_2 = param_3[1] + iVar4;
        goto LAB_100037ff;
      }
      if (iVar3 == 0x2de836b3) {
        uVar1 = FUN_10011f4e(0x38f1,&local_94,0x3aaf);
        FUN_1000b644((int)local_40,0x4b06,extraout_ECX,&local_94,(uVar1 & 0xf) + 4);
        auStack_3c[uVar1 & 0xf] = 0;
        uVar1 = FUN_10011f4e(19000,&local_94,0x40f3);
        FUN_1000b644((int)local_80,0xcc1,extraout_ECX_00,&local_94,(uVar1 & 0xf) + 4);
        auStack_7c[uVar1 & 0xf] = 0;
        puVar2 = FUN_1000d126(0x50b2,0x3ce8);
        iVar3 = FUN_10014815(param_2 - iVar4,local_40,puVar2,local_80,0xb13,0x1c66,local_90,0x1927);
        iVar4 = iVar4 + iVar3;
        FUN_10007c8f(0x4004);
        iVar3 = 0xa998086;
        goto LAB_100037ff;
      }
    }
    if (iVar3 == 0x1ce00049) {
      return 0;
    }
  } while( true );
}



/* Function: FUN_10003a90 */

void __cdecl FUN_10003a90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x28,0x74,0x90bdc3a8,0xf704b06);
  (*pcVar1)(0x104,param_1);
  return;
}



/* Function: FUN_10003b32 */

void __fastcall
FUN_10003b32(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined param_4,
            undefined4 param_5,undefined param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x32b,0x2a,0x2de3bdc6,0x9770116);
  (*pcVar1)(param_3,param_2,0,0,param_8);
  return;
}



/* Function: FUN_10003c19 */

void FUN_10003c19(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined local_410 [520];
  undefined local_208 [520];
  
  iVar2 = 0x1a4c255e;
LAB_1000404f:
  do {
    if (iVar2 == 0xf472f5a) {
      FUN_1000da85();
      iVar2 = 0x1b650ad0;
    }
    else {
      if (iVar2 == 0x11ac38ad) {
        puVar1 = (undefined2 *)FUN_1001500e(0x4b9d,local_208,0x6a94);
        *puVar1 = 0;
        FUN_100028ce(0x40a,local_208);
        return;
      }
      if (iVar2 == 0x1a4c255e) {
        iVar2 = 0xf472f5a;
        if (*(int *)(DAT_1001fa14 + 0x424) != 0) {
          iVar2 = 0x31130138;
        }
        goto LAB_1000404f;
      }
      if (iVar2 == 0x1b650ad0) {
        FUN_1000732d(0x68d6,(uint *)&DAT_1001f640,0x1056);
        FUN_1001cf1c(DAT_1001fa14 + 0xc,0x2ebb,DAT_1001fa14 + 0xc,0x2524,0x1885,local_208,
                     DAT_1001fa14 + 0x218,0x3570);
        FUN_10007c8f(0x180);
        iVar2 = 0x2bb83223;
        goto LAB_1000404f;
      }
      if (iVar2 == 0x2bb83223) {
        FUN_10003a90(local_410,0x74dc,0x4aa0);
        FUN_1000bb12(local_410,local_410,0x3546,0x25f6,0x32cb);
        FUN_1000cd5c(0x3c7d,local_208,0x5db9,0x5b34,local_410,0x7c86);
        iVar2 = 0x11ac38ad;
        goto LAB_1000404f;
      }
      if (iVar2 == 0x31130138) {
        FUN_1000b735();
        iVar2 = 0x1b650ad0;
        goto LAB_1000404f;
      }
    }
    if (iVar2 == 0xeba029e) {
      return;
    }
  } while( true );
}



/* Function: FUN_100041ef */

void __fastcall
FUN_100041ef(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x1af,0x4e,0x90bdc3a8,0x8449115e);
  (*pcVar1)(param_1,param_2);
  return;
}



/* Function: FUN_100042ab */

void __cdecl FUN_100042ab(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_10017e12();
  uVar3 = 0;
  uVar2 = 0x7397ee;
  uVar5 = 0x7fcd;
  uVar4 = 0x55c0;
  uVar6 = 0x4054;
  uVar7 = 0x5d6c;
  pcVar1 = (code *)FUN_10007d5b(0x2ab,extraout_ECX,0x90bdc3a8,0x88c30058);
  (*pcVar1)(param_2,param_1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  return;
}



/* Function: FUN_10004362 */

void __thiscall
FUN_10004362(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x227,extraout_ECX,0x90bdc3a8,0x83cdec57);
  (*pcVar1)(this,param_4);
  return;
}



/* Function: FUN_10004402 */

void FUN_10004402(void)

{
  FUN_10013f83(0x64df,*(undefined4 *)(DAT_1001fa14 + 0x43c),0xffffffff,0x1f33);
  return;
}



/* Function: FUN_10004468 */

void __thiscall
FUN_10004468(void *this,undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x236,extraout_ECX,0xcded05ce,0x403bda63);
  (*pcVar1)(param_4,0,this);
  return;
}



/* Function: FUN_1000451a */

void __cdecl
FUN_1000451a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_10017e12();
  uVar5 = 0x2a43;
  uVar2 = 0x6f90;
  uVar3 = 0x17fe;
  uVar4 = 0x71f1;
  pcVar1 = (code *)FUN_10007d5b(0xa5,extraout_ECX,0x90bdc3a8,0xb53d4d42);
  (*pcVar1)(param_5,0,param_3,0x28,uVar2,uVar3,uVar4,uVar5);
  return;
}



/* Function: FUN_100045e5 */

void __cdecl
FUN_100045e5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined param_9,undefined4 param_10)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x2c0,extraout_ECX,0x90bdc3a8,0x406c8f53);
  (*pcVar1)(param_6,0,param_1,param_10,param_4,param_3,0,0);
  return;
}



/* Function: FUN_100046c6 */

void FUN_100046c6(void)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined local_210 [524];
  
  iVar1 = 0x243fe273;
LAB_100048fa:
  do {
    iVar3 = iVar1;
    if (iVar3 == 0xaa3b8c6) {
      FUN_1000732d(0x7ad2,(uint *)&DAT_1001f640,0x39f);
      FUN_1001cf1c(DAT_1001fa14 + 0xc,0x2099,DAT_1001fa14 + 0xc,0x5956,0x7772,local_210,
                   DAT_1001fa14 + 0x218,0x318a);
      FUN_10007c8f(0x3237);
      iVar3 = 0x116c20e9;
    }
    else {
      if (iVar3 == 0x116c20e9) {
        puVar2 = (undefined2 *)FUN_1001500e(0x6898,local_210,0x5204);
        *puVar2 = 0;
        iVar1 = 0x347849f5;
        goto LAB_100048fa;
      }
      iVar1 = 0xaa3b8c6;
      if (iVar3 == 0x243fe273) goto LAB_100048fa;
      if (iVar3 == 0x347849f5) {
        FUN_1001ab82(0x1b5a,0,local_210,FUN_10006dbd,local_210);
        return;
      }
    }
    iVar1 = iVar3;
    if (iVar3 == 0xf0037e0) {
      return;
    }
  } while( true );
}



/* Function: FUN_100049db */

void __fastcall
FUN_100049db(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
            undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
            undefined4 param_21,undefined4 param_22)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x1a8,extraout_ECX,0x2de3bdc6,0x8a916470);
  (*pcVar1)(param_17,param_13,param_2,param_9,param_7,param_8,param_5,param_14,0,0,0,0,0);
  return;
}



/* Function: FUN_10004ae6 */

undefined4 __cdecl FUN_10004ae6(uint param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  pvVar1 = FUN_10002b48();
  puVar4 = (undefined4 *)(*(int *)((int)pvVar1 + 0xc) + 0xc);
  puVar3 = (undefined4 *)*puVar4;
  while( true ) {
    if (puVar3 == puVar4) {
      return 0;
    }
    uVar2 = FUN_100180ea((ushort *)puVar3[0xc],2,0x639b);
    if ((uVar2 ^ 0x1fc325da) == param_1) break;
    puVar3 = (undefined4 *)*puVar3;
  }
  return puVar3[6];
}



/* Function: FUN_10004bbb */

void __thiscall
FUN_10004bbb(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0xaa,0x46,0x2de3bdc6,0x99ef0e73);
  (*pcVar1)(param_1,param_7,this,param_4,param_9,param_2);
  return;
}



/* Function: FUN_10004ccb */

void __fastcall FUN_10004ccb(uint *param_1,int param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  
  puVar1 = FUN_1000732d(0x9aa,param_1,0x3966);
  uVar2 = FUN_10006759(puVar1,0x97,0x47a2,0x1a0f,0x24e7);
  *(undefined4 *)(DAT_1001fa0c + 0x30 + param_2 * 4) = uVar2;
  FUN_10007c8f(0x61ab);
  return;
}



/* Function: FUN_10004e07 */

void FUN_10004e07(void)

{
  int iVar1;
  short *psVar2;
  int local_224;
  short local_208 [260];
  
  psVar2 = (short *)0x21da;
  iVar1 = 0x2475f3cc;
LAB_10004f17:
  do {
    if (iVar1 == 0x21ba2297) {
      FUN_1000d67e(0x7347,0x97,0x509d);
      iVar1 = 0x3635ee30;
    }
    else {
      if (iVar1 == 0x2475f3cc) {
        iVar1 = 0x21ba2297;
        goto LAB_10004f17;
      }
      if (iVar1 == 0x3635ee30) {
        local_224 = 2;
        iVar1 = FUN_1000dead(local_208,0x109f);
        for (psVar2 = local_208 + iVar1; iVar1 = 0x390e5222, local_208 < psVar2;
            psVar2 = psVar2 + -1) {
          if ((*psVar2 == 0x5c) && (local_224 = local_224 + -1, local_224 == 0)) {
            psVar2 = psVar2 + 1;
            break;
          }
        }
        goto LAB_10004f17;
      }
      if (iVar1 == 0x390e5222) {
        FUN_100041ef(DAT_1001fa14 + 0xc,psVar2,0x21da,0x5912);
        return;
      }
    }
    if (iVar1 == 0x1e950842) {
      return;
    }
  } while( true );
}



/* Function: FUN_10004fec */

void __fastcall FUN_10004fec(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_EDX;
  int iVar3;
  void *pvVar4;
  
  pvVar4 = (void *)0x0;
  iVar3 = 0x1bd0330b;
LAB_10005311:
  do {
    if (iVar3 == 0xef8eb6) {
      *(undefined4 *)((int)pvVar4 + 0x2c) = param_1;
      iVar3 = 0x142c2702;
      *(void **)((int)pvVar4 + 0xc) = DAT_1001fa00;
      DAT_1001fa00 = pvVar4;
    }
    else {
      if (iVar3 == 0x4b8a725) {
        FUN_1000d4e0(pvVar4,0xc4,0x12fc,0x3902);
        return;
      }
      if (iVar3 == 0x8ee4de8) {
        iVar2 = FUN_1000bce8(FUN_1001d041,pvVar4,0xe8,0xd71,0x5974,0xe8,0xe8,0x3084,0x4f30,0xe8,
                             0x54b,0x19cd);
        *(int *)((int)pvVar4 + 0x1c) = iVar2;
        iVar3 = 0x3a1a627e;
        if (iVar2 != 0) {
          iVar3 = 0xef8eb6;
        }
        goto LAB_10005311;
      }
      if (iVar3 == 0x1bd0330b) {
        pvVar4 = (void *)FUN_10017f68(0x8ee4de8,(void *)0x30);
        if (pvVar4 == (void *)0x0) {
          return;
        }
        iVar3 = 0x38f0daa9;
        goto LAB_10005311;
      }
      if (iVar3 == 0x2ad494f4) {
        iVar2 = FUN_100119bc(*(int *)((int)pvVar4 + 0x28));
        *(int *)((int)pvVar4 + 0x14) = iVar2;
        iVar3 = 0x3a1a627e;
        if (iVar2 != 0) {
          iVar3 = 0x8ee4de8;
        }
        goto LAB_10005311;
      }
      if (iVar3 == 0x38f0daa9) {
        piVar1 = FUN_10009ccb(0x1750,0xfc0,0xe8,0xe8,*in_EDX,in_EDX[1]);
        *(int **)((int)pvVar4 + 0x28) = piVar1;
        iVar3 = 0x4b8a725;
        if (piVar1 != (int *)0x0) {
          iVar3 = 0x2ad494f4;
        }
        goto LAB_10005311;
      }
      if (iVar3 == 0x3a1a627e) {
        FUN_10017ad3(*(undefined4 *)((int)pvVar4 + 0x28));
        iVar3 = 0x4b8a725;
        goto LAB_10005311;
      }
    }
    if (iVar3 == 0x142c2702) {
      return;
    }
  } while( true );
}



/* Function: FUN_1000549d */

undefined4 FUN_1000549d(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint local_23c;
  int local_238;
  uint local_234;
  int local_230;
  uint local_22c;
  int local_228;
  uint local_224;
  int local_220;
  uint local_21c;
  int local_218;
  undefined4 local_214;
  undefined local_20c [524];
  
  uVar4 = 0;
  iVar2 = 0x4b69;
  iVar1 = 0x233fdafa;
LAB_10005845:
  do {
    iVar3 = iVar1;
    if (iVar3 == 0x28b68fa) {
      FUN_10006679(0x66eb,&local_23c);
      iVar3 = 0x29211186;
    }
    else {
      if (iVar3 == 0x173c14ef) {
        iVar2 = FUN_1000d00e(local_20c,0x100,0x7f3c,0xdf7,1,0x173c14ef,0,0x3bca,0x4f20,0xef,0x3820,3
                             ,0x25a8,0x18ba);
        if (iVar2 == -1) {
          return uVar4;
        }
        iVar1 = 0x28c26476;
        goto LAB_10005845;
      }
      if (iVar3 == 0x1a50335f) {
        FUN_10002ec6(iVar2,0xbf,0x4b69,0x35b0,0x5960);
        return uVar4;
      }
      if (iVar3 == 0x20246fb6) {
        uVar7 = 0x1ead;
        FUN_1000732d(0x277e,(uint *)&DAT_1001f640,0x1ead);
        FUN_1001cf1c(uVar7,0x4593,DAT_1001fa14 + 0xc,0xddc,0x74ba,local_20c,DAT_1001fa14 + 0x218,
                     0x9c8);
        FUN_10007c8f(0x48dc);
        iVar1 = 0x173c14ef;
        goto LAB_10005845;
      }
      iVar1 = 0x28b68fa;
      if (iVar3 == 0x233fdafa) goto LAB_10005845;
      if (iVar3 == 0x28c26476) {
        local_214 = 0;
        local_234 = local_23c;
        local_22c = local_23c;
        local_224 = local_23c;
        local_21c = local_23c;
        local_230 = local_238;
        local_228 = local_238;
        local_220 = local_238;
        local_218 = local_238;
        iVar1 = FUN_1000e2b8(&local_234,(char)local_23c,(char)local_23c,0x47b7,iVar2,0x7e78);
        if (iVar1 != 0) {
          uVar4 = 1;
        }
        iVar1 = 0x1a50335f;
        goto LAB_10005845;
      }
      if (iVar3 == 0x29211186) {
        uVar6 = FUN_100125d7();
        bVar5 = local_23c < (uint)uVar6;
        local_23c = local_23c - (uint)uVar6;
        local_238 = (local_238 - (int)((ulonglong)uVar6 >> 0x20)) - (uint)bVar5;
        iVar1 = 0x20246fb6;
        goto LAB_10005845;
      }
    }
    iVar1 = iVar3;
    if (iVar3 == 0x3a6c1c90) {
      return uVar4;
    }
  } while( true );
}



/* Function: FUN_10005a49 */

void __cdecl
FUN_10005a49(uint param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort auStack_80 [64];
  
  FUN_10017e12();
  uVar4 = 0;
  uVar3 = 0;
  if ((param_1 & 2) != 0) {
    uVar1 = 0x41;
    do {
      auStack_80[uVar3] = uVar1;
      uVar3 = uVar3 + 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x5b);
  }
  if ((param_1 & 1) != 0) {
    uVar1 = 0x61;
    do {
      auStack_80[uVar3] = uVar1;
      uVar3 = uVar3 + 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x7b);
  }
  if (param_2 != 0) {
    do {
      uVar2 = FUN_10011f4e(0x526e,param_5,0x67b2);
      *(ushort *)(param_3 + uVar4 * 2) = auStack_80[uVar2 % uVar3];
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2);
  }
  return;
}



/* Function: FUN_10005b86 */

void __fastcall FUN_10005b86(int param_1,undefined4 *param_2)

{
  undefined *puVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined *extraout_ECX;
  undefined *extraout_ECX_00;
  int iVar4;
  uint uVar5;
  undefined local_208 [520];
  
  iVar4 = 0x66e42cf;
  puVar3 = (undefined *)0x5a;
  pvVar2 = (void *)0x30a5;
  do {
    while (iVar4 == 0x66e42cf) {
      pvVar2 = (void *)FUN_10017f68(puVar3,(void *)0x30);
      puVar3 = extraout_ECX_00;
      if (pvVar2 == (void *)0x0) {
        iVar4 = 0x269fa7eb;
LAB_10005dc1:
        if (iVar4 == 0x269fa7eb) {
          return;
        }
      }
      else {
        iVar4 = 0x1dd72996;
      }
    }
    if (iVar4 == 0x1aacf926) {
      iVar4 = FUN_10012c99(local_208,0x22a6,(undefined4 *)0x0);
      uVar5 = -(uint)(iVar4 != 0) & 0x6caaf60;
      puVar3 = extraout_ECX;
    }
    else {
      if (iVar4 != 0x1dd72996) {
        if (iVar4 == 0x30c92e0d) {
          FUN_1000d4e0(pvVar2,0xa5,0x2fa3,0x4063);
          return;
        }
        if (iVar4 == 0x3793dd6d) {
          *(int *)((int)pvVar2 + 0x2c) = param_1;
          *(void **)((int)pvVar2 + 0xc) = DAT_1001fa00;
          DAT_1001fa00 = pvVar2;
          return;
        }
        goto LAB_10005dc1;
      }
      puVar3 = local_208;
      puVar1 = FUN_10001c78(param_1,param_2,(uint *)&DAT_1001f440,puVar3);
      uVar5 = -(uint)(puVar1 != (undefined *)0x0) & 0xe9e3cb19;
    }
    iVar4 = uVar5 + 0x30c92e0d;
  } while( true );
}



/* Function: FUN_10005def */

void __fastcall
FUN_10005def(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x26b,0x3a,0x2175dc,0x8ffd1662);
  (*pcVar1)(param_4,param_2,0,0,0);
  return;
}



/* Function: FUN_10005ebf */

void __fastcall
FUN_10005ebf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x30f,extraout_ECX,0x90bdc3a8,0x43422feb);
  (*pcVar1)(param_2,0,param_9,param_5,param_10,param_3);
  return;
}



/* Function: FUN_10005fa4 */

void __fastcall
FUN_10005fa4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x20a,extraout_ECX,0x2175dc,0xcaaf7bbd);
  (*pcVar1)(param_3,param_4,param_5,param_2);
  return;
}



/* Function: FUN_10006083 */

int __fastcall FUN_10006083(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0x345b2d0b;
LAB_1000617b:
  do {
    iVar2 = iVar1;
    if (iVar2 == 0x907eda2) {
      iVar1 = FUN_1000c22d(0x5eda,0x4276,param_1 + 4);
      iVar2 = 0x21f74715;
      iVar3 = iVar3 + iVar1;
    }
    else {
      if (iVar2 == 0x21022440) {
        iVar1 = FUN_100150ba();
        iVar3 = iVar3 + iVar1;
        iVar1 = 0x907eda2;
        goto LAB_1000617b;
      }
      iVar1 = 0x21022440;
      if (iVar2 == 0x345b2d0b) goto LAB_1000617b;
    }
    iVar1 = iVar2;
    if (iVar2 == 0x21f74715) {
      return iVar3;
    }
  } while( true );
}



/* Function: FUN_100061e7 */

void __fastcall FUN_100061e7(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_EDX;
  int iVar3;
  void *pvVar4;
  
  pvVar4 = (void *)0x0;
  iVar3 = 0xf72af38;
LAB_100064f2:
  do {
    if (iVar3 == 0xab2b88c) {
      iVar3 = FUN_1000bce8(FUN_1000e6f1,pvVar4,0xa9,0x74d2,0x28b4,0xa9,0xa9,0x5484,0x51ee,0xa9,0x60a
                           ,0x2092);
      *(int *)((int)pvVar4 + 0x1c) = iVar3;
      if (iVar3 != 0) {
        iVar3 = 0x2a5ac621;
        goto LAB_100064f2;
      }
      iVar3 = 0x2df831eb;
    }
    else {
      if (iVar3 == 0xb01f7d6) {
        piVar2 = FUN_10009ccb(0x6720,0x1a22,0xa9,0xa9,*in_EDX,in_EDX[1]);
        *(int **)((int)pvVar4 + 0x28) = piVar2;
        iVar3 = 0x2d2f2e10;
        if (piVar2 != (int *)0x0) {
          iVar3 = 0x1d53b2a9;
        }
        goto LAB_100064f2;
      }
      if (iVar3 == 0xf72af38) {
        pvVar4 = (void *)FUN_10017f68(0x1d53b2a9,(void *)0x30);
        if (pvVar4 == (void *)0x0) {
          return;
        }
        iVar3 = 0xb01f7d6;
        goto LAB_100064f2;
      }
      if (iVar3 == 0x1d53b2a9) {
        iVar1 = FUN_100119bc(*(int *)((int)pvVar4 + 0x28));
        *(int *)((int)pvVar4 + 0x14) = iVar1;
        iVar3 = 0x2df831eb;
        if (iVar1 != 0) {
          iVar3 = 0xab2b88c;
        }
        goto LAB_100064f2;
      }
      if (iVar3 == 0x2a5ac621) {
        *(undefined4 *)((int)pvVar4 + 0x2c) = param_1;
        *(void **)((int)pvVar4 + 0xc) = DAT_1001fa00;
        DAT_1001fa00 = pvVar4;
        return;
      }
      if (iVar3 == 0x2d2f2e10) {
        FUN_1000d4e0(pvVar4,0x24,0xe82,0xc31);
        return;
      }
      if (iVar3 == 0x2df831eb) {
        FUN_10017ad3(*(undefined4 *)((int)pvVar4 + 0x28));
        iVar3 = 0x2d2f2e10;
        goto LAB_100064f2;
      }
    }
    if (iVar3 == 0x3acf4032) {
      return;
    }
  } while( true );
}



/* Function: FUN_10006679 */

void __cdecl FUN_10006679(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x1e2,0x14,0x90bdc3a8,0x9c18e003);
  (*pcVar1)(param_2);
  return;
}



/* Function: FUN_10006750 */

int FUN_10006750(void)

{
  return DAT_1001fa14 + 0xc;
}



/* Function: FUN_10006759 */

void __fastcall
FUN_10006759(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x308,0x6d,0x90bdc3a8,0xda83b2ac);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_10006829 */

void __fastcall FUN_10006829(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = 0x256d;
  uVar2 = 0x3501;
  uVar3 = 0x77c9;
  uVar5 = 0x1546;
  pcVar1 = (code *)FUN_10007d5b(0x122,param_1,0x90bdc3a8,0x6bb45002);
  (*pcVar1)(uVar2,uVar3,uVar4,uVar5);
  return;
}



/* Function: FUN_100068b9 */

int __fastcall FUN_100068b9(undefined4 param_1,int **param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  int iVar4;
  bool bVar5;
  int **local_1c;
  int local_18;
  int local_10;
  int **local_c;
  int **local_8;
  int **local_4;
  
  iVar4 = 0x12c4cff;
  local_18 = 0;
  ppiVar1 = local_1c;
  ppiVar3 = param_2;
  local_8 = param_2;
  do {
    while (iVar4 != 0x12c4cff) {
      if (iVar4 == 0x247aee85) {
        local_4 = (int **)0x10000;
        ppiVar3 = (int **)FUN_10017f68(param_1,(void *)0x10000);
        if (ppiVar3 == (int **)0x0) goto LAB_10006cd0;
        ppiVar2 = ppiVar3;
        param_2 = (int **)0x10000;
        local_1c = ppiVar3;
      }
      else {
        if (iVar4 != 0x2e8f655e) goto LAB_10006cc4;
        local_18 = FUN_10005fa4(0x21b3,&local_10,param_1,ppiVar1,param_2,0x4918,0x6be,0x3dc3);
        if (local_18 == 0) goto LAB_10006cf1;
        if (local_10 == 0) goto LAB_10006cd0;
        local_1c = (int **)((int)local_1c + local_10);
        param_2 = (int **)((int)param_2 - local_10);
        ppiVar2 = ppiVar3;
        if (param_2 == (int **)0x0) {
          local_c = (int **)((int)local_4 * 2);
          ppiVar2 = (int **)FUN_10017f68(local_c,local_c);
          if (ppiVar2 == (int **)0x0) goto LAB_10006cd0;
          FUN_1001b713(ppiVar3,0x2634,ppiVar2,local_4);
          FUN_1000d4e0(ppiVar3,0xf2,0x33dc,0x2678);
          local_1c = (int **)((int)ppiVar2 + (int)local_4);
          bVar5 = local_4 == (int **)0x0;
          ppiVar3 = ppiVar2;
          param_2 = local_4;
          local_4 = local_c;
          if (bVar5) goto LAB_10006cd0;
        }
      }
      ppiVar1 = local_1c;
      ppiVar3 = ppiVar2;
      iVar4 = 0x2e8f655e;
    }
    iVar4 = 0x247aee85;
LAB_10006cc4:
  } while (iVar4 != 0x1ac1e98c);
LAB_10006cd0:
  if (local_18 == 0) {
LAB_10006cf1:
    FUN_1000d4e0(ppiVar3,0xbe,0x58aa,0x3e32);
  }
  else {
    *local_8 = (int *)ppiVar3;
    local_8[1] = (int *)((int)local_4 - (int)param_2);
  }
  return local_18;
}



/* Function: FUN_10006d08 */

void __cdecl FUN_10006d08(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_10017e12();
  uVar4 = 0x4d11;
  uVar2 = 0x5747;
  uVar5 = 0x57bf;
  uVar3 = 0xbbd;
  pcVar1 = (code *)FUN_10007d5b(0xb4,0x4e,0x48728602,0x4f5de2ba);
  (*pcVar1)(param_2,uVar2,uVar3,uVar4,uVar5);
  return;
}



/* Function: FUN_10006dbd */

undefined4 FUN_10006dbd(int param_1,undefined4 param_2)

{
  undefined local_220 [520];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0x522c;
  local_c = 0x1652;
  local_14 = 0x31b2;
  local_8 = 0x3424;
  local_18 = 0x590c;
  FUN_10001b03((void *)(param_1 + 0x2c),0x1652,param_2,local_220);
  FUN_10015165(local_14,local_220,local_8,local_18);
  return 1;
}



/* Function: FUN_10006e75 */

void __thiscall
FUN_10006e75(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0xb5,extraout_ECX,0x90bdc3a8,0x26bb3abb);
  (*pcVar1)(this,param_1);
  return;
}



/* Function: FUN_10006f31 */

int __fastcall
FUN_10006f31(void **param_1,undefined param_2,undefined4 param_3,undefined param_4,
            undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  uint *puVar6;
  uint uVar7;
  
  FUN_10017e12();
  FUN_10017e12();
  uVar1 = DAT_1001f4f0;
  uVar7 = 0;
  pvVar3 = (void *)(DAT_1001f4f4 ^ DAT_1001f4f0);
  pvVar5 = pvVar3;
  if (((uint)pvVar3 & 3) != 0) {
    pvVar5 = (void *)(((uint)pvVar3 & 0xfffffffc) + 4);
  }
  iVar2 = FUN_10017f68((uint)pvVar3 & 0xffffff03,pvVar5);
  if (iVar2 != 0) {
    puVar6 = &DAT_1001f4f8;
    uVar4 = ((uint)pvVar5 & 0xfffffffc) + 3 >> 2;
    if ((undefined4 *)((int)&DAT_1001f4f8 + ((uint)pvVar5 & 0xfffffffc)) < &DAT_1001f4f8) {
      uVar4 = 0;
    }
    if (uVar4 != 0) {
      do {
        uVar7 = uVar7 + 1;
        *(uint *)(iVar2 + -0x1001f4f8 + (int)puVar6) = *puVar6 ^ uVar1;
        puVar6 = puVar6 + 1;
      } while (uVar7 < uVar4);
    }
    if (param_1 != (void **)0x0) {
      *param_1 = pvVar3;
    }
  }
  return iVar2;
}



/* Function: FUN_1000708c */

void __fastcall FUN_1000708c(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_10007d5b(0xf3,param_1,0x90bdc3a8,0x813f9f76);
  (*pcVar1)(param_2,0);
  return;
}



/* Function: FUN_10007123 */

void FUN_10007123(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_10007d5b(0xdb,0x28,0x90bdc3a8,0x419de10b);
  (*pcVar1)();
  return;
}



/* Function: FUN_100071e5 */

int __fastcall FUN_100071e5(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0x24553798;
LAB_100072c1:
  do {
    iVar2 = iVar1;
    if (iVar2 == 0x3be17a9) {
      iVar1 = FUN_1000c22d(0x687d,0x43ac,param_1 + 4);
      iVar2 = 0x21991ad6;
      iVar3 = iVar3 + iVar1;
    }
    else {
      if (iVar2 == 0x96ab1a1) {
        iVar1 = FUN_100150ba();
        iVar3 = iVar3 + iVar1;
        iVar1 = 0x3be17a9;
        goto LAB_100072c1;
      }
      iVar1 = 0x96ab1a1;
      if (iVar2 == 0x24553798) goto LAB_100072c1;
    }
    iVar1 = iVar2;
    if (iVar2 == 0x21991ad6) {
      return iVar3;
    }
  } while( true );
}



/* Function: FUN_1000732d */

ushort * __fastcall FUN_1000732d(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  
  FUN_10017e12();
  uVar2 = *param_2;
  puVar9 = param_2 + 2;
  uVar3 = param_2[1] ^ uVar2;
  uVar7 = uVar3 + 1;
  uVar8 = uVar7;
  if ((uVar7 & 3) != 0) {
    uVar8 = (uVar7 & 0xfffffffc) + 4;
  }
  puVar4 = (ushort *)FUN_10017f68(uVar7 & 0xffffff03,(void *)(uVar8 * 2));
  if (puVar4 != (ushort *)0x0) {
    uVar7 = 0;
    puVar1 = (uint *)((int)puVar9 + (uVar8 & 0xfffffffc));
    uVar8 = (uint)((int)puVar1 + (3 - (int)puVar9)) >> 2;
    if (puVar1 < puVar9) {
      uVar8 = 0;
    }
    puVar6 = puVar4;
    if (uVar8 != 0) {
      do {
        uVar5 = *puVar9;
        puVar9 = puVar9 + 1;
        uVar5 = uVar5 ^ uVar2;
        *puVar6 = (ushort)uVar5 & 0xff;
        puVar6[1] = (ushort)(uVar5 >> 8) & 0xff;
        uVar7 = uVar7 + 1;
        puVar6[2] = (ushort)(uVar5 >> 0x10) & 0xff;
        puVar6[3] = (ushort)(byte)(uVar5 >> 0x18);
        puVar6 = puVar6 + 4;
      } while (uVar7 < uVar8);
    }
    puVar4[uVar3] = 0;
  }
  return puVar4;
}



/* Function: FUN_10007479 */

void __cdecl FUN_10007479(int param_1)

{
  uint uVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_10017e12();
  local_18 = 0x511b;
  local_10 = 0x49e0;
  local_8 = 0x7df6;
  local_c = 0x4b88;
  local_20 = 0x42f2;
  local_14 = 0x2e03;
  local_1c = 0x78ac;
  local_24 = FUN_100010cf();
  local_18 = 4;
  local_10 = 0x10;
  uVar1 = FUN_10007cff((void *)0x10,4);
  FUN_10005a49(1,uVar1,param_1,local_1c,&local_24);
  *(undefined2 *)(param_1 + uVar1 * 2) = 0;
  return;
}



/* Function: FUN_100075d7 */

void __fastcall
FUN_100075d7(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x33c,extraout_ECX,0x2de3bdc6,0x18bedacb);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_1000768c */

int __cdecl
FUN_1000768c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_10017e12();
  iVar4 = 0;
  iVar2 = 0x1a5f;
  iVar1 = 0x34a67837;
LAB_1000784a:
  do {
    iVar3 = iVar1;
    if (iVar3 == 0xa2d7c04) {
      iVar2 = FUN_10005ebf(0x1a5f,param_2,0,0x421b,0xffffffff,(char)iVar3,0x4e6c,0x1009,param_1,0);
      if (iVar2 != 0) {
        iVar1 = 0x19b5eeb7;
        goto LAB_1000784a;
      }
      iVar3 = 0x20c38139;
    }
    else {
      if (iVar3 == 0x172b6d6e) {
        FUN_10005ebf(0x31ae,param_2,iVar2,0x34f7,0xffffffff,(char)iVar3,0x2e54,0x3f3a,param_1,iVar4)
        ;
        return iVar4;
      }
      if (iVar3 == 0x19b5eeb7) {
        iVar4 = FUN_10017f68(0x19b5eeb7,(void *)(iVar2 * 2));
        if (iVar4 == 0) {
          return 0;
        }
        iVar1 = 0x172b6d6e;
        goto LAB_1000784a;
      }
      iVar1 = 0xa2d7c04;
      if (iVar3 == 0x34a67837) goto LAB_1000784a;
    }
    iVar1 = iVar3;
    if (iVar3 == 0x20c38139) {
      return iVar4;
    }
  } while( true );
}



/* Function: FUN_10007911 */

void __fastcall
FUN_10007911(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x14,extraout_ECX,0x90bdc3a8,0xfd3fadf5);
  (*pcVar1)(param_5,param_2,param_6,param_8,0);
  return;
}



/* Function: FUN_100079e1 */

undefined4 __fastcall
FUN_100079e1(undefined4 *param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined local_24 [36];
  
  FUN_10017e12();
  iVar1 = 0x12b01115;
LAB_10007b81:
  do {
    if (iVar1 == 0x6343bcc) {
      iVar1 = FUN_1000d0f6(param_1 + 1);
      if (iVar1 != 0) {
        iVar1 = 0xb0b219c;
        goto LAB_10007b81;
      }
      iVar1 = 0x786e16b;
    }
    else {
      if (iVar1 == 0xb0b219c) {
        iVar1 = FUN_10002c2d((int)local_24,param_1 + 2);
        if (iVar1 == 0) {
          return 0;
        }
        return 1;
      }
      if (iVar1 == 0x12b01115) {
        iVar1 = 0x1708ad59;
        goto LAB_10007b81;
      }
      if (iVar1 == 0x1708ad59) {
        FUN_10007c63(0x743e,0x218f,(int)local_24);
        iVar1 = 0x2994a747;
        goto LAB_10007b81;
      }
      if (iVar1 == 0x2994a747) {
        iVar1 = FUN_1000d0f6(param_1);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = 0x6343bcc;
        goto LAB_10007b81;
      }
    }
    if (iVar1 == 0x786e16b) {
      return 0;
    }
  } while( true );
}



/* Function: FUN_10007c63 */

void __cdecl FUN_10007c63(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_10017e12();
  iVar1 = *piVar2;
  *(int *)(param_3 + 0x18) = iVar1;
  *(int *)(param_3 + 0x1c) = piVar2[1] + iVar1;
  return;
}



/* Function: FUN_10007c8f */

void FUN_10007c8f(undefined4 param_1)

{
  void *extraout_ECX;
  
  FUN_10017e12();
  FUN_1000d4e0(extraout_ECX,0xc6,0x53e1,0x17b9);
  return;
}



/* Function: FUN_10007cff */

uint __thiscall FUN_10007cff(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_100010cf();
  if (param_1 < this) {
    param_1 = param_1 + uVar1 % ((int)this - param_1);
  }
  return param_1;
}



/* Function: FUN_10007d5b */

undefined4 __cdecl FUN_10007d5b(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  char *pcVar2;
  
  if (*(int *)(&DAT_1001fa20 + param_1 * 4) == 0) {
    iVar1 = FUN_10004ae6(param_3);
    pcVar2 = FUN_10012794(0x7ef7,iVar1,0x7a71,param_4);
    *(char **)(&DAT_1001fa20 + param_1 * 4) = pcVar2;
  }
  return *(undefined4 *)(&DAT_1001fa20 + param_1 * 4);
}



/* Function: FUN_10007e95 */

undefined4 __cdecl FUN_10007e95(undefined4 param_1,short **param_2,void *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  ushort *puVar4;
  void *pvVar5;
  void *pvVar6;
  int iVar7;
  undefined uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined2 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char *local_c54;
  uint local_b44;
  undefined4 local_b40;
  void *local_b3c;
  char *local_b38;
  int *local_b34;
  undefined4 local_b30;
  uint local_b2c;
  void *local_b28 [2];
  void *local_b20 [2];
  undefined4 local_b18;
  void *local_b14;
  char *local_b10;
  undefined4 local_b0c;
  undefined4 local_b08;
  undefined4 local_b04;
  undefined local_b00 [128];
  undefined4 local_a80 [32];
  undefined2 local_a00 [256];
  undefined local_800 [2048];
  
  FUN_10017e12();
  local_b0c = 0x3fc5bb;
  local_b08 = 0;
  local_b04 = 0;
  iVar7 = 0x253dcda4;
  local_b40 = 0;
  local_c54 = local_b38;
  uVar9 = 0;
  pvVar6 = local_b3c;
LAB_100089b6:
  do {
    if (iVar7 < 0x2351b249) {
      if (iVar7 == 0x2351b248) {
        puVar11 = local_a00;
        for (iVar7 = local_b44 % 6 + 1; iVar7 != 0; iVar7 = iVar7 + -1) {
          uVar10 = (local_b44 & 0xf) + 4;
          FUN_100139de(1,0x67c,uVar10,&local_b44,(int)puVar11);
          puVar11[uVar10] = 0x2f;
          puVar11 = puVar11 + uVar10 + 1;
        }
        *puVar11 = 0;
        iVar7 = 0x251ea7d7;
        local_b38 = local_c54;
        uVar9 = local_b40;
        goto LAB_100089b6;
      }
      if (iVar7 < 0x11f6a025) {
        if (iVar7 == 0x11f6a024) {
          FUN_1000d4e0(local_b28[0],0x7d,0x65d3,0x18a5);
          iVar7 = 0x1ddb462a;
          local_b38 = local_c54;
          goto LAB_100089b6;
        }
        if (iVar7 == 0x3976a58) {
          iVar3 = FUN_1001b99d(param_3,(int *)&local_b34);
          iVar7 = 0x1e2ab810;
          local_b38 = local_c54;
          local_b40 = uVar9;
          if (iVar3 != 0) {
            uVar9 = 1;
            local_b40 = 1;
          }
          goto LAB_100089b6;
        }
        if (iVar7 == 0x9a3fa64) {
          iVar7 = FUN_1000323c(local_b28,(int)local_a80,(int *)&local_b3c);
          iVar7 = (-(uint)(iVar7 != 0) & 0xff751bab) + 0x11f6a024;
          local_b38 = local_c54;
          goto LAB_100089b6;
        }
        if (iVar7 == 0xe973c01) {
          iVar7 = FUN_10014861(0x3c26,local_b28,0xf53,local_b20);
          iVar7 = (-(uint)(iVar7 != 0) & 0x18cd8389) + 0x1ddb462a;
          local_b38 = local_c54;
          goto LAB_100089b6;
        }
        if (iVar7 == 0x116bbbcf) {
          local_b34 = (int *)0x0;
          local_b30 = 0;
          iVar7 = FUN_1000f70c(0x58a3,(int)local_b00,local_a00,&local_b34,&local_b3c,0x4e48,
                               local_800);
          iVar7 = (-(uint)(iVar7 != 0) & 0xc8628cc8) + 0x3b34dd90;
          local_b38 = local_c54;
          goto LAB_100089b6;
        }
      }
      else {
        if (iVar7 == 0x1c8ae341) {
          local_b18 = 1;
          local_b14 = pvVar6;
          local_b10 = local_b38;
          bVar2 = FUN_10010731((int)&local_b18,0x427b,(int *)local_b20);
          iVar7 = (-(uint)(CONCAT31(extraout_var,bVar2) != 0) & 0xd78e1bb4) + 0x3709204d;
          local_b38 = local_c54;
          goto LAB_100089b6;
        }
        if (iVar7 == 0x1ddb462a) {
          FUN_1000d4e0(local_b20[0],0x24,0x1f1e,0x45ed);
          iVar7 = 0x3709204d;
          local_b38 = local_c54;
          goto LAB_100089b6;
        }
        if (iVar7 == 0x1e2ab810) {
          FUN_1000d4e0(local_b34,0x2d,0x72e3,0x5ae3);
          iVar7 = 0x3b34dd90;
          local_b38 = local_c54;
          goto LAB_100089b6;
        }
      }
    }
    else if (iVar7 == 0x24fefea9) {
      puVar4 = FUN_1000732d(0x179,(uint *)&DAT_1001f810,0x159f);
      FUN_10013b36(0x1d5a,0x42d6,0x400,0x7baa,local_800,puVar4,0x43e7,local_a80,local_a00);
      FUN_10007c8f(0x19cc);
      iVar7 = 0x9a3fa64;
      local_b38 = local_c54;
    }
    else {
      if (iVar7 == 0x251ea7d7) {
        FUN_10012393(local_a80);
        iVar7 = 0x24fefea9;
        local_b38 = local_c54;
        goto LAB_100089b6;
      }
      if (iVar7 == 0x253dcda4) {
        local_b44 = FUN_100010cf();
        iVar7 = 0x2d4f77ab;
        local_b38 = local_c54;
        goto LAB_100089b6;
      }
      if (iVar7 == 0x2d4f77ab) {
        pvVar5 = (void *)FUN_1000cab5((uint)param_2[1]);
        pvVar6 = (void *)FUN_10017f68(0x506e,pvVar5);
        if (pvVar6 == (void *)0x0) {
          return uVar9;
        }
        local_b38 = FUN_1001d1ea(0x70e9,*param_2,0x550a,(int)param_2[1],(int)pvVar6,(int)pvVar5);
        uVar8 = 0x2b;
        uVar12 = 0x48bf;
        uVar13 = 0x6567;
        if (local_b38 == (char *)0x0) {
LAB_10008f34:
          FUN_1000d4e0(pvVar6,uVar8,uVar12,uVar13);
          return uVar9;
        }
        iVar7 = 0x1c8ae341;
        local_c54 = local_b38;
        goto LAB_100089b6;
      }
      if (iVar7 == 0x36a8c9b3) {
        puVar4 = FUN_1000732d(0x4857,(uint *)&DAT_1001f7e0,0x2227);
        bVar1 = *(byte *)(*(int *)(DAT_1001fa08 + 0x24) + 1);
        FUN_10017f0f((uint)*(byte *)(*(int *)(DAT_1001fa08 + 0x24) + 2),0x1abe,bVar1,0x62f4,0x16d7,
                     (uint)**(byte **)(DAT_1001fa08 + 0x24),0x57f1,0x190a,0x4e52,(uint)bVar1,puVar4,
                     (uint)*(byte *)(*(int *)(DAT_1001fa08 + 0x24) + 3));
        FUN_10007c8f(0xcd4);
        iVar7 = 0x2351b248;
        local_b2c = (uint)*(ushort *)(*(int *)(DAT_1001fa08 + 0x24) + 4);
        local_b38 = local_c54;
        goto LAB_100089b6;
      }
      uVar8 = 0x24;
      uVar12 = 0x6b3a;
      uVar13 = 0x6806;
      if (iVar7 == 0x3709204d) goto LAB_10008f34;
      if (iVar7 == 0x3b34dd90) {
        FUN_1000d4e0(local_b3c,0xfc,0x7a43,0x57a8);
        iVar7 = 0x11f6a024;
        local_b38 = local_c54;
        goto LAB_100089b6;
      }
    }
    if (iVar7 == 0x116ac3df) {
      return uVar9;
    }
  } while( true );
}



/* Function: FUN_100097e0 */

int __fastcall FUN_100097e0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0x25f5449c;
LAB_10009b48:
  do {
    if (uVar2 < 0x2339482b) {
      if (uVar2 == 0x2339482a) {
        iVar1 = FUN_100150ba();
        return iVar3 + iVar1;
      }
      if (uVar2 == 0x59d4ca3) {
        iVar1 = FUN_100150ba();
        iVar3 = iVar3 + iVar1;
        uVar2 = 0x12550ae8;
        goto LAB_10009b48;
      }
      if (uVar2 == 0x62879dc) {
        iVar1 = FUN_100150ba();
        iVar3 = iVar3 + iVar1;
        uVar2 = 0x8b8e49c;
        goto LAB_10009b48;
      }
      if (uVar2 == 0x8b8e49c) {
        iVar1 = FUN_100150ba();
        iVar3 = iVar3 + iVar1;
        uVar2 = 0x2b3f6f96;
        goto LAB_10009b48;
      }
      if (uVar2 == 0x12550ae8) {
        iVar1 = FUN_1000c22d(0x228c,0x243e,param_1 + 0x18);
        iVar3 = iVar3 + iVar1;
        uVar2 = 0x2d3d046c;
        goto LAB_10009b48;
      }
    }
    else if (uVar2 == 0x25f5449c) {
      uVar2 = 0x2de439a3;
    }
    else {
      if (uVar2 == 0x2b3f6f96) {
        iVar1 = FUN_100150ba();
        uVar2 = 0x59d4ca3;
        iVar3 = iVar3 + iVar1;
        goto LAB_10009b48;
      }
      if (uVar2 == 0x2d3d046c) {
        iVar1 = FUN_1000c22d(0x52e9,0x1e68,param_1 + 0x20);
        iVar3 = iVar3 + iVar1;
        uVar2 = 0x2339482a;
        goto LAB_10009b48;
      }
      if (uVar2 == 0x2de439a3) {
        iVar1 = FUN_1000c22d(0x2254,0x5dc2,param_1);
        iVar3 = iVar3 + iVar1;
        uVar2 = 0x62879dc;
        goto LAB_10009b48;
      }
    }
    if (uVar2 == 0x34b443f2) {
      return iVar3;
    }
  } while( true );
}



/* Function: FUN_10009ccb */

int * FUN_10009ccb(undefined4 param_1,undefined4 param_2,undefined param_3,undefined param_4,
                  short *param_5,uint param_6)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  undefined4 extraout_ECX;
  uint uVar5;
  uint uVar6;
  
  FUN_10017e12();
  piVar1 = FUN_1000b074(0x7313,param_6,0x76f4,param_5);
  piVar2 = piVar1;
  if ((piVar1 != (int *)0x0) &&
     (piVar2 = (int *)FUN_1000d42b(piVar1[0x14],0x3cf,0x3000,0x2802,extraout_ECX,0x40),
     piVar2 != (int *)0x0)) {
    FUN_1001b713(param_5,0x6811,piVar2,(void *)piVar1[0x15]);
    uVar6 = *(ushort *)(piVar1 + 5) + 0x18 + (int)piVar1;
    uVar5 = (uint)*(ushort *)((int)piVar1 + 6) * 0x28 + uVar6;
    for (; uVar6 < uVar5; uVar6 = uVar6 + 0x28) {
      pvVar3 = *(void **)(uVar6 + 0x10);
      if (*(void **)(uVar6 + 8) < pvVar3) {
        pvVar3 = *(void **)(uVar6 + 8);
      }
      FUN_1001b713(*(int *)(uVar6 + 0x14) + (int)param_5,0x641f,*(int *)(uVar6 + 0xc) + (int)piVar2,
                   pvVar3);
    }
    FUN_10018f67((int)piVar2,(int)piVar1);
    iVar4 = FUN_10017b49((int)piVar2,(int)piVar1);
    if (iVar4 == 0) {
      FUN_1000ac4c(0x8000,0x631c,piVar2);
      piVar2 = (int *)0x0;
    }
  }
  return piVar2;
}



/* Function: FUN_1000a074 */

void __cdecl FUN_1000a074(undefined4 param_1,undefined4 param_2,undefined *param_3)

{
  int iVar1;
  void *this;
  uint uVar2;
  int iVar3;
  undefined4 local_22c [139];
  
  FUN_10017e12();
  this = (void *)0x2108;
  iVar1 = 0x21cebbbb;
LAB_1000a24e:
  do {
    while (iVar3 = iVar1, iVar3 == 0x861153) {
      iVar1 = FUN_100042ab(local_22c,this);
      if (iVar1 == 0) {
        iVar3 = 0x2fdc42d7;
LAB_1000a32b:
        iVar1 = iVar3;
        if (iVar3 == 0x3d7d4f8) {
          return;
        }
      }
      else {
        iVar1 = 0x2bf80649;
      }
    }
    if (iVar3 == 0x1fb3c44c) {
      this = (void *)FUN_1000708c(0x1fb3c44c,2);
      if (this == (void *)0xffffffff) {
        return;
      }
      iVar1 = 0x33c87332;
      goto LAB_1000a24e;
    }
    iVar1 = 0x1fb3c44c;
    if (iVar3 != 0x21cebbbb) {
      if (iVar3 == 0x2bf80649) {
        iVar1 = (*(code *)param_3)(local_22c,param_1);
        uVar2 = -(uint)(iVar1 != 0) & 0xd0a9ce7c;
      }
      else {
        if (iVar3 == 0x2fdc42d7) {
          FUN_10002ec6(this,0xb3,0x2108,0x7c65,0x358a);
          return;
        }
        if (iVar3 != 0x33c87332) goto LAB_1000a32b;
        local_22c[0] = 0x22c;
        iVar1 = FUN_10006e75(this,local_22c,0x69a0,0x4c32,0x7cf7);
        uVar2 = -(uint)(iVar1 != 0) & 0xfc1bc372;
      }
      iVar1 = uVar2 + 0x2fdc42d7;
    }
  } while( true );
}



/* Function: FUN_1000a35e */

void __fastcall
FUN_1000a35e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(10,extraout_ECX,0x2175dc,0x50cd8956);
  (*pcVar1)(param_4,param_6,0xffffffff,param_2,param_9);
  return;
}



/* Function: FUN_1000a42a */

undefined4 FUN_1000a42a(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 local_254;
  ushort local_208 [260];
  
  iVar2 = 0x1097;
  uVar3 = 0x2fcc2f14;
  uVar4 = 0;
LAB_1000a716:
  do {
    if (uVar3 < 0x2fcc2f15) {
      if (uVar3 == 0x2fcc2f14) {
        DAT_1001fa14 = FUN_10017f68(0x2fcc2f14,(void *)0x448);
        if (DAT_1001fa14 == 0) {
          return uVar4;
        }
        *(code **)(DAT_1001fa14 + 0x428) = FUN_100046c6;
        uVar3 = 0x3ae38750;
        goto LAB_1000a716;
      }
      if (uVar3 == 0x90375b7) {
        FUN_10004e07();
        uVar3 = 0x136c5cfa;
        goto LAB_1000a716;
      }
      if (uVar3 == 0x136c5cfa) {
        FUN_1000d67e(0x25e6,(char)uVar3,0x2cef);
        iVar2 = FUN_100180ea(local_208,0x97,0x7314);
        *(int *)(DAT_1001fa14 + 8) = iVar2;
        return uVar4;
      }
      if (uVar3 == 0x28011ff7) {
        iVar1 = FUN_100145b5(0x67af,DAT_1001fa14 + 0x218,0x7f3b,local_254,0x6a9c,(char)uVar3,0x245c)
        ;
        uVar3 = 0x90375b7;
        if (iVar1 == 0) {
          uVar4 = 1;
        }
        goto LAB_1000a716;
      }
      if (uVar3 == 0x2b2e2b46) {
        FUN_100075d7(iVar2,0xf2,0xb0c,0x57f8,0x9bf);
        uVar3 = 0x28011ff7;
        goto LAB_1000a716;
      }
    }
    else if (uVar3 == 0x38e891f6) {
      uVar3 = 0x28011ff7;
      local_254 = 0x1c;
      *(code **)(DAT_1001fa14 + 0x42c) = FUN_10017d15;
    }
    else {
      if (uVar3 == 0x3975faa1) {
        uVar3 = 0x2b2e2b46;
        local_254 = 0x29;
        goto LAB_1000a716;
      }
      if (uVar3 == 0x3ae38750) {
        iVar2 = FUN_1001190e(0x3ae38750,0xf003f,0x7bd7,0x6a0a);
        if (iVar2 == 0) {
          uVar3 = 0x38e891f6;
        }
        else {
          *(undefined4 *)(DAT_1001fa14 + 0x424) = 1;
          uVar3 = 0x3975faa1;
        }
        goto LAB_1000a716;
      }
    }
    if (uVar3 == 0x10b196ba) {
      return uVar4;
    }
  } while( true );
}



/* Function: FUN_1000a8e3 */

bool FUN_1000a8e3(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined uVar4;
  
  iVar2 = DAT_1001fa18;
  iVar3 = 0x1e67c84b;
LAB_1000aaeb:
  do {
    if (iVar3 == 0xd15a590) {
      uVar4 = (undefined)iVar2;
      uVar1 = FUN_1000bce8(&LAB_10008f4a,0,uVar4,0x49c9,8000,uVar4,uVar4,0x5b5,0x19e3,uVar4,0x4df2,
                           0x3224);
      iVar2 = DAT_1001fa18;
      iVar3 = 0x1abdf723;
      *(undefined4 *)(DAT_1001fa18 + 4) = uVar1;
    }
    else {
      if (iVar3 == 0x1e67c84b) {
        iVar2 = FUN_10017f68(iVar2,(void *)0x48);
        DAT_1001fa18 = iVar2;
        if (iVar2 == 0) goto LAB_1000ab92;
        iVar3 = 0x310ea585;
        goto LAB_1000aaeb;
      }
      if (iVar3 == 0x310ea585) {
        uVar1 = FUN_1000c160(0x2e4d,0x4289,23999,0x1f90);
        iVar2 = DAT_1001fa18;
        *(undefined4 *)(DAT_1001fa18 + 0xc) = uVar1;
        iVar3 = 0xd15a590;
        goto LAB_1000aaeb;
      }
    }
    if (iVar3 == 0x1abdf723) {
LAB_1000ab92:
      return iVar2 != 0;
    }
  } while( true );
}



/* Function: FUN_1000aba1 */

void __fastcall
FUN_1000aba1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x2cc,extraout_ECX,0x2de3bdc6,0x699eed95);
  (*pcVar1)(param_2);
  return;
}



/* Function: FUN_1000ac4c */

void __cdecl FUN_1000ac4c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  FUN_10017e12();
  uVar5 = 0;
  uVar2 = 0x241e38;
  uVar3 = 0x79a1cf;
  uVar4 = 0x2f1da;
  uVar7 = 0x51e7;
  uVar8 = 0x4b2a;
  uVar9 = 0x7ebf;
  uVar6 = 0x7931;
  pcVar1 = (code *)FUN_10007d5b(0x373,0x17,0x90bdc3a8,0xff5ad1f9);
  (*pcVar1)(param_3,0,param_1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  return;
}



/* Function: FUN_1000ad2b */

bool FUN_1000ad2b(void)

{
  DAT_1001fa0c = FUN_10017f68(0x14,(void *)0x50);
  return DAT_1001fa0c != 0;
}



/* Function: FUN_1000adda */

void __cdecl
FUN_1000adda(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar2;
  
  FUN_10017e12();
  uVar2 = extraout_EDX;
  pcVar1 = (code *)FUN_10018202(extraout_ECX,0xd9221bfd,0x168);
  (*pcVar1)(param_1,param_5,param_7,uVar2,param_8);
  return;
}



/* Function: FUN_1000ae23 */

void FUN_1000ae23(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = 0x7bf4;
  uVar3 = 0x18d4;
  uVar4 = 0x6797;
  uVar5 = 0x2598;
  pcVar1 = (code *)FUN_10007d5b(0xcb,6,0x90bdc3a8,0xbb60d5a9);
  (*pcVar1)(uVar2,uVar3,uVar4,uVar5);
  return;
}



/* Function: thunk_FUN_1000aeda */

undefined4 __fastcall thunk_FUN_1000aeda(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x21c) == param_2) break;
    param_1 = *(int *)(param_1 + 0x210);
  }
  return 1;
}



/* Function: FUN_1000aeda */

undefined4 __fastcall FUN_1000aeda(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x21c) == param_2) break;
    param_1 = *(int *)(param_1 + 0x210);
  }
  return 1;
}



/* Function: FUN_1000aee5 */

void __cdecl FUN_1000aee5(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_10017e12();
  uVar4 = 0;
  uVar2 = 0x6853c2;
  uVar3 = 0x62b350;
  uVar7 = 0x18a3;
  uVar5 = 0x6393;
  uVar8 = 0x45ff;
  uVar6 = 0x6bff;
  pcVar1 = (code *)FUN_10007d5b(0x230,0x4f,0xd24740bf,0x50278093);
  (*pcVar1)(param_1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  return;
}



/* Function: FUN_1000afb0 */

void __thiscall
FUN_1000afb0(void *this,undefined4 param_1,undefined4 param_2,undefined param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x1a9,0x33,0x7b4db0e9,0x99899888);
  (*pcVar1)(0,this,param_5);
  return;
}



/* Function: FUN_1000b074 */

int * __cdecl FUN_1000b074(undefined4 param_1,uint param_2,undefined4 param_3,short *param_4)

{
  int *piVar1;
  
  FUN_10017e12();
  if (((param_2 < 0x40) || (*param_4 != 0x5a4d)) ||
     (piVar1 = (int *)(*(int *)(param_4 + 0x1e) + (int)param_4), *piVar1 != 0x4550)) {
    piVar1 = (int *)0x0;
  }
  else if (*(short *)(piVar1 + 6) != 0x10b) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



/* Function: FUN_1000b0df */

void __thiscall
FUN_1000b0df(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x120,extraout_ECX,0x90bdc3a8,0x85416b26);
  (*pcVar1)(this,param_2);
  return;
}



/* Function: FUN_1000b1b7 */

void __thiscall
FUN_1000b1b7(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined param_7,undefined4 param_8,
            undefined4 param_9)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x172,extraout_ECX,0x2de3bdc6,0xe3435b02);
  (*pcVar1)(param_1,param_9,param_4,0,0,this);
  return;
}



/* Function: FUN_1000b283 */

void __cdecl
FUN_1000b283(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined param_10,undefined4 param_11,undefined4 param_12)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x379,extraout_ECX,0x2175dc,0x89d4a7f4);
  (*pcVar1)(param_6,param_3,param_12,0,0,0,param_8,0);
  return;
}



/* Function: FUN_1000b350 */

void __cdecl FUN_1000b350(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ushort *puVar1;
  undefined local_234 [520];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_10017e12();
  local_8 = 0x3cf5;
  local_10 = 0x470c;
  local_24 = 0x62cc;
  local_18 = 0x3500;
  local_2c = 0x7a82;
  local_14 = 0x3841;
  local_1c = 0x1d11;
  local_28 = 0x7349;
  local_20 = 0x8f7;
  local_c = 0x6bf2;
  puVar1 = FUN_1000732d(0x3cf5,(uint *)&DAT_1001f950,0x470c);
  FUN_1001ceda(puVar1,param_3,local_18,local_234,local_2c);
  FUN_10007c8f(local_1c);
  FUN_10015165(local_28,local_234,local_20,local_c);
  return;
}



/* Function: FUN_1000b4c7 */

void __cdecl
FUN_1000b4c7(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_10017e12();
  uVar3 = 0x783c;
  uVar4 = 0x3bf0;
  uVar5 = 0x3dfd;
  uVar2 = 0x1849;
  pcVar1 = (code *)FUN_10007d5b(0x27d,0x75,0x2de3bdc6,0x28e53702);
  (*pcVar1)(param_5,param_1,param_4,uVar2,uVar3,uVar4,uVar5);
  return;
}



/* Function: FUN_1000b597 */

void __fastcall FUN_1000b597(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_10007d5b(0x144,10,0x2de3bdc6,0xe6860574);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_1000b644 */

void __cdecl
FUN_1000b644(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char acStack_40 [64];
  
  FUN_10017e12();
  uVar4 = 0;
  uVar3 = 0;
  cVar1 = 'A';
  do {
    acStack_40[uVar3] = cVar1;
    uVar3 = uVar3 + 1;
    cVar1 = cVar1 + '\x01';
  } while (cVar1 < '[');
  cVar1 = 'a';
  do {
    acStack_40[uVar3] = cVar1;
    uVar3 = uVar3 + 1;
    cVar1 = cVar1 + '\x01';
  } while (cVar1 < '{');
  if (param_5 != 0) {
    do {
      uVar2 = FUN_10011f4e(0x3c3f,param_4,0x65a4);
      *(char *)(uVar4 + param_1) = acStack_40[uVar2 % uVar3];
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_5);
  }
  return;
}



/* Function: FUN_1000b735 */

undefined4 FUN_1000b735(void)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  undefined4 uVar5;
  
  iVar3 = 0x30a4ae34;
  uVar5 = 0;
  psVar2 = (short *)0x2916;
  psVar4 = psVar2;
  psVar1 = psVar2;
LAB_1000b97f:
  do {
    if (iVar3 == 0x348b907) {
      psVar2 = (short *)FUN_1000c079(0x7a9d,0x10000,psVar4,0x6aca,psVar1,0x437d);
      if (psVar2 != (short *)0x0) {
        iVar3 = 0x2d09d524;
        goto LAB_1000b97f;
      }
      iVar3 = 0x39d46470;
    }
    else {
      if (iVar3 == 0xe1eb7b3) {
        FUN_100075d7(psVar2,0x50,0x5892,0x6897,0x46ea);
        iVar3 = 0x39d46470;
        goto LAB_1000b97f;
      }
      if (iVar3 == 0x16380a9e) {
        psVar1 = (short *)FUN_1001190e(0x16380a9e,0xf003f,0x4df5,0x51f9);
        if (psVar1 == (short *)0x0) {
          return uVar5;
        }
        iVar3 = 0x348b907;
        goto LAB_1000b97f;
      }
      if (iVar3 == 0x2d09d524) {
        iVar3 = FUN_1000d7ed(psVar2,0xa1,0x5459,0x7dee);
        if (iVar3 != 0) {
          uVar5 = 1;
        }
        iVar3 = 0xe1eb7b3;
        goto LAB_1000b97f;
      }
      if (iVar3 == 0x30a4ae34) {
        iVar3 = 0x3a75d574;
        goto LAB_1000b97f;
      }
      if (iVar3 == 0x39d46470) {
        FUN_100075d7(psVar1,0x16,0x2743,0x7f07,0x62ef);
        return uVar5;
      }
      if (iVar3 == 0x3a75d574) {
        for (psVar4 = (short *)(DAT_1001fa14 + 0xc); *psVar4 != 0x5c; psVar4 = psVar4 + 1) {
        }
        iVar3 = 0x16380a9e;
        psVar4 = psVar4 + 1;
        goto LAB_1000b97f;
      }
    }
    if (iVar3 == 0x2c92618c) {
      return uVar5;
    }
  } while( true );
}



/* Function: FUN_1000bac3 */

bool FUN_1000bac3(int param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_1000ae23();
  bVar2 = *(int *)(param_1 + 8) != iVar1;
  if (!bVar2) {
    *param_2 = *(undefined4 *)(param_1 + 0x18);
  }
  return bVar2;
}



/* Function: FUN_1000bb12 */

void __cdecl
FUN_1000bb12(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x22a,0x49,0x90bdc3a8,0xd0b092e8);
  (*pcVar1)(param_1,&DAT_1001e000,0,param_2);
  return;
}



/* Function: FUN_1000bbf0 */

void __fastcall
FUN_1000bbf0(undefined4 param_1,undefined param_2,undefined4 param_3,undefined param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  
  uVar1 = DAT_1001fa10;
  FUN_10017e12();
  pcVar2 = (code *)FUN_10007d5b(0x15e,0x46,0x90bdc3a8,0x43f88680);
  (*pcVar2)(uVar1,param_1,0x104);
  return;
}



/* Function: FUN_1000bce8 */

void __fastcall
FUN_1000bce8(undefined4 param_1,undefined4 param_2,undefined param_3,undefined4 param_4,
            undefined4 param_5,undefined param_6,undefined param_7,undefined4 param_8,
            undefined4 param_9,undefined param_10,undefined4 param_11,undefined4 param_12)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x117,0x31,0x90bdc3a8,0x3847d2c8);
  (*pcVar1)(0,0,param_1,param_2,0,0);
  return;
}



/* Function: FUN_1000bdb2 */

void __fastcall FUN_1000bdb2(undefined4 param_1)

{
  int iVar1;
  void *pvVar2;
  void **ppvVar3;
  
  ppvVar3 = &DAT_1001fa00;
  pvVar2 = DAT_1001fa00;
  do {
    if (pvVar2 == (void *)0x0) {
      return;
    }
    if (*(int *)((int)pvVar2 + 0x28) == 0) {
LAB_1000bf49:
      *ppvVar3 = *(void **)((int)pvVar2 + 0xc);
      FUN_1000d4e0(pvVar2,0x74,0x1343,0x3398);
    }
    else {
      iVar1 = FUN_10013f83(0x1a6,*(undefined4 *)((int)pvVar2 + 0x1c),param_1,0x63b2);
      if (iVar1 == 0) {
        (**(code **)((int)pvVar2 + 0x14))(*(undefined4 *)((int)pvVar2 + 0x28),0,0);
        FUN_10017ad3(*(undefined4 *)((int)pvVar2 + 0x28));
        FUN_10002ec6(*(undefined4 *)((int)pvVar2 + 0x1c),0xb6,0x1bd9,0x4ff8,0x2c83);
        goto LAB_1000bf49;
      }
      ppvVar3 = (void **)((int)pvVar2 + 0xc);
    }
    pvVar2 = *ppvVar3;
  } while( true );
}



/* Function: FUN_1000bf72 */

void __cdecl
FUN_1000bf72(undefined4 param_1,undefined4 param_2,undefined param_3,undefined4 param_4,
            undefined param_5,undefined4 param_6,undefined4 param_7,undefined param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
            undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(8,0x28,0x2de3bdc6,0x798d9129);
  (*pcVar1)(param_13,param_2,param_11,0,0,0,param_14,param_16,0,param_19,param_15);
  return;
}



/* Function: FUN_1000c079 */

void __fastcall
FUN_1000c079(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x98,0x7e,0x2de3bdc6,0x68d30fc2);
  (*pcVar1)(param_5,param_3,param_2);
  return;
}



/* Function: FUN_1000c160 */

void FUN_1000c160(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x83,0x17,0x90bdc3a8,0x4a445c97);
  (*pcVar1)(0,0,0,0);
  return;
}



/* Function: FUN_1000c22d */

int __cdecl FUN_1000c22d(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  FUN_10017e12();
  iVar1 = FUN_100150ba();
  return iVar1 + *(int *)(param_3 + 4);
}



/* Function: FUN_1000c2ae */

void __fastcall FUN_1000c2ae(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar4 = 0;
  uVar2 = 0x66e2ed;
  uVar3 = 0x1aeaf5;
  uVar6 = 0x36cc;
  uVar7 = 0x7be4;
  uVar5 = 0x4094;
  uVar8 = 0x6cc5;
  pcVar1 = (code *)FUN_10007d5b(0x1bd,param_1,0x90bdc3a8,0x873b53f4);
  (*pcVar1)(uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  return;
}



/* Function: FUN_1000c351 */

bool FUN_1000c351(undefined4 param_1,undefined4 param_2,undefined param_3,undefined4 param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  char local_10 [16];
  
  FUN_10017e12();
  local_1c = 0x6f24e;
  local_18 = 0;
  local_14 = 0;
  local_20 = 0x10;
  iVar4 = 0x2086c1db;
LAB_1000c5b1:
  do {
    iVar6 = iVar4;
    if (iVar6 == 0xe6185f) {
      pcVar5 = local_10;
      cVar1 = local_10[0];
      while (cVar1 != '\0') {
        cVar1 = *pcVar5;
        if ((((cVar1 < '0') || ('9' < cVar1)) && ((cVar1 < 'a' || ('z' < cVar1)))) &&
           ((cVar1 < 'A' || ('Z' < cVar1)))) {
          *pcVar5 = 'X';
        }
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
      }
      iVar6 = 0x1d0ad68e;
    }
    else {
      if (iVar6 == 0xffee64b) {
        iVar4 = FUN_1000d5c4(&local_20,0x6939,0x427,0x580a,local_10);
        if (iVar4 == 0) {
          return false;
        }
        iVar4 = 0xe6185f;
        goto LAB_1000c5b1;
      }
      if (iVar6 == 0x1d0ad68e) {
        puVar2 = FUN_1000d126(0x5887,0x6abd);
        uVar3 = FUN_1000d2a9();
        iVar4 = FUN_1000adda(param_4,0x19fa,0x7feb,0x1d6c,0x40,0x5739,puVar2,uVar3);
        FUN_10007c8f(0x347c);
        return 0 < iVar4;
      }
      iVar4 = 0xffee64b;
      if (iVar6 == 0x2086c1db) goto LAB_1000c5b1;
    }
    iVar4 = iVar6;
    if (iVar6 == 0x1fc7f49b) {
      return false;
    }
  } while( true );
}



/* Function: FUN_1000c69e */

void __thiscall
FUN_1000c69e(void *this,undefined param_1,undefined4 param_2,undefined param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x10e,extraout_ECX,0x2de3bdc6,0x68946ce8);
  (*pcVar1)(this,param_6,0x60,param_7,0,0);
  return;
}



/* Function: FUN_1000c777 */

undefined4 FUN_1000c777(void)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  undefined local_208 [520];
  
  iVar4 = 0x1576a4c4;
  puVar2 = (ushort *)0x2982;
  puVar1 = puVar2;
  puVar3 = puVar2;
LAB_1000c8df:
  do {
    if (iVar4 == 0xe3ae2bf) {
      puVar3 = (ushort *)FUN_10010ae7();
      if (puVar3 != (ushort *)0x0) {
        iVar4 = 0x32434ee2;
        goto LAB_1000c8df;
      }
      iVar4 = 0x1499a1a8;
    }
    else {
      if (iVar4 == 0x1576a4c4) {
        iVar4 = 0xe3ae2bf;
        goto LAB_1000c8df;
      }
      if (iVar4 == 0x1db47057) {
        puVar2 = (ushort *)FUN_100180ea(puVar1,0x7c,0x6e0d);
        iVar4 = 0x2f4d21d4;
        goto LAB_1000c8df;
      }
      if (iVar4 == 0x27d13268) {
        puVar1 = (ushort *)FUN_1001500e(0x3a4d,local_208,0x39f0);
        iVar4 = 0x1db47057;
        goto LAB_1000c8df;
      }
      if (iVar4 == 0x2f4d21d4) {
        if (puVar2 != (ushort *)0x2a2700e2) {
          return 0;
        }
        return 1;
      }
      if (iVar4 == 0x32434ee2) {
        iVar4 = FUN_1001b79c(0x32434ee2,puVar3,0x1f6b);
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = 0x27d13268;
        goto LAB_1000c8df;
      }
    }
    if (iVar4 == 0x1499a1a8) {
      return 0;
    }
  } while( true );
}



/* Function: FUN_1000c9fd */

void __thiscall
FUN_1000c9fd(void *this,undefined4 param_1,undefined4 param_2,undefined param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0xc9,extraout_ECX,0x2de3bdc6,0x6c7d1e3e);
  (*pcVar1)(this,0,0,0x18,param_2);
  return;
}



/* Function: FUN_1000cab5 */

int __cdecl FUN_1000cab5(uint param_1)

{
  return (param_1 / 100) * 5 + param_1;
}



/* Function: FUN_1000cac8 */

void __thiscall FUN_1000cac8(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x1dc,0x70,0xb7c4e003,0x5e204992);
  (*pcVar1)(param_2,this);
  return;
}



/* Function: entry */

undefined4 entry(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    DAT_1001fa10 = param_1;
  }
  return 1;
}



/* Function: FUN_1000cba6 */

void FUN_1000cba6(undefined4 param_1,undefined param_2,undefined param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined param_9,undefined4 param_10,undefined4 param_11)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x2a2,extraout_ECX,0x133f1339,0xd89ebc12);
  (*pcVar1)(param_11,0,param_5,param_4,param_7,0,0);
  return;
}



/* Function: FUN_1000cc8d */

void __thiscall
FUN_1000cc8d(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x23c,extraout_ECX,0x133f1339,0xe0d40760);
  (*pcVar1)(this,param_4,param_6,param_8,param_11,0,param_10,param_3);
  return;
}



/* Function: FUN_1000cd5c */

bool __fastcall
FUN_1000cd5c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined local_488 [520];
  undefined local_280 [520];
  undefined local_78 [4];
  undefined4 local_74;
  undefined *local_70;
  undefined *local_6c;
  ushort local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_10017e12();
  local_54 = 0;
  local_50 = 0;
  local_58 = 0x1d2b5f;
  local_10 = 1;
  local_34 = 0x614;
  local_8 = 0x800;
  local_44 = 0x31ce;
  local_38 = 0x6045;
  local_30 = 0x6486;
  local_18 = 0x7ba;
  local_1c = 0x59fd;
  local_40 = 0x441d;
  local_28 = 0x5d61;
  local_14 = 0x5c81;
  local_4c = 0x7da8;
  local_48 = 0x47c8;
  local_20 = 0x1f5f;
  local_c = 0x27f;
  local_24 = 0x34ca;
  local_3c = 0x6951;
  local_2c = 0x19d9;
  FUN_1001391c(0x6045,0x6486,local_78);
  FUN_1001391c(local_1c,local_40,local_280);
  FUN_1001391c(local_14,local_4c,local_488);
  FUN_100041ef(local_280,param_2,local_48,local_20);
  FUN_100041ef(local_488,param_5,local_c,local_24);
  local_74 = local_10;
  local_70 = local_280;
  local_6c = local_488;
  local_68 = (ushort)local_8 | (ushort)local_34;
  iVar1 = FUN_1001468f(local_78);
  return (bool)('\x01' - (iVar1 != 0));
}



/* Function: FUN_1000d00e */

void __fastcall
FUN_1000d00e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x204,extraout_ECX,0x90bdc3a8,0x885c4bb1);
  (*pcVar1)(param_1,param_2,param_5,0,param_12,param_7,0);
  return;
}



/* Function: FUN_1000d0f6 */

undefined4 __cdecl FUN_1000d0f6(undefined4 *param_1)

{
  undefined4 *puVar1;
  int extraout_EDX;
  
  FUN_10017e12();
  puVar1 = *(undefined4 **)(extraout_EDX + 0x18) + 1;
  if (puVar1 < *(undefined4 **)(uint *)(extraout_EDX + 0x1c) ||
      puVar1 == *(undefined4 **)(uint *)(extraout_EDX + 0x1c)) {
    *param_1 = **(undefined4 **)(extraout_EDX + 0x18);
    *(int *)(extraout_EDX + 0x18) = *(int *)(extraout_EDX + 0x18) + 4;
    return 1;
  }
  return 0;
}



/* Function: FUN_1000d126 */

undefined * FUN_1000d126(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  uint *extraout_EDX;
  undefined *puVar7;
  uint uVar8;
  void *pvVar9;
  uint uVar10;
  uint *puVar11;
  
  FUN_10017e12();
  uVar3 = *extraout_EDX;
  puVar11 = extraout_EDX + 2;
  uVar4 = extraout_EDX[1] ^ uVar3;
  pvVar1 = (void *)(uVar4 + 1);
  pvVar9 = pvVar1;
  if (((uint)pvVar1 & 3) != 0) {
    pvVar9 = (void *)(((uint)pvVar1 & 0xfffffffc) + 4);
  }
  puVar5 = (undefined *)FUN_10017f68((uint)pvVar1 & 0xffffff03,pvVar9);
  if (puVar5 != (undefined *)0x0) {
    uVar8 = 0;
    puVar2 = (uint *)((int)puVar11 + ((uint)pvVar9 & 0xfffffffc));
    uVar10 = (uint)((int)puVar2 + (3 - (int)puVar11)) >> 2;
    if (puVar2 < puVar11) {
      uVar10 = 0;
    }
    puVar7 = puVar5;
    if (uVar10 != 0) {
      do {
        uVar6 = *puVar11;
        puVar11 = puVar11 + 1;
        uVar6 = uVar6 ^ uVar3;
        *puVar7 = (char)uVar6;
        puVar7[1] = (char)(uVar6 >> 8);
        puVar7[2] = (char)(uVar6 >> 0x10);
        uVar8 = uVar8 + 1;
        puVar7[3] = (char)(uVar6 >> 0x18);
        puVar7 = puVar7 + 4;
      } while (uVar8 < uVar10);
    }
    puVar5[uVar4] = 0;
  }
  return puVar5;
}



/* Function: FUN_1000d26b */

void FUN_1000d26b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_10017e12();
  uVar2 = extraout_EDX;
  uVar3 = extraout_ECX;
  pcVar1 = (code *)FUN_10018202(extraout_ECX,0xd9221bfd,0x168);
  (*pcVar1)(uVar2,uVar3,param_6,param_5);
  return;
}



/* Function: FUN_1000d2a9 */

undefined4 FUN_1000d2a9(void)

{
  int iVar1;
  short *psVar2;
  undefined extraout_CL;
  undefined uVar3;
  short local_244 [260];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_3c = 0x432528;
  local_38 = 0x6add2d;
  local_2c = 0;
  local_34 = 0;
  local_30 = 0;
  local_c = 0x4cb9;
  local_1c = 0x24b8;
  local_8 = 0x6425;
  local_18 = 0x414d;
  local_20 = 0x52d6;
  local_10 = 0x66b5;
  local_28 = 0x355e;
  local_24 = 0x48e2;
  local_14 = 0x155;
  iVar1 = FUN_10015fad(0x4cb9,local_244,0x24b8,0x28,0x6425,0x414d);
  if (iVar1 != 0) {
    psVar2 = local_244;
    while (uVar3 = extraout_CL, local_244[0] != 0) {
      if (*psVar2 == 0x5c) {
        uVar3 = 0;
        psVar2[1] = 0;
        break;
      }
      psVar2 = psVar2 + 1;
      local_244[0] = *psVar2;
    }
    FUN_1000241a(local_10,local_28,uVar3,local_244,local_24,uVar3,local_14,uVar3,&local_2c);
  }
  return local_2c;
}



/* Function: FUN_1000d42b */

void __cdecl
FUN_1000d42b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_10017e12();
  uVar4 = 0x66df;
  uVar5 = 0x299e;
  uVar2 = 0x7074;
  uVar3 = 0x257b;
  pcVar1 = (code *)FUN_10007d5b(0x31d,0x72,0x90bdc3a8,0x3c79a8e4);
  (*pcVar1)(0,param_1,param_3,param_6,uVar2,uVar3,uVar4,uVar5);
  return;
}



/* Function: FUN_1000d4e0 */

void __fastcall FUN_1000d4e0(void *param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_10017e12();
  uVar1 = FUN_10007123();
  FUN_10011194(param_1,0x27df,uVar1,0x636d);
  return;
}



/* Function: FUN_1000d5c4 */

void __thiscall
FUN_1000d5c4(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x235,0x14,0x90bdc3a8,0xce1b540b);
  (*pcVar1)(param_4,this);
  return;
}



/* Function: FUN_1000d67e */

undefined4 FUN_1000d67e(undefined4 param_1,undefined param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  FUN_1000bbf0(extraout_ECX,0xdb,0x1008,(char)extraout_ECX,0x305);
  return 1;
}



/* Function: FUN_1000d712 */

void __fastcall
FUN_1000d712(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined param_5,undefined4 param_6,undefined param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x220,extraout_ECX,0x2de3bdc6,0xad0f94d9);
  (*pcVar1)(param_12,param_9,1,0,param_1,param_10,param_2);
  return;
}



/* Function: FUN_1000d7ed */

void __fastcall
FUN_1000d7ed(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x27c,0xc,0x2de3bdc6,0xd7e2da24);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_1000da85 */

bool FUN_1000da85(void)

{
  ushort *puVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  undefined uVar5;
  undefined4 uVar6;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0x47695a;
  local_4 = 0;
  local_c = 0;
  psVar3 = (short *)0x0;
  iVar2 = 0x37044eb7;
LAB_1000dd7d:
  do {
    iVar4 = iVar2;
    if (iVar4 == 0x4d96671) {
      for (psVar3 = (short *)(DAT_1001fa14 + 0xc); *psVar3 != 0x5c; psVar3 = psVar3 + 1) {
      }
      psVar3 = psVar3 + 1;
      iVar4 = 0x26929727;
    }
    else {
      if (iVar4 == 0x69cec43) {
        iVar2 = FUN_1000e37d(local_10,0x6507,0xb64,psVar3);
        local_c = (uint)(iVar2 == 0);
        iVar2 = 0x319598bb;
        goto LAB_1000dd7d;
      }
      if (iVar4 == 0x26929727) {
        uVar6 = 0x752c;
        puVar1 = FUN_1000732d(0x5eec,(uint *)&DAT_1001f580,0x752c);
        uVar5 = (undefined)uVar6;
        iVar2 = FUN_1001cf66(uVar6,puVar1,2,0x79b0,uVar5,0x53bb,uVar5,0x6e02,uVar5,0x580d,0x80000001
                             ,0x75be,&local_10,0x7c2b);
        iVar4 = 0x14e38ff9;
        if (iVar2 == 0) {
          iVar4 = 0x69cec43;
        }
        FUN_10007c8f(0x95b);
      }
      else {
        if (iVar4 == 0x319598bb) {
          FUN_1000aba1(0x5066,local_10,0x544b,0x2f84);
          goto LAB_1000dea1;
        }
        iVar2 = 0x4d96671;
        if (iVar4 == 0x37044eb7) goto LAB_1000dd7d;
      }
    }
    iVar2 = iVar4;
    if (iVar4 == 0x14e38ff9) {
LAB_1000dea1:
      return SUB41(local_c,0);
    }
  } while( true );
}



/* Function: FUN_1000dead */

void __cdecl FUN_1000dead(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_10017e12();
  uVar5 = 0x2057;
  uVar2 = 0x7368;
  uVar3 = 0x68d9;
  uVar4 = 0x145c;
  pcVar1 = (code *)FUN_10007d5b(0x145,extraout_ECX,0x90bdc3a8,0x1a80c7c9);
  (*pcVar1)(param_1,uVar2,uVar3,uVar4,uVar5);
  return;
}



/* Function: FUN_1000df50 */

int __fastcall FUN_1000df50(char *param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  
  FUN_10017e12();
  iVar1 = 0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    iVar1 = (int)*param_1 + iVar1 * 0x1003f;
    param_1 = param_1 + 1;
    cVar2 = *param_1;
  }
  return iVar1;
}



/* Function: FUN_1000e030 */

void __fastcall
FUN_1000e030(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x108,0x65,0x2de3bdc6,0x7bfff4f);
  (*pcVar1)(param_12,param_2,0,param_5,param_3,param_7);
  return;
}



/* Function: FUN_1000e10b */

undefined4 __cdecl FUN_1000e10b(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  
  FUN_10017e12();
  pvVar1 = (void *)FUN_10017f68(0x25,(void *)0x2c);
  DAT_1001fa08 = pvVar1;
  if (pvVar1 != (void *)0x0) {
    iVar2 = *(int *)((int)pvVar1 + 8);
    *(undefined **)((int)pvVar1 + 0x28) = &DAT_1001f000;
    *(undefined **)((int)pvVar1 + 0x24) = &DAT_1001f000;
    *(undefined4 *)((int)pvVar1 + 0x10) = 0;
    while (*(int *)(&DAT_1001f000 + iVar2 * 8) != 0) {
      iVar2 = iVar2 + 1;
      *(int *)((int)pvVar1 + 8) = iVar2;
    }
    iVar2 = FUN_1001829c(param_1,0x35,0x2807,0x110f);
    if (iVar2 != 0) {
      return 1;
    }
    FUN_1000d4e0(DAT_1001fa08,0xd0,0x3dc4,0x573f);
  }
  return 0;
}



/* Function: FUN_1000e2b8 */

void __thiscall
FUN_1000e2b8(void *this,undefined param_1,undefined param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x315,0x43,0x90bdc3a8,0x75c56743);
  (*pcVar1)(param_4,0,this,0x28);
  return;
}



/* Function: FUN_1000e37d */

void __cdecl
FUN_1000e37d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  FUN_10017e12();
  uVar4 = 0;
  uVar5 = 0;
  uVar2 = 0x4667e7;
  uVar3 = 0x16367c;
  uVar6 = 0x34c;
  uVar7 = 0x71fd;
  uVar8 = 0x1c8c;
  uVar9 = 0x2078;
  pcVar1 = (code *)FUN_10007d5b(0x77,extraout_ECX,0x2de3bdc6,0xd65c574b);
  (*pcVar1)(param_1,param_4,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  return;
}



/* Function: FUN_1000e438 */

char * __fastcall FUN_1000e438(short *param_1,int param_2,int param_3,int param_4,int param_5)

{
  short *psVar1;
  char *pcVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  char *pcVar11;
  short *psVar12;
  
  iVar9 = 0;
  pcVar2 = (char *)(param_4 + param_3);
  pcVar6 = (char *)(param_3 + 1);
  uVar7 = (uint)CONCAT11(*(undefined *)param_1,*(undefined *)((int)param_1 + 1));
  psVar1 = (short *)((int)param_1 + param_2) + -1;
  pcVar11 = pcVar6;
  psVar12 = param_1;
  if (param_1 < psVar1) {
    do {
      uVar7 = uVar7 << 8 | (uint)*(byte *)(psVar12 + 1);
      uVar5 = ((uVar7 >> 5 ^ uVar7) >> 3) + uVar7 * -5 & 0xffff;
      psVar10 = (short *)(*(int *)(param_5 + uVar5 * 4) + (int)param_1);
      *(int *)(param_5 + uVar5 * 4) = (int)psVar12 - (int)param_1;
      puVar3 = (undefined *)((int)psVar12 + (-1 - (int)psVar10));
      if (((((int)puVar3 < 0x2000) && (param_1 < psVar10)) &&
          (*(char *)(psVar10 + 1) == *(char *)(psVar12 + 1))) && (*psVar10 == *psVar12)) {
        uVar5 = (int)psVar1 - (int)psVar12;
        if (0x108 < uVar5) {
          uVar5 = 0x108;
        }
        uVar8 = 2;
        if ((pcVar2 <= pcVar11 + 4) && (pcVar2 <= pcVar11 + (4 - (uint)(iVar9 == 0))))
        goto LAB_1000e68b;
        pcVar11[-1 - iVar9] = (char)iVar9 + -1;
        pcVar11 = pcVar11 + -(uint)(iVar9 == 0);
        if ((uVar5 < 0x11) ||
           (((((uVar8 = 3, *(char *)((int)psVar10 + 3) == *(char *)((int)psVar12 + 3) &&
               (uVar8 = 4, *(char *)(psVar10 + 2) == *(char *)(psVar12 + 2))) &&
              ((uVar8 = 5, *(char *)((int)psVar10 + 5) == *(char *)((int)psVar12 + 5) &&
               (((uVar8 = 6, *(char *)(psVar10 + 3) == *(char *)(psVar12 + 3) &&
                 (uVar8 = 7, *(char *)((int)psVar10 + 7) == *(char *)((int)psVar12 + 7))) &&
                (uVar8 = 8, *(char *)(psVar10 + 4) == *(char *)(psVar12 + 4))))))) &&
             ((uVar8 = 9, *(char *)((int)psVar10 + 9) == *(char *)((int)psVar12 + 9) &&
              (uVar8 = 10, *(char *)(psVar10 + 5) == *(char *)(psVar12 + 5))))) &&
            ((uVar8 = 0xb, *(char *)((int)psVar10 + 0xb) == *(char *)((int)psVar12 + 0xb) &&
             (((uVar8 = 0xc, *(char *)(psVar10 + 6) == *(char *)(psVar12 + 6) &&
               (uVar8 = 0xd, *(char *)((int)psVar10 + 0xd) == *(char *)((int)psVar12 + 0xd))) &&
              ((uVar8 = 0xe, *(char *)(psVar10 + 7) == *(char *)(psVar12 + 7) &&
               ((((uVar8 = 0xf, *(char *)((int)psVar10 + 0xf) == *(char *)((int)psVar12 + 0xf) &&
                  (uVar8 = 0x10, *(char *)(psVar10 + 8) == *(char *)(psVar12 + 8))) &&
                 (uVar8 = 0x11, *(char *)((int)psVar10 + 0x11) == *(char *)((int)psVar12 + 0x11)))
                && (uVar8 = 0x12, *(char *)(psVar10 + 9) == *(char *)(psVar12 + 9))))))))))))) {
          pcVar6 = (char *)(uVar8 + (int)psVar12);
          do {
            uVar8 = uVar8 + 1;
            pcVar6 = pcVar6 + 1;
            if (uVar5 <= uVar8) break;
          } while (pcVar6[(int)psVar10 - (int)psVar12] == *pcVar6);
        }
        cVar4 = (char)((uint)puVar3 >> 8);
        if (uVar8 - 2 < 7) {
          *pcVar11 = cVar4 + (char)(uVar8 - 2) * ' ';
          pcVar11 = pcVar11 + 1;
        }
        else {
          *pcVar11 = cVar4 + -0x20;
          pcVar11[1] = (char)uVar8 + -9;
          pcVar11 = pcVar11 + 2;
        }
        *pcVar11 = (char)puVar3;
        psVar12 = (short *)((int)psVar12 + uVar8);
        iVar9 = 0;
        pcVar6 = pcVar11 + 2;
        if (psVar1 <= psVar12) break;
      }
      else {
        if (pcVar2 <= pcVar11) goto LAB_1000e68b;
        iVar9 = iVar9 + 1;
        *pcVar11 = *(char *)psVar12;
        pcVar6 = pcVar11 + 1;
        psVar12 = (short *)((int)psVar12 + 1);
        if (iVar9 == 0x20) {
          pcVar11[-0x20] = '\x1f';
          iVar9 = 0;
          pcVar6 = pcVar11 + 2;
        }
      }
      pcVar11 = pcVar6;
    } while (psVar12 < psVar1);
  }
  if (pcVar2 < pcVar6 + 3) {
LAB_1000e68b:
    pcVar11 = (char *)0x0;
  }
  else {
    while (pcVar11 = pcVar6, psVar12 < (short *)((int)param_1 + param_2)) {
      iVar9 = iVar9 + 1;
      *pcVar11 = *(char *)psVar12;
      psVar12 = (short *)((int)psVar12 + 1);
      pcVar6 = pcVar11 + 1;
      if (iVar9 == 0x20) {
        pcVar11[-0x20] = '\x1f';
        iVar9 = 0;
        pcVar6 = pcVar11 + 2;
      }
    }
    pcVar11[-1 - iVar9] = (char)iVar9 + -1;
    pcVar11 = pcVar11 + (-param_3 - (uint)(iVar9 == 0));
  }
  return pcVar11;
}



/* Function: FUN_1000e6f1 */

undefined4 FUN_1000e6f1(int param_1)

{
  int iVar1;
  undefined *puVar2;
  code *pcVar3;
  
  iVar1 = (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x28),1,0);
  if (iVar1 != 0) {
    puVar2 = FUN_1000d126(0x6be8,0x363d);
    pcVar3 = (code *)FUN_1000f5bb(0xb50,*(int *)(param_1 + 0x28),0xbae,0x2474,puVar2);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)();
    }
    FUN_10007c8f(0x2258);
  }
  return 0;
}



/* Function: FUN_1000e832 */

void __fastcall
FUN_1000e832(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x1eb,0x1d,0x2de3bdc6,0xab7e15f9);
  (*pcVar1)(param_2,param_8,param_9,param_4,0);
  return;
}



/* Function: FUN_1000e923 */

void __fastcall FUN_1000e923(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = 0x55ae;
  uVar5 = 0x65ce;
  uVar2 = 0x4d85;
  uVar3 = 21000;
  pcVar1 = (code *)FUN_10007d5b(0x9d,param_1,0x90bdc3a8,0x7ad76640);
  (*pcVar1)(uVar2,uVar3,uVar4,uVar5);
  return;
}



/* Function: FUN_1000e9b1 */

void __fastcall FUN_1000e9b1(int param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  ushort *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined *extraout_ECX;
  undefined *puVar7;
  undefined *extraout_ECX_00;
  undefined *extraout_ECX_01;
  undefined *extraout_ECX_02;
  undefined *extraout_ECX_03;
  undefined *extraout_ECX_04;
  undefined *extraout_ECX_05;
  undefined *extraout_ECX_06;
  int iVar8;
  uint uVar9;
  undefined uVar10;
  void *local_630;
  void *local_62c;
  undefined4 local_628;
  int local_624;
  int local_620;
  undefined local_61c [520];
  undefined local_414 [520];
  undefined local_20c [524];
  
  iVar8 = 0x293db263;
  uVar2 = FUN_10006829(0xd);
  puVar7 = extraout_ECX;
  puVar5 = param_2;
  puVar6 = param_2;
LAB_1000f206:
  do {
    if (iVar8 < 0x24f24b0b) {
      if (iVar8 == 0x24f24b0a) {
        puVar7 = local_61c;
        puVar4 = FUN_10001c78(param_1,param_2,(uint *)&DAT_1001f470,puVar7);
        uVar9 = -(uint)(puVar4 != (undefined *)0x0) & 0xe9ff6217;
      }
      else {
        if (iVar8 != 0x648e80e) {
          if (iVar8 == 0xd8d8cc1) {
            puVar3 = FUN_1000732d(0x4e54,(uint *)&DAT_1001f400,0x343);
            FUN_10013b36(0x1602,0x3d65,0x104,0x7483,local_414,puVar3,0x770a,puVar5,local_61c);
            puVar7 = (undefined *)0x5f0b;
            FUN_10007c8f(0x5f0b);
            iVar8 = 0x31ee0696;
          }
          else if (iVar8 == 0x18342734) {
            bVar1 = FUN_100128ae(&local_628,0x74a5,0x3f46,(int *)&local_630);
            iVar8 = (-(uint)(CONCAT31(extraout_var,bVar1) != 0) & 0x1bc1631) + 0x2b44b55b;
            puVar7 = extraout_ECX_00;
          }
          else {
            if (iVar8 != 0x1adb5c5d) {
              if (iVar8 == 0x1c4985f7) {
                FUN_1000d4e0(puVar6,0xa8,0x4cf,0x43f3);
                return;
              }
              if (iVar8 == 0x1e9ba659) {
                puVar6[0xb] = param_1;
                puVar6[3] = DAT_1001fa00;
                DAT_1001fa00 = puVar6;
                return;
              }
              goto LAB_1000f577;
            }
            puVar7 = (undefined *)0x5efe;
            FUN_1000d4e0(puVar5,0xff,0x6720,0x5efe);
            iVar8 = 0x36232de3;
          }
          goto LAB_1000f206;
        }
        local_624 = FUN_10006750();
        uVar10 = 0x5a;
        iVar8 = FUN_1000dead(local_624,0x525a);
        local_620 = iVar8 * 2 + 2;
        iVar8 = FUN_10018e99(0x4880,&local_628,0x100000,uVar10,0x4754,0x68b9,uVar10,0x1caf,uVar2,
                             0x33a6,0x7081,uVar2,uVar2);
        uVar9 = -(uint)(iVar8 != 0) & 0xfbeaa13d;
        puVar7 = extraout_ECX_01;
      }
      iVar8 = uVar9 + 0x1c4985f7;
      goto LAB_1000f206;
    }
    if (iVar8 == 0x293db263) {
      puVar6 = (undefined4 *)FUN_10017f68(puVar7,(void *)0x30);
      if (puVar6 != (undefined4 *)0x0) {
        FUN_100145b5(0x62c6,local_20c,0xdd9,0x29,0x2683,(char)extraout_ECX_05,0x32ae);
        iVar8 = 0x24f24b0a;
        puVar7 = extraout_ECX_06;
        goto LAB_1000f206;
      }
      iVar8 = 0x11882d9;
      puVar7 = extraout_ECX_05;
    }
    else {
      if (iVar8 == 0x2b44b55b) {
        FUN_10002ec6(local_628,0x4e,0x227,0xa5a,0x7151);
        iVar8 = 0x1e9ba659;
        puVar7 = extraout_ECX_04;
        goto LAB_1000f206;
      }
      if (iVar8 == 0x2d00cb8c) {
        puVar5 = (undefined4 *)FUN_100119df(local_62c,0x2c63,local_630,0x2c4c);
        iVar8 = 0x36232de3;
        puVar7 = extraout_ECX_03;
        if (puVar5 != (undefined4 *)0x0) {
          iVar8 = 0xd8d8cc1;
        }
        goto LAB_1000f206;
      }
      if (iVar8 == 0x31ee0696) {
        FUN_10012c99(0,0x169e,(undefined4 *)0x0);
        iVar8 = 0x1adb5c5d;
        puVar7 = extraout_ECX_02;
        goto LAB_1000f206;
      }
      if (iVar8 == 0x36232de3) {
        puVar7 = (undefined *)0x1626;
        FUN_1000d4e0(local_630,0xb3,0x1703,0x1626);
        iVar8 = 0x2b44b55b;
        goto LAB_1000f206;
      }
    }
LAB_1000f577:
    if (iVar8 == 0x11882d9) {
      return;
    }
  } while( true );
}



/* Function: FUN_1000f5ab */

undefined4 FUN_1000f5ab(void)

{
  return *(undefined4 *)(DAT_1001fa14 + 8);
}



/* Function: FUN_1000f5b4 */

void FUN_1000f5b4(void)

{
  FUN_1000bdb2(0);
  return;
}



/* Function: FUN_1000f5bb */

uint __fastcall
FUN_1000f5bb(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  FUN_10017e12();
  uVar7 = 0;
  iVar1 = *(int *)(param_2 + 0x3c);
  uVar6 = *(int *)(iVar1 + 0x78 + param_2) + param_2;
  iVar2 = *(int *)(uVar6 + 0x1c);
  iVar3 = *(int *)(uVar6 + 0x20);
  iVar4 = *(int *)(uVar6 + 0x24);
  if (*(int *)(uVar6 + 0x18) != 0) {
    do {
      iVar5 = FUN_10004362((void *)(*(int *)(iVar3 + param_2 + uVar7 * 4) + param_2),0x7cbb,0x11ca,
                           0x6f8b,param_5);
      if (iVar5 == 0) {
        uVar7 = *(int *)(iVar2 + param_2 + (uint)*(ushort *)(iVar4 + param_2 + uVar7 * 2) * 4) +
                param_2;
        if (uVar7 < uVar6) {
          return uVar7;
        }
        if (*(int *)(iVar1 + 0x7c + param_2) + uVar6 <= uVar7) {
          return uVar7;
        }
        return 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(uVar6 + 0x18));
  }
  return 0;
}



/* Function: FUN_1000f70c */

undefined4 __fastcall
FUN_1000f70c(undefined4 param_1,int param_2,undefined4 param_3,int **param_4,undefined4 *param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  uint uVar3;
  int iVar4;
  undefined extraout_CL;
  undefined4 extraout_ECX;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_stack_00000024;
  void *local_144;
  int local_140;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  ushort *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = param_2;
  FUN_10017e12();
  local_8 = 0x799819;
  local_4 = 0;
  local_14 = 0;
  local_c = (ushort *)0x0;
  iVar7 = 0x2d9a82ff;
  local_144 = (void *)0x0;
  uVar6 = 0;
  iVar4 = local_10;
LAB_100102e4:
  do {
    if (iVar7 < 0x2c6b8f0c) {
      if (iVar7 == 0x2c6b8f0b) {
        local_1c = FUN_10005def(local_144,0,local_144,local_144,0x747f,0x723f,0x3975,0x756a);
        iVar7 = 0x9e59917;
        if (local_1c != 0) {
          iVar7 = 0x33d73af;
        }
        FUN_1000d4e0(local_144,0x62,0x4ba0,0xb95);
      }
      else {
        if (iVar7 == 0x33d73af) {
          local_140 = FUN_10002b4f(0x76f3,0x62c4,(char)local_144,in_stack_00000024,0x5b4,local_1c,
                                   local_10,3,0x32bd,(char)local_144,0x65b6);
          iVar7 = 0x348b7432;
          if (local_140 != 0) {
            iVar7 = 0x34d5c637;
          }
          goto LAB_100102e4;
        }
        if (iVar7 == 0x3d2dbc7) {
          uVar3 = FUN_10001a12(iVar4);
          iVar7 = 0x323f3667;
          if (uVar3 == 200) {
            iVar7 = 0x22ad7f21;
          }
          goto LAB_100102e4;
        }
        if (iVar7 == 0x181cbda0) {
          local_14 = 0x200;
          this = (void *)FUN_10017f68(0x200,(void *)0x200);
          if (this != (void *)0x0) {
            iVar7 = FUN_1000afb0(this,0x5081,0x4dd7,extraout_CL,0x148f,&local_14);
            if (iVar7 == 0) {
              local_144 = (void *)FUN_1000768c(this,0,0x67c8,0x7b9e,0x1148,0x29f1);
            }
            FUN_1000d4e0(this,7,0xb5a,0x1fc0);
          }
          iVar7 = 0x2c6b8f0b;
          goto LAB_100102e4;
        }
        if (iVar7 == 0x22ad7f21) {
          iVar2 = FUN_100068b9(iVar4,param_4);
          iVar7 = 0x323f3667;
          if (iVar2 != 0) {
            uVar6 = 1;
          }
          goto LAB_100102e4;
        }
        if (iVar7 == 0x23601ee4) {
          if (param_5 == (undefined4 *)0x0) {
            uVar1 = 0;
            uVar5 = 0;
          }
          else {
            uVar1 = param_5[1];
            uVar5 = *param_5;
          }
          iVar7 = FUN_1000a35e(0x6dfb,uVar5,0x7624,iVar4,0x4322,param_7,0x43ba,0x52df,uVar1);
          iVar7 = (-(uint)(iVar7 != 0) & 0xd193a560) + 0x323f3667;
          goto LAB_100102e4;
        }
      }
    }
    else {
      if (iVar7 != 0x2d9a82ff) {
        if (iVar7 == 0x323f3667) {
          FUN_10018cfc(iVar4,99,0x7a3c,0x535d,0x371e);
        }
        else {
          if (iVar7 == 0x32d7f1b3) {
            FUN_10018cfc(local_140,0xb4,0x4530,0x4952,0x31b);
            iVar7 = 0x348b7432;
            goto LAB_100102e4;
          }
          if (iVar7 == 0x348b7432) {
            FUN_10018cfc(local_1c,0xd9,0x3fe6,0x1594,0xa7a);
            return uVar6;
          }
          if (iVar7 != 0x34d5c637) goto LAB_100106ec;
          if (param_5 != (undefined4 *)0x0) {
            local_c = FUN_1000732d(0x7307,(uint *)&DAT_1001f4c0,0x64ce);
          }
          iVar4 = FUN_1000b283(0x5c18,0x844cc300,local_c,0x7505,0x1cf0,local_140,0x844cc300,
                               0x844cc300,0x3639,0,0x6b8d,param_3);
          FUN_10007c8f(0x1ced);
          if (iVar4 != 0) {
            local_18 = 1;
            local_18 = FUN_100024e4(extraout_ECX,iVar4,0x605b,&local_18,0x60c5,(char)extraout_ECX,
                                    0x6fdb);
            iVar7 = 0x23601ee4;
            goto LAB_100102e4;
          }
        }
        iVar7 = 0x32d7f1b3;
        goto LAB_100102e4;
      }
      iVar7 = 0x181cbda0;
    }
LAB_100106ec:
    if (iVar7 == 0x9e59917) {
      return uVar6;
    }
  } while( true );
}



/* Function: FUN_10010731 */

bool __cdecl FUN_10010731(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined local_24 [36];
  
  FUN_10017e12();
  iVar1 = 0xfb76a1f;
LAB_1001097f:
  do {
    if (iVar1 == 0x4c65820) {
      iVar1 = FUN_10017f68(0x4c65820,(void *)param_3[1]);
      *param_3 = iVar1;
      if (iVar1 != 0) {
        iVar1 = 0x1b863ce0;
        goto LAB_1001097f;
      }
      iVar1 = 0x2d3a6140;
    }
    else {
      if (iVar1 == 0xbbe38f6) {
        FUN_10012199((int)local_24);
        iVar1 = 0x20c391cc;
        goto LAB_1001097f;
      }
      if (iVar1 == 0xfb76a1f) {
        *param_3 = 0;
        param_3[1] = 0;
        iVar1 = 0x1542898e;
        goto LAB_1001097f;
      }
      if (iVar1 == 0x1542898e) {
        iVar1 = FUN_100071e5(param_1);
        param_3[1] = iVar1;
        uVar2 = FUN_10007cff((void *)0x1000,0x400);
        param_3[1] = param_3[1] + uVar2;
        iVar1 = 0x4c65820;
        goto LAB_1001097f;
      }
      if (iVar1 == 0x1b863ce0) {
        FUN_10007c63(0x74c9,0x5702,(int)local_24);
        iVar1 = 0xbbe38f6;
        goto LAB_1001097f;
      }
      if (iVar1 == 0x20c391cc) {
        FUN_1001792e((int)local_24,0x730c,(undefined4 *)(param_1 + 4));
        goto LAB_100109dc;
      }
    }
    if (iVar1 == 0x2d3a6140) {
LAB_100109dc:
      return *param_3 != 0;
    }
  } while( true );
}



/* Function: FUN_10010abe */

void FUN_10010abe(void)

{
  int iVar1;
  
  for (iVar1 = DAT_1001fa00; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    if (*(int *)(iVar1 + 0x28) != 0) {
      (**(code **)(iVar1 + 0x14))(*(undefined4 *)(iVar1 + 0x28),0xb,0);
    }
  }
  FUN_1000bdb2(0xffffffff);
  return;
}



/* Function: FUN_10010ae7 */

undefined4 FUN_10010ae7(void)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0x7b81;
  local_8 = 0x606;
  local_10 = 0x7861;
  local_14 = 0;
  FUN_1000a074(&local_14,0x7861,FUN_1000bac3);
  return local_14;
}



/* Function: FUN_10010b83 */

/* WARNING: Removing unreachable block (ram,0x1001101b) */

undefined4 FUN_10010b83(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  uint *extraout_ECX_01;
  longlong lVar4;
  uint local_24c;
  int local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined local_234 [16];
  uint local_224;
  int local_220;
  undefined local_20c [524];
  
  local_244 = 0x665483;
  local_240 = 0x30d408;
  local_23c = 0x2c0f4d;
  local_238 = 0;
  iVar1 = 0x1a64;
  puVar3 = (uint *)0x27;
  iVar2 = 0x3214b3dd;
  do {
    while (iVar2 == 0x8507359) {
      puVar3 = &local_24c;
      FUN_10006679(0x41e5,puVar3);
      iVar2 = 0x1ade8c6a;
LAB_10010fec:
      if (iVar2 == 0x2d8ee0d8) {
        return 0;
      }
    }
    if (iVar2 == 0x15b09d83) {
      iVar2 = FUN_1000451a(0x4f06,0x39a0,local_234,puVar3,iVar1);
      iVar2 = (-(uint)(iVar2 != 0) & 0xdac19281) + 0x2d8ee0d8;
      FUN_10002ec6(iVar1,0x60,0x4873,0x154c,0x2602);
      puVar3 = extraout_ECX_01;
      goto LAB_10010fec;
    }
    if (iVar2 == 0x1ade8c6a) {
      lVar4 = FUN_100125d7();
      if (CONCAT44((local_248 - local_220) - (uint)(local_24c < local_224),local_24c - local_224) <
          lVar4) {
        return 0;
      }
      return 1;
    }
    if (iVar2 == 0x1de42461) {
      iVar2 = FUN_1000d67e(0x69e0,(char)puVar3,0x1b74);
      if (iVar2 == 0) {
        return 0;
      }
      puVar3 = extraout_ECX_00;
      iVar2 = 0x25be3dd4;
    }
    else if (iVar2 == 0x25be3dd4) {
      iVar1 = FUN_1000d00e(local_20c,0x80,0x7b0f,0x54c8,1,puVar3,0,0x2ba,0x6b29,(char)puVar3,0x2c97,
                           3,0x600f,0x5629);
      puVar3 = extraout_ECX;
      iVar2 = 0x15b09d83;
      if (iVar1 == -1) {
        return 0;
      }
    }
    else {
      if (iVar2 != 0x3214b3dd) goto LAB_10010fec;
      iVar2 = 0x1de42461;
    }
  } while( true );
}



/* Function: FUN_1001102f */

void __thiscall
FUN_1001102f(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined param_7,undefined4 param_8,undefined param_9,
            undefined param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x88,extraout_ECX,0x2de3bdc6,0x3a66735d);
  (*pcVar1)(param_11,0,0x30,3,param_5,0x20000,this,param_4,0,0);
  return;
}



/* Function: FUN_10011115 */

bool __fastcall FUN_10011115(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_10013f83(0xcb5,*(undefined4 *)(DAT_1001fa18 + 0xc),param_2,0x4554);
  return iVar1 != 0x102;
}



/* Function: FUN_10011194 */

void __thiscall FUN_10011194(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x1f1,extraout_ECX,0x90bdc3a8,0x6e219a76);
  (*pcVar1)(param_2,0,this);
  return;
}



/* Function: FUN_10011248 */

bool __fastcall FUN_10011248(int *param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int *extraout_ECX;
  int *piVar4;
  void *pvVar5;
  uint uVar6;
  void *pvVar7;
  void *local_14;
  void *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_10017e12();
  local_4 = 0;
  local_14 = (void *)0x0;
  local_c = 0xf18b4;
  uVar6 = 0x94088e8;
  local_8 = 0x35031a;
  piVar4 = extraout_ECX;
  pvVar2 = local_10;
  pvVar5 = local_10;
LAB_100115c9:
  do {
    if (uVar6 < 0x109adb2a) {
      if (uVar6 == 0x109adb29) {
        FUN_1000d4e0(pvVar2,0xa8,0x7704,0x5460);
        uVar6 = 0x60d8743;
        piVar4 = param_1;
        goto LAB_100115c9;
      }
      pvVar1 = local_14;
      if (uVar6 == 0x60d8743) goto joined_r0x1001178f;
      if (uVar6 == 0x94088e8) {
        uVar6 = 0x1498193b;
        goto LAB_100115c9;
      }
      if (uVar6 == 0x9821cf4) {
        pvVar5 = (void *)0x0;
        for (; pvVar1 != (void *)0x0; pvVar1 = *(void **)((int)pvVar1 + 0x210)) {
          FUN_100041ef((void *)((int)pvVar5 * 2 + (int)pvVar2),pvVar1,0x4353,0x2af6);
          iVar3 = FUN_1000dead(pvVar1,0x5fc3);
          *(undefined2 *)((int)pvVar2 + ((int)pvVar5 + iVar3) * 2) = 0x2c;
          pvVar5 = (void *)((int)pvVar5 + iVar3 + 1);
          piVar4 = param_1;
        }
        uVar6 = 0x2d867b5e;
        goto LAB_100115c9;
      }
      if (uVar6 == 0xf75b390) {
        pvVar2 = (void *)FUN_10017f68(piVar4,(void *)((int)local_10 * 2));
        uVar6 = 0x60d8743;
        piVar4 = param_1;
        if (pvVar2 != (void *)0x0) {
          uVar6 = 0x9821cf4;
        }
        goto LAB_100115c9;
      }
    }
    else if (uVar6 == 0x1498193b) {
      FUN_1000a074(&local_14,0x259e,&LAB_1000d8c1);
      uVar6 = 0x1b498ce9;
      piVar4 = param_1;
    }
    else {
      if (uVar6 == 0x1b498ce9) {
        pvVar7 = (void *)0x0;
        local_10 = (void *)0x0;
        for (pvVar1 = local_14; pvVar1 != (void *)0x0; pvVar1 = *(void **)((int)pvVar1 + 0x210)) {
          iVar3 = FUN_1000dead(pvVar1,0x2b10);
          pvVar7 = (void *)((int)pvVar7 + iVar3 + 1);
          piVar4 = param_1;
        }
        uVar6 = 0xf75b390;
        local_10 = pvVar7;
        goto LAB_100115c9;
      }
      if (uVar6 == 0x2d867b5e) {
        piVar4[1] = 0;
        iVar3 = FUN_10002f65(0x4e9f,(void **)(piVar4 + 1),0xfde9,pvVar2,(int)pvVar5 + -1,0x2c9f,
                             0x5bc4);
        uVar6 = 0x109adb29;
        *param_1 = iVar3;
        piVar4 = param_1;
        goto LAB_100115c9;
      }
    }
  } while (uVar6 != 0x87b662a);
LAB_100117b2:
  return *param_1 != 0;
joined_r0x1001178f:
  while (pvVar1 != (void *)0x0) {
    pvVar5 = *(void **)((int)pvVar1 + 0x210);
    FUN_1000d4e0(pvVar1,0xa3,0x53c1,0x7b50);
    pvVar1 = pvVar5;
  }
  goto LAB_100117b2;
}



/* Function: FUN_100117c5 */

void FUN_100117c5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  void *this;
  undefined4 in_EDX;
  
  FUN_10017e12();
  FUN_10004468(this,0x5668,(char)this,0x265,in_EDX);
  return;
}



/* Function: FUN_10011856 */

void __fastcall
FUN_10011856(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_10017e12();
  uVar3 = 0;
  uVar2 = 0x6d16ad;
  uVar4 = 0x37b7;
  uVar6 = 0x1468;
  uVar5 = 0x5863;
  pcVar1 = (code *)FUN_10007d5b(0x266,0x1dcf,0x90bdc3a8,0xf290b199);
  (*pcVar1)(param_3,uVar2,uVar3,uVar4,uVar5,uVar6);
  return;
}



/* Function: FUN_1001190e */

void __fastcall
FUN_1001190e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x13d,0x7e,0x2de3bdc6,0x378b43ea);
  (*pcVar1)(0,0,param_2);
  return;
}



/* Function: FUN_100119bc */

int __cdecl FUN_100119bc(int param_1)

{
  FUN_10017e12();
  return *(int *)(*(int *)(param_1 + 0x3c) + 0x28 + param_1) + param_1;
}



/* Function: FUN_100119df */

int __thiscall FUN_100119df(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_10017e12();
  local_8 = 0;
  local_4 = 0;
  local_10 = 0xd6b39;
  iVar3 = 0;
  local_c = 0x1ffc41;
  iVar2 = 0x2d4c0806;
LAB_10011c4d:
  do {
    while (iVar2 == 0xf779d6) {
      FUN_10017e13(param_2,&local_14,this,0x40000001,iVar3,0x1d03,0x52f0);
      iVar2 = 0x99c309b;
LAB_10011d0f:
      if (iVar2 == 0x99c309b) {
        return iVar3;
      }
    }
    if (iVar2 == 0x2c89c93) {
      iVar3 = FUN_10017f68(0x2c89c93,(void *)(local_14 * 2));
      if (iVar3 == 0) {
        return 0;
      }
      iVar2 = 0xf779d6;
      goto LAB_10011c4d;
    }
    if (iVar2 == 0x4161fe9) {
      iVar1 = FUN_10017e13(param_2,&local_14,this,0x40000001,0,0x3734,0x131c);
      iVar2 = 0x2c89c93;
      if (iVar1 == 0) {
        return iVar3;
      }
    }
    else {
      if (iVar2 != 0x2d4c0806) goto LAB_10011d0f;
      iVar2 = 0x4161fe9;
    }
  } while( true );
}



/* Function: FUN_10011d25 */

void __fastcall FUN_10011d25(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char local_150 [260];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_4c = 0x1ab76d;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  local_20 = 0x995;
  local_10 = 0x521c;
  local_1c = 0x681b;
  local_30 = 0x33f8;
  local_34 = 0x1e98;
  local_3c = 0x50a9;
  local_8 = 0x369b;
  local_38 = 0x5de4;
  local_24 = 0x3510;
  local_18 = 0x138b;
  local_28 = 0x63b5;
  local_14 = 0x2351;
  local_c = 0x4dba;
  local_2c = 0x9ac;
  pcVar4 = local_150;
  do {
    cVar1 = *param_1;
    if (cVar1 == '\0') {
LAB_10011edc:
      iVar2 = FUN_10011856(local_20,local_10,local_150,local_1c,local_30);
      if ((iVar2 != 0) ||
         (iVar2 = FUN_100175f7(local_34,local_150,local_3c,local_8,local_38), iVar2 != 0)) {
        uVar3 = FUN_1000df50(param_1 + 1,(char)local_24,local_18,local_28);
        FUN_10012794(local_14,iVar2,local_c,uVar3 ^ 0x5a80eae);
      }
      return;
    }
    if (cVar1 == '.') {
      *pcVar4 = '\0';
      goto LAB_10011edc;
    }
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
    param_1 = param_1 + 1;
  } while( true );
}



/* Function: FUN_10011f4e */

void __cdecl FUN_10011f4e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_10017e12();
  FUN_1001ce15(0x630d,param_2,0x2984,0x1273,0x6ce8);
  return;
}



/* Function: FUN_10011fe5 */

void __cdecl
FUN_10011fe5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_10017e12();
  uVar3 = 0;
  uVar2 = 0x66807a;
  uVar6 = 0x3cbd;
  uVar4 = 0x6681;
  uVar7 = 0x37db;
  uVar5 = 0x63de;
  pcVar1 = (code *)FUN_10007d5b(0x365,extraout_ECX,0x2de3bdc6,0x5d775e0f);
  (*pcVar1)(param_9,param_10,0,param_5,param_1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  return;
}



/* Function: FUN_100120be */

void __thiscall FUN_100120be(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x24a,0x18,0xcded05ce,0x3815d1d9);
  (*pcVar1)(param_1,param_2,this);
  return;
}



/* Function: FUN_10012199 */

void __cdecl FUN_10012199(int param_1)

{
  undefined4 extraout_EDX;
  
  FUN_10017e12();
  **(undefined4 **)(param_1 + 0x18) = extraout_EDX;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
  return;
}



/* Function: FUN_100121b8 */

undefined4 __cdecl FUN_100121b8(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined local_24 [36];
  
  FUN_10017e12();
  iVar2 = 0x3508dd08;
LAB_100122fc:
  do {
    if (iVar2 == 0x9999b31) {
      FUN_10007c63(0x4029,0x7c7e,(int)local_24);
      iVar2 = 0x35d96901;
    }
    else {
      if (iVar2 == 0x300af23f) {
        iVar2 = FUN_1000d0f6(param_1 + 2);
        if (iVar2 == 0) {
          return 0;
        }
        return 1;
      }
      if (iVar2 == 0x3508dd08) {
        iVar2 = 0x9999b31;
        goto LAB_100122fc;
      }
      if (iVar2 == 0x35d96901) {
        iVar1 = FUN_10002c2d((int)local_24,param_1);
        iVar2 = 0x300af23f;
        if (iVar1 == 0) {
          return 0;
        }
        goto LAB_100122fc;
      }
    }
    if (iVar2 == 0x12ce6f20) {
      return 0;
    }
  } while( true );
}



/* Function: FUN_10012393 */

void __fastcall FUN_10012393(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 local_4;
  
  local_4 = FUN_100010cf();
  uVar1 = FUN_100010cf();
  uVar3 = uVar1 % 0x10 + 8;
  uVar1 = FUN_100010cf();
  uVar1 = uVar1 % 0x10 + 8;
  puVar4 = param_1;
  if (uVar3 != 0) {
    puVar4 = (undefined4 *)((int)param_1 + uVar3 * 2);
    for (uVar2 = uVar3 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_1 = 0x2d002d;
      param_1 = param_1 + 1;
    }
    for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined2 *)param_1 = 0x2d;
      param_1 = (undefined4 *)((int)param_1 + 2);
    }
  }
  FUN_100139de(3,0x41bd,uVar1,&local_4,(int)puVar4);
  *(undefined2 *)((int)puVar4 + uVar1 * 2) = 0;
  return;
}



/* Function: FUN_100125d7 */

undefined8 FUN_100125d7(void)

{
  return 0x58028e44000;
}



/* Function: FUN_1001262b */

undefined4 FUN_1001262b(void)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = 0;
  local_c = 0x6f9f;
  local_8 = 0xf4a;
  local_14 = 0x4497;
  local_10 = 0x5e4b;
  uVar1 = FUN_1000ae23();
  FUN_1001787f(&local_18,uVar1,local_10);
  return local_18;
}



/* Function: FUN_100126c0 */

void __cdecl
FUN_100126c0(undefined4 param_1,undefined4 param_2,undefined param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x9a,0x66,0x2de3bdc6,0xf9fdea85);
  (*pcVar1)(param_1,0,0,param_5);
  return;
}



/* Function: FUN_10012794 */

char * __fastcall FUN_10012794(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  FUN_10017e12();
  uVar6 = 0;
  iVar1 = *(int *)(param_2 + 0x3c);
  pcVar8 = (char *)(*(int *)(iVar1 + 0x78 + param_2) + param_2);
  iVar2 = *(int *)(pcVar8 + 0x1c);
  iVar3 = *(int *)(pcVar8 + 0x20);
  iVar4 = *(int *)(pcVar8 + 0x24);
  if (*(int *)(pcVar8 + 0x18) != 0) {
    do {
      uVar5 = FUN_1000df50((char *)(*(int *)(iVar3 + param_2 + uVar6 * 4) + param_2),0x92,0x2f3d,
                           0x30ee);
      if ((uVar5 ^ 0x5a80eae) == param_4) {
        pcVar7 = (char *)(*(int *)(iVar2 + param_2 +
                                  (uint)*(ushort *)(iVar4 + param_2 + uVar6 * 2) * 4) + param_2);
        if (pcVar7 < pcVar8) {
          return pcVar7;
        }
        if (pcVar8 + *(int *)(iVar1 + 0x7c + param_2) <= pcVar7) {
          return pcVar7;
        }
        pcVar8 = (char *)FUN_10011d25(pcVar7);
        return pcVar8;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(pcVar8 + 0x18));
  }
  return (char *)0x0;
}



/* Function: FUN_100128ae */

bool __thiscall FUN_100128ae(void *this,undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined local_24 [36];
  
  FUN_10017e12();
  iVar1 = 0x2fd26e13;
LAB_10012a83:
  do {
    if (iVar1 == 0xd9b765c) {
      iVar2 = FUN_10017f68(0xd9b765c,(void *)param_3[1]);
      *param_3 = iVar2;
      iVar1 = 0x1ad598f0;
      if (iVar2 != 0) goto LAB_10012a83;
      iVar1 = 0x2c568903;
    }
    else {
      if (iVar1 == 0x1ad598f0) {
        FUN_10007c63(0x390b,0xe9,(int)local_24);
        iVar1 = 0x35c840db;
        goto LAB_10012a83;
      }
      if (iVar1 == 0x23160cef) {
        iVar1 = FUN_10006083((int)this);
        param_3[1] = iVar1;
        iVar1 = 0xd9b765c;
        goto LAB_10012a83;
      }
      if (iVar1 == 0x2fd26e13) {
        *param_3 = 0;
        param_3[1] = 0;
        iVar1 = 0x23160cef;
        goto LAB_10012a83;
      }
      if (iVar1 == 0x35c840db) {
        FUN_10012199((int)local_24);
        iVar1 = 0x363001f9;
        goto LAB_10012a83;
      }
      if (iVar1 == 0x363001f9) {
        FUN_1001792e((int)local_24,0x11ff,(undefined4 *)((int)this + 4));
        goto LAB_10012adc;
      }
    }
    if (iVar1 == 0x2c568903) {
LAB_10012adc:
      return *param_3 != 0;
    }
  } while( true );
}



/* Function: FUN_10012b98 */

void FUN_10012b98(void)

{
  uint uVar1;
  
  uVar1 = 0x379a8a90;
LAB_10012bb2:
  do {
    if (uVar1 < 0x1f775c78) {
      if (uVar1 == 0x1f775c77) {
        FUN_10004ccb((uint *)&DAT_1001f720,0);
        uVar1 = 0x1eb12525;
        goto LAB_10012bb2;
      }
      if (uVar1 == 0x4024269) {
        FUN_10004ccb((uint *)&DAT_1001f6c0,3);
        uVar1 = 0x2440893e;
        goto LAB_10012bb2;
      }
      if (uVar1 == 0x66a140d) {
        FUN_10004ccb((uint *)&DAT_1001f780,2);
        uVar1 = 0x4024269;
        goto LAB_10012bb2;
      }
      if (uVar1 == 0xe1cbd22) {
        FUN_10004ccb((uint *)&DAT_1001f760,6);
        uVar1 = 0x37073aea;
        goto LAB_10012bb2;
      }
      if (uVar1 == 0x1eb12525) {
        FUN_10004ccb((uint *)&DAT_1001f740,1);
        uVar1 = 0x66a140d;
        goto LAB_10012bb2;
      }
    }
    else if (uVar1 == 0x2440893e) {
      FUN_10004ccb((uint *)&DAT_1001f670,4);
      uVar1 = 0x37bf5983;
    }
    else {
      if (uVar1 == 0x37073aea) {
        FUN_10004ccb((uint *)&DAT_1001f6f0,7);
        return;
      }
      if (uVar1 == 0x379a8a90) {
        uVar1 = 0x1f775c77;
        goto LAB_10012bb2;
      }
      if (uVar1 == 0x37bf5983) {
        FUN_10004ccb((uint *)&DAT_1001f690,5);
        uVar1 = 0xe1cbd22;
        goto LAB_10012bb2;
      }
    }
    if (uVar1 == 0x5db8e45) {
      return;
    }
  } while( true );
}



/* Function: FUN_10012c99 */

undefined4 __cdecl FUN_10012c99(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  undefined4 in_stack_0000001c;
  undefined4 local_ac [17];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_10017e12();
  local_68 = 0x52237e;
  local_64 = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_2c = 0x23f4;
  local_1c = 0x3866;
  local_c = 0x711e;
  local_38 = 0xef4;
  local_18 = 0x1ee8;
  local_48 = 0x58c;
  local_24 = 0x2b34;
  local_14 = 0x7451;
  local_8 = 0x2f75;
  local_40 = 0x6da6;
  local_28 = 0x7216;
  local_20 = 0xa2e;
  local_44 = 0x6e9e;
  local_3c = 0x24f;
  local_34 = 0x426b;
  local_10 = 0x124f;
  local_30 = 0x63cd;
  FUN_1001391c(0x3866,0x711e,local_ac);
  local_ac[0] = 0x44;
  iVar1 = FUN_10013ea0(extraout_ECX,in_stack_0000001c,param_1,local_38,local_18,(char)extraout_ECX,
                       local_ac,&local_58,(char)extraout_ECX,local_48,local_24,local_14,in_ECX,
                       local_8);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_3 == (undefined4 *)0x0) {
      FUN_10002ec6(local_58,(char)local_40,local_28,local_20,local_44);
      FUN_10002ec6(local_54,(char)local_3c,local_34,local_10,local_30);
    }
    else {
      *param_3 = local_58;
      param_3[1] = local_54;
      param_3[2] = uStack_50;
      param_3[3] = uStack_4c;
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* Function: FUN_10012f1b */

undefined4 FUN_10012f1b(void)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  short *psVar5;
  undefined4 local_41c;
  undefined local_410 [520];
  undefined local_208 [520];
  
  uVar4 = 0x31881b13;
  local_41c = 0;
  iVar2 = 0;
  psVar5 = (short *)0x0;
  iVar1 = 0;
LAB_1001353d:
LAB_10013542:
  while (uVar4 < 0x2b832613) {
    if (uVar4 == 0x2b832612) {
      FUN_100075d7(iVar2,0xe9,0x1c47,0x7e3,0x2fb);
      return local_41c;
    }
    if (uVar4 == 0x171757) {
      FUN_100075d7(iVar1,0x76,0x1b8d,0x221b,0x5db2);
      uVar4 = 0x2b832612;
    }
    else if (uVar4 == 0xf21223a) {
      for (psVar5 = (short *)(DAT_1001fa14 + 0xc); *psVar5 != 0x5c; psVar5 = psVar5 + 1) {
      }
      psVar5 = psVar5 + 1;
      uVar4 = 0x3a368591;
    }
    else if (uVar4 == 0x1935a46b) {
      FUN_10016d11(iVar1,iVar2);
      uVar4 = 0x171757;
    }
    else {
      if (uVar4 != 0x23f23ddf) goto LAB_10013775;
      iVar1 = FUN_100049db(0x23f23ddf,psVar5,0x13d0,0x7910,0,0x4b35,0x10,2,2,0x459,0x40da,0x4a07,
                           psVar5,local_410,0x876,0x2dfe,iVar2,0x3961,0x18eb,0x5b32,0xd0a,0x71d6);
      uVar4 = 0x2b832612;
      if (iVar1 != 0) {
        local_41c = 1;
        uVar4 = 0x1935a46b;
      }
    }
  }
  if (uVar4 == 0x31881b13) {
    FUN_100145b5(0x2201,local_208,0x2309,0x29,0x6f2b,0x13,0x54af);
    uVar4 = 0x35f8b570;
  }
  else {
    if (uVar4 == 0x35f8b570) goto LAB_100136cf;
    if (uVar4 == 0x3a368591) {
      iVar2 = FUN_1001190e(0x3a368591,0xf003f,0x5f1d,0x1f30);
      if (iVar2 == 0) {
        return local_41c;
      }
      uVar4 = 0x23f23ddf;
      goto LAB_10013542;
    }
  }
LAB_10013775:
  if (uVar4 == 0x969fd10) {
    return local_41c;
  }
  goto LAB_10013542;
LAB_100136cf:
  puVar3 = FUN_1000732d(0x4e7b,(uint *)&DAT_1001f5c0,0xa78);
  FUN_10013b36(0x5de2,0x3190,0x104,0x57d9,local_410,puVar3,0x67a6,DAT_1001fa14 + 0xc,
               DAT_1001fa14 + 0x218);
  FUN_10007c8f(0x6367);
  uVar4 = 0xf21223a;
  goto LAB_1001353d;
}



/* Function: FUN_100137b2 */

void __thiscall FUN_100137b2(void *this,undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_10007d5b(0x68,7,0x90bdc3a8,0xf73b78b);
  (*pcVar1)(this,0,param_2);
  return;
}



/* Function: FUN_1001385b */

void __fastcall
FUN_1001385b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x2d2,0x32,0x90bdc3a8,0x3770b699);
  (*pcVar1)(param_2);
  return;
}



/* Function: FUN_1001391c */

void FUN_1001391c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  FUN_100117c5(0x17a7,0x7999,0x6621,0x6be7,extraout_ECX);
  return;
}



/* Function: FUN_100139de */

void __cdecl
FUN_100139de(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort auStack_80 [64];
  
  FUN_10017e12();
  uVar4 = 0;
  uVar3 = 0;
  if ((param_1 & 2) != 0) {
    uVar1 = 0x41;
    do {
      auStack_80[uVar3] = uVar1;
      uVar3 = uVar3 + 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x5b);
  }
  if ((param_1 & 1) != 0) {
    uVar1 = 0x61;
    do {
      auStack_80[uVar3] = uVar1;
      uVar3 = uVar3 + 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x7b);
  }
  uVar1 = 0x30;
  do {
    auStack_80[uVar3] = uVar1;
    uVar3 = uVar3 + 1;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x3a);
  if (param_3 != 0) {
    do {
      uVar2 = FUN_10011f4e(0x5681,param_4,0x11);
      *(ushort *)(param_5 + uVar4 * 2) = auStack_80[uVar2 % uVar3];
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  return;
}



/* Function: FUN_10013b36 */

void __cdecl
FUN_10013b36(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar2;
  
  FUN_10017e12();
  uVar2 = extraout_EDX;
  pcVar1 = (code *)FUN_10018202(extraout_ECX,0x8440e238,0x34c);
  (*pcVar1)(param_5,param_3,param_6,uVar2,param_9,param_8);
  return;
}



/* Function: FUN_10013b85 */

undefined4 __cdecl FUN_10013b85(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined local_24 [36];
  
  FUN_10017e12();
  iVar2 = 0x293497ad;
LAB_10013ccd:
  do {
    if (iVar2 == 0x47b5815) {
      FUN_10007c63(0x76b1,0x4451,(int)local_24);
      iVar2 = 0x35175312;
    }
    else {
      if (iVar2 == 0xaa1c7a4) {
        iVar2 = FUN_10002c2d((int)local_24,param_3 + 1);
        if (iVar2 == 0) {
          return 0;
        }
        return 1;
      }
      if (iVar2 == 0x293497ad) {
        iVar2 = 0x47b5815;
        goto LAB_10013ccd;
      }
      if (iVar2 == 0x35175312) {
        iVar1 = FUN_1000d0f6(param_3);
        iVar2 = 0xaa1c7a4;
        if (iVar1 == 0) {
          return 0;
        }
        goto LAB_10013ccd;
      }
    }
    if (iVar2 == 0x1a49ba42) {
      return 0;
    }
  } while( true );
}



/* Function: FUN_10013d64 */

void __fastcall FUN_10013d64(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_10017e12();
  iVar1 = 0x29b8c650;
LAB_10013e0d:
  do {
    if (iVar1 == 0x1099dc0) {
      if (DAT_1001fa00 != 0) {
        iVar1 = param_2[1];
        iVar2 = DAT_1001fa00;
        do {
          iVar1 = iVar1 + 4;
          param_2[1] = iVar1;
          iVar2 = *(int *)(iVar2 + 0xc);
        } while (iVar2 != 0);
      }
      iVar1 = 0x21dc9fad;
    }
    else {
      if (iVar1 == 0x1b590c01) {
        puVar3 = (undefined4 *)*param_2;
        for (iVar1 = DAT_1001fa00; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
          *puVar3 = *(undefined4 *)(iVar1 + 0x2c);
          puVar3 = puVar3 + 1;
        }
        return;
      }
      if (iVar1 == 0x21dc9fad) {
        iVar1 = FUN_10017f68(0x21dc9fad,(void *)param_2[1]);
        *param_2 = iVar1;
        if (iVar1 == 0) {
          return;
        }
        iVar1 = 0x1b590c01;
        goto LAB_10013e0d;
      }
      if (iVar1 == 0x29b8c650) {
        *param_2 = 0;
        param_2[1] = 0;
        iVar1 = 0x1099dc0;
        goto LAB_10013e0d;
      }
    }
    if (iVar1 == 0x228b3459) {
      return;
    }
  } while( true );
}



/* Function: FUN_10013ea0 */

void __fastcall
FUN_10013ea0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined param_6,undefined4 param_7,undefined4 param_8,
            undefined param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x240,extraout_ECX,0x90bdc3a8,0x835df74a);
  (*pcVar1)(param_3,param_2,0,0,param_13,0,0,0,param_7,param_8);
  return;
}



/* Function: FUN_10013f83 */

void __fastcall
FUN_10013f83(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x202,extraout_ECX,0x90bdc3a8,0x1fa51bb5);
  (*pcVar1)(param_2,param_3);
  return;
}



/* Function: FUN_10014032 */

undefined4 FUN_10014032(void)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined local_410 [520];
  undefined local_208 [520];
  
  uVar4 = 0;
  iVar1 = 0x2d5092a3;
LAB_100142f5:
  do {
    iVar3 = iVar1;
    if (iVar3 == 0xd45a7fe) {
      bVar2 = FUN_1000cd5c(0x72dc,local_208,0x5bb7,0x4567,local_410,0x1427);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        uVar4 = 1;
      }
      iVar3 = 0x25f94602;
    }
    else {
      if (iVar3 == 0x25f94602) {
        FUN_1000b350(0x572,0x135a,local_410);
        return uVar4;
      }
      if (iVar3 == 0x26510862) {
        FUN_1000d67e(0x1d09,0x62,0x510a);
        iVar1 = 0x35d0faf9;
        goto LAB_100142f5;
      }
      iVar1 = 0x26510862;
      if (iVar3 == 0x2d5092a3) goto LAB_100142f5;
      if (iVar3 == 0x35d0faf9) {
        uVar5 = 0x7d8c;
        FUN_1000732d(0x5bac,(uint *)&DAT_1001f640,0x7d8c);
        FUN_1001cf1c(uVar5,0x3fff,DAT_1001fa14 + 0xc,0x723b,0x33e7,local_410,DAT_1001fa14 + 0x218,
                     0x1767);
        FUN_10007c8f(0x56cf);
        iVar1 = 0xd45a7fe;
        goto LAB_100142f5;
      }
    }
    iVar1 = iVar3;
    if (iVar3 == 0x9cac259) {
      return uVar4;
    }
  } while( true );
}



/* Function: FUN_1001441a */

void __cdecl FUN_1001441a(undefined4 param_1)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_10017e12();
  uVar3 = 0;
  uVar4 = 0;
  uVar2 = 0x35ed98;
  uVar5 = 0x28c9;
  uVar8 = 0x70a;
  uVar6 = 0x41f2;
  uVar7 = 0x9f0;
  pcVar1 = (code *)FUN_10007d5b(0x3c,extraout_ECX,0x90bdc3a8,0xec4519b1);
  (*pcVar1)(param_1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  return;
}



/* Function: FUN_100144d4 */

void __cdecl
FUN_100144d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_10017e12();
  uVar2 = 0x698a;
  uVar3 = 0x3fe5;
  uVar4 = 0x5005;
  uVar5 = 0x1188;
  pcVar1 = (code *)FUN_10007d5b(0x244,0x56,0x90bdc3a8,0x83cdeda1);
  (*pcVar1)(param_4,param_1,uVar2,uVar3,uVar4,uVar5);
  return;
}



/* Function: FUN_100145b5 */

void __fastcall
FUN_100145b5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined param_6,undefined4 param_7)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x138,0x48,0xd24740bf,0x2a271ded);
  (*pcVar1)(0,param_4,0,0,param_2);
  return;
}



/* Function: FUN_10014676 */

void FUN_10014676(void)

{
  int iVar1;
  
  iVar1 = DAT_1001fa08;
  *(int *)(DAT_1001fa08 + 0x24) = *(int *)(DAT_1001fa08 + 0x24) + 8;
  if (**(int **)(iVar1 + 0x24) == 0) {
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + 0x28);
  }
  return;
}



/* Function: FUN_1001468f */

void __cdecl FUN_1001468f(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_10017e12();
  uVar3 = 0;
  uVar4 = 0;
  uVar2 = 0x4d3f2e;
  uVar7 = 0x4dd8;
  uVar5 = 0x6f;
  uVar6 = 0x722a;
  uVar8 = 0x5521;
  pcVar1 = (code *)FUN_10007d5b(0x14e,0x44,0xd24740bf,0x181b5eaf);
  (*pcVar1)(param_1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  return;
}



/* Function: FUN_1001473d */

void __cdecl FUN_1001473d(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  FUN_10017e12();
  uVar4 = 0;
  uVar5 = 0;
  uVar2 = 0x14fe2;
  uVar3 = 0xd6cfa;
  uVar7 = 0x48f5;
  uVar6 = 0x38ce;
  uVar8 = 0xbd4;
  uVar9 = 0x4cb9;
  pcVar1 = (code *)FUN_10007d5b(0x69,0x5f,0x90bdc3a8,0x1a80c7ff);
  (*pcVar1)(param_1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  return;
}



/* Function: FUN_10014815 */

void __cdecl
FUN_10014815(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  FUN_10017e12();
  uVar2 = extraout_ECX;
  pcVar1 = (code *)FUN_10018202(extraout_ECX,0xd9221bfd,0x168);
  (*pcVar1)(uVar2,param_1,param_3,param_7,param_2,param_4);
  return;
}



/* Function: FUN_10014861 */

int __fastcall
FUN_10014861(undefined4 param_1,void **param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined uVar8;
  int local_114;
  undefined4 local_8c;
  undefined *local_88;
  undefined *local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined local_6c [12];
  undefined local_60 [96];
  
  FUN_10017e12();
  local_74 = 0x4c5fad;
  local_70 = 0;
  iVar7 = 0x26aceb50;
  local_114 = 0;
  iVar1 = 0;
  puVar3 = local_88;
LAB_10014d1d:
  do {
    uVar8 = (undefined)iVar1;
    if (iVar7 < 0xf19b4b9) {
      if (iVar7 == 0xf19b4b8) {
        iVar1 = FUN_100126c0(*(undefined4 *)(DAT_1001fa04 + 0x24),0x718d,uVar8,0x5f4,&local_8c,
                             0x638a);
        iVar7 = (-(uint)(iVar1 != 0) & 0xf3a9d744) + 0x19dcbcf2;
        iVar1 = local_114;
        goto LAB_10014d1d;
      }
      if (iVar7 == 0x176c540) {
        local_80 = 0x6c;
        iVar1 = FUN_10004bbb((void *)0x1,*(undefined4 *)(DAT_1001fa04 + 8),&local_80,0x53ff,0x40,
                             0x3faf,0x6a29,*(undefined4 *)(DAT_1001fa04 + 0x40),0x6a03,local_6c);
        if (iVar1 == 0) {
          iVar7 = 0x314f59fa;
          iVar1 = local_114;
        }
        else {
          puVar5 = local_60 + 0x5f;
          puVar6 = puVar3;
          do {
            *puVar6 = *puVar5;
            puVar6 = puVar6 + 1;
            puVar5 = puVar5 + -1;
          } while (local_60 <= puVar5);
          iVar7 = 0x3aae482c;
          iVar1 = local_114;
        }
        goto LAB_10014d1d;
      }
      if (iVar7 == 0x7937f21) {
        uVar2 = param_4[1] + 1;
        if ((uVar2 & 0xf) != 0) {
          uVar2 = (uVar2 & 0xfffffff0) + 0x10;
        }
        param_2[1] = (void *)(uVar2 + 0x74);
        puVar3 = (undefined *)FUN_10017f68(iVar1,param_2[1]);
        *param_2 = puVar3;
        if (puVar3 == (undefined *)0x0) {
          return local_114;
        }
        local_84 = puVar3 + 0x74;
        iVar7 = 0xf19b4b8;
        local_78 = param_4[1];
        local_7c = (int)param_2[1] + -0x74;
        iVar1 = local_114;
        goto LAB_10014d1d;
      }
      if (iVar7 == 0xb607b1b) {
        iVar1 = FUN_1000d712(local_84,local_7c,0x79e,0x2ef1,uVar8,0x342b,uVar8,0x61f8,local_8c,
                             &local_78,0x7d1b,*(undefined4 *)(DAT_1001fa04 + 8));
        iVar7 = (-(uint)(iVar1 != 0) & 0xd0276b46) + 0x314f59fa;
        iVar1 = local_114;
        goto LAB_10014d1d;
      }
      if (iVar7 == 0xd869436) {
        FUN_1001b713(*param_4,0x78e7,local_84,(void *)param_4[1]);
        iVar7 = 0xb607b1b;
        iVar1 = local_114;
        goto LAB_10014d1d;
      }
    }
    else if (iVar7 == 0x19dcbcf2) {
      if (iVar1 == 0) {
        FUN_1000d4e0(*param_2,0xc6,0x55,0x266b);
        iVar1 = local_114;
      }
      iVar7 = 0x1c4d0a6a;
    }
    else {
      if (iVar7 == 0x26aceb50) {
        iVar7 = 0x7937f21;
        goto LAB_10014d1d;
      }
      if (iVar7 == 0x314f59fa) {
        FUN_1000b597(local_8c);
        iVar7 = 0x19dcbcf2;
        iVar1 = local_114;
        goto LAB_10014d1d;
      }
      if (iVar7 == 0x3aae482c) {
        local_88 = (undefined *)0x14;
        iVar4 = FUN_1000e832(0x5dd,local_8c,0x3e50,&local_88,0x47e4,uVar8,0x3f81,2,puVar3 + 0x60);
        iVar1 = local_114;
        if (iVar4 != 0) {
          iVar7 = 0x314f59fa;
          local_114 = 1;
          iVar1 = 1;
        }
        goto LAB_10014d1d;
      }
    }
    if (iVar7 == 0x1c4d0a6a) {
      return local_114;
    }
  } while( true );
}



/* Function: FUN_1001500e */

void __cdecl FUN_1001500e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_10017e12();
  uVar3 = 0;
  uVar2 = 0x5d1ee4;
  uVar4 = 0xb12;
  uVar5 = 0x68d;
  uVar6 = 0x57ee;
  uVar7 = 0x649f;
  pcVar1 = (code *)FUN_10007d5b(0x22c,extraout_ECX,0x5ebdb58a,0x77f0f4bc);
  (*pcVar1)(param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  return;
}



/* Function: FUN_100150ba */

undefined4 FUN_100150ba(void)

{
  return 4;
}



/* Function: FUN_100150be */

void __thiscall FUN_100150be(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(299,extraout_ECX,0x90bdc3a8,0xa1c15fa7);
  (*pcVar1)(param_1,param_3,this);
  return;
}



/* Function: FUN_10015165 */

void __fastcall
FUN_10015165(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x7e,0x69,0x90bdc3a8,0x408820de);
  (*pcVar1)(param_2);
  return;
}



/* Function: FUN_10015236 */

undefined4
FUN_10015236(undefined param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined extraout_CL;
  int iVar3;
  undefined4 local_48;
  undefined4 local_44 [2];
  ushort *local_3c;
  
  uVar1 = FUN_10017e12();
  iVar3 = 0x1ca4d61c;
  local_48 = uVar1;
LAB_10015631:
  do {
    if (iVar3 == 0xece62db) {
      FUN_1001391c(0xef9,0x5fe1,local_44);
      local_44[0] = 0x44;
      local_3c = FUN_1000732d(0x7021,(uint *)&DAT_1001f9e0,0x725c);
      uVar1 = FUN_1000bf72(0x3374,param_4,extraout_CL,0xae2,extraout_CL,0x611,0x2c7f,extraout_CL,
                           0x17ab,0x496d,0,0x146d,param_2,0x420,param_5,local_48,0xcd,0x551e,
                           local_44,0x768e);
      FUN_10007c8f(0x62f8);
      iVar3 = 0x1269f9a1;
    }
    else {
      if (iVar3 == 0x1269f9a1) {
        FUN_10006d08(0x6897,local_48,0x148c);
        return uVar1;
      }
      if (iVar3 == 0x1ca4d61c) {
        iVar3 = 0x303f8fc5;
        goto LAB_10015631;
      }
      if (iVar3 == 0x303f8fc5) {
        iVar2 = FUN_10016c50(&local_48,0x1cb0,0x4eb9,0x44ad,param_2);
        iVar3 = 0xece62db;
        if (iVar2 == 0) {
          return uVar1;
        }
        goto LAB_10015631;
      }
    }
    if (iVar3 == 0x155954c0) {
      return uVar1;
    }
  } while( true );
}



/* Function: FUN_10015792 */

bool FUN_10015792(void)

{
  ushort *puVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  bool bVar5;
  undefined uVar6;
  undefined4 uVar7;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined local_410 [520];
  undefined local_208 [520];
  
  local_41c = 0x4ab2f7;
  local_418 = 0;
  local_414 = 0;
  iVar4 = 0x2879cd6e;
  bVar5 = false;
  psVar3 = (short *)0x0;
LAB_10015d5b:
  do {
    if (iVar4 == 0x7c48e4f) {
      uVar7 = 0xdd7;
      iVar4 = FUN_1000dead(local_410,0xdd7);
      iVar4 = FUN_10011fe5(local_410,iVar4 * 2 + 2,uVar7,0x49fa,1,0x599d,0x1d03,0x4156,local_420,
                           psVar3);
      bVar5 = iVar4 == 0;
      iVar4 = 0xb0c6618;
    }
    else {
      if (iVar4 == 0xb0c6618) {
        FUN_1000aba1(0x7785,local_420,0x12d0,0x2b5a);
        return bVar5;
      }
      if (iVar4 == 0x1b2d4f16) {
        for (psVar3 = (short *)(DAT_1001fa14 + 0xc); *psVar3 != 0x5c; psVar3 = psVar3 + 1) {
        }
        psVar3 = psVar3 + 1;
        iVar4 = 0x352cabb7;
        goto LAB_10015d5b;
      }
      if (iVar4 == 0x2879cd6e) {
        FUN_100145b5(0x1f9a,local_208,0x4b5,0x29,0x53a5,0x5c,0x454d);
        iVar4 = 0x38a8c19c;
        goto LAB_10015d5b;
      }
      if (iVar4 == 0x352cabb7) {
        uVar7 = 0xe34;
        puVar1 = FUN_1000732d(0x11f8,(uint *)&DAT_1001f580,0xe34);
        uVar6 = (undefined)uVar7;
        iVar2 = FUN_1001cf66(uVar7,puVar1,2,0x49a6,uVar6,0x563e,uVar6,0x3108,uVar6,0x5d16,0x80000001
                             ,0x3071,&local_420,0x4645);
        iVar4 = 0x379722a;
        if (iVar2 == 0) {
          iVar4 = 0x7c48e4f;
        }
        FUN_10007c8f(0xdbe);
      }
      else if (iVar4 == 0x38a8c19c) {
        puVar1 = FUN_1000732d(0x3a13,(uint *)&DAT_1001f5c0,0x79a9);
        FUN_10013b36(0x1960,0x776c,0x104,0x1cca,local_410,puVar1,0x7998,DAT_1001fa14 + 0xc,
                     DAT_1001fa14 + 0x218);
        FUN_10007c8f(0x33c8);
        iVar4 = 0x1b2d4f16;
        goto LAB_10015d5b;
      }
    }
    if (iVar4 == 0x379722a) {
      return bVar5;
    }
  } while( true );
}



/* Function: FUN_10015fad */

void __fastcall
FUN_10015fad(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined param_4,
            undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x1dd,0x3b,0x90bdc3a8,0x295d0539);
  (*pcVar1)(param_2,0x104);
  return;
}



/* Function: FUN_10016092 */

void __cdecl FUN_10016092(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_10007d5b(0x1a2,0x6a,0x2de3bdc6,0xf8dd658);
  (*pcVar1)(param_2,0);
  return;
}



/* Function: FUN_1001614b */

undefined4
FUN_1001614b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_10017e12();
  local_10 = 0x38f783;
  local_c = 0x5e59e3;
  local_8 = 0x20bdd0;
  local_4 = 0;
  iVar3 = 0x1234cb48;
  uVar4 = 0;
  iVar1 = local_14;
LAB_10016344:
  do {
    while (iVar3 == 0x1234cb48) {
      iVar3 = 0x387a3419;
LAB_100163f5:
      if (iVar3 == 0x25998dab) {
        return uVar4;
      }
    }
    if (iVar3 == 0x2090cfdc) {
      iVar2 = FUN_1000e030(0x2090cfdc,param_5,1,0x1f74,1,0x5b92,param_4,0x7360,0x759d,0x6d2b,0x5037,
                           local_14);
      iVar3 = 0x37aa67f1;
      if (iVar2 != 0) {
        uVar4 = 1;
      }
      goto LAB_10016344;
    }
    if (iVar3 == 0x2372bd84) {
      iVar2 = FUN_1000cac8(&local_14,0x445b,iVar1,0x2b88);
      iVar3 = 0x2090cfdc;
      if (iVar2 == 0) {
        return uVar4;
      }
    }
    else {
      if (iVar3 == 0x37aa67f1) {
        FUN_10002ec6(local_14,0x39,0x2824,0x3034,0x5e7d);
        return uVar4;
      }
      if (iVar3 != 0x387a3419) goto LAB_100163f5;
      iVar1 = FUN_1001bf53();
      if (iVar1 == -1) {
        return uVar4;
      }
      iVar3 = 0x2372bd84;
    }
  } while( true );
}



/* Function: FUN_10016429 */

bool __cdecl FUN_10016429(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined local_24 [36];
  
  FUN_10017e12();
  uVar2 = 0x544eaa8;
LAB_10016838:
  do {
    if (uVar2 < 0x1d95b749) {
      if (uVar2 == 0x1d95b748) {
        FUN_1001792e((int)local_24,0x52e4,param_1 + 6);
        uVar2 = 0x5cbb6d2;
        goto LAB_10016838;
      }
      if (uVar2 == 0x544eaa8) {
        *param_2 = 0;
        param_2[1] = 0;
        uVar2 = 0x20b3eb49;
        goto LAB_10016838;
      }
      if (uVar2 == 0x5cbb6d2) {
        FUN_1001792e((int)local_24,0x2d2a,param_1 + 8);
        uVar2 = 0xe558b2d;
        goto LAB_10016838;
      }
      if (uVar2 == 0x63e11a7) {
        FUN_10007c63(0x22b6,0x354c,(int)local_24);
        uVar2 = 0x32c523b0;
        goto LAB_10016838;
      }
      if (uVar2 == 0xdff21a4) {
        FUN_10012199((int)local_24);
        uVar2 = 0x35fce0d8;
        goto LAB_10016838;
      }
      if (uVar2 == 0xe558b2d) {
        FUN_10012199((int)local_24);
        goto LAB_10016a7c;
      }
      if (uVar2 == 0x128053fb) {
        FUN_10012199((int)local_24);
        uVar2 = 0x22f2668f;
        goto LAB_10016838;
      }
    }
    else if (uVar2 == 0x20b3eb49) {
      iVar1 = FUN_100097e0((int)param_1);
      param_2[1] = iVar1;
      uVar2 = 0x36bf9e75;
    }
    else {
      if (uVar2 == 0x22f2668f) {
        FUN_10012199((int)local_24);
        uVar2 = 0xdff21a4;
        goto LAB_10016838;
      }
      if (uVar2 == 0x32c523b0) {
        FUN_1001792e((int)local_24,0x307e,param_1);
        uVar2 = 0x128053fb;
        goto LAB_10016838;
      }
      if (uVar2 == 0x35fce0d8) {
        FUN_10012199((int)local_24);
        uVar2 = 0x1d95b748;
        goto LAB_10016838;
      }
      if (uVar2 == 0x36bf9e75) {
        iVar1 = FUN_10017f68(0x36bf9e75,(void *)param_2[1]);
        *param_2 = iVar1;
        if (iVar1 == 0) goto LAB_10016a7c;
        uVar2 = 0x63e11a7;
        goto LAB_10016838;
      }
    }
    if (uVar2 == 0x190d4e8e) {
LAB_10016a7c:
      return *param_2 != 0;
    }
  } while( true );
}



/* Function: FUN_10016a8e */

void __fastcall
FUN_10016a8e(undefined4 param_1,undefined4 param_2,undefined param_3,undefined4 param_4,
            undefined param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x19b,0x54,0x2de3bdc6,0xf454e11);
  (*pcVar1)(param_2,param_6,1,0,param_10,param_1);
  return;
}



/* Function: FUN_10016b8c */

void __fastcall
FUN_10016b8c(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0xa4,extraout_ECX,0xcded05ce,0x2106ea62);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_10016c50 */

void __cdecl
FUN_10016c50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_10017e12();
  uVar2 = 0x6909;
  uVar3 = 0x5f0;
  uVar5 = 0x6e7d;
  uVar4 = 0x678e;
  pcVar1 = (code *)FUN_10007d5b(0x239,0x22,0x48728602,0x7b88f078);
  (*pcVar1)(param_1,param_5,0,uVar2,uVar3,uVar4,uVar5);
  return;
}



/* Function: FUN_10016d11 */

void __cdecl FUN_10016d11(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *this;
  int iVar4;
  undefined4 *puVar5;
  undefined uVar6;
  int local_80;
  undefined4 *local_78;
  undefined4 *local_c;
  undefined local_8 [4];
  undefined local_4 [4];
  
  FUN_10017e12();
  this = (void *)0x0;
  iVar4 = 0x331702b;
  puVar3 = (undefined4 *)0x0;
  puVar5 = local_c;
LAB_1001732b:
  do {
    if (iVar4 < 0x1a1bc66a) {
      if (iVar4 == 0x1a1bc669) {
        FUN_1000b4c7(1,0x1800,0x6cc9,this,param_1);
LAB_100174f1:
        iVar4 = 0x3868c57e;
        goto LAB_1001732b;
      }
      if (iVar4 == 0x331702b) {
        iVar4 = 0x29dc463f;
        goto LAB_1001732b;
      }
      if (iVar4 == 0x3603363) {
        iVar4 = (-(uint)(puVar5 + 0xb < local_78) & 0xd1b8faf7) + 0x3868c57e;
        puVar5 = puVar5 + 0xb;
        goto LAB_1001732b;
      }
      if (iVar4 == 0x8fc767c) {
        iVar2 = FUN_10017a12(this,local_80,1,0x4571,local_4,local_80,0x38c0,0x43ef);
        iVar4 = 0x3603363;
        if (iVar2 != 0) {
          iVar4 = 0x1a1bc669;
        }
        FUN_100075d7(local_80,0xf1,0x1cd7,0x2ed2,0x56f7);
      }
      else {
        if (iVar4 == 0xa21c075) {
          local_80 = FUN_1000c079(0x18f7,1,*puVar5,0x7e39,param_2,0x3584);
          iVar4 = 0x3603363;
          if (local_80 != 0) {
            iVar4 = 0x8fc767c;
          }
          goto LAB_1001732b;
        }
        if (iVar4 == 0x172ca4dd) {
          uVar6 = (undefined)local_80;
          iVar4 = FUN_1001102f(local_8,0x4d62,0x17dd,&local_c,puVar3,0x6b98,uVar6,0x767,uVar6,uVar6,
                               param_2,0x68d3,0x3d1,0x24e4);
          if (iVar4 == 0) goto LAB_100174f1;
          uVar1 = FUN_100010cf();
          iVar4 = 0xa21c075;
          local_78 = puVar3 + (int)local_c * 0xb;
          puVar5 = puVar3 + (uVar1 & 0x1f) * 0xb;
          if (local_78 <= puVar3 + (uVar1 & 0x1f) * 0xb) {
            puVar5 = puVar3;
          }
          goto LAB_1001732b;
        }
      }
    }
    else if (iVar4 == 0x29b4838f) {
      this = (void *)FUN_10017f68(local_80,(void *)0x2000);
      if (this != (void *)0x0) {
        iVar4 = 0x172ca4dd;
        goto LAB_1001732b;
      }
      iVar4 = 0x3b384d28;
    }
    else {
      if (iVar4 == 0x29dc463f) {
        puVar3 = (undefined4 *)FUN_10017f68(local_80,(void *)0x20000);
        if (puVar3 == (undefined4 *)0x0) {
          return;
        }
        iVar4 = 0x29b4838f;
        goto LAB_1001732b;
      }
      if (iVar4 == 0x3868c57e) {
        FUN_1000d4e0(this,0x2d,0x71c,0x7075);
        iVar4 = 0x3b384d28;
        goto LAB_1001732b;
      }
      if (iVar4 == 0x3b384d28) {
        FUN_1000d4e0(puVar3,0x52,0x51e8,0x176);
        return;
      }
    }
    if (iVar4 == 0x32ee8b9d) {
      return;
    }
  } while( true );
}



/* Function: FUN_100175f7 */

void __fastcall
FUN_100175f7(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x33f,0x172,0x90bdc3a8,0xda83b542);
  (*pcVar1)(param_2);
  return;
}



/* Function: FUN_100176a7 */

int FUN_100176a7(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined local_68 [36];
  int local_44;
  int local_40;
  undefined4 local_3c [2];
  int local_34 [2];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_10017e12();
  iVar2 = 0;
  local_1c = 0x6ad1;
  local_24 = 0x3fc8;
  local_18 = 0x25e;
  local_14 = 0x81e;
  local_10 = 0x270c;
  local_c = 0x1fcf;
  local_20 = 0x5862;
  local_2c = 0x6318;
  local_28 = 0x133a;
  FUN_10007c63(0x25e,0x81e,(int)local_68);
  iVar1 = FUN_10002c2d((int)local_68,local_34);
  while (iVar1 != 0) {
    iVar1 = FUN_100079e1(&local_44,(char)local_34,local_2c,local_28);
    if (iVar1 != 0) {
      if (local_40 == 1) {
        FUN_10005b86(local_44,local_3c);
      }
      else if (local_40 == 2) {
        FUN_1001c45c(local_44,local_3c);
      }
      else if (local_40 == 3) {
        FUN_10004fec(local_44);
      }
      else if (local_40 == 4) {
        FUN_1000e9b1(local_44,local_3c);
      }
      else if (local_40 == 10) {
        FUN_100061e7(local_44);
      }
      iVar2 = iVar2 + 1;
    }
    iVar1 = FUN_10002c2d((int)local_68,local_34);
  }
  return iVar2;
}



/* Function: FUN_1001787f */

void __cdecl FUN_1001787f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_10017e12();
  uVar4 = 0x4d4;
  uVar5 = 0x1e37;
  uVar2 = 0x2423;
  uVar3 = 0x25dc;
  pcVar1 = (code *)FUN_10007d5b(0x2d0,0x60,0x90bdc3a8,0xee57e942);
  (*pcVar1)(param_2,param_1,uVar2,uVar3,uVar4,uVar5);
  return;
}



/* Function: FUN_1001792e */

void __cdecl FUN_1001792e(int param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_10017e12();
  FUN_10012199(param_1);
  FUN_1001b713(*param_3,0x1614,*(undefined4 *)(param_1 + 0x18),(void *)param_3[1]);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_3[1];
  return;
}



/* Function: FUN_10017a12 */

void __thiscall
FUN_10017a12(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x4d,0x2a,0x2de3bdc6,0xa0a0e4ba);
  (*pcVar1)(param_5,param_2,this,0x2000,param_4);
  return;
}



/* Function: FUN_10017ad3 */

void __cdecl FUN_10017ad3(undefined4 param_1)

{
  FUN_10017e12();
  FUN_1000ac4c(0x8000,0x6a57,param_1);
  return;
}



/* Function: FUN_10017b49 */

undefined4 __fastcall FUN_10017b49(int param_1,int param_2)

{
  void *this;
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  
  if ((*(int *)(param_2 + 0x80) != 0) && (*(int *)(param_2 + 0x84) != 0)) {
    for (piVar4 = (int *)(*(int *)(param_2 + 0x80) + param_1); piVar4[3] != 0; piVar4 = piVar4 + 5)
    {
      this = (void *)FUN_100175f7(0x20a8,piVar4[3] + param_1,0x4b5b,0x6bec,0x3465);
      if (this == (void *)0x0) {
        return 0;
      }
      puVar5 = (uint *)(*piVar4 + param_1);
      piVar3 = (int *)(piVar4[4] + param_1);
      while( true ) {
        uVar1 = *puVar5;
        if (uVar1 == 0) break;
        if ((int)uVar1 < 0) {
          uVar1 = uVar1 & 0xffff;
        }
        else {
          uVar1 = uVar1 + 2 + param_1;
        }
        iVar2 = FUN_1000b0df(this,0x78e7,uVar1,0x5a7f,0x776b);
        if (iVar2 == 0) {
          return 0;
        }
        puVar5 = puVar5 + 1;
        *piVar3 = iVar2;
        piVar3 = piVar3 + 1;
      }
    }
  }
  return 1;
}



/* Function: FUN_10017d15 */

void FUN_10017d15(void)

{
  FUN_10015792();
  return;
}



/* Function: FUN_10017d5a */

void FUN_10017d5a(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar3 = 0;
  uVar4 = 0;
  uVar2 = 0x4f95e2;
  uVar6 = 0x3e6c;
  uVar5 = 0x2972;
  uVar7 = 0x2001;
  uVar8 = 0x4f83;
  pcVar1 = (code *)FUN_10007d5b(0xf5,0xb,0x90bdc3a8,0xb7c2e83f);
  (*pcVar1)(0,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  return;
}



/* Function: FUN_10017e12 */

void FUN_10017e12(void)

{
  return;
}



/* Function: FUN_10017e13 */

void __cdecl
FUN_10017e13(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  FUN_10017e12();
  uVar4 = 0;
  uVar5 = 0;
  uVar2 = 0xb8dea;
  uVar3 = 0x79ff44;
  uVar7 = 0x36f2;
  uVar6 = 0x68b9;
  uVar8 = 0xf6b;
  uVar9 = 0x3a59;
  pcVar1 = (code *)FUN_10007d5b(0x1d6,0x31,0x133f1339,0xbf3a5c12);
  (*pcVar1)(param_1,param_3,param_4,param_5,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9)
  ;
  return;
}



/* Function: FUN_10017f0f */

void __cdecl
FUN_10017f0f(undefined4 param_1,undefined4 param_2,undefined param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_10017e12();
  uVar3 = 0x40;
  uVar2 = extraout_EDX;
  pcVar1 = (code *)FUN_10018202(extraout_ECX,0x8440e238,0x34c);
  (*pcVar1)(uVar2,uVar3,param_11,param_12,param_1,param_10,param_6);
  return;
}



/* Function: FUN_10017f68 */

void __fastcall FUN_10017f68(undefined4 param_1,void *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10007123();
  FUN_100150be(param_2,uVar1,0x3d80,8);
  return;
}



/* Function: FUN_10018016 */

void FUN_10018016(void)

{
  uint uVar1;
  
  uVar1 = 0x428;
  do {
    if (*(code **)(uVar1 + DAT_1001fa14) == (code *)0x0) {
      return;
    }
    (**(code **)(uVar1 + DAT_1001fa14))();
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x438);
  return;
}



/* Function: FUN_10018037 */

undefined4 FUN_10018037(void)

{
  return *(undefined4 *)(DAT_1001fa14 + 0x424);
}



/* Function: FUN_10018043 */

void __cdecl FUN_10018043(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_10017e12();
  uVar3 = 0;
  uVar4 = 0;
  uVar2 = 0x308bc0;
  uVar5 = 0x75f9;
  uVar6 = 0x70b5;
  uVar8 = 0x7ba;
  uVar7 = 0x2f7a;
  pcVar1 = (code *)FUN_10007d5b(0x13,extraout_ECX,0x90bdc3a8,0x5964d9b6);
  (*pcVar1)(param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  return;
}



/* Function: FUN_100180ea */

int __fastcall FUN_100180ea(ushort *param_1,undefined param_2,undefined4 param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  FUN_10017e12();
  iVar1 = 0;
  uVar2 = *param_1;
  while (uVar2 != 0) {
    uVar3 = (uint)*param_1;
    if ((0x40 < uVar3) && (uVar3 < 0x5b)) {
      uVar3 = uVar3 + 0x20;
    }
    param_1 = param_1 + 1;
    iVar1 = uVar3 + iVar1 * 0x1003f;
    uVar2 = *param_1;
  }
  return iVar1;
}



/* Function: FUN_10018202 */

void __fastcall FUN_10018202(undefined4 param_1,uint param_2,int param_3)

{
  FUN_10007d5b(param_3,param_1,0xcded05ce,param_2);
  return;
}



/* Function: FUN_1001829c */

undefined4 __fastcall
FUN_1001829c(undefined4 *param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  void *this;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  int iVar2;
  undefined uVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_10017e12();
  iVar2 = 0x11162bc2;
  this = (void *)0x27;
LAB_100189dd:
  do {
    if (iVar2 < 0x18a35cf2) {
      uVar3 = SUB41(this,0);
      if (iVar2 == 0x18a35cf1) {
        iVar2 = FUN_1000c9fd((void *)((int)DAT_1001fa04 + 0x30),this,0xf0000040,uVar3,0x1f82,0x12dc,
                             0x12e,0x14ee);
        iVar2 = (-(uint)(iVar2 != 0) & 0xc80aa4c0) + 0x39fecdea;
        this = extraout_ECX_04;
        goto LAB_100189dd;
      }
      if (iVar2 == 0x4d9d49) {
        iVar2 = FUN_10003b32(0x727b,0x8004,*(undefined4 *)((int)DAT_1001fa04 + 0x30),uVar3,0x783d,
                             uVar3,0x4ff6,(int)DAT_1001fa04 + 0x24,0x6f8f);
        if (iVar2 != 0) {
          return 1;
        }
        iVar2 = 0x23848e12;
        this = extraout_ECX_03;
        goto LAB_100189dd;
      }
      if (iVar2 == 0x20972aa) {
        iVar2 = FUN_1000cc8d((void *)0x10001,0x3d1d,this,&local_4,0x13,0x10b4,*param_1,0x3459,
                             param_1[1],0x3af4,&local_8,0x8000,0x3a1a);
        iVar2 = (-(uint)(iVar2 != 0) & 0xeabfe61d) + 0x2a17fb73;
        this = extraout_ECX_02;
        goto LAB_100189dd;
      }
      if (iVar2 == 0x84113b5) {
        iVar2 = FUN_10002a73(1,*(undefined4 *)((int)DAT_1001fa04 + 0x30),0x660e,0x44fa,0x2c57,0x2b8,
                             (int)DAT_1001fa04 + 8);
        iVar2 = (-(uint)(iVar2 != 0) & 0xdfcc01fb) + 0x20819b4e;
        this = extraout_ECX_01;
        goto LAB_100189dd;
      }
      if (iVar2 == 0x11162bc2) {
        DAT_1001fa04 = (void *)FUN_10017f68(this,(void *)0x48);
        if (DAT_1001fa04 == (void *)0x0) {
          return 0;
        }
        iVar2 = 0x18a35cf1;
        this = extraout_ECX_00;
        goto LAB_100189dd;
      }
      if (iVar2 == 0x14d7e190) {
        iVar2 = FUN_1000b1b7((void *)((int)DAT_1001fa04 + 0x40),
                             *(undefined4 *)((int)DAT_1001fa04 + 0x30),this,0x5cf,local_4,0xfc1,
                             0x23d,uVar3,0x5d4a,local_8);
        iVar2 = (-(uint)(iVar2 != 0) & 0xde291842) + 0x2a17fb73;
        FUN_1001385b(0x6a45,local_8,0x4c4d,0x3bf9);
        this = extraout_ECX;
      }
    }
    else if (iVar2 == 0x20819b4e) {
      pvVar1 = *(void **)((int)DAT_1001fa04 + 0x40);
      FUN_10002375(this,this,*(void **)((int)DAT_1001fa04 + 0x40));
      this = pvVar1;
      iVar2 = 0x2a17fb73;
    }
    else {
      if (iVar2 == 0x23848e12) {
        pvVar1 = *(void **)((int)DAT_1001fa04 + 8);
        FUN_10002375(this,this,*(void **)((int)DAT_1001fa04 + 8));
        this = pvVar1;
        iVar2 = 0x20819b4e;
        goto LAB_100189dd;
      }
      if (iVar2 == 0x2a17fb73) {
        FUN_10016092(this,*(undefined4 *)((int)DAT_1001fa04 + 0x30));
        iVar2 = 0x39fecdea;
        this = extraout_ECX_05;
        goto LAB_100189dd;
      }
      if (iVar2 == 0x39fecdea) {
        FUN_1000d4e0(DAT_1001fa04,0x35,0x4ae0,0x677b);
        return 0;
      }
    }
    if (iVar2 == 0x2e7c6307) {
      return 0;
    }
  } while( true );
}



/* Function: FUN_10018cfc */

void __fastcall
FUN_10018cfc(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x372,0x6d,0x2175dc,0x2190aeb1);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_10018dc6 */

void __thiscall FUN_10018dc6(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x113,0x65,0x90bdc3a8,0xbdde8e2a);
  (*pcVar1)(param_2,this);
  return;
}



/* Function: FUN_10018e99 */

void __fastcall
FUN_10018e99(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined param_4,
            undefined4 param_5,undefined4 param_6,undefined param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x48,0x29,0x90bdc3a8,0xfbf2cb1d);
  (*pcVar1)(param_9,param_12,param_13,param_2,param_3,1,0);
  return;
}



/* Function: FUN_10018f5f */

void FUN_10018f5f(void)

{
  DAT_1001fa00 = 0;
  return;
}



/* Function: FUN_10018f67 */

void __fastcall FUN_10018f67(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  iVar1 = *(int *)(param_2 + 0x34);
  piVar3 = (int *)(*(int *)(param_2 + 0xa0) + param_1);
  piVar5 = (int *)(*(int *)(param_2 + 0xa4) + (int)piVar3);
  for (; piVar3 < piVar5; piVar3 = (int *)((int)piVar3 + piVar3[1])) {
    iVar2 = piVar3[1];
    for (piVar6 = piVar3 + 2; piVar6 < (int *)(iVar2 + (int)piVar3);
        piVar6 = (int *)((int)piVar6 + 2)) {
      piVar4 = (int *)((*(ushort *)piVar6 & 0xfff) + *piVar3 + param_1);
      if ((*(ushort *)piVar6 & 0xf000) == 0x3000) {
        *piVar4 = *piVar4 + (param_1 - iVar1);
      }
    }
  }
  return;
}



/* Function: FUN_1001900c */

/* WARNING: Removing unreachable block (ram,0x1001a9e4) */

void FUN_1001900c(void)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int local_98;
  void *local_94;
  short *local_90 [2];
  void *local_88 [2];
  int local_80 [2];
  int local_78;
  undefined *local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  void *local_5c [2];
  void *local_54 [2];
  undefined4 local_4c;
  undefined local_48 [68];
  
  iVar4 = 0x1e08f0c;
  iVar3 = 0x7e01;
  uVar7 = 0x3b3e34;
LAB_1001a182:
  do {
    iVar1 = iVar4;
    if (iVar4 < 0x14cb6629) {
      if (iVar4 == 0x14cb6628) {
        local_98 = FUN_10006f31(&local_94,0xc3,0x3b0a,(char)iVar4,0x5dd7,0x2768);
        FUN_1000e10b(&local_98);
        FUN_10007c8f(0x111b);
        iVar4 = 0x15c12bf9;
        goto LAB_1001a182;
      }
      if (iVar4 < 0xa5688f5) {
        if (iVar4 == 0xa5688f4) {
          iVar4 = FUN_10014032();
          if (iVar4 == 0) {
            return;
          }
          iVar4 = 0x108d7d72;
          goto LAB_1001a182;
        }
        if (iVar4 < 0x4ebc5d3) {
          if (iVar4 == 0x4ebc5d2) {
            FUN_1000d4e0(local_54[0],0x3d,0x59f8,0x72a5);
            iVar4 = 0x2eb577a4;
            goto LAB_1001a182;
          }
          if (iVar4 == 0x13528f8) {
            FUN_1000d4e0(local_90[0],0x56,0x265c,0x455b);
            iVar4 = 0x4ebc5d2;
            goto LAB_1001a182;
          }
          if (iVar4 == 0x1b72e7b) {
            FUN_10004402();
            iVar4 = 0xe51944e;
            goto LAB_1001a182;
          }
          if (iVar4 == 0x1e08f0c) {
            iVar4 = 0x2d81716f;
            goto LAB_1001a182;
          }
          if (iVar4 == 0x1e4eff6) {
            iVar4 = FUN_10010b83();
            if (iVar4 != 0) {
              iVar4 = FUN_10018037();
              uVar5 = -(uint)(iVar4 != 0) & 0xf11cc9fd;
              goto LAB_1001a22e;
            }
            iVar4 = FUN_10018037();
            iVar4 = (-(uint)(iVar4 != 0) & 0x2447e6de) + 0xbcbbb6e;
            goto LAB_1001a182;
          }
          if (iVar4 == 0x2ef8741) {
            local_64 = 0x1346150;
            iVar4 = 0x2fc3da22;
            goto LAB_1001a182;
          }
        }
        else {
          if (iVar4 == 0x535c0d7) {
            FUN_10010abe();
            return;
          }
          if (iVar4 == 0x657ac18) {
            bVar2 = FUN_1000c351(0x6ad2,0x526e,(char)iVar4,local_48);
            if (CONCAT31(extraout_var,bVar2) == 0) {
LAB_1001a38c:
              iVar4 = 0x535c0d7;
            }
            else {
              local_74 = local_48;
              local_70 = FUN_1001473d(local_74,0x2885);
              iVar4 = 0x1dc87c2f;
            }
            goto LAB_1001a182;
          }
          if (iVar4 == 0x912d175) {
            FUN_10018016();
            iVar4 = 0x26eccc5b;
            goto LAB_1001a182;
          }
          if (iVar4 == 0x914711e) {
            FUN_10012b98();
            iVar4 = 0x103cc95f;
            goto LAB_1001a182;
          }
        }
      }
      else if (iVar4 < 0x103cc960) {
        if (iVar4 == 0x103cc95f) {
          iVar4 = FUN_1000a42a();
          if (iVar4 == 0) {
            return;
          }
          FUN_10018f5f();
          iVar4 = 0x2208ec25;
          goto LAB_1001a182;
        }
        if (iVar4 == 0xbcbbb6e) {
          FUN_1001b2fc();
          iVar4 = 0x28f56a46;
          goto LAB_1001a182;
        }
        if (iVar4 == 0xe51944e) {
          FUN_10002594();
          return;
        }
        if (iVar4 == 0xf24a5f5) {
          iVar3 = FUN_10007e95(0x3909,local_90,local_88);
          if (iVar3 == 0) {
            FUN_10014676();
            iVar3 = 0x17b93241;
            uVar5 = FUN_10007cff((void *)0x1f40,4000);
            lVar6 = FUN_1000c2ae(extraout_ECX_00);
            iVar4 = 0x13528f8;
            uVar7 = lVar6 + (ulonglong)uVar5;
          }
          else {
            iVar3 = 0x17b93241;
            uVar5 = FUN_10007cff((void *)0xef420,900000);
            lVar6 = FUN_1000c2ae(extraout_ECX);
            uVar7 = lVar6 + (ulonglong)uVar5;
            iVar4 = 0x11b4af1f;
          }
          goto LAB_1001a182;
        }
        if (iVar4 == 0xfcea2c8) {
          FUN_10012f1b();
          iVar4 = 0x1b72e7b;
          goto LAB_1001a182;
        }
      }
      else {
        if (iVar4 == 0x108d7d72) {
          FUN_1000549d();
          iVar4 = FUN_10018037();
          iVar4 = (-(uint)(iVar4 != 0) & 0xe17744d) + 0x1b72e7b;
          goto LAB_1001a182;
        }
        if (iVar4 == 0x112e4feb) {
          local_6c = FUN_1001b14a();
          iVar4 = 0x2b7fb14b;
          goto LAB_1001a182;
        }
        if (iVar4 == 0x11b4af1f) {
          iVar4 = FUN_100121b8(local_80);
          if (iVar4 == 0) {
LAB_1001a80c:
            iVar4 = 0x1b0337fb;
          }
          else {
            FUN_1000f5b4();
            iVar4 = 0x912d175;
            if ((local_78 != 0) && (local_78 == 7)) {
              iVar4 = 0x324a4c8c;
            }
          }
          goto LAB_1001a182;
        }
        if (iVar4 == 0x13be1788) {
          iVar4 = 0x14cb6628;
          goto LAB_1001a182;
        }
      }
    }
    else if (iVar4 < 0x2b7fb14c) {
      if (iVar4 == 0x2b7fb14b) {
        local_68 = FUN_1001262b();
        iVar4 = 0x2ef8741;
        goto LAB_1001a182;
      }
      if (iVar4 < 0x1dc87c30) {
        if (iVar4 == 0x1dc87c2f) {
          local_4c = FUN_1000f5ab();
          iVar4 = 0x112e4feb;
          goto LAB_1001a182;
        }
        if (iVar4 == 0x15c12bf9) {
          iVar4 = 0x3021161b;
          goto LAB_1001a182;
        }
        if (iVar4 == 0x17b93241) {
          FUN_10011248((int *)local_5c,0x10,0x5218,0x434d);
          iVar4 = 0x318f4834;
          goto LAB_1001a182;
        }
        if (iVar4 == 0x17c8f8f4) {
          bVar2 = FUN_10016429(&local_74,(int *)local_90);
          iVar4 = (-(uint)(CONCAT31(extraout_var_00,bVar2) != 0) & 0xa38e023) + 0x4ebc5d2;
          goto LAB_1001a182;
        }
        if (iVar4 == 0x1b0337fb) {
          FUN_1000d4e0(local_88[0],0xb8,0x6ef1,0x5ddb);
          iVar4 = 0x13528f8;
          goto LAB_1001a182;
        }
      }
      else {
        if (iVar4 == 0x1ea1f2bd) {
          iVar4 = FUN_1000c777();
          uVar5 = -(uint)(iVar4 != 0) & 0xe0cc6b8e;
LAB_1001a22e:
          iVar4 = uVar5 + 0x2d8528c0;
          goto LAB_1001a182;
        }
        if (iVar4 == 0x2208ec25) {
          iVar4 = FUN_1000117a();
          iVar4 = (-(uint)(iVar4 != 0) & 0x27107a50) + 0x1e4eff6;
          goto LAB_1001a182;
        }
        if (iVar4 == 0x26eccc5b) {
          iVar4 = FUN_100176a7(16000,local_80,0x3a4c);
          if (iVar4 != 0) {
            iVar3 = 0x17b93241;
            uVar7 = 0;
          }
          goto LAB_1001a80c;
        }
        if (iVar4 == 0x28f56a46) {
          FUN_1001c004();
          iVar4 = 0xa5688f4;
          goto LAB_1001a182;
        }
      }
    }
    else {
      if (iVar4 < 0x3013a24d) {
        if (iVar4 == 0x3013a24c) {
          FUN_1000b735();
          iVar4 = 0xbcbbb6e;
          goto LAB_1001a182;
        }
        if (iVar4 == 0x2d81716f) {
          bVar2 = FUN_1000ad2b();
          if (CONCAT31(extraout_var_01,bVar2) == 0) {
            return;
          }
          iVar4 = 0x914711e;
          goto LAB_1001a182;
        }
        if (iVar4 == 0x2d8528c0) {
          FUN_1000a8e3();
          iVar3 = 0x13be1788;
          uVar7 = FUN_1000c2ae(extraout_ECX_01);
        }
        else {
          if (iVar4 != 0x2eb577a4) {
            if (iVar4 != 0x2fc3da22) goto LAB_1001aa5e;
            local_60 = 5000;
            iVar4 = 0x17b93241;
            goto LAB_1001a182;
          }
          FUN_1000d4e0(local_5c[0],0xe8,0x487b,0x2fda);
        }
        iVar4 = 0x38b586d0;
        goto LAB_1001a182;
      }
      if (iVar4 == 0x3021161b) {
        iVar3 = 0x657ac18;
        uVar5 = FUN_10007cff((void *)0x2ee0,4000);
        lVar6 = FUN_1000c2ae(extraout_ECX_02);
        uVar7 = lVar6 + (ulonglong)uVar5;
LAB_1001aa59:
        iVar1 = 0x38b586d0;
      }
      else {
        if (iVar4 == 0x318f4834) {
          FUN_10013d64(0x1198,(int *)local_54,0x1c1d);
          iVar4 = 0x17c8f8f4;
          goto LAB_1001a182;
        }
        if (iVar4 == 0x324a4c8c) {
          FUN_10003c19();
          return;
        }
        if ((iVar4 == 0x38b586d0) && (iVar1 = iVar3, uVar7 != 0)) {
          uVar5 = FUN_10007cff((void *)0x4b0,400);
          bVar2 = FUN_10011115(0x2c32,uVar5);
          if (CONCAT31(extraout_var_02,bVar2) != 0) goto LAB_1001a38c;
          uVar8 = FUN_1000c2ae(iVar4);
          if (uVar8 < uVar7) goto LAB_1001aa59;
        }
      }
    }
LAB_1001aa5e:
    iVar4 = iVar1;
    if (iVar4 == 0x3ae4127e) {
      return;
    }
  } while( true );
}



/* Function: FUN_1001aaaa */

void __fastcall FUN_1001aaaa(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x302,0x2b,0x90bdc3a8,0xeca21d44);
  (*pcVar1)(param_2);
  return;
}



/* Function: FUN_1001ab82 */

void __fastcall
FUN_1001ab82(undefined4 param_1,int param_2,undefined4 param_3,undefined *param_4,undefined4 param_5
            )

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint local_664 [11];
  short local_638;
  short local_636;
  short local_634;
  undefined local_414 [520];
  undefined local_20c [524];
  
  FUN_10017e12();
  iVar5 = 0x275f51f4;
  iVar3 = 0x251d;
  iVar1 = 0x332be141;
LAB_1001af24:
  while (iVar1 == 0x901b4) {
    FUN_1001441a(iVar3);
    iVar1 = 0x189c6a0d;
LAB_1001b133:
    if (iVar1 == 0x189c6a0d) {
      return;
    }
  }
  if (iVar1 == 0x106f4407) {
    iVar3 = FUN_10018dc6(local_664,0x4dcc,local_20c,0x6a2f);
    if (iVar3 == -1) {
      return;
    }
    iVar1 = 0x1c6c2969;
    goto LAB_1001af24;
  }
  if (iVar1 == 0x14ce457e) {
    puVar2 = FUN_1000732d(0x41c1,(uint *)&DAT_1001f990,0x1e7);
    FUN_1001ceda(puVar2,param_5,0x1566,local_20c,0x7b21);
    FUN_10007c8f(0x5b09);
    iVar1 = 0x106f4407;
    goto LAB_1001af24;
  }
  if (iVar1 == 0x1c6c2969) {
    if ((local_664[0] & 0x10) != 0) {
      iVar1 = iVar5;
      if (((local_638 != 0x2e) || ((local_636 != 0 && ((local_636 != 0x2e || (local_634 != 0))))))
         && (param_2 != 0)) {
        uVar6 = 0x5f15;
        FUN_1000732d(0x2669,(uint *)&DAT_1001f930,0x5f15);
        FUN_1001cf1c(uVar6,0x1eb8,&local_638,0x3ab5,0x7f79,local_414,param_5,0x1b90);
        FUN_1001ab82(0x5599,param_2,param_3,param_4,local_414);
        FUN_10007c8f(0x6af9);
      }
      goto LAB_1001af24;
    }
    iVar1 = (*(code *)param_4)(local_664,param_3);
    uVar4 = -(uint)(iVar1 != 0) & 0x27565040;
  }
  else {
    if (iVar1 != 0x275f51f4) {
      if (iVar1 != 0x332be141) goto LAB_1001b133;
      iVar1 = 0x14ce457e;
      goto LAB_1001af24;
    }
    iVar1 = FUN_10002cd1(local_664,iVar3);
    uVar4 = -(uint)(iVar1 != 0) & 0x1c6327b5;
  }
  iVar1 = uVar4 + 0x901b4;
  goto LAB_1001af24;
}



/* Function: FUN_1001b14a */

int FUN_1001b14a(void)

{
  int iVar1;
  int iVar2;
  ushort local_140 [18];
  undefined4 local_11c;
  int local_118;
  int local_114;
  byte local_2;
  
  iVar2 = 0;
  iVar1 = 0x3a24e94;
LAB_1001b232:
  do {
    if (iVar1 == 0x3a24e94) {
      iVar1 = 0x408abe5;
    }
    else {
      if (iVar1 == 0x408abe5) {
        local_11c = 0x11c;
        FUN_10016b8c(&local_11c,0x2d,0x61e0,0x25a4);
        iVar1 = 0x324198eb;
        goto LAB_1001b232;
      }
      if (iVar1 == 0x18a6cc2a) {
        return iVar2 + (uint)local_140[0];
      }
      if (iVar1 == 0x2e380d84) {
        iVar1 = 0x3194a78c;
        iVar2 = iVar2 + local_118 * 1000;
        goto LAB_1001b232;
      }
      if (iVar1 == 0x3194a78c) {
        iVar2 = iVar2 + local_114 * 100;
        iVar1 = 0x18a6cc2a;
        goto LAB_1001b232;
      }
      if (iVar1 == 0x324198eb) {
        FUN_1001aaaa(0x4f6d,local_140,0x4c13);
        iVar1 = 0x39d80f06;
        goto LAB_1001b232;
      }
      if (iVar1 == 0x39d80f06) {
        iVar2 = iVar2 + (uint)local_2 * 100000;
        iVar1 = 0x2e380d84;
        goto LAB_1001b232;
      }
    }
    if (iVar1 == 0x2d37df2d) {
      return iVar2;
    }
  } while( true );
}



/* Function: FUN_1001b2fc */

void FUN_1001b2fc(void)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = 0x24036b0b;
  puVar3 = (undefined2 *)(DAT_1001fa14 + 0xc);
  local_8 = 0x69ec;
  local_24 = 0x5bc8;
  local_1c = 0x6b7f;
  local_2c = 0x30ca;
  local_28 = 0x4e4e;
  local_34 = 0x1e63;
  local_30 = 0x5ba4;
  local_c = 0x5e86;
  local_3c = 0x7cfb;
  local_10 = 0x1442;
  local_38 = 0x5574;
  local_44 = 0x727d;
  local_40 = 0x4c52;
  local_20 = 0x46ce;
  local_4c = 0x376;
  local_48 = 0xac2;
  local_14 = 0xea9;
  local_54 = 0xb57;
  local_18 = 0x563c;
  local_50 = 0x7c45;
LAB_1001b50e:
  do {
    if (iVar2 == 0x106727f) {
      FUN_10005a49(1,3,(int)puVar3,local_50,&local_58);
      iVar2 = 0x1784b81c;
      puVar3[3] = 0;
      puVar3 = puVar3 + 4;
    }
    else {
      if (iVar2 == 0x8c124bb) {
        uVar1 = FUN_10007cff((void *)0x10,4);
        FUN_10005a49(1,uVar1,(int)puVar3,local_14,&local_58);
        iVar2 = 0x106727f;
        puVar3[uVar1] = 0x2e;
        puVar3 = puVar3 + uVar1 + 1;
        goto LAB_1001b50e;
      }
      if (iVar2 == 0x111e07c9) {
        uVar1 = FUN_10007cff((void *)0x10,4);
        FUN_10005a49(2,1,(int)puVar3,local_c,&local_58);
        puVar3 = puVar3 + 1;
        FUN_10005a49(1,uVar1,(int)puVar3,local_38,&local_58);
        iVar2 = 0x8c124bb;
        puVar3[uVar1] = 0x5c;
        puVar3 = puVar3 + uVar1 + 1;
        goto LAB_1001b50e;
      }
      if (iVar2 == 0x24036b0b) {
        local_58 = FUN_100010cf();
        iVar2 = 0x111e07c9;
        goto LAB_1001b50e;
      }
    }
    if (iVar2 == 0x1784b81c) {
      return;
    }
  } while( true );
}



/* Function: FUN_1001b62d */

void __fastcall
FUN_1001b62d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x228,extraout_ECX,0x2175dc,0xef02e27);
  (*pcVar1)(param_2,param_10,param_1,param_4,0);
  return;
}



/* Function: FUN_1001b713 */

void __cdecl FUN_1001b713(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  FUN_10017e12();
  FUN_100120be(param_4,param_3,param_1,0x3ede);
  return;
}



/* Function: FUN_1001b79c */

undefined4 __cdecl FUN_1001b79c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined extraout_CL;
  undefined4 in_ECX;
  undefined4 uVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_3c = 0x104;
  FUN_10017e12();
  uVar2 = 0;
  local_8 = 0xc69;
  local_2c = 0x23ee;
  local_34 = 0x7372;
  local_28 = 0x7e61;
  local_1c = 0x5d84;
  local_18 = 0x2b2;
  local_14 = 0x5cc6;
  local_10 = 0x6953;
  local_38 = 0x28c2;
  local_30 = 0x3bbb;
  local_24 = 0x3a69;
  local_20 = 0x6afe;
  local_c = 0x1000;
  iVar1 = FUN_100137b2((void *)0x1000,0x31,param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_10002992(local_1c,&local_3c,local_18,iVar1,local_14,local_10,extraout_CL,in_ECX);
    FUN_10002ec6(iVar1,(char)local_38,local_30,local_24,local_20);
  }
  return uVar2;
}



/* Function: FUN_1001b99d */

int __thiscall FUN_1001b99d(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined uVar6;
  int local_2c;
  int local_28;
  void *local_4;
  
  FUN_10017e12();
  iVar5 = 0;
  uVar2 = 0x13f7cc35;
  iVar1 = local_28;
  iVar3 = local_2c;
  pvVar4 = local_4;
LAB_1001bd3f:
  do {
    uVar6 = (undefined)uVar2;
    if (uVar2 < 0xfffdfba) {
      if (uVar2 == 0xfffdfb9) {
                    /* WARNING: Load size is inaccurate */
        iVar1 = FUN_10016a8e((int)this + 4,*(undefined4 *)(DAT_1001fa04 + 8),uVar6,0x63c2,uVar6,
                             local_4,0x12d5,0x73da,0x37b7,*this,0x608b,0xadd);
        uVar2 = (-(uint)(iVar1 != 0) & 0x1d4c4d89) + 0x141a6bb;
        iVar1 = local_28;
        iVar3 = local_2c;
        goto LAB_1001bd3f;
      }
      if (uVar2 == 0x141a6bb) {
        FUN_1000b597(local_4);
        uVar2 = 0x3c77204;
        iVar1 = local_28;
        iVar3 = local_2c;
        goto LAB_1001bd3f;
      }
      if (uVar2 == 0x3c77204) {
        if (iVar5 != 0) {
          return iVar5;
        }
                    /* WARNING: Load size is inaccurate */
        FUN_1000d4e0(*this,0xcc,0x4bf4,0x707d);
        return 0;
      }
      if (uVar2 == 0x6aeba70) {
        *(int *)((int)this + 4) = param_1[1] + -0x74;
        iVar1 = FUN_10017f68(0x6aeba70,*(void **)((int)this + 4));
        *(int *)this = iVar1;
        if (iVar1 == 0) {
          return iVar5;
        }
        local_2c = *param_1;
        uVar2 = 0x971ad8c;
        local_28 = local_2c + 0x74;
        iVar1 = local_28;
        iVar3 = local_2c;
        pvVar4 = (void *)(param_1[1] + -0x74);
        goto LAB_1001bd3f;
      }
      if (uVar2 == 0x971ad8c) {
        iVar1 = FUN_100126c0(*(undefined4 *)(DAT_1001fa04 + 0x24),0x13ef,uVar6,0x47a5,&local_4,
                             0x3348);
        uVar2 = (-(uint)(iVar1 != 0) & 0x2a5f9c64) + 0x3c77204;
        iVar1 = local_28;
        iVar3 = local_2c;
        goto LAB_1001bd3f;
      }
      if (uVar2 == 0xf13e168) {
        if ((uint)param_1[1] < 0x74) {
          return iVar5;
        }
        uVar2 = 0x25c19a43;
        goto LAB_1001bd3f;
      }
    }
    else if (uVar2 == 0x13f7cc35) {
      uVar2 = 0xf13e168;
    }
    else {
      if (uVar2 == 0x1e8df444) {
        iVar1 = FUN_1000c69e(local_4,uVar6,0x74cb,uVar6,0x3cdd,0x2918,iVar3,
                             *(undefined4 *)(DAT_1001fa04 + 0x40),0x4c1c);
        if (iVar1 != 0) {
          iVar5 = 1;
        }
        uVar2 = 0x141a6bb;
        iVar1 = local_28;
        iVar3 = local_2c;
        goto LAB_1001bd3f;
      }
      if (uVar2 == 0x25c19a43) {
        uVar2 = 0x6aeba70;
        goto LAB_1001bd3f;
      }
      if (uVar2 == 0x2e270e68) {
                    /* WARNING: Load size is inaccurate */
        FUN_1001b713(iVar1,0x3112,*this,pvVar4);
        uVar2 = 0xfffdfb9;
        iVar1 = local_28;
        iVar3 = local_2c;
        goto LAB_1001bd3f;
      }
    }
    if (uVar2 == 0x315fd306) {
      return iVar5;
    }
  } while( true );
}



/* Function: FUN_1001bf53 */

void FUN_1001bf53(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = 0x3535;
  uVar5 = 0x7c17;
  uVar2 = 0xcf4;
  uVar3 = 0x298e;
  pcVar1 = (code *)FUN_10007d5b(0x264,0x4d,0x90bdc3a8,0x678d9e2e);
  (*pcVar1)(uVar2,uVar3,uVar4,uVar5);
  return;
}



/* Function: FUN_1001c004 */

void FUN_1001c004(void)

{
  ushort *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined local_410 [520];
  undefined local_208 [520];
  
  FUN_1000ae23();
  iVar3 = 0x2afe1031;
LAB_1001c312:
  do {
    if (iVar3 == 0x4997e84) {
      FUN_1000732d(0x5125,(uint *)&DAT_1001f640,0x7453);
      FUN_1001cf1c(DAT_1001fa14 + 0xc,0x2ca2,DAT_1001fa14 + 0xc,0x5da0,0x674a,local_208,
                   DAT_1001fa14 + 0x218,0xcff);
      FUN_10007c8f(0x42da);
      iVar3 = 0x36407a4e;
    }
    else {
      if (iVar3 == 0x16e484d5) {
        FUN_1000cd5c(0x33be,local_208,0x4707,0x70f4,local_410,0x1d47);
        return;
      }
      if (iVar3 == 0x2afe1031) {
        iVar3 = 0x4997e84;
        goto LAB_1001c312;
      }
      if (iVar3 == 0x36407a4e) {
        puVar1 = FUN_1000732d(0x1d9e,(uint *)&DAT_1001f610,0x4c77);
        uVar2 = FUN_100010cf();
        FUN_10013b36(0x3d1a,0x2df6,0x104,0x4a98,local_410,puVar1,0x6d53,uVar2,DAT_1001fa14 + 0xc);
        FUN_10007c8f(0x6159);
        iVar3 = 0x16e484d5;
        goto LAB_1001c312;
      }
    }
    if (iVar3 == 0x1e4aaf0b) {
      return;
    }
  } while( true );
}



/* Function: FUN_1001c45c */

void __fastcall FUN_1001c45c(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_234;
  undefined4 *local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined local_20c [524];
  
  local_234 = 0;
  local_21c = 0x240af6;
  local_218 = 0;
  uVar7 = 0x178e2a39;
  uStack_214 = 0;
  uStack_210 = 0;
  local_230 = param_2;
  puVar6 = param_2;
LAB_1001cb0e:
  do {
    while (uVar7 < 0x233df4b9) {
      if (uVar7 == 0x233df4b8) {
        if (puVar6 == (undefined4 *)0x274b1a51) {
          iVar1 = FUN_1001614b(0x6c9d,0x136d,0x64e9,&local_234,0x2000000);
          uVar7 = (-(uint)(iVar1 != 0) & 0x24317f6e) + 0x31c53ef;
        }
        else {
          uVar7 = 0x274dd35d;
        }
      }
      else {
        if (uVar7 == 0x31c53ef) {
          FUN_1000d4e0(param_2,0x1f,0x4d4f,0x1bac);
          return;
        }
        if (uVar7 == 0x178e2a39) {
          param_2 = (undefined4 *)FUN_10017f68(0x1828494f,(void *)0x30);
          if (param_2 == (undefined4 *)0x0) {
            return;
          }
          uVar7 = 0x31c797e4;
        }
        else {
          if (uVar7 == 0x1828494f) {
            iVar1 = FUN_10015236(0x4f,local_234,0x9a8,local_20c,&local_22c,0xd32,0x57b1);
            uVar4 = local_234;
            uVar5 = 0xf7;
            uVar8 = 0x65b;
            uVar9 = 0x18a5;
            uVar10 = 0x6734;
            if (iVar1 != 0) {
              FUN_10002ec6(local_22c,0xc5,0x3577,0x6b4c,0x28d7);
              FUN_10002ec6(local_228,0x97,0x68ac,0xddd,0x1f96);
              uVar4 = local_234;
            }
LAB_1001cbbf:
            FUN_10002ec6(uVar4,uVar5,uVar8,uVar9,uVar10);
          }
          else {
            if (uVar7 != 0x20d75443) goto LAB_1001cde4;
            iVar1 = FUN_10012c99(local_20c,0x48d4,&local_22c);
            if (iVar1 != 0) {
              FUN_10002ec6(local_22c,0x77,0x726a,0xfdf,0x51b4);
              uVar4 = local_228;
              uVar5 = 0xf;
              uVar8 = 0x3c45;
              uVar9 = 0x40eb;
              uVar10 = 0x35c5;
              goto LAB_1001cbbf;
            }
          }
          uVar7 = 0x24987902;
        }
      }
    }
    if (uVar7 == 0x24987902) {
      param_2[0xb] = param_1;
      uVar7 = 0x2f178286;
      param_2[3] = DAT_1001fa00;
      DAT_1001fa00 = param_2;
    }
    else {
      if (uVar7 == 0x274dd35d) {
        puVar3 = FUN_10001c78(param_1,local_230,(uint *)&DAT_1001f440,local_20c);
        if (puVar3 == (undefined *)0x0) {
          if (puVar6 == (undefined4 *)0x274b1a51) {
            FUN_10002ec6(local_234,0x33,0x97e,0x388c,0x3231);
          }
          uVar7 = 0x31c53ef;
        }
        else {
          uVar7 = 0x20d75443;
          if (puVar6 == (undefined4 *)0x274b1a51) {
            uVar7 = 0x1828494f;
          }
        }
        goto LAB_1001cb0e;
      }
      if (uVar7 == 0x31c797e4) {
        iVar1 = FUN_1001262b();
        iVar2 = FUN_1001bf53();
        puVar6 = (undefined4 *)0x3b659801;
        uVar7 = 0x233df4b8;
        if (iVar1 != iVar2) {
          puVar6 = (undefined4 *)0x274b1a51;
        }
        goto LAB_1001cb0e;
      }
    }
LAB_1001cde4:
    if (uVar7 == 0x2f178286) {
      return;
    }
  } while( true );
}



/* Function: FUN_1001ce15 */

void __fastcall
FUN_1001ce15(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0x2d7,0x4d,0xcded05ce,0x1f726cae);
  (*pcVar1)(param_2);
  return;
}



/* Function: FUN_1001ceda */

void __cdecl
FUN_1001ceda(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 extraout_ECX;
  
  uVar1 = FUN_10017e12();
  pcVar2 = (code *)FUN_10018202(extraout_ECX,0x8440e238,0x34c);
  (*pcVar2)(param_4,uVar1,param_1,param_2);
  return;
}



/* Function: FUN_1001cf1c */

void __cdecl
FUN_1001cf1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  undefined8 uVar2;
  
  uVar2 = FUN_10017e12();
  pcVar1 = (code *)FUN_10018202(extraout_ECX,0x8440e238,0x34c);
  (*pcVar1)(param_6,uVar2,param_7,param_3);
  return;
}



/* Function: FUN_1001cf66 */

void __cdecl
FUN_1001cf66(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined param_5,undefined4 param_6,undefined param_7,undefined4 param_8,
            undefined param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  
  FUN_10017e12();
  pcVar1 = (code *)FUN_10007d5b(0xc0,extraout_ECX,0x2de3bdc6,0x324efddb);
  (*pcVar1)(param_11,param_2,0,0,0,param_3,0,param_13,0);
  return;
}



/* Function: FUN_1001d041 */

undefined4 FUN_1001d041(int param_1)

{
  int iVar1;
  undefined extraout_CL;
  undefined extraout_CL_00;
  undefined local_88 [64];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined *local_38;
  int local_34;
  void *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_3c = 0;
  local_48 = 0x516108;
  local_44 = 0x212b65;
  local_40 = 0x4bfb74;
  local_20 = 0x4857;
  local_8 = 0x4f0a;
  local_c = 0x4280;
  local_10 = 0x52ee;
  local_28 = 0x1aa8;
  local_18 = 0x7755;
  local_2c = 0x5b46;
  local_14 = 0x3ccf;
  local_1c = 0x6103;
  local_24 = 0x57a6;
  iVar1 = (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x28),1,0);
  if (iVar1 != 0) {
    FUN_1000c351(local_c,local_10,extraout_CL,local_88);
    local_38 = local_88;
    local_34 = FUN_10006f31(&local_30,(char)local_28,local_18,extraout_CL_00,local_2c,local_14);
    (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x28),10,&local_38);
    FUN_10007c8f(local_24);
  }
  return 0;
}



/* Function: FUN_1001d1ea */

char * __fastcall
FUN_1001d1ea(undefined4 param_1,short *param_2,undefined4 param_3,int param_4,int param_5,
            int param_6)

{
  void *pvVar1;
  char *pcVar2;
  
  FUN_10017e12();
  pcVar2 = (char *)0x0;
  pvVar1 = (void *)FUN_10017f68(0x14,(void *)0x40000);
  if (pvVar1 != (void *)0x0) {
    pcVar2 = FUN_1000e438(param_2,param_4,param_5,param_6,(int)pvVar1);
    FUN_1000d4e0(pvVar1,0xd,0x2fd5,0x7ba7);
  }
  return pcVar2;
}



