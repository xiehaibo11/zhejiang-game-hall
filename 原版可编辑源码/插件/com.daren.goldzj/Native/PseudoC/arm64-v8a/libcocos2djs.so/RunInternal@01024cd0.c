
/* v8::internal::Sweeper::IncrementalSweeperTask::RunInternal() */

void __thiscall
v8::internal::Sweeper::IncrementalSweeperTask::RunInternal(IncrementalSweeperTask *this)

{
  Mutex *this_00;
  undefined4 uVar1;
  long *plVar2;
  Sweeper *pSVar3;
  long lVar4;
  long lVar5;
  CallStatsScopedTracer aCStack_68 [8];
  long local_60;
  char *local_58;
  
  lVar5 = *(long *)(this + 0x28);
  uVar1 = *(undefined4 *)(lVar5 + 0x2c60);
  *(undefined4 *)(lVar5 + 0x2c60) = 1;
  if (RunInternal()::trace_event_unique_atomic133 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    RunInternal()::trace_event_unique_atomic133 =
         (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,&DAT_019c38f7);
  }
  local_60 = 0;
  if ((*RunInternal()::trace_event_unique_atomic133 & 5) != 0) {
    tracing::CallStatsScopedTracer::Initialize
              (aCStack_68,*(Isolate **)(this + 0x28),RunInternal()::trace_event_unique_atomic133,
               "V8.Task");
  }
  *(undefined1 *)(*(long *)(this + 0x30) + 0xf8) = 0;
  pSVar3 = *(Sweeper **)(this + 0x30);
  if (pSVar3[0xf9] != (Sweeper)0x0) {
    this_00 = (Mutex *)(pSVar3 + 0x40);
    base::Mutex::Lock(this_00);
    if (*(long *)(pSVar3 + 200) == *(long *)(pSVar3 + 0xd0)) {
      base::Mutex::Unlock(this_00);
    }
    else {
      plVar2 = (long *)(*(long *)(pSVar3 + 0xd0) + -8);
      lVar4 = *plVar2;
      *(long **)(pSVar3 + 0xd0) = plVar2;
      base::Mutex::Unlock(this_00);
      if (lVar4 != 0) {
        ParallelSweepPage(pSVar3,lVar4,3,1);
      }
    }
    if (*(long *)(pSVar3 + 200) != *(long *)(pSVar3 + 0xd0)) {
      ScheduleIncrementalSweepingTask(*(Sweeper **)(this + 0x30));
    }
  }
  if ((local_60 != 0) && (*local_58 != '\0')) {
    tracing::CallStatsScopedTracer::AddEndTraceEvent(aCStack_68);
  }
  *(undefined4 *)(lVar5 + 0x2c60) = uVar1;
  return;
}

