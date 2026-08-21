
/* v8::internal::MarkCompactCollectorBase::NumberOfParallelCompactionTasks(int) */

int __thiscall
v8::internal::MarkCompactCollectorBase::NumberOfParallelCompactionTasks
          (MarkCompactCollectorBase *this,int param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  if (FLAG_parallel_compaction == '\0') {
    iVar1 = 1;
  }
  else {
    if (((DAT_01d3f358 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3f358), iVar1 != 0)) {
      plVar3 = (long *)V8::GetCurrentPlatform();
      iVar1 = (**(code **)(*plVar3 + 0x28))();
      DAT_01d3f350 = iVar1 + 1;
      __cxa_guard_release(&DAT_01d3f358);
    }
    iVar1 = DAT_01d3f350;
    if (param_1 <= DAT_01d3f350) {
      iVar1 = param_1;
    }
  }
  uVar2 = Heap::CanExpandOldGeneration(*(Heap **)(this + 8),(long)(iVar1 << 0x12));
  if ((uVar2 & 1) == 0) {
    iVar1 = 1;
  }
  return iVar1;
}

