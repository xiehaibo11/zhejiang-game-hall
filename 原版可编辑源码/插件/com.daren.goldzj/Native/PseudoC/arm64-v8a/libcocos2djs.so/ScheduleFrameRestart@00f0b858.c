
/* v8::internal::Debug::ScheduleFrameRestart(v8::internal::StackFrame*) */

void __thiscall v8::internal::Debug::ScheduleFrameRestart(Debug *this,StackFrame *param_1)

{
  long lVar1;
  undefined4 uVar2;
  StackTraceFrameIterator aSStack_b78 [1416];
  long *local_5f0;
  StackTraceFrameIterator aSStack_5d8 [1440];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(ulong *)(this + 0x78) < *(ulong *)(param_1 + 0x20)) {
    *(ulong *)(this + 0x78) = *(ulong *)(param_1 + 0x20);
    StackTraceFrameIterator::StackTraceFrameIterator(aSStack_5d8,*(Isolate **)(this + 0x88));
    *(undefined4 *)(this + 0x48) = 0;
    StackTraceFrameIterator::StackTraceFrameIterator(aSStack_b78,*(Isolate **)(this + 0x88));
    while (local_5f0 != (long *)0x0) {
      if (*(ulong *)(this + 0x78) < (ulong)local_5f0[4]) {
        uVar2 = (**(code **)(*local_5f0 + 0x38))();
        *(undefined4 *)(this + 0x48) = uVar2;
        break;
      }
      StackTraceFrameIterator::Advance(aSStack_b78);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

