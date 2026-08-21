
undefined8 FUN_00a12ca8(undefined8 param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = param_3;
  if (param_3 < 0x80) goto LAB_00a12d30;
  uVar1 = param_3 - 0xa0;
  if (uVar1 < 0x60) {
    puVar2 = &DAT_012ff19c;
  }
  else {
    uVar1 = param_3 - 0x150;
    if (uVar1 < 0x48) {
      puVar2 = &DAT_012ff1fc;
    }
    else {
      if (param_3 == 0x2c6) {
        uVar1 = 0x88;
        goto LAB_00a12d30;
      }
      uVar1 = param_3 - 0x608;
      if (uVar1 < 0xd0) {
        puVar2 = &DAT_012ff244;
      }
      else {
        uVar1 = param_3 - 0x2008;
        if (0x37 < uVar1) {
          uVar1 = 0xffffff99;
          if (param_3 != 0x2122) {
            uVar1 = 0;
          }
          if (param_3 == 0x20ac) {
            uVar1 = 0x80;
          }
          else if ((uVar1 & 0xff) == 0) {
            return 0xffffffff;
          }
          goto LAB_00a12d30;
        }
        puVar2 = &DAT_012ff314;
      }
    }
  }
  uVar1 = (uint)(byte)puVar2[uVar1];
  if (uVar1 == 0) {
    return 0xffffffff;
  }
LAB_00a12d30:
  *param_2 = (char)uVar1;
  return 1;
}

