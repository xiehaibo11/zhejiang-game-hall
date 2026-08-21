
undefined8 FUN_015b7848(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  undefined8 uVar9;
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
  WasmCompiledFrame *local_70;
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
    v8::internal::RuntimeCallStats::Enter(local_620,(ulong)&local_620 | 8,0x283);
  }
  if (DAT_01d477e8 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d477e8 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d477e8;
  local_640 = (byte **)0x0;
  if ((*DAT_01d477e8 & 5) != 0) {
    local_5f8 = (long *)0x0;
    local_5f0 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_WasmExceptionGetTag",0,0,0,0,0,0,0,
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
    local_630 = "V8.Runtime_Runtime_WasmExceptionGetTag";
    local_638 = pbVar3;
    local_628 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  v8::internal::StackFrameIterator::StackFrameIterator
            ((StackFrameIterator *)&local_5f8,param_3,(ThreadLocalTop *)(param_3 + 0x2bb8));
  v8::internal::StackFrameIterator::Advance((StackFrameIterator *)&local_5f8);
  uVar6 = v8::internal::WasmCompiledFrame::wasm_instance(local_70);
  *(ulong *)(param_3 + 0x2bc8) = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0x77);
  uVar6 = *param_2;
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(param_3 + 0x95a0);
    if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
      puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar6;
  }
  else {
    puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
    uVar6 = *puVar7;
  }
  if (((uVar6 & 1) == 0) || (*(ushort *)(((ulong)param_3 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0xa9)
     ) {
    pIVar8 = param_3 + 0xa0;
  }
  else {
    pIVar8 = (Isolate *)v8::internal::WasmExceptionPackage::GetExceptionTag(param_3,puVar7);
  }
  uVar9 = *(undefined8 *)pIVar8;
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
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

