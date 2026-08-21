
void freeSymbolTable(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (param_1 != (long *)0x0) {
    __ptr = (void *)*param_1;
    if (0 < (int)param_1[1]) {
      lVar1 = 0;
      lVar2 = 0x10;
      do {
        free(*(void **)((long)__ptr + lVar2));
        __ptr = (void *)*param_1;
        lVar1 = lVar1 + 1;
        lVar2 = lVar2 + 0x18;
      } while (lVar1 < (int)param_1[1]);
    }
    free(__ptr);
    free(param_1);
    return;
  }
  return;
}

