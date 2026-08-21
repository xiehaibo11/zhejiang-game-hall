
/* v8::internal::AllocatePages(v8::PageAllocator*, void*, unsigned long, unsigned long,
   v8::PageAllocator::Permission) */

long v8::internal::AllocatePages
               (long *param_1,undefined8 param_2,long param_3,long param_4,undefined4 param_5)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  if (FLAG_randomize_all_allocations != '\0') {
    param_2 = (**(code **)(*param_1 + 0x28))(param_1);
  }
  lVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4,param_5);
  if (lVar1 == 0) {
    lVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    plVar2 = (long *)V8::GetCurrentPlatform();
    uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,(param_4 + param_3) - lVar1);
    if ((uVar3 & 1) == 0) {
      plVar2 = (long *)V8::GetCurrentPlatform();
      (**(code **)(*plVar2 + 0x18))();
    }
    lVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4,param_5);
    if (lVar1 == 0) {
      lVar1 = (**(code **)(*param_1 + 0x10))(param_1);
      plVar2 = (long *)V8::GetCurrentPlatform();
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,(param_4 + param_3) - lVar1);
      if ((uVar3 & 1) == 0) {
        plVar2 = (long *)V8::GetCurrentPlatform();
        (**(code **)(*plVar2 + 0x18))();
      }
      lVar1 = 0;
    }
  }
  return lVar1;
}

