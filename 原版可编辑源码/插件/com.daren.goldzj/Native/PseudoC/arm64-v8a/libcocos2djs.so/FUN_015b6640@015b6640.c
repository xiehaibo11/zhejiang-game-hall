
ulong FUN_015b6640(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_60;
  long *local_58;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x284);
  }
  if (DAT_01d477c0 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d477c0 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d477c0;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d477c0 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_WasmMemoryGrow",0,0,0,0,0,0,0,
                       &local_60,0);
    plVar4 = local_58;
    local_58 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_60;
    local_60 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_WasmMemoryGrow";
    local_a8 = pbVar3;
    local_98 = uVar5;
  }
  puVar1 = *(ulong **)(param_3 + 0x95a0);
  puVar2 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) == 0) ||
     (uVar8 = uVar7 & 0xffffffff00000000,
     *(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x434)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsWasmInstanceObject()");
  }
  uVar9 = param_2[-1];
  if ((uVar9 & 1) == 0) {
    if (-1 < (int)uVar9) {
      dVar11 = (double)(uVar9 >> 1 & 0x7fffffff);
LAB_015b67ec:
      if (v8::internal::trap_handler::g_is_trap_handler_enabled != '\0') {
        v8::internal::trap_handler::g_thread_in_wasm_code = 0;
        uVar7 = *param_2;
        uVar8 = uVar7 & 0xffffffff00000000;
      }
      uVar8 = uVar8 | *(uint *)(uVar7 + 0x7b);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = puVar1;
        if (puVar2 == puVar1) {
          puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar6 + 1;
        *puVar6 = uVar8;
      }
      else {
        puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar8);
      }
      uVar7 = v8::internal::WasmMemoryObject::Grow(param_3,puVar6,(ulong)dVar11 & 0xffffffff);
      if (v8::internal::trap_handler::g_is_trap_handler_enabled != '\0') {
        v8::internal::trap_handler::g_thread_in_wasm_code = 1;
      }
      *(ulong **)(param_3 + 0x95a0) = puVar1;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(ulong **)(param_3 + 0x95a8) != puVar2) {
        *(ulong **)(param_3 + 0x95a8) = puVar2;
        v8::internal::HandleScope::DeleteExtensions(param_3);
      }
      if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
        plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar4 + 0x28))(plVar4,local_a8,local_a0,local_98);
      }
      if (local_90 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
      }
      return -((uVar7 & 0xffffffff) >> 0x1f) & 0xfffffffe00000000 | (uVar7 & 0xffffffff) << 1;
    }
  }
  else {
    uVar10 = uVar9 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsNumber()");
    }
    if (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) == 0x42) {
      dVar11 = *(double *)(uVar9 + 3) + 4503599627370496.0;
      if (((ulong)dVar11 >> 0x20 == 0x43300000) &&
         (*(double *)(uVar9 + 3) == (double)((ulong)dVar11 & 0xffffffff))) goto LAB_015b67ec;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[1].ToUint32(&delta_pages)");
}

