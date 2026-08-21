
void freeSymbolTable(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    lVar3 = 0;
    iVar2 = 0;
    if (0 < (int)param_1[1]) {
      do {
        iVar2 = iVar2 + 1;
        lVar1 = *param_1 + lVar3;
        lVar3 = lVar3 + 0x18;
        free(*(void **)(lVar1 + 0x10));
      } while (iVar2 < (int)param_1[1]);
    }
    free((void *)*param_1);
    free(param_1);
    return;
  }
  return;
}

