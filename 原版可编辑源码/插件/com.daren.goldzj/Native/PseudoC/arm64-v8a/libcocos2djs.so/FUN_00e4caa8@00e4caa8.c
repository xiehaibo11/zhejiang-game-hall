
undefined8 FUN_00e4caa8(long param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_1 + 0x1f8);
  if (0 < iVar1) {
    lVar5 = 1;
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x200) + -8);
    do {
      puVar4 = puVar2;
      iVar3 = strcmp((char *)puVar4[1],param_2);
      puVar2 = puVar4 + 3;
      if (iVar1 <= lVar5) break;
      lVar5 = lVar5 + 1;
    } while (iVar3 != 0);
    if (iVar3 == 0) {
      if (*(char *)(puVar4 + 2) != '\0') {
        *param_3 = 1;
        *(undefined8 *)(param_3 + 2) = *puVar2;
        return 0;
      }
      *param_3 = 2;
      param_3[2] = (int)*puVar2;
      return 0;
    }
  }
  return 6;
}

