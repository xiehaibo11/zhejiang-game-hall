
undefined8 FUN_00a14db0(undefined8 param_1,char *param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  
  if (param_3 < 0x80) {
    if ((0x1f < param_3) || ((1 << (ulong)(param_3 & 0x1f) & 0x42100064U) == 0)) {
      *param_2 = (char)param_3;
      return 1;
    }
  }
  else {
    uVar1 = param_3 - 0xc0;
    if (uVar1 < 0xf8) {
      puVar2 = &DAT_01302da6;
    }
    else {
      uVar1 = param_3 - 0x1ea0;
      if (0x5f < uVar1) {
        return 0xffffffff;
      }
      puVar2 = &DAT_01302e9e;
    }
    if (puVar2[uVar1] != '\0') {
      *param_2 = puVar2[uVar1];
      return 1;
    }
  }
  return 0xffffffff;
}

