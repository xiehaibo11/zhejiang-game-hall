
/* v8::Object::CallAsConstructor(v8::Local<v8::Context>, int, v8::Local<v8::Value>*) */

ulong * __thiscall
v8::Object::CallAsConstructor(Object *this,long param_2,undefined4 param_3,undefined8 param_4)

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
  Isolate *local_118;
  RuntimeCallStats *local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  Isolate *local_e8;
  ulong *local_e0;
  char local_d8;
  Isolate local_d6;
  undefined **local_d0;
  StackGuard *local_c8;
  int local_b0;
  long local_a0;
  Isolate *local_98;
  undefined8 uStack_90;
  long local_88;
  ulong *local_80;
  CallStatsScopedTracer aCStack_78 [8];
  long local_70;
  char *local_68;
  
  pIVar9 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if (DAT_01d3eb68 == (byte *)0x0) {
    plVar3 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3eb68 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,&DAT_019c38f7);
  }
  local_70 = 0;
  if ((*DAT_01d3eb68 & 5) != 0) {
    internal::tracing::CallStatsScopedTracer::Initialize
              (aCStack_78,pIVar9,DAT_01d3eb68,"V8.Execute");
  }
  uVar11 = *(ulong *)(pIVar9 + 0xa8);
  if ((*(int *)(pIVar9 + 0x2c20) != (int)uVar11) &&
     (*(int *)(pIVar9 + 0x2c20) == *(int *)(pIVar9 + 0x188))) {
    puVar10 = (ulong *)0x0;
    goto joined_r0x00ebc870;
  }
  local_80 = *(ulong **)(pIVar9 + 0x95a0);
  if (local_80 == *(ulong **)(pIVar9 + 0x95a8)) {
    local_80 = (ulong *)internal::HandleScope::Extend(pIVar9);
  }
  *(ulong **)(pIVar9 + 0x95a0) = local_80 + 1;
  *local_80 = uVar11;
  HandleScope::Initialize((HandleScope *)&local_98,(Isolate *)pIVar9);
  FUN_00ea94b8(&local_e8,pIVar9,param_2);
  local_f0 = 0;
  uStack_108 = 0;
  local_110 = (RuntimeCallStats *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_110 = (RuntimeCallStats *)(*(long *)(pIVar9 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_110,(ulong)&local_110 | 8,0x38f);
  }
  this_00 = *(Logger **)(pIVar9 + 0x9558);
  uVar11 = internal::Logger::is_logging(this_00);
  if ((uVar11 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Object::CallAsConstructor");
  }
  uVar1 = *(undefined4 *)(pIVar9 + 0x2c60);
  *(undefined4 *)(pIVar9 + 0x2c60) = 5;
  local_118 = pIVar9;
  internal::TimerEventScope<v8::internal::TimerEventExecute>::LogTimerEvent
            ((TimerEventScope<v8::internal::TimerEventExecute> *)&local_118,0);
  puVar4 = (ulong *)internal::Execution::New(pIVar9,this,this,param_3,param_4);
  puVar10 = local_80;
  if (puVar4 == (ulong *)0x0) {
    local_d8 = '\x01';
    *(long *)(local_e8 + 0x2c08) = local_a0;
    if (local_a0 == 0) {
      bVar2 = *(long *)(local_e8 + 0x2bb8) == 0;
    }
    else {
      bVar2 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_e8,bVar2);
    puVar10 = (ulong *)0x0;
  }
  else {
    if (((*local_80 & 1) == 0) || ((int)*local_80 != *(int *)(local_98 + 0xa8))) {
      lVar5 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
      if (lVar5 == 0) {
LAB_00ebc8ac:
        base::OS::PrintError
                  ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                   "Escape value set twice");
                    /* WARNING: Subroutine does not return */
        base::OS::Abort();
      }
      if (*(code **)(lVar5 + 0xb738) == (code *)0x0) goto LAB_00ebc8ac;
      (**(code **)(lVar5 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
      *(undefined1 *)(lVar5 + 0xb6b9) = 1;
    }
    *puVar10 = *puVar4;
  }
  internal::TimerEventScope<v8::internal::TimerEventExecute>::LogTimerEvent
            ((TimerEventScope<v8::internal::TimerEventExecute> *)&local_118,1);
  *(undefined4 *)(pIVar9 + 0x2c60) = uVar1;
  if (local_110 == (RuntimeCallStats *)0x0) {
    if (local_e0 == (ulong *)0x0) goto LAB_00ebc7e0;
LAB_00ebc75c:
    lVar5 = *(long *)(local_e8 + 0x95c0);
    lVar7 = *(long *)(lVar5 + 0x60) + -1;
    uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0x50) + lVar7 * 8);
    *(long *)(lVar5 + 0x60) = lVar7;
    *(undefined8 *)(local_e8 + 0x2bc8) = uVar8;
    uVar11 = *local_e0 & 0xffffffff00000000;
    pIVar9 = (Isolate *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*local_e0 - 1)) + 0x13)) + 0x423);
  }
  else {
    internal::RuntimeCallStats::Leave(local_110,(RuntimeCallTimer *)((ulong)&local_110 | 8));
    if (local_e0 != (ulong *)0x0) goto LAB_00ebc75c;
LAB_00ebc7e0:
    pIVar9 = local_e8 + 0xb7c0;
  }
  pMVar6 = *(MicrotaskQueue **)pIVar9;
  if (local_d8 == '\0') {
    *(long *)(local_e8 + 0x2c08) = local_a0;
  }
  internal::Isolate::FireCallCompletedCallback(local_e8,pMVar6);
  local_e8[0xb828] = local_d6;
  local_d0 = &PTR__InterruptsScope_01c984b0;
  if (local_b0 != 2) {
    internal::StackGuard::PopInterruptsScope(local_c8);
  }
  *(undefined8 *)(local_98 + 0x95a0) = uStack_90;
  *(int *)(local_98 + 0x95b0) = *(int *)(local_98 + 0x95b0) + -1;
  if (*(long *)(local_98 + 0x95a8) != local_88) {
    *(long *)(local_98 + 0x95a8) = local_88;
    internal::HandleScope::DeleteExtensions(local_98);
  }
joined_r0x00ebc870:
  if ((local_70 != 0) && (*local_68 != '\0')) {
    internal::tracing::CallStatsScopedTracer::AddEndTraceEvent(aCStack_78);
  }
  return puVar10;
}

