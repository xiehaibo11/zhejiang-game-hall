
/* v8::internal::MarkCompactCollectorBase::NumberOfParallelPointerUpdateTasks(int, int) */

uint __thiscall
v8::internal::MarkCompactCollectorBase::NumberOfParallelPointerUpdateTasks
          (MarkCompactCollectorBase *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  
  if (-1 < param_2) {
    if ((int)((uint)param_2 / 600) <= param_1) {
      param_1 = (uint)param_2 / 600;
    }
    if (param_1 < 2) {
      param_1 = 1;
    }
  }
  if (FLAG_parallel_pointer_update == '\0') {
    uVar1 = 1;
  }
  else {
    if (((DAT_01d3f358 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01d3f358), iVar2 != 0)) {
      plVar3 = (long *)V8::GetCurrentPlatform();
      iVar2 = (**(code **)(*plVar3 + 0x28))();
      DAT_01d3f350 = iVar2 + 1;
      __cxa_guard_release(&DAT_01d3f358);
    }
    uVar1 = DAT_01d3f350;
    if (param_1 <= (int)DAT_01d3f350) {
      uVar1 = param_1;
    }
    if (7 < (int)uVar1) {
      uVar1 = 8;
    }
  }
  return uVar1;
}

