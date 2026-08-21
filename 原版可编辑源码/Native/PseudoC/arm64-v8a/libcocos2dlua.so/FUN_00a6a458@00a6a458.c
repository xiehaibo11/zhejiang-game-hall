
undefined8 FUN_00a6a458(undefined8 param_1,uint *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  int extraout_w1;
  uint uVar3;
  
  if (param_3 == 0) {
    uVar2 = 0x2b;
  }
  else {
    uVar3 = 0;
    do {
      uVar2 = FUN_00a2e3b0(param_1,param_2,4);
      if ((int)uVar2 != 0) {
        if ((int)uVar2 != 4) {
          return uVar2;
        }
        if (DAT_01782508 != '\x01') {
          iVar1 = FUN_00a2e828();
          FUN_00a38740(param_1,"WARNING: Using weak random seed\n");
          DAT_0178250c = (extraout_w1 + iVar1 + DAT_0178250c) * -0x7f82434b + 0xa70427df;
          DAT_01782508 = '\x01';
        }
        DAT_0178250c = DAT_0178250c * 0x41c64e6d + 0x3039;
        *param_2 = DAT_0178250c >> 0x10 | DAT_0178250c * 0x10000;
      }
      uVar3 = uVar3 + 1;
      param_2 = param_2 + 1;
    } while (uVar3 < param_3);
    uVar2 = 0;
  }
  return uVar2;
}

