
void FUN_0010e758(long param_1,char *param_2,long param_3)

{
  int iVar1;
  size_t sVar2;
  void *__dest;
  int iVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    iVar3 = 0;
    do {
      iVar1 = FUN_0010e398(plVar4[7],param_2);
      if (iVar1 == 0) {
        sVar2 = strlen(param_2);
        __dest = (void *)(*(code *)PTR_malloc_00113048)(sVar2 + 1);
        if (__dest != (void *)0x0) {
          memcpy(__dest,param_2,sVar2 + 1);
        }
        *(void **)(param_3 + 0x38) = __dest;
        FUN_0010e6e4(param_1,iVar3,param_3);
        return;
      }
      plVar4 = (long *)*plVar4;
      iVar3 = iVar3 + 1;
    } while (plVar4 != (long *)0x0);
  }
  return;
}

