
undefined8 FUN_015bb07c(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  double dVar9;
  ulong uVar10;
  undefined8 uVar11;
  byte **local_650;
  byte *local_648;
  char *local_640;
  undefined8 local_638;
  RuntimeCallStats *local_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 local_610;
  long *local_608;
  long *local_600;
  WasmCompiledFrame *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_610 = 0;
  uStack_628 = 0;
  local_630 = (RuntimeCallStats *)0x0;
  uStack_618 = 0;
  uStack_620 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_630 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_630,(ulong)&local_630 | 8,0x289);
  }
  if (DAT_01d47828 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47828 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47828;
  local_650 = (byte **)0x0;
  if ((*DAT_01d47828 & 5) != 0) {
    local_608 = (long *)0x0;
    local_600 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_WasmRefFunc",0,0,0,0,0,0,0,&local_608,
                       0);
    plVar4 = local_600;
    local_600 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_608;
    local_608 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_650 = &local_648;
    local_640 = "V8.Runtime_Runtime_WasmRefFunc";
    local_648 = pbVar3;
    local_638 = uVar5;
  }
  if (v8::internal::trap_handler::g_is_trap_handler_enabled != '\0') {
    v8::internal::trap_handler::g_thread_in_wasm_code = 0;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  v8::internal::StackFrameIterator::StackFrameIterator
            ((StackFrameIterator *)&local_608,param_3,(ThreadLocalTop *)(param_3 + 0x2bb8));
  v8::internal::StackFrameIterator::Advance((StackFrameIterator *)&local_608);
  uVar6 = v8::internal::WasmCompiledFrame::wasm_instance(local_80);
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
  *(ulong *)(param_3 + 0x2bc8) = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0x77);
  uVar6 = *param_2;
  if ((uVar6 & 1) == 0) {
    if (-1 < (int)uVar6) {
      dVar9 = (double)(uVar6 >> 1 & 0x7fffffff);
LAB_015bb2b0:
      puVar8 = (undefined8 *)
               v8::internal::WasmInstanceObject::GetOrCreateWasmExternalFunction
                         (param_3,puVar7,dVar9);
      uVar11 = *puVar8;
      *(undefined8 *)(param_3 + 0x95a0) = uVar5;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        v8::internal::HandleScope::DeleteExtensions(param_3);
      }
      if (v8::internal::trap_handler::g_is_trap_handler_enabled != '\0') {
        v8::internal::trap_handler::g_thread_in_wasm_code = 1;
      }
      if ((local_650 != (byte **)0x0) && (*local_648 != 0)) {
        plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar4 + 0x28))(plVar4,local_648,local_640,local_638);
      }
      if (local_630 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_630,(RuntimeCallTimer *)((ulong)&local_630 | 8))
        ;
      }
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return uVar11;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    uVar10 = uVar6 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar10 + *(uint *)(uVar6 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsNumber()");
    }
    if (*(short *)(uVar10 + *(uint *)(uVar6 - 1)) == 0x42) {
      dVar9 = *(double *)(uVar6 + 3) + 4503599627370496.0;
      if (((ulong)dVar9 >> 0x20 == 0x43300000) &&
         (*(double *)(uVar6 + 3) == (double)((ulong)dVar9 & 0xffffffff))) goto LAB_015bb2b0;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].ToUint32(&function_index)");
}

