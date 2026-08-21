
/* v8::Object::CallAsFunction(v8::Local<v8::Context>, v8::Local<v8::Value>, int,
   v8::Local<v8::Value>*) */

ulong * __thiscall
v8::Object::CallAsFunction
          (Object *this,long param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  bool bVar2;
  long *plVar3;
  ulong *puVar4;
  long lVar5;
  MicrotaskQueue *pMVar6;
  long lVar7;
  undefined8 uVar8;
  Isolate *pIVar9;
  ulong *puVar10;
  Logger *this_00;
  ulong uVar11;
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
  Isolate *local_48;
  
  pIVar9 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if (DAT_01d3eb60 == (byte *)0x0) {
    plVar3 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3eb60 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,&DAT_019c38f7);
  }
  local_80 = 0;
  if ((*DAT_01d3eb60 & 5) != 0) {
    internal::tracing::CallStatsScopedTracer::Initialize
              (aCStack_88,pIVar9,DAT_01d3eb60,"V8.Execute");
  }
  uVar11 = *(ulong *)(pIVar9 + 0xa8);
  if ((*(int *)(pIVar9 + 0x2c20) != (int)uVar11) &&
     (*(int *)(pIVar9 + 0x2c20) == *(int *)(pIVar9 + 0x188))) {
    puVar10 = (ulong *)0x0;
    goto joined_r0x00ebc4c8;
  }
  local_90 = *(ulong **)(pIVar9 + 0x95a0);
  if (local_90 == *(ulong **)(pIVar9 + 0x95a8)) {
    local_90 = (ulong *)internal::HandleScope::Extend(pIVar9);
  }
  *(ulong **)(pIVar9 + 0x95a0) = local_90 + 1;
  *local_90 = uVar11;
  HandleScope::Initialize((HandleScope *)&local_a8,(Isolate *)pIVar9);
  FUN_00ea94b8(&local_f8,pIVar9,param_2);
  local_100 = 0;
  uStack_118 = 0;
  local_120 = (RuntimeCallStats *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_120 = (RuntimeCallStats *)(*(long *)(pIVar9 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_120,(ulong)&local_120 | 8,0x390);
  }
  this_00 = *(Logger **)(pIVar9 + 0x9558);
  uVar11 = internal::Logger::is_logging(this_00);
  if ((uVar11 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Object::CallAsFunction");
  }
  uVar1 = *(undefined4 *)(pIVar9 + 0x2c60);
  *(undefined4 *)(pIVar9 + 0x2c60) = 5;
  local_48 = pIVar9;
  internal::TimerEventScope<v8::internal::TimerEventExecute>::LogTimerEvent
            ((TimerEventScope<v8::internal::TimerEventExecute> *)&local_48,0);
  puVar4 = (ulong *)internal::Execution::Call(pIVar9,this,param_3,param_4,param_5);
  puVar10 = local_90;
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
    puVar10 = (ulong *)0x0;
  }
  else {
    if (((*local_90 & 1) == 0) || ((int)*local_90 != *(int *)(local_a8 + 0xa8))) {
      lVar5 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
      if (lVar5 == 0) {
LAB_00ebc508:
        base::OS::PrintError
                  ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                   "Escape value set twice");
                    /* WARNING: Subroutine does not return */
        base::OS::Abort();
      }
      if (*(code **)(lVar5 + 0xb738) == (code *)0x0) goto LAB_00ebc508;
      (**(code **)(lVar5 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
      *(undefined1 *)(lVar5 + 0xb6b9) = 1;
    }
    *puVar10 = *puVar4;
  }
  internal::TimerEventScope<v8::internal::TimerEventExecute>::LogTimerEvent
            ((TimerEventScope<v8::internal::TimerEventExecute> *)&local_48,1);
  *(undefined4 *)(pIVar9 + 0x2c60) = uVar1;
  if (local_120 == (RuntimeCallStats *)0x0) {
    if (local_f0 == (ulong *)0x0) goto LAB_00ebc438;
LAB_00ebc3b4:
    lVar5 = *(long *)(local_f8 + 0x95c0);
    lVar7 = *(long *)(lVar5 + 0x60) + -1;
    uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0x50) + lVar7 * 8);
    *(long *)(lVar5 + 0x60) = lVar7;
    *(undefined8 *)(local_f8 + 0x2bc8) = uVar8;
    uVar11 = *local_f0 & 0xffffffff00000000;
    pIVar9 = (Isolate *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*local_f0 - 1)) + 0x13)) + 0x423);
  }
  else {
    internal::RuntimeCallStats::Leave(local_120,(RuntimeCallTimer *)((ulong)&local_120 | 8));
    if (local_f0 != (ulong *)0x0) goto LAB_00ebc3b4;
LAB_00ebc438:
    pIVar9 = local_f8 + 0xb7c0;
  }
  pMVar6 = *(MicrotaskQueue **)pIVar9;
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
joined_r0x00ebc4c8:
  if ((local_80 != 0) && (*local_78 != '\0')) {
    internal::tracing::CallStatsScopedTracer::AddEndTraceEvent(aCStack_88);
  }
  return puVar10;
}

