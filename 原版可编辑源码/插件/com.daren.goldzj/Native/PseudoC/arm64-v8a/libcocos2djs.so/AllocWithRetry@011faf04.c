
/* v8::internal::AllocWithRetry(unsigned long) */

void * v8::internal::AllocWithRetry(ulong param_1)

{
  void *pvVar1;
  long *plVar2;
  ulong uVar3;
  
  pvVar1 = malloc(param_1);
  if (pvVar1 == (void *)0x0) {
    plVar2 = (long *)V8::GetCurrentPlatform();
    uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
    if ((uVar3 & 1) == 0) {
      plVar2 = (long *)V8::GetCurrentPlatform();
      (**(code **)(*plVar2 + 0x18))();
    }
    pvVar1 = malloc(param_1);
    if (pvVar1 == (void *)0x0) {
      plVar2 = (long *)V8::GetCurrentPlatform();
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
      if ((uVar3 & 1) == 0) {
        plVar2 = (long *)V8::GetCurrentPlatform();
        (**(code **)(*plVar2 + 0x18))();
      }
      pvVar1 = (void *)0x0;
    }
  }
  return pvVar1;
}

