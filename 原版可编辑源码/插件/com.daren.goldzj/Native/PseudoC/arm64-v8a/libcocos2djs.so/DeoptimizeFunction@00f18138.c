
/* v8::internal::Deoptimizer::DeoptimizeFunction(v8::internal::JSFunction, v8::internal::Code) */

void v8::internal::Deoptimizer::DeoptimizeFunction(ulong param_1,ulong param_2)

{
  uint *puVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  Isolate *pIVar7;
  byte **local_a8;
  byte *local_a0;
  char *local_98;
  undefined8 local_90;
  Isolate *local_88;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_50;
  long *local_48;
  ulong local_28;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  pIVar7 = (Isolate *)(param_1 & 0xffffffff00000000);
  local_28 = param_1;
  if (TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(pIVar7 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x7f);
  }
  local_88 = pIVar7;
  TimerEventScope<v8::internal::TimerEventDeoptimizeCode>::LogTimerEvent
            ((TimerEventScope<v8::internal::TimerEventDeoptimizeCode> *)&local_88,0);
  if (DAT_01d3ec80 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ec80 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,&DAT_019c38f7);
  }
  pbVar2 = DAT_01d3ec80;
  local_a8 = (byte **)0x0;
  if ((*DAT_01d3ec80 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"V8.DeoptimizeCode",0,0,0,0,0,0,0,&local_50,0);
    plVar3 = local_48;
    local_48 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_50;
    local_50 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_a8 = &local_a0;
    local_98 = "V8.DeoptimizeCode";
    local_a0 = pbVar2;
    local_90 = uVar4;
  }
  JSFunction::ResetIfBytecodeFlushed((JSFunction *)&local_28);
  if ((int)param_2 == 0) {
    param_2 = local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 + 0x17);
  }
  if ((*(byte *)(param_2 + 0x17) & 0x3e) == 0) {
    puVar1 = (uint *)(param_2 + 0xf);
    param_2 = param_2 & 0xffffffff00000000;
    *(uint *)((param_2 | *puVar1) + 7) = *(uint *)((param_2 | *puVar1) + 7) | 1;
    uVar6 = local_28 & 0xffffffff00000000;
    local_50 = (long *)(uVar6 | *(uint *)((uVar6 | *(uint *)(local_28 + 0x13)) + 3));
    FeedbackVector::EvictOptimizedCodeMarkedForDeoptimization
              ((FeedbackVector *)&local_50,uVar6 | *(uint *)(local_28 + 0xb),
               "unlinking code marked for deopt");
    if ((*(uint *)((param_2 | *puVar1) + 7) >> 2 & 1) == 0) {
      *(uint *)((param_2 | *puVar1) + 7) = *(uint *)((param_2 | *puVar1) + 7) | 4;
    }
    uVar6 = local_28 & 0xffffffff00000000;
    DeoptimizeMarkedCodeForContext
              (uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(local_28 + 0xf)) - 1)) + 0x13
                                ));
    uVar6 = local_28 & 0xffffffff00000000;
    uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(local_28 + 0xf)) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar7 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar7 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar7);
      }
      *(ulong **)(pIVar7 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar6;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar6);
    }
    OSROptimizedCodeCache::Compact();
  }
  if ((local_a8 != (byte **)0x0) && (*local_a0 != 0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_a0,local_98,local_90);
  }
  TimerEventScope<v8::internal::TimerEventDeoptimizeCode>::LogTimerEvent
            ((TimerEventScope<v8::internal::TimerEventDeoptimizeCode> *)&local_88,1);
  if (local_80 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return;
}

