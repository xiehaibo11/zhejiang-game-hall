
/* v8::internal::Runtime_WasmRefFunc(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_WasmRefFunc(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  double dVar8;
  ulong uVar9;
  undefined8 uVar10;
  StackFrameIterator aSStack_608 [1416];
  WasmCompiledFrame *local_80;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (TracingFlags::runtime_stats == 0) {
    pIVar1 = param_3 + 0x95a0;
    if (trap_handler::g_is_trap_handler_enabled != '\0') {
      trap_handler::g_thread_in_wasm_code = 0;
    }
    lVar2 = *(long *)pIVar1;
    lVar3 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    StackFrameIterator::StackFrameIterator(aSStack_608,param_3,(ThreadLocalTop *)(param_3 + 0x2bb8))
    ;
    StackFrameIterator::Advance(aSStack_608);
    uVar5 = WasmCompiledFrame::wasm_instance(local_80);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)pIVar1;
      if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar6 + 1;
      *puVar6 = uVar5;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar5);
      uVar5 = *puVar6;
    }
    *(ulong *)(param_3 + 0x2bc8) = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x77);
    uVar5 = *param_2;
    if ((uVar5 & 1) == 0) {
      if ((int)uVar5 < 0) goto LAB_015bb054;
      dVar8 = (double)(uVar5 >> 1 & 0x7fffffff);
    }
    else {
      uVar9 = uVar5 & 0xffffffff00000000 | 7;
      if (*(short *)(uVar9 + *(uint *)(uVar5 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","args[0].IsNumber()");
      }
      if (*(short *)(uVar9 + *(uint *)(uVar5 - 1)) != 0x42) {
LAB_015bb054:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","args[0].ToUint32(&function_index)");
      }
      dVar8 = *(double *)(uVar5 + 3) + 4503599627370496.0;
      if (((ulong)dVar8 >> 0x20 != 0x43300000) ||
         (*(double *)(uVar5 + 3) != (double)((ulong)dVar8 & 0xffffffff))) goto LAB_015bb054;
    }
    puVar7 = (undefined8 *)WasmInstanceObject::GetOrCreateWasmExternalFunction(param_3,puVar6,dVar8)
    ;
    uVar10 = *puVar7;
    *(long *)pIVar1 = lVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar3) {
      *(long *)(param_3 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(param_3);
    }
    if (trap_handler::g_is_trap_handler_enabled != '\0') {
      trap_handler::g_thread_in_wasm_code = 1;
    }
    if (*(long *)(lVar4 + 0x28) != local_68) {
LAB_015bb050:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    uVar10 = FUN_015bb07c(param_1,param_2,param_3);
    if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_015bb050;
  }
  return uVar10;
}

