
undefined8 FUN_00a12db0(undefined8 param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  byte *pbVar2;
  undefined *puVar3;
  
  uVar1 = param_3;
  if (param_3 < 0x80) goto LAB_00a12e18;
  uVar1 = param_3 - 0xa0;
  if (uVar1 < 0xe0) {
    puVar3 = &DAT_012ff44c;
LAB_00a12e08:
    pbVar2 = puVar3 + uVar1;
  }
  else {
    if ((param_3 & 0xffffffe0) != 0x2c0) {
      uVar1 = param_3 - 0x2010;
      if (0x2f < uVar1) {
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
        goto LAB_00a12e18;
      }
      puVar3 = &DAT_013028a6;
      goto LAB_00a12e08;
    }
    pbVar2 = &LAB_012fc9f4 + (param_3 - 0x2c0);
  }
  uVar1 = (uint)*pbVar2;
  if (uVar1 == 0) {
    return 0xffffffff;
  }
LAB_00a12e18:
  *param_2 = (char)uVar1;
  return 1;
}

