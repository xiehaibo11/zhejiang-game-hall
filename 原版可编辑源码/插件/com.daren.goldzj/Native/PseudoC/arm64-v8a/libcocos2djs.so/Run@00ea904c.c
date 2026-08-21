
/* v8::Script::Run(v8::Local<v8::Context>) */

ulong * __thiscall v8::Script::Run(Script *this,long param_2)

{
  Isolate *pIVar1;
  undefined4 uVar2;
  bool bVar3;
  long *plVar4;
  ulong *puVar5;
  long lVar6;
  MicrotaskQueue *pMVar7;
  undefined8 uVar8;
  Isolate *pIVar9;
  ulong *puVar10;
  Logger *this_00;
  ulong uVar11;
  long lVar12;
  long lVar13;
  Isolate *local_138;
  RuntimeCallStats *local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  Isolate *local_108;
  ulong *local_100;
  char local_f8;
  Isolate local_f6;
  undefined **local_f0;
  StackGuard *local_e8;
  int local_d0;
  long local_c0;
  Isolate *local_b8;
  undefined8 uStack_b0;
  long local_a8;
  ulong *local_a0;
  CallStatsScopedTracer aCStack_98 [8];
  long local_90;
  char *local_88;
  undefined8 local_70 [2];
  
  pIVar9 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if (DAT_01d3eb28 == (byte *)0x0) {
    plVar4 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3eb28 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,&DAT_019c38f7);
  }
  local_90 = 0;
  if ((*DAT_01d3eb28 & 5) != 0) {
    internal::tracing::CallStatsScopedTracer::Initialize
              (aCStack_98,pIVar9,DAT_01d3eb28,"V8.Execute");
  }
  uVar11 = *(ulong *)(pIVar9 + 0xa8);
  if ((*(int *)(pIVar9 + 0x2c20) != (int)uVar11) &&
     (*(int *)(pIVar9 + 0x2c20) == *(int *)(pIVar9 + 0x188))) {
    puVar10 = (ulong *)0x0;
    goto joined_r0x00ea9458;
  }
  pIVar1 = pIVar9 + 0x95a0;
  local_a0 = *(ulong **)pIVar1;
  if (local_a0 == *(ulong **)(pIVar9 + 0x95a8)) {
    local_a0 = (ulong *)internal::HandleScope::Extend(pIVar9);
  }
  *(ulong **)pIVar1 = local_a0 + 1;
  *local_a0 = uVar11;
  HandleScope::Initialize((HandleScope *)&local_b8,(Isolate *)pIVar9);
  FUN_00ea94b8(&local_108,pIVar9,param_2);
  local_110 = 0;
  uStack_128 = 0;
  local_130 = (RuntimeCallStats *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_130 = (RuntimeCallStats *)(*(long *)(pIVar9 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_130,(ulong)&local_130 | 8,0x3ca);
  }
  this_00 = *(Logger **)(pIVar9 + 0x9558);
  uVar11 = internal::Logger::is_logging(this_00);
  if ((uVar11 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Script::Run");
  }
  uVar2 = *(undefined4 *)(pIVar9 + 0x2c60);
  *(undefined4 *)(pIVar9 + 0x2c60) = 5;
  lVar12 = *(long *)(pIVar9 + 0x9520);
  internal::TimedHistogram::Start
            ((TimedHistogram *)(lVar12 + 0xb68),(ElapsedTimer *)(lVar12 + 0xb98),
             *(Isolate **)(*(long *)(lVar12 + 0xb88) + 0x10));
  lVar13 = *(long *)(pIVar9 + 0x9520);
  *(undefined8 *)(lVar13 + 0x15c8) = 0;
  local_138 = pIVar9;
  internal::TimerEventScope<v8::internal::TimerEventExecute>::LogTimerEvent
            ((TimerEventScope<v8::internal::TimerEventExecute> *)&local_138,0);
  local_70[0] = *(undefined8 *)(pIVar9 + 0x2bc8);
  uVar11 = internal::Context::global_proxy((Context *)local_70);
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)pIVar1;
    if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar10 = (ulong *)internal::HandleScope::Extend(pIVar9);
    }
    *(ulong **)pIVar1 = puVar10 + 1;
    *puVar10 = uVar11;
  }
  else {
    puVar10 = (ulong *)internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar11);
  }
  puVar5 = (ulong *)internal::Execution::Call(pIVar9,this,puVar10,0,0);
  puVar10 = local_a0;
  if (puVar5 == (ulong *)0x0) {
    local_f8 = '\x01';
    *(long *)(local_108 + 0x2c08) = local_c0;
    if (local_c0 == 0) {
      bVar3 = *(long *)(local_108 + 0x2bb8) == 0;
    }
    else {
      bVar3 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_108,bVar3);
    puVar10 = (ulong *)0x0;
  }
  else {
    if (((*local_a0 & 1) == 0) || ((int)*local_a0 != *(int *)(local_b8 + 0xa8))) {
      lVar6 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
      if (lVar6 == 0) {
LAB_00ea9498:
        base::OS::PrintError
                  ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                   "Escape value set twice");
                    /* WARNING: Subroutine does not return */
        base::OS::Abort();
      }
      if (*(code **)(lVar6 + 0xb738) == (code *)0x0) goto LAB_00ea9498;
      (**(code **)(lVar6 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
      *(undefined1 *)(lVar6 + 0xb6b9) = 1;
    }
    *puVar10 = *puVar5;
  }
  internal::TimerEventScope<v8::internal::TimerEventExecute>::LogTimerEvent
            ((TimerEventScope<v8::internal::TimerEventExecute> *)&local_138,1);
  if (*(long *)(lVar13 + 0x15c8) != 0) {
    base::TimeDelta::InMicroseconds((TimeDelta *)(lVar13 + 0x15c8));
    internal::Histogram::AddSample((int)lVar13 + 0x15a0);
  }
  internal::TimedHistogram::Stop
            ((TimedHistogram *)(lVar12 + 0xb68),(ElapsedTimer *)(lVar12 + 0xb98),
             *(Isolate **)(*(long *)(lVar12 + 0xb88) + 0x10));
  *(undefined4 *)(pIVar9 + 0x2c60) = uVar2;
  if (local_130 == (RuntimeCallStats *)0x0) {
    if (local_100 == (ulong *)0x0) goto LAB_00ea93c8;
LAB_00ea9344:
    lVar12 = *(long *)(local_108 + 0x95c0);
    lVar13 = *(long *)(lVar12 + 0x60) + -1;
    uVar8 = *(undefined8 *)(*(long *)(lVar12 + 0x50) + lVar13 * 8);
    *(long *)(lVar12 + 0x60) = lVar13;
    *(undefined8 *)(local_108 + 0x2bc8) = uVar8;
    uVar11 = *local_100 & 0xffffffff00000000;
    pIVar9 = (Isolate *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*local_100 - 1)) + 0x13)) + 0x423);
  }
  else {
    internal::RuntimeCallStats::Leave(local_130,(RuntimeCallTimer *)((ulong)&local_130 | 8));
    if (local_100 != (ulong *)0x0) goto LAB_00ea9344;
LAB_00ea93c8:
    pIVar9 = local_108 + 0xb7c0;
  }
  pMVar7 = *(MicrotaskQueue **)pIVar9;
  if (local_f8 == '\0') {
    *(long *)(local_108 + 0x2c08) = local_c0;
  }
  internal::Isolate::FireCallCompletedCallback(local_108,pMVar7);
  local_108[0xb828] = local_f6;
  local_f0 = &PTR__InterruptsScope_01c984b0;
  if (local_d0 != 2) {
    internal::StackGuard::PopInterruptsScope(local_e8);
  }
  *(undefined8 *)(local_b8 + 0x95a0) = uStack_b0;
  *(int *)(local_b8 + 0x95b0) = *(int *)(local_b8 + 0x95b0) + -1;
  if (*(long *)(local_b8 + 0x95a8) != local_a8) {
    *(long *)(local_b8 + 0x95a8) = local_a8;
    internal::HandleScope::DeleteExtensions(local_b8);
  }
joined_r0x00ea9458:
  if ((local_90 != 0) && (*local_88 != '\0')) {
    internal::tracing::CallStatsScopedTracer::AddEndTraceEvent(aCStack_98);
  }
  return puVar10;
}

