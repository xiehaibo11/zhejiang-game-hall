
undefined8 FUN_00a14718(undefined8 param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  
  if (param_3 < 0x80) goto LAB_00a147c0;
  if (param_3 < 0xa0) {
    uVar1 = param_3 - 0x80;
    puVar2 = &DAT_012fcb94;
LAB_00a147b4:
    param_3 = (uint)(byte)puVar2[uVar1];
  }
  else if ((0xbf < param_3) && (0x19 < param_3 - 0xe6)) {
    uVar1 = param_3 - 0x150;
    if (uVar1 < 0x48) {
      puVar2 = &DAT_013022ce;
    }
    else if ((param_3 & 0xffffffe0) == 0x2c0) {
      uVar1 = param_3 - 0x2c0;
      puVar2 = &DAT_012fcbb4;
    }
    else {
      uVar1 = param_3 - 0x10d0;
      if (uVar1 < 0x28) {
        puVar2 = &DAT_01302316;
      }
      else {
        uVar1 = param_3 - 0x2010;
        if (0x2f < uVar1) {
          if (param_3 != 0x2122) {
            return 0xffffffff;
          }
          param_3 = 0x99;
          goto LAB_00a147c0;
        }
        puVar2 = &DAT_013028a6;
      }
    }
    goto LAB_00a147b4;
  }
  if ((param_3 & 0xff) == 0) {
    return 0xffffffff;
  }
LAB_00a147c0:
  *param_2 = (char)param_3;
  return 1;
}

