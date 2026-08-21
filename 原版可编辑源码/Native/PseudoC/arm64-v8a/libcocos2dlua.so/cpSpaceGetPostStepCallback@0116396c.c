
long cpSpaceGetPostStepCallback(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = **(int **)(param_1 + 0xf0);
  if (0 < iVar1) {
    lVar3 = 0;
    do {
      lVar2 = *(long *)(*(long *)(*(int **)(param_1 + 0xf0) + 2) + lVar3 * 8);
      if ((lVar2 != 0) && (*(long *)(lVar2 + 8) == param_2)) {
        return lVar2;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  return 0;
}

