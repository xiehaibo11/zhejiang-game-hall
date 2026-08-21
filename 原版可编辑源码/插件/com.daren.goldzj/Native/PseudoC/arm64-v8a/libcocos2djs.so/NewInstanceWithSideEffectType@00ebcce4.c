
/* v8::Function::NewInstanceWithSideEffectType(v8::Local<v8::Context>, int, v8::Local<v8::Value>*,
   v8::SideEffectType) const */

ulong * __thiscall
v8::Function::NewInstanceWithSideEffectType
          (Function *this,long param_2,undefined4 param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  Isolate *pIVar3;
  bool bVar4;
  long *plVar5;
  ulong *puVar6;
  MicrotaskQueue *pMVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  Isolate *pIVar12;
  ulong *puVar13;
  Logger *this_00;
  ulong uVar14;
  ulong uVar15;
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
  
  pIVar12 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if (DAT_01d3eb70 == (byte *)0x0) {
    plVar5 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3eb70 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,&DAT_019c38f7);
  }
  local_80 = 0;
  if ((*DAT_01d3eb70 & 5) != 0) {
    internal::tracing::CallStatsScopedTracer::Initialize
              (aCStack_88,pIVar12,DAT_01d3eb70,"V8.Execute");
  }
  uVar15 = *(ulong *)(pIVar12 + 0xa8);
  if ((*(int *)(pIVar12 + 0x2c20) != (int)uVar15) &&
     (*(int *)(pIVar12 + 0x2c20) == *(int *)(pIVar12 + 0x188))) {
    puVar13 = (ulong *)0x0;
    goto joined_r0x00ebd1f0;
  }
  local_90 = *(ulong **)(pIVar12 + 0x95a0);
  if (local_90 == *(ulong **)(pIVar12 + 0x95a8)) {
    local_90 = (ulong *)internal::HandleScope::Extend(pIVar12);
  }
  *(ulong **)(pIVar12 + 0x95a0) = local_90 + 1;
  *local_90 = uVar15;
  HandleScope::Initialize((HandleScope *)&local_a8,(Isolate *)pIVar12);
  FUN_00ea94b8(&local_f8,pIVar12,param_2);
  local_100 = 0;
  uStack_118 = 0;
  local_120 = (RuntimeCallStats *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_120 = (RuntimeCallStats *)(*(long *)(pIVar12 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_120,(ulong)&local_120 | 8,0x371);
  }
  this_00 = *(Logger **)(pIVar12 + 0x9558);
  uVar15 = internal::Logger::is_logging(this_00);
  if ((uVar15 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Function::NewInstance");
  }
  uVar2 = *(undefined4 *)(pIVar12 + 0x2c60);
  *(undefined4 *)(pIVar12 + 0x2c60) = 5;
  local_48 = pIVar12;
  internal::TimerEventScope<v8::internal::TimerEventExecute>::LogTimerEvent
            ((TimerEventScope<v8::internal::TimerEventExecute> *)&local_48,0);
  if ((param_5 == 1) && (*(int *)(pIVar12 + 0xb80c) == 0x20)) {
    uVar9 = *(ulong *)this;
    uVar15 = uVar9 & 0xffffffff00000000;
    if (((*(short *)((uVar15 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x439) ||
        (uVar1 = *(uint *)((uVar15 | *(uint *)(uVar9 + 0xb)) + 3), (uVar1 & 1) == 0)) ||
       (*(short *)((uVar15 | 7) + (ulong)*(uint *)((uVar15 | uVar1) - 1)) != 0x4e)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "self->IsJSFunction() && i::JSFunction::cast(*self).shared().IsApiFunction()");
    }
    uVar15 = *(ulong *)this & 0xffffffff00000000;
    uVar1 = *(uint *)((uVar15 | *(uint *)((uVar15 | *(uint *)(*(ulong *)this + 0xb)) + 3)) + 0x17);
    if ((((uVar1 & 1) != 0) &&
        (uVar9 = uVar15 | uVar1, *(short *)((uVar15 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x59)) &&
       (*(int *)(uVar9 - 1) != *(int *)(uVar15 + 600))) {
      uVar14 = *(ulong *)(uVar15 + 0x260);
      if ((int)uVar14 == 0) {
        *(undefined4 *)(uVar9 - 1) = 0;
      }
      else {
        internal::Heap::VerifyObjectLayoutChange((Heap *)(uVar15 + 0x8850),uVar9,uVar14);
        *(int *)(uVar9 - 1) = (int)uVar14;
        if (((uVar14 & 1) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0))
        {
          internal::Heap_MarkingBarrierSlow(uVar9,0,uVar14);
        }
      }
    }
    puVar6 = (ulong *)internal::Execution::New(pIVar12,this,this,param_3,param_4);
    uVar15 = *(ulong *)this & 0xffffffff00000000;
    uVar1 = *(uint *)((uVar15 | *(uint *)((uVar15 | *(uint *)(*(ulong *)this + 0xb)) + 3)) + 0x17);
    if (((uVar1 & 1) == 0) ||
       (uVar9 = uVar15 | uVar1, *(short *)((uVar15 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x59))
    goto joined_r0x00ebcf4c;
    if (puVar6 == (ulong *)0x0) {
      if (*(int *)(uVar9 - 1) == *(int *)(uVar15 + 0x260)) {
        uVar14 = *(ulong *)(uVar15 + 0x250);
        if ((int)uVar14 == 0) {
          *(undefined4 *)(uVar9 - 1) = 0;
        }
        else {
          internal::Heap::VerifyObjectLayoutChange((Heap *)(uVar15 + 0x8850),uVar9,uVar14);
          *(int *)(uVar9 - 1) = (int)uVar14;
          if (((uVar14 & 1) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)
             ) {
            internal::Heap_MarkingBarrierSlow(uVar9,0,uVar14);
          }
        }
      }
      goto LAB_00ebd080;
    }
LAB_00ebcf50:
    puVar13 = local_90;
    pIVar3 = local_a8;
    if (((*local_90 & 1) == 0) || ((int)*local_90 != *(int *)(local_a8 + 0xa8))) {
      lVar8 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
      if (lVar8 == 0) {
LAB_00ebd230:
        base::OS::PrintError
                  ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                   "Escape value set twice");
                    /* WARNING: Subroutine does not return */
        base::OS::Abort();
      }
      if (*(code **)(lVar8 + 0xb738) == (code *)0x0) goto LAB_00ebd230;
      (**(code **)(lVar8 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
      *(undefined1 *)(lVar8 + 0xb6b9) = 1;
    }
    if (puVar6 == (ulong *)0x0) {
      *puVar13 = *(ulong *)(pIVar3 + 0xa0);
      goto LAB_00ebd0b0;
    }
    *puVar13 = *puVar6;
  }
  else {
    puVar6 = (ulong *)internal::Execution::New(pIVar12,this,this,param_3,param_4);
joined_r0x00ebcf4c:
    if (puVar6 != (ulong *)0x0) goto LAB_00ebcf50;
LAB_00ebd080:
    local_e8 = '\x01';
    *(long *)(local_f8 + 0x2c08) = local_b0;
    if (local_b0 == 0) {
      bVar4 = *(long *)(local_f8 + 0x2bb8) == 0;
    }
    else {
      bVar4 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_f8,bVar4);
LAB_00ebd0b0:
    puVar13 = (ulong *)0x0;
  }
  internal::TimerEventScope<v8::internal::TimerEventExecute>::LogTimerEvent
            ((TimerEventScope<v8::internal::TimerEventExecute> *)&local_48,1);
  *(undefined4 *)(pIVar12 + 0x2c60) = uVar2;
  if (local_120 == (RuntimeCallStats *)0x0) {
    if (local_f0 != (ulong *)0x0) goto LAB_00ebd0d4;
LAB_00ebd160:
    pIVar12 = local_f8 + 0xb7c0;
  }
  else {
    internal::RuntimeCallStats::Leave(local_120,(RuntimeCallTimer *)((ulong)&local_120 | 8));
    if (local_f0 == (ulong *)0x0) goto LAB_00ebd160;
LAB_00ebd0d4:
    lVar8 = *(long *)(local_f8 + 0x95c0);
    lVar10 = *(long *)(lVar8 + 0x60) + -1;
    uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0x50) + lVar10 * 8);
    *(long *)(lVar8 + 0x60) = lVar10;
    *(undefined8 *)(local_f8 + 0x2bc8) = uVar11;
    uVar15 = *local_f0 & 0xffffffff00000000;
    pIVar12 = (Isolate *)((uVar15 | *(uint *)((uVar15 | *(uint *)(*local_f0 - 1)) + 0x13)) + 0x423);
  }
  pMVar7 = *(MicrotaskQueue **)pIVar12;
  if (local_e8 == '\0') {
    *(long *)(local_f8 + 0x2c08) = local_b0;
  }
  internal::Isolate::FireCallCompletedCallback(local_f8,pMVar7);
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
joined_r0x00ebd1f0:
  if ((local_80 != 0) && (*local_78 != '\0')) {
    internal::tracing::CallStatsScopedTracer::AddEndTraceEvent(aCStack_88);
  }
  return puVar13;
}

