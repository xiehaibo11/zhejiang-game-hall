
undefined8 FUN_015bbea0(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_70;
  long *local_68;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x28b);
  }
  if (DAT_01d47838 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47838 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d47838;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d47838 & 5) != 0) {
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.Runtime_Runtime_WasmFunctionTableSet",0,0,0,0,0,0,0,
                       &local_70,0);
    plVar5 = local_68;
    local_68 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_70;
    local_70 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_WasmFunctionTableSet";
    local_b8 = pbVar4;
    local_a8 = uVar6;
  }
  if (v8::internal::trap_handler::g_is_trap_handler_enabled != '\0') {
    v8::internal::trap_handler::g_thread_in_wasm_code = 0;
  }
  puVar1 = *(ulong **)(param_3 + 0x95a0);
  puVar2 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar10 = *param_2;
  if (((uVar10 & 1) == 0) ||
     (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x434)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsWasmInstanceObject()");
  }
  uVar10 = param_2[-1];
  if ((uVar10 & 1) == 0) {
    if ((int)uVar10 < 0) goto LAB_015bc2f0;
    dVar13 = (double)(uVar10 >> 1 & 0x7fffffff);
    uVar10 = param_2[-2];
  }
  else {
    uVar11 = uVar10 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar11 + *(uint *)(uVar10 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsNumber()");
    }
    if (*(short *)(uVar11 + *(uint *)(uVar10 - 1)) != 0x42) {
LAB_015bc2f0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].ToUint32(&table_index)");
    }
    dVar13 = *(double *)(uVar10 + 3) + 4503599627370496.0;
    if (((ulong)dVar13 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar10 + 3) != (double)((ulong)dVar13 & 0xffffffff))) goto LAB_015bc2f0;
    uVar10 = param_2[-2];
  }
  if ((uVar10 & 1) == 0) {
    if (-1 < (int)(uint)uVar10) {
      dVar14 = (double)(ulong)((uint)uVar10 >> 1);
LAB_015bc0dc:
      uVar10 = param_2[-3];
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = puVar1;
        if (puVar2 == puVar1) {
          puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar10;
      }
      else {
        puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
      }
      uVar10 = *param_2 & 0xffffffff00000000;
      uVar10 = uVar10 | *(uint *)((uVar10 | *(uint *)(*param_2 + 0x8f)) +
                                  (long)(SUB84(dVar13,0) << 2) + 7);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)(param_3 + 0x95a0);
        if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
          puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar8 + 1;
        *puVar8 = uVar10;
      }
      else {
        puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
      }
      uVar10 = v8::internal::WasmTableObject::IsInBounds(param_3,puVar8,(ulong)dVar14 & 0xffffffff);
      if ((uVar10 & 1) == 0) {
        uVar6 = *(undefined8 *)(param_3 + 0x95a0);
        lVar3 = *(long *)(param_3 + 0x95a8);
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
        puVar9 = (undefined8 *)
                 v8::internal::Factory::NewWasmRuntimeError((Factory *)param_3,0x162,0,0,0);
        uVar12 = v8::internal::Isolate::Throw(param_3,*puVar9,0);
        *(undefined8 *)(param_3 + 0x95a0) = uVar6;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(long *)(param_3 + 0x95a8) != lVar3) {
          *(long *)(param_3 + 0x95a8) = lVar3;
          v8::internal::HandleScope::DeleteExtensions(param_3);
        }
      }
      else {
        v8::internal::WasmTableObject::Set(param_3,puVar8,(ulong)dVar14 & 0xffffffff,puVar7);
        uVar12 = *(undefined8 *)(param_3 + 0xa0);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar1;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(ulong **)(param_3 + 0x95a8) != puVar2) {
        *(ulong **)(param_3 + 0x95a8) = puVar2;
        v8::internal::HandleScope::DeleteExtensions(param_3);
      }
      if (v8::internal::trap_handler::g_is_trap_handler_enabled != '\0') {
        v8::internal::trap_handler::g_thread_in_wasm_code = 1;
      }
      if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
        plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar5 + 0x28))(plVar5,local_b8,local_b0,local_a8);
      }
      if (local_a0 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
      }
      return uVar12;
    }
  }
  else {
    uVar11 = uVar10 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar11 + *(uint *)(uVar10 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].IsNumber()");
    }
    if (*(short *)(uVar11 + *(uint *)(uVar10 - 1)) == 0x42) {
      dVar14 = *(double *)(uVar10 + 3) + 4503599627370496.0;
      if (((ulong)dVar14 >> 0x20 == 0x43300000) &&
         (*(double *)(uVar10 + 3) == (double)((ulong)dVar14 & 0xffffffff))) goto LAB_015bc0dc;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[2].ToUint32(&entry_index)");
}

