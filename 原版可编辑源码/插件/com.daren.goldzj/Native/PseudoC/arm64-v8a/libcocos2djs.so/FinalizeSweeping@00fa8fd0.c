
/* v8::internal::IncrementalMarking::FinalizeSweeping() */

void __thiscall v8::internal::IncrementalMarking::FinalizeSweeping(IncrementalMarking *this)

{
  MarkCompactCollector *this_00;
  ulong uVar1;
  
  this_00 = *(MarkCompactCollector **)(this + 8);
  if ((*(Sweeper **)(this_00 + 0x26f8))[0xf9] != (Sweeper)0x0) {
    if (FLAG_concurrent_sweeping != '\0') {
      uVar1 = Sweeper::AreSweeperTasksRunning(*(Sweeper **)(this_00 + 0x26f8));
      if ((uVar1 & 1) != 0) goto LAB_00fa9014;
      this_00 = *(MarkCompactCollector **)(this + 8);
    }
    MarkCompactCollector::EnsureSweepingCompleted(this_00);
  }
LAB_00fa9014:
  if (*(char *)(*(long *)(*(long *)(this + 8) + 0x26f8) + 0xf9) != '\0') {
    return;
  }
  StartMarking(this);
  return;
}

