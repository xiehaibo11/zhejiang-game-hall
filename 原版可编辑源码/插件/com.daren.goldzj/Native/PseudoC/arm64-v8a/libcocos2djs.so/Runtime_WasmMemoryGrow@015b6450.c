
/* v8::internal::Runtime_WasmMemoryGrow(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_WasmMemoryGrow(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_015b6640(param_1,param_2,param_3);
    return uVar5;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) == 0) ||
     (uVar6 = uVar5 & 0xffffffff00000000,
     *(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x434)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsWasmInstanceObject()");
  }
  uVar7 = param_2[-1];
  if ((uVar7 & 1) == 0) {
    if (-1 < (int)uVar7) {
      dVar9 = (double)(uVar7 >> 1 & 0x7fffffff);
LAB_015b651c:
      if (trap_handler::g_is_trap_handler_enabled != '\0') {
        trap_handler::g_thread_in_wasm_code = 0;
        uVar5 = *param_2;
        uVar6 = uVar5 & 0xffffffff00000000;
      }
      uVar6 = uVar6 | *(uint *)(uVar5 + 0x7b);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = puVar2;
        if (puVar3 == puVar2) {
          puVar4 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar4 + 1;
        *puVar4 = uVar6;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
      }
      uVar5 = WasmMemoryObject::Grow(param_3,puVar4,(ulong)dVar9 & 0xffffffff);
      if (trap_handler::g_is_trap_handler_enabled != '\0') {
        trap_handler::g_thread_in_wasm_code = 1;
      }
      *(ulong **)pIVar1 = puVar2;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
        *(ulong **)(param_3 + 0x95a8) = puVar3;
        HandleScope::DeleteExtensions(param_3);
      }
      return -(uVar5 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar5 & 0xffffffff) << 1;
    }
  }
  else {
    uVar8 = uVar7 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar8 + *(uint *)(uVar7 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsNumber()");
    }
    if (*(short *)(uVar8 + *(uint *)(uVar7 - 1)) == 0x42) {
      dVar9 = *(double *)(uVar7 + 3) + 4503599627370496.0;
      if (((ulong)dVar9 >> 0x20 == 0x43300000) &&
         (*(double *)(uVar7 + 3) == (double)((ulong)dVar9 & 0xffffffff))) goto LAB_015b651c;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[1].ToUint32(&delta_pages)");
}

