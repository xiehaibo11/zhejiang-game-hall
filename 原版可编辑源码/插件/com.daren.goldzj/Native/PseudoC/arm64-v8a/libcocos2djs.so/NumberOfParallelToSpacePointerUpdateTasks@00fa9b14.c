
/* v8::internal::MarkCompactCollectorBase::NumberOfParallelToSpacePointerUpdateTasks(int) */

int __thiscall
v8::internal::MarkCompactCollectorBase::NumberOfParallelToSpacePointerUpdateTasks
          (MarkCompactCollectorBase *this,int param_1)

{
  int iVar1;
  long *plVar2;
  
  if (FLAG_parallel_pointer_update == '\0') {
    iVar1 = 1;
  }
  else {
    if (((DAT_01d3f358 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3f358), iVar1 != 0)) {
      plVar2 = (long *)V8::GetCurrentPlatform();
      iVar1 = (**(code **)(*plVar2 + 0x28))();
      DAT_01d3f350 = iVar1 + 1;
      __cxa_guard_release(&DAT_01d3f358);
    }
    iVar1 = DAT_01d3f350;
    if (param_1 <= DAT_01d3f350) {
      iVar1 = param_1;
    }
  }
  return iVar1;
}

