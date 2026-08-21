
undefined8 FUN_015b8414(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  WasmValue *pWVar10;
  WasmValue *pWVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  Isolate *pIVar17;
  WasmValue WVar18;
  uint uVar19;
  WasmValue *pWVar20;
  int iVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  int iVar25;
  ulong *puVar26;
  ulong *puVar27;
  ulong uVar28;
  double dVar29;
  byte **local_660;
  byte *local_658;
  char *local_650;
  undefined8 local_648;
  RuntimeCallStats *local_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 local_620;
  long *local_610;
  long *local_608;
  WasmInterpreterEntryFrame *local_88;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_620 = 0;
  uStack_638 = 0;
  local_640 = (RuntimeCallStats *)0x0;
  uStack_628 = 0;
  uStack_630 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_640 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_640,(ulong)&local_640 | 8,0x285);
  }
  if (DAT_01d477f8 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d477f8 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d477f8;
  local_660 = (byte **)0x0;
  if ((*DAT_01d477f8 & 5) != 0) {
    local_610 = (long *)0x0;
    local_608 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.Runtime_Runtime_WasmRunInterpreter",0,0,0,0,0,0,0,
                       &local_610,0);
    plVar5 = local_608;
    local_608 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_610;
    local_610 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_660 = &local_658;
    local_650 = "V8.Runtime_Runtime_WasmRunInterpreter";
    local_658 = pbVar4;
    local_648 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar15 = *param_2;
  if ((uVar15 & 1) == 0) {
    uVar1 = (int)uVar15 >> 1;
    puVar27 = (ulong *)param_2[-1];
  }
  else {
    if (*(short *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsNumber()");
    }
    dVar29 = *(double *)(uVar15 + 3);
    if ((((dVar29 < -2147483648.0) || (2147483647.0 < dVar29)) || (ABS(dVar29) == INFINITY)) ||
       ((NAN(ABS(dVar29)) || (uVar1 = (int)dVar29, dVar29 != (double)(int)dVar29)))) {
      uVar1 = 0xfffffbce;
      if (((ulong)dVar29 & 0x7ff0000000000000) != 0) {
        uVar1 = ((uint)((ulong)dVar29 >> 0x34) & 0x7ff) - 0x433;
      }
      if ((int)uVar1 < 0) {
        if ((int)uVar1 < -0x34) goto LAB_015b8630;
        uVar15 = (ulong)dVar29 & 0xfffffffffffff;
        if (((ulong)dVar29 & 0x7ff0000000000000) != 0) {
          uVar15 = (ulong)dVar29 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar19 = (uint)(uVar15 >> ((ulong)-uVar1 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar1) {
LAB_015b8630:
          uVar15 = 0;
          puVar27 = (ulong *)param_2[-1];
          goto joined_r0x015b8638;
        }
        uVar15 = (ulong)dVar29 & 0xfffffffffffff;
        if (((ulong)dVar29 & 0x7ff0000000000000) != 0) {
          uVar15 = (ulong)dVar29 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar19 = (uint)(uVar15 << ((ulong)uVar1 & 0x3f));
      }
      uVar1 = -uVar19;
      if (-1 < (long)dVar29) {
        uVar1 = uVar19;
      }
    }
    puVar27 = (ulong *)param_2[-1];
  }
  uVar15 = (ulong)uVar1;
joined_r0x015b8638:
  if (((ulong)puVar27 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!arg_buffer_obj->IsHeapObject()");
  }
  if (v8::internal::trap_handler::g_is_trap_handler_enabled != '\0') {
    v8::internal::trap_handler::g_thread_in_wasm_code = 0;
  }
  v8::internal::StackFrameIterator::StackFrameIterator
            ((StackFrameIterator *)&local_610,param_3,(ThreadLocalTop *)(param_3 + 0x2bb8));
  v8::internal::StackFrameIterator::Advance((StackFrameIterator *)&local_610);
  uVar7 = v8::internal::WasmInterpreterEntryFrame::wasm_instance(local_88);
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
  local_610 = (long *)*puVar8;
  uVar16 = *(undefined8 *)(local_88 + 0x20);
  lVar9 = v8::internal::WasmInstanceObject::module((WasmInstanceObject *)&local_610);
  puVar22 = *(ulong **)
             (*(long *)(lVar9 + 0x88) + (-(uVar15 >> 0x1f) & 0xffffffe000000000 | uVar15 << 5));
  uVar23 = puVar22[1];
  iVar25 = (int)uVar23;
  pWVar10 = v8::internal::NewArray<v8::internal::wasm::WasmValue>((long)iVar25);
  uVar7 = *puVar22;
  iVar21 = (int)uVar7;
  pWVar11 = v8::internal::NewArray<v8::internal::wasm::WasmValue>((long)iVar21);
  if (0 < iVar25) {
    uVar24 = 0;
    pWVar20 = pWVar10;
    puVar26 = puVar27;
    do {
      switch(*(undefined1 *)(puVar22[2] + *puVar22 + uVar24)) {
      case 1:
        uVar14 = (undefined4)*puVar26;
        WVar18 = (WasmValue)0x1;
        break;
      case 2:
        uVar28 = *puVar26;
        *pWVar20 = (WasmValue)0x2;
        goto LAB_015b8840;
      case 3:
        uVar14 = (undefined4)*puVar26;
        WVar18 = (WasmValue)0x3;
        break;
      case 4:
        uVar28 = *puVar26;
        *pWVar20 = (WasmValue)0x4;
LAB_015b8840:
        *(undefined8 *)(pWVar20 + 9) = 0;
        *(ulong *)(pWVar20 + 1) = uVar28;
LAB_015b8784:
        lVar9 = 8;
        goto LAB_015b8788;
      default:
        goto switchD_015b87c4_caseD_5;
      case 6:
      case 7:
      case 9:
        uVar28 = *puVar26;
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar12 = *(ulong **)(param_3 + 0x95a0);
          if (puVar12 == *(ulong **)(param_3 + 0x95a8)) {
            puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_3);
          }
          *(ulong **)(param_3 + 0x95a0) = puVar12 + 1;
          *puVar12 = uVar28;
        }
        else {
          puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar28);
        }
        *pWVar20 = (WasmValue)0x6;
        *(ulong **)(pWVar20 + 1) = puVar12;
        *(undefined8 *)(pWVar20 + 9) = 0;
        goto LAB_015b8784;
      }
      *pWVar20 = WVar18;
      *(undefined8 *)(pWVar20 + 5) = 0;
      *(undefined4 *)(pWVar20 + 0xd) = 0;
      *(undefined4 *)(pWVar20 + 1) = uVar14;
      lVar9 = 4;
LAB_015b8788:
      uVar24 = uVar24 + 1;
      puVar26 = (ulong *)((long)puVar26 + lVar9);
      pWVar20 = pWVar20 + 0x11;
    } while ((uVar23 & 0xffffffff) != uVar24);
  }
  *(ulong *)(param_3 + 0x2bc8) = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0x77);
  uVar13 = v8::internal::WasmInstanceObject::GetOrCreateDebugInfo();
  uVar15 = v8::internal::WasmDebugInfo::RunInterpreter
                     ((WasmDebugInfo *)param_3,uVar13,uVar16,uVar15,pWVar10,(long)iVar25,pWVar11,
                      (long)iVar21);
  if ((uVar15 & 1) == 0) {
    pIVar17 = param_3 + 0x180;
  }
  else {
    if (0 < iVar21) {
      uVar15 = 0;
      pWVar20 = pWVar11 + 1;
      do {
        switch(*(undefined1 *)(puVar22[2] + uVar15)) {
        case 1:
        case 3:
          *(undefined4 *)puVar27 = *(undefined4 *)pWVar20;
          lVar9 = 4;
          goto LAB_015b88c0;
        case 2:
        case 4:
          uVar23 = *(ulong *)pWVar20;
          break;
        default:
switchD_015b87c4_caseD_5:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        case 6:
        case 7:
        case 9:
          uVar23 = **(ulong **)pWVar20;
        }
        *puVar27 = uVar23;
        lVar9 = 8;
LAB_015b88c0:
        uVar15 = uVar15 + 1;
        puVar27 = (ulong *)((long)puVar27 + lVar9);
        pWVar20 = pWVar20 + 0x11;
      } while ((uVar7 & 0xffffffff) != uVar15);
    }
    pIVar17 = param_3 + 0xa0;
  }
  uVar16 = *(undefined8 *)pIVar17;
  if (pWVar11 != (WasmValue *)0x0) {
    operator_delete__(pWVar11);
  }
  if (pWVar10 != (WasmValue *)0x0) {
    operator_delete__(pWVar10);
  }
  if (v8::internal::trap_handler::g_is_trap_handler_enabled != '\0') {
    v8::internal::trap_handler::g_thread_in_wasm_code = 1;
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_660 != (byte **)0x0) && (*local_658 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_658,local_650,local_648);
  }
  if (local_640 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_640,(RuntimeCallTimer *)((ulong)&local_640 | 8));
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar16;
}

