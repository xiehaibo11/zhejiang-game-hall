
undefined8 FUN_00e4ff48(long param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x108);
  if (((lVar5 == 0) || (param_2 == (char *)0x0)) || (*(long *)(lVar5 + 0x80) == 0)) {
    return 6;
  }
  if (*param_2 == '\0') {
    return 6;
  }
  plVar2 = (long *)FUN_00e14820(param_2,*(undefined8 *)(lVar5 + 0xa8));
  if (plVar2 == (long *)0x0) {
    return 6;
  }
  lVar5 = *(long *)(lVar5 + 0x90);
  lVar3 = *plVar2;
  if (lVar5 + lVar3 * 0x18 == 0) {
    return 6;
  }
  iVar1 = *(int *)(lVar5 + lVar3 * 0x18 + 8);
  if (iVar1 == 3) {
    uVar4 = 3;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 1) {
        return 6;
      }
      *param_3 = 1;
      *(undefined8 *)(param_3 + 2) = *(undefined8 *)(lVar5 + lVar3 * 0x18 + 0x10);
      return 0;
    }
    uVar4 = 2;
  }
  *param_3 = uVar4;
  param_3[2] = (int)*(undefined8 *)(lVar5 + lVar3 * 0x18 + 0x10);
  return 0;
}

