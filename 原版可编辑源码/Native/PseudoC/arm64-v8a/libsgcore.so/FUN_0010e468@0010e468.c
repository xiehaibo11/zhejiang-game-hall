
void FUN_0010e468(long param_1,char *param_2,long param_3)

{
  long *plVar1;
  size_t sVar2;
  void *__dest;
  long *plVar3;
  
  if (param_3 != 0) {
    if (*(long *)(param_3 + 0x38) != 0) {
      (*(code *)PTR_free_00113050)();
    }
    sVar2 = strlen(param_2);
    __dest = (void *)(*(code *)PTR_malloc_00113048)(sVar2 + 1);
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,sVar2 + 1);
    }
    *(void **)(param_3 + 0x38) = __dest;
    plVar1 = *(long **)(param_1 + 0x10);
    if (*(long **)(param_1 + 0x10) == (long *)0x0) {
      *(long *)(param_1 + 0x10) = param_3;
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
      *plVar3 = param_3;
      *(long **)(param_3 + 8) = plVar3;
    }
  }
  return;
}

