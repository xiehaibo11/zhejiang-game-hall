
/* v8::internal::OptimizingCompileDispatcher::CompileTask::RunInternal() */

void __thiscall
v8::internal::OptimizingCompileDispatcher::CompileTask::RunInternal(CompileTask *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  OptimizingCompileDispatcher *this_00;
  OptimizedCompilationJob *pOVar8;
  byte **local_a8;
  byte *local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_50;
  long *local_48;
  RuntimeCallStats *local_28;
  
  WorkerThreadRuntimeCallStatsScope::WorkerThreadRuntimeCallStatsScope
            ((WorkerThreadRuntimeCallStatsScope *)&local_28,
             *(WorkerThreadRuntimeCallStats **)(this + 0x30));
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if ((local_28 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
    local_80 = local_28;
    RuntimeCallStats::Enter(local_28,(RuntimeCallTimer *)((ulong)&local_80 | 8),0xa5);
  }
  local_88 = *(undefined8 *)(this + 0x28);
  TimerEventScope<v8::internal::TimerEventRecompileConcurrent>::LogTimerEvent
            ((TimerEventScope<v8::internal::TimerEventRecompileConcurrent> *)&local_88,0);
  if (RunInternal()::trace_event_unique_atomic72 == (byte *)0x0) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    RunInternal()::trace_event_unique_atomic72 =
         (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.compile");
  }
  pbVar4 = RunInternal()::trace_event_unique_atomic72;
  local_a8 = (byte **)0x0;
  if ((*RunInternal()::trace_event_unique_atomic72 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.OptimizeBackground",0,0,0,0,0,0,0,&local_50,0);
    plVar5 = local_48;
    local_48 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_50;
    local_50 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_a8 = &local_a0;
    local_98 = "V8.OptimizeBackground";
    local_a0 = pbVar4;
    local_90 = uVar6;
  }
  this_00 = *(OptimizingCompileDispatcher **)(this + 0x38);
  if (*(int *)(this_00 + 0x104) != 0) {
    base::OS::Sleep((long)*(int *)(this_00 + 0x104) * 1000);
    this_00 = *(OptimizingCompileDispatcher **)(this + 0x38);
  }
  base::Mutex::Lock((Mutex *)(this_00 + 0x1c));
  if (*(int *)(this_00 + 0x14) != 0) {
    iVar1 = *(int *)(this_00 + 0x18);
    iVar2 = *(int *)(this_00 + 0x10);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar1 / iVar2;
    }
    pOVar8 = *(OptimizedCompilationJob **)
              (*(long *)(this_00 + 8) + (long)(iVar1 - iVar3 * iVar2) * 8);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = (iVar1 + 1) / iVar2;
    }
    *(int *)(this_00 + 0x14) = *(int *)(this_00 + 0x14) + -1;
    *(int *)(this_00 + 0x18) = (iVar1 + 1) - iVar3 * iVar2;
    if (*(int *)(this_00 + 0xa0) != 1) goto LAB_00ef90a8;
    FUN_00ef7b88(pOVar8,1);
  }
  pOVar8 = (OptimizedCompilationJob *)0x0;
LAB_00ef90a8:
  base::Mutex::Unlock((Mutex *)(this_00 + 0x1c));
  CompileNext(this_00,pOVar8,local_28);
  if ((local_a8 != (byte **)0x0) && (*local_a0 != 0)) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_a0,local_98,local_90);
  }
  TimerEventScope<v8::internal::TimerEventRecompileConcurrent>::LogTimerEvent
            ((TimerEventScope<v8::internal::TimerEventRecompileConcurrent> *)&local_88,1);
  if (local_80 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  WorkerThreadRuntimeCallStatsScope::~WorkerThreadRuntimeCallStatsScope
            ((WorkerThreadRuntimeCallStatsScope *)&local_28);
  lVar7 = *(long *)(this + 0x38);
  base::Mutex::Lock((Mutex *)(lVar7 + 0xac));
  iVar1 = *(int *)(*(long *)(this + 0x38) + 0xa8) + -1;
  *(int *)(*(long *)(this + 0x38) + 0xa8) = iVar1;
  if (iVar1 == 0) {
    base::ConditionVariable::NotifyOne((ConditionVariable *)(*(long *)(this + 0x38) + 0xd4));
  }
  base::Mutex::Unlock((Mutex *)(lVar7 + 0xac));
  return;
}

