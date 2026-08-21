
undefined8 FUN_011be2d8(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte **local_640;
  byte *local_638;
  char *local_630;
  undefined8 local_628;
  RuntimeCallStats *local_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 local_600;
  long *local_5f8;
  long *local_5f0;
  long local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_600 = 0;
  uStack_618 = 0;
  local_620 = (RuntimeCallStats *)0x0;
  uStack_608 = 0;
  uStack_610 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_620 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_620,(ulong)&local_620 | 8,0xfe);
  }
  if (DAT_01d3f948 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f948 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d3f948;
  local_640 = (byte **)0x0;
  if ((*DAT_01d3f948 & 5) != 0) {
    local_5f8 = (long *)0x0;
    local_5f0 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_DebugBreakAtEntry",0,0,0,0,0,0,0,
                       &local_5f8,0);
    plVar4 = local_5f0;
    local_5f0 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_5f8;
    local_5f8 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_640 = &local_638;
    local_630 = "V8.Runtime_Runtime_DebugBreakAtEntry";
    local_638 = pbVar3;
    local_628 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) == 0) ||
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x439)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
  }
  v8::internal::StackFrameIterator::StackFrameIterator((StackFrameIterator *)&local_5f8,param_3);
  if (local_70 != 0) {
    v8::internal::JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)&local_5f8);
  }
  v8::internal::JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)&local_5f8);
  if ((local_70 != 0) && (*(ulong *)(local_70 + 0x20) < *(ulong *)(param_3 + 0x2c08))) {
    v8::internal::Debug::Break(*(Debug **)(param_3 + 0xb6c8),local_70,param_2);
  }
  uVar7 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0x95a0) = uVar5;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_640 != (byte **)0x0) && (*local_638 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_638,local_630,local_628);
  }
  if (local_620 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_620,(RuntimeCallTimer *)((ulong)&local_620 | 8));
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

