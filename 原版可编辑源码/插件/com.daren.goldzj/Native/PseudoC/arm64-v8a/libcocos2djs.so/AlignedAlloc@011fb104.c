
/* v8::internal::AlignedAlloc(unsigned long, unsigned long) */

void v8::internal::AlignedAlloc(ulong param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  lVar1 = memalign(param_2,param_1);
  if (lVar1 == 0) {
    plVar2 = (long *)V8::GetCurrentPlatform();
    uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2 + param_1);
    if ((uVar3 & 1) == 0) {
      plVar2 = (long *)V8::GetCurrentPlatform();
      (**(code **)(*plVar2 + 0x18))();
    }
    lVar1 = memalign(param_2,param_1);
    if (lVar1 == 0) {
      plVar2 = (long *)V8::GetCurrentPlatform();
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2 + param_1);
      if ((uVar3 & 1) == 0) {
        plVar2 = (long *)V8::GetCurrentPlatform();
        (**(code **)(*plVar2 + 0x18))();
      }
                    /* WARNING: Subroutine does not return */
      V8::FatalProcessOutOfMemory((Isolate *)0x0,"AlignedAlloc",false);
    }
  }
  return;
}

