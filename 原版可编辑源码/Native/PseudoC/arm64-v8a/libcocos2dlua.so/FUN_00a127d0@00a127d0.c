
undefined8 FUN_00a127d0(undefined8 param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  byte *pbVar2;
  undefined *puVar3;
  
  uVar1 = param_3;
  if ((param_3 < 0x80) || (param_3 - 0xa0 < 0x30)) goto LAB_00a1285c;
  uVar1 = param_3 - 0xd0;
  if (uVar1 < 0x30) {
    puVar3 = &DAT_012fec34;
LAB_00a1284c:
    pbVar2 = puVar3 + uVar1;
  }
  else {
    uVar1 = param_3 - 0x118;
    if (uVar1 < 0x80) {
      puVar3 = &DAT_012fec64;
      goto LAB_00a1284c;
    }
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
        goto LAB_00a1285c;
      }
      puVar3 = &DAT_013028a6;
      goto LAB_00a1284c;
    }
    pbVar2 = &DAT_012fcbb4 + (param_3 - 0x2c0);
  }
  uVar1 = (uint)*pbVar2;
  if (uVar1 == 0) {
    return 0xffffffff;
  }
LAB_00a1285c:
  *param_2 = (char)uVar1;
  return 1;
}

