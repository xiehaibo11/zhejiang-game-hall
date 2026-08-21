
/* v8::Module::Evaluate(v8::Local<v8::Context>) */

ulong * __thiscall v8::Module::Evaluate(Module *this,long param_2)

{
  undefined4 uVar1;
  bool bVar2;
  long *plVar3;
  ulong *puVar4;
  long lVar5;
  MicrotaskQueue *pMVar6;
  undefined8 uVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  Logger *this_00;
  ulong uVar10;
  long lVar11;
  long lVar12;
  Isolate *local_128;
  RuntimeCallStats *local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  Isolate *local_f8;
  ulong *local_f0;
  char local_e8;
  Isolate local_e6;
  undefined **local_e0;
  StackGuard *local_d8;
  int local_c0;
  long local_b0;
  Isolate *local_a8;
  undefined8 uStack_a0;
  long local_98;
  ulong *local_90;
  CallStatsScopedTracer aCStack_88 [8];
  long local_80;
  char *local_78;
  
  pIVar8 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if (DAT_01d3eb30 == (byte *)0x0) {
    plVar3 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3eb30 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,&DAT_019c38f7);
  }
  local_80 = 0;
  if ((*DAT_01d3eb30 & 5) != 0) {
    internal::tracing::CallStatsScopedTracer::Initialize
              (aCStack_88,pIVar8,DAT_01d3eb30,"V8.Execute");
  }
  uVar10 = *(ulong *)(pIVar8 + 0xa8);
  if ((*(int *)(pIVar8 + 0x2c20) != (int)uVar10) &&
     (*(int *)(pIVar8 + 0x2c20) == *(int *)(pIVar8 + 0x188))) {
    puVar9 = (ulong *)0x0;
    goto joined_r0x00eaa898;
  }
  local_90 = *(ulong **)(pIVar8 + 0x95a0);
  if (local_90 == *(ulong **)(pIVar8 + 0x95a8)) {
    local_90 = (ulong *)internal::HandleScope::Extend(pIVar8);
  }
  *(ulong **)(pIVar8 + 0x95a0) = local_90 + 1;
  *local_90 = uVar10;
  HandleScope::Initialize((HandleScope *)&local_a8,(Isolate *)pIVar8);
  FUN_00ea94b8(&local_f8,pIVar8,param_2);
  local_100 = 0;
  uStack_118 = 0;
  local_120 = (RuntimeCallStats *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_120 = (RuntimeCallStats *)(*(long *)(pIVar8 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_120,(ulong)&local_120 | 8,0x38a);
  }
  this_00 = *(Logger **)(pIVar8 + 0x9558);
  uVar10 = internal::Logger::is_logging(this_00);
  if ((uVar10 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Module::Evaluate");
  }
  uVar1 = *(undefined4 *)(pIVar8 + 0x2c60);
  *(undefined4 *)(pIVar8 + 0x2c60) = 5;
  lVar11 = *(long *)(pIVar8 + 0x9520);
  internal::TimedHistogram::Start
            ((TimedHistogram *)(lVar11 + 0xb68),(ElapsedTimer *)(lVar11 + 0xb98),
             *(Isolate **)(*(long *)(lVar11 + 0xb88) + 0x10));
  lVar12 = *(long *)(pIVar8 + 0x9520);
  *(undefined8 *)(lVar12 + 0x15c8) = 0;
  local_128 = pIVar8;
  internal::TimerEventScope<v8::internal::TimerEventExecute>::LogTimerEvent
            ((TimerEventScope<v8::internal::TimerEventExecute> *)&local_128,0);
  if ((*(int *)(*(long *)this + 0xb) < 0) || ((uint)(*(int *)(*(long *)this + 0xb) >> 1) < 3)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","self->status() >= i::Module::kInstantiated");
  }
  puVar4 = (ulong *)internal::Module::Evaluate(pIVar8,this);
  puVar9 = local_90;
  if (puVar4 == (ulong *)0x0) {
    local_e8 = '\x01';
    *(long *)(local_f8 + 0x2c08) = local_b0;
    if (local_b0 == 0) {
      bVar2 = *(long *)(local_f8 + 0x2bb8) == 0;
    }
    else {
      bVar2 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_f8,bVar2);
    puVar9 = (ulong *)0x0;
  }
  else {
    if (((*local_90 & 1) == 0) || ((int)*local_90 != *(int *)(local_a8 + 0xa8))) {
      lVar5 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
      if (lVar5 == 0) {
LAB_00eaa8ec:
        base::OS::PrintError
                  ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                   "Escape value set twice");
                    /* WARNING: Subroutine does not return */
        base::OS::Abort();
      }
      if (*(code **)(lVar5 + 0xb738) == (code *)0x0) goto LAB_00eaa8ec;
      (**(code **)(lVar5 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
      *(undefined1 *)(lVar5 + 0xb6b9) = 1;
    }
    *puVar9 = *puVar4;
  }
  internal::TimerEventScope<v8::internal::TimerEventExecute>::LogTimerEvent
            ((TimerEventScope<v8::internal::TimerEventExecute> *)&local_128,1);
  if (*(long *)(lVar12 + 0x15c8) != 0) {
    base::TimeDelta::InMicroseconds((TimeDelta *)(lVar12 + 0x15c8));
    internal::Histogram::AddSample((int)lVar12 + 0x15a0);
  }
  internal::TimedHistogram::Stop
            ((TimedHistogram *)(lVar11 + 0xb68),(ElapsedTimer *)(lVar11 + 0xb98),
             *(Isolate **)(*(long *)(lVar11 + 0xb88) + 0x10));
  *(undefined4 *)(pIVar8 + 0x2c60) = uVar1;
  if (local_120 == (RuntimeCallStats *)0x0) {
    if (local_f0 == (ulong *)0x0) goto LAB_00eaa808;
LAB_00eaa784:
    lVar11 = *(long *)(local_f8 + 0x95c0);
    lVar12 = *(long *)(lVar11 + 0x60) + -1;
    uVar7 = *(undefined8 *)(*(long *)(lVar11 + 0x50) + lVar12 * 8);
    *(long *)(lVar11 + 0x60) = lVar12;
    *(undefined8 *)(local_f8 + 0x2bc8) = uVar7;
    uVar10 = *local_f0 & 0xffffffff00000000;
    pIVar8 = (Isolate *)((uVar10 | *(uint *)((uVar10 | *(uint *)(*local_f0 - 1)) + 0x13)) + 0x423);
  }
  else {
    internal::RuntimeCallStats::Leave(local_120,(RuntimeCallTimer *)((ulong)&local_120 | 8));
    if (local_f0 != (ulong *)0x0) goto LAB_00eaa784;
LAB_00eaa808:
    pIVar8 = local_f8 + 0xb7c0;
  }
  pMVar6 = *(MicrotaskQueue **)pIVar8;
  if (local_e8 == '\0') {
    *(long *)(local_f8 + 0x2c08) = local_b0;
  }
  internal::Isolate::FireCallCompletedCallback(local_f8,pMVar6);
  local_f8[0xb828] = local_e6;
  local_e0 = &PTR__InterruptsScope_01c984b0;
  if (local_c0 != 2) {
    internal::StackGuard::PopInterruptsScope(local_d8);
  }
  *(undefined8 *)(local_a8 + 0x95a0) = uStack_a0;
  *(int *)(local_a8 + 0x95b0) = *(int *)(local_a8 + 0x95b0) + -1;
  if (*(long *)(local_a8 + 0x95a8) != local_98) {
    *(long *)(local_a8 + 0x95a8) = local_98;
    internal::HandleScope::DeleteExtensions(local_a8);
  }
joined_r0x00eaa898:
  if ((local_80 != 0) && (*local_78 != '\0')) {
    internal::tracing::CallStatsScopedTracer::AddEndTraceEvent(aCStack_88);
  }
  return puVar9;
}

