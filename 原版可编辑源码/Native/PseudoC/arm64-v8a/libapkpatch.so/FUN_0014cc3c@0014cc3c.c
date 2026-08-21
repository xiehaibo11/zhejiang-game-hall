
void FUN_0014cc3c(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *__src;
  size_t __n;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  __src = *(void **)(param_1 + 0x10);
  __n = *(long *)(param_1 + 0x18) - (long)__src;
  if (__n != 0) {
    lVar3 = param_2[1];
    __size = lVar3 + __n;
    if (__size < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar2 = param_2[2] << 1;
      if (__size <= uVar2) {
        __size = uVar2;
      }
      param_2[2] = __size;
      pvVar1 = realloc((void *)*param_2,__size);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
    }
    memmove((void *)((long)pvVar1 + lVar3),__src,__n);
    param_2[1] = param_2[1] + __n;
  }
  plVar4 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if (*(char *)((long)plVar4 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0014cd14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}

