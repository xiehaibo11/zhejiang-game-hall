
/* v8::internal::Runtime_WasmRunInterpreter(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_WasmRunInterpreter(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  WasmValue *pWVar9;
  WasmValue *pWVar10;
  ulong *puVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  Isolate *pIVar16;
  WasmValue WVar17;
  uint uVar18;
  WasmValue *pWVar19;
  ulong *puVar20;
  ulong *puVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong uVar27;
  double dVar28;
  ulong local_610 [177];
  WasmInterpreterEntryFrame *local_88;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (TracingFlags::runtime_stats != 0) {
    uVar15 = FUN_015b8414(param_1,param_2,param_3);
    if (*(long *)(lVar5 + 0x28) == local_70) {
      return uVar15;
    }
    goto LAB_015b83f0;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar1;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar14 = *param_2;
  if ((uVar14 & 1) == 0) {
    uVar2 = (int)uVar14 >> 1;
    puVar20 = (ulong *)param_2[-1];
joined_r0x015b8078:
    uVar14 = (ulong)uVar2;
  }
  else {
    if (*(short *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsNumber()");
    }
    dVar28 = *(double *)(uVar14 + 3);
    if ((((-2147483648.0 <= dVar28) && (dVar28 <= 2147483647.0)) && (ABS(dVar28) != INFINITY)) &&
       ((!NAN(ABS(dVar28)) && (uVar2 = (int)dVar28, dVar28 == (double)(int)dVar28)))) {
LAB_015b8074:
      puVar20 = (ulong *)param_2[-1];
      goto joined_r0x015b8078;
    }
    uVar2 = 0xfffffbce;
    if (((ulong)dVar28 & 0x7ff0000000000000) != 0) {
      uVar2 = ((uint)((ulong)dVar28 >> 0x34) & 0x7ff) - 0x433;
    }
    if ((int)uVar2 < 0) {
      if (-0x35 < (int)uVar2) {
        uVar14 = (ulong)dVar28 & 0xfffffffffffff;
        if (((ulong)dVar28 & 0x7ff0000000000000) != 0) {
          uVar14 = (ulong)dVar28 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar18 = (uint)(uVar14 >> ((ulong)-uVar2 & 0x3f));
        goto LAB_015b806c;
      }
    }
    else if ((int)uVar2 < 0x20) {
      uVar14 = (ulong)dVar28 & 0xfffffffffffff;
      if (((ulong)dVar28 & 0x7ff0000000000000) != 0) {
        uVar14 = (ulong)dVar28 & 0xfffffffffffff | 0x10000000000000;
      }
      uVar18 = (uint)(uVar14 << ((ulong)uVar2 & 0x3f));
LAB_015b806c:
      uVar2 = -uVar18;
      if (-1 < (long)dVar28) {
        uVar2 = uVar18;
      }
      goto LAB_015b8074;
    }
    uVar14 = 0;
    puVar20 = (ulong *)param_2[-1];
  }
  if (((ulong)puVar20 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!arg_buffer_obj->IsHeapObject()");
  }
  if (trap_handler::g_is_trap_handler_enabled != '\0') {
    trap_handler::g_thread_in_wasm_code = 0;
  }
  StackFrameIterator::StackFrameIterator
            ((StackFrameIterator *)local_610,param_3,(ThreadLocalTop *)(param_3 + 0x2bb8));
  StackFrameIterator::Advance((StackFrameIterator *)local_610);
  uVar6 = WasmInterpreterEntryFrame::wasm_instance(local_88);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar1;
    if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar7 + 1;
    *puVar7 = uVar6;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
  }
  local_610[0] = *puVar7;
  uVar15 = *(undefined8 *)(local_88 + 0x20);
  lVar8 = WasmInstanceObject::module((WasmInstanceObject *)local_610);
  puVar21 = *(ulong **)
             (*(long *)(lVar8 + 0x88) + (-(uVar14 >> 0x1f) & 0xffffffe000000000 | uVar14 << 5));
  uVar24 = puVar21[1];
  iVar22 = (int)uVar24;
  pWVar9 = NewArray<v8::internal::wasm::WasmValue>((long)iVar22);
  uVar6 = *puVar21;
  iVar23 = (int)uVar6;
  pWVar10 = NewArray<v8::internal::wasm::WasmValue>((long)iVar23);
  if (0 < iVar22) {
    uVar26 = 0;
    pWVar19 = pWVar9;
    puVar25 = puVar20;
    do {
      switch(*(undefined1 *)(puVar21[2] + *puVar21 + uVar26)) {
      case 1:
        uVar13 = (undefined4)*puVar25;
        WVar17 = (WasmValue)0x1;
        break;
      case 2:
        uVar27 = *puVar25;
        *pWVar19 = (WasmValue)0x2;
        goto LAB_015b8254;
      case 3:
        uVar13 = (undefined4)*puVar25;
        WVar17 = (WasmValue)0x3;
        break;
      case 4:
        uVar27 = *puVar25;
        *pWVar19 = (WasmValue)0x4;
LAB_015b8254:
        *(undefined8 *)(pWVar19 + 9) = 0;
        *(ulong *)(pWVar19 + 1) = uVar27;
LAB_015b8198:
        lVar8 = 8;
        goto LAB_015b819c;
      default:
        goto switchD_015b81d8_caseD_5;
      case 6:
      case 7:
      case 9:
        uVar27 = *puVar25;
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar11 = *(ulong **)pIVar1;
          if (puVar11 == *(ulong **)(param_3 + 0x95a8)) {
            puVar11 = (ulong *)HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar1 = puVar11 + 1;
          *puVar11 = uVar27;
        }
        else {
          puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar27);
        }
        *pWVar19 = (WasmValue)0x6;
        *(ulong **)(pWVar19 + 1) = puVar11;
        *(undefined8 *)(pWVar19 + 9) = 0;
        goto LAB_015b8198;
      }
      *pWVar19 = WVar17;
      *(undefined8 *)(pWVar19 + 5) = 0;
      *(undefined4 *)(pWVar19 + 0xd) = 0;
      *(undefined4 *)(pWVar19 + 1) = uVar13;
      lVar8 = 4;
LAB_015b819c:
      uVar26 = uVar26 + 1;
      puVar25 = (ulong *)((long)puVar25 + lVar8);
      pWVar19 = pWVar19 + 0x11;
    } while ((uVar24 & 0xffffffff) != uVar26);
  }
  *(ulong *)(param_3 + 0x2bc8) = *puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar7 + 0x77);
  uVar12 = WasmInstanceObject::GetOrCreateDebugInfo();
  uVar14 = WasmDebugInfo::RunInterpreter
                     ((WasmDebugInfo *)param_3,uVar12,uVar15,uVar14,pWVar9,(long)iVar22,pWVar10,
                      (long)iVar23);
  if ((uVar14 & 1) == 0) {
    pIVar16 = param_3 + 0x180;
  }
  else {
    if (0 < iVar23) {
      uVar14 = 0;
      pWVar19 = pWVar10 + 1;
      do {
        switch(*(undefined1 *)(puVar21[2] + uVar14)) {
        case 1:
        case 3:
          *(undefined4 *)puVar20 = *(undefined4 *)pWVar19;
          lVar8 = 4;
          goto LAB_015b82d4;
        case 2:
        case 4:
          uVar24 = *(ulong *)pWVar19;
          break;
        default:
switchD_015b81d8_caseD_5:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        case 6:
        case 7:
        case 9:
          uVar24 = **(ulong **)pWVar19;
        }
        *puVar20 = uVar24;
        lVar8 = 8;
LAB_015b82d4:
        uVar14 = uVar14 + 1;
        puVar20 = (ulong *)((long)puVar20 + lVar8);
        pWVar19 = pWVar19 + 0x11;
      } while ((uVar6 & 0xffffffff) != uVar14);
    }
    pIVar16 = param_3 + 0xa0;
  }
  uVar15 = *(undefined8 *)pIVar16;
  if (pWVar10 != (WasmValue *)0x0) {
    operator_delete__(pWVar10);
  }
  if (pWVar9 != (WasmValue *)0x0) {
    operator_delete__(pWVar9);
  }
  if (trap_handler::g_is_trap_handler_enabled != '\0') {
    trap_handler::g_thread_in_wasm_code = 1;
  }
  *(long *)pIVar1 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    HandleScope::DeleteExtensions(param_3);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return uVar15;
  }
LAB_015b83f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

