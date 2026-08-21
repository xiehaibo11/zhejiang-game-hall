
undefined8 FUN_00a11e74(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  
  if (param_3 < 0xa0) {
    *param_2 = (char)param_3;
    return 1;
  }
  if (param_3 < 0x100) {
    uVar3 = (ulong)(param_3 - 0xa0);
    puVar5 = &DAT_012fdc54;
  }
  else {
    uVar2 = param_3 - 0x108;
    if (uVar2 < 0x20) {
      puVar4 = &DAT_012fc934;
LAB_00a11eec:
      cVar1 = puVar4[uVar2];
      goto joined_r0x00a11ef4;
    }
    if ((param_3 & 0xfffffff0) == 0x170) {
      uVar3 = (ulong)(param_3 - 0x170);
      puVar5 = &LAB_012fc604;
    }
    else {
      uVar2 = param_3 - 0x1e00;
      if (uVar2 < 0x88) {
        puVar4 = &DAT_012fdcb4;
        goto LAB_00a11eec;
      }
      if (param_3 >> 3 != 0x3de) {
        return 0xffffffff;
      }
      uVar3 = (ulong)(param_3 - 0x1ef0);
      puVar5 = &DAT_012fd11c;
    }
  }
  cVar1 = puVar5[uVar3];
joined_r0x00a11ef4:
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
  *param_2 = cVar1;
  return 1;
}

