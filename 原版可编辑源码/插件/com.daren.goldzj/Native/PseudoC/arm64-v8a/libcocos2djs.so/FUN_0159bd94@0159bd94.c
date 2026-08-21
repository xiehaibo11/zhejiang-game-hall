
undefined8 FUN_0159bd94(undefined8 param_1,undefined8 param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 uVar10;
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
  long *local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_600 = 0;
  uStack_618 = 0;
  local_620 = (RuntimeCallStats *)0x0;
  uStack_608 = 0;
  uStack_610 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_620 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_620,(ulong)&local_620 | 8,0x277);
  }
  if (DAT_01d47450 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47450 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d47450;
  local_640 = (byte **)0x0;
  if ((*DAT_01d47450 & 5) != 0) {
    local_5f8 = (long *)0x0;
    local_5f0 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.Runtime_Runtime_DeoptimizeNow",0,0,0,0,0,0,0,
                       &local_5f8,0);
    plVar5 = local_5f0;
    local_5f0 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_5f8;
    local_5f8 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_640 = &local_638;
    local_630 = "V8.Runtime_Runtime_DeoptimizeNow";
    local_638 = pbVar4;
    local_628 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  v8::internal::StackFrameIterator::StackFrameIterator((StackFrameIterator *)&local_5f8,param_3);
  if ((local_70 != (long *)0x0) &&
     (v8::internal::JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)&local_5f8),
     local_70 != (long *)0x0)) {
    uVar7 = (**(code **)(*local_70 + 0x98))();
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(param_3 + 0x95a0);
      if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
        puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar7;
    }
    else {
      puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
    }
    if (puVar8 != (ulong *)0x0) {
      uVar9 = *puVar8;
      uVar7 = uVar9 & 0xffffffff00000000;
      if (*(int *)((uVar7 | *(uint *)(uVar9 + 0x17)) + 0x27) != 0x42) {
        uVar1 = *(uint *)((uVar7 | *(uint *)(uVar9 + 0xb)) + 3);
        if (((uVar1 != 0x84) &&
            ((((uVar1 & 1) == 0 ||
              (1 < *(ushort *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar1) - 1)) - 0x95)) &&
             ((*(byte *)((uVar7 | *(uint *)(uVar9 + 0x17)) + 0x17) & 0x3e) == 0)))) &&
           ((*(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(uVar9 + 0x17)) + 0xf)) + 7) & 1) == 0))
        {
          v8::internal::Deoptimizer::DeoptimizeFunction(*puVar8,0);
        }
      }
    }
  }
  uVar10 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_640 != (byte **)0x0) && (*local_638 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_638,local_630,local_628);
  }
  if (local_620 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_620,(RuntimeCallTimer *)((ulong)&local_620 | 8));
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

