
undefined8 FUN_00a11acc(undefined8 param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined *puVar4;
  
  uVar1 = param_3;
  if (param_3 < 0xa0) goto LAB_00a11b34;
  if (param_3 < 0xc0) {
    iVar2 = -0xa0;
    puVar4 = &DAT_012fc8f4;
LAB_00a11b24:
    pbVar3 = puVar4 + (param_3 + iVar2);
  }
  else {
    if (0x57 < param_3 - 0x378) {
      if (param_3 >> 4 != 0x201) {
        uVar1 = 0xffffffa5;
        if (param_3 != 0x20af) {
          uVar1 = 0;
        }
        if (param_3 == 0x20ac) {
          uVar1 = 0xa4;
        }
        else if ((uVar1 & 0xff) == 0) {
          return 0xffffffff;
        }
        goto LAB_00a11b34;
      }
      iVar2 = -0x2010;
      puVar4 = &DAT_012fc5e4;
      goto LAB_00a11b24;
    }
    pbVar3 = &DAT_012fd63c + (param_3 - 0x378);
  }
  uVar1 = (uint)*pbVar3;
  if (uVar1 == 0) {
    return 0xffffffff;
  }
LAB_00a11b34:
  *param_2 = (char)uVar1;
  return 1;
}

