
/* v8::internal::MinorMarkCompactCollector::NumberOfParallelMarkingTasks(int) */

int __thiscall
v8::internal::MinorMarkCompactCollector::NumberOfParallelMarkingTasks
          (MinorMarkCompactCollector *this,int param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  
  if (FLAG_minor_mc_parallel_marking == '\0') {
    iVar1 = 1;
  }
  else {
    if (param_1 < 0) {
      param_1 = param_1 + 1;
    }
    iVar3 = param_1 >> 1;
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    if (((DAT_01d3f358 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3f358), iVar1 != 0)) {
      plVar2 = (long *)V8::GetCurrentPlatform();
      iVar1 = (**(code **)(*plVar2 + 0x28))();
      DAT_01d3f350 = iVar1 + 1;
      __cxa_guard_release(&DAT_01d3f358);
    }
    if (7 < iVar3) {
      iVar3 = 8;
    }
    iVar1 = DAT_01d3f350;
    if (iVar3 <= DAT_01d3f350) {
      iVar1 = iVar3;
    }
  }
  return iVar1;
}

