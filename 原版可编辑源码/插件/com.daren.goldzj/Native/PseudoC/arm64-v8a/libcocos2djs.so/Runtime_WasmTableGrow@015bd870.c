
/* v8::internal::Runtime_WasmTableGrow(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_WasmTableGrow(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  StackFrameIterator aSStack_610 [1416];
  WasmCompiledFrame *local_88;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_015bdb88(param_1,param_2,param_3);
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return uVar5;
    }
    goto LAB_015bdb34;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  StackFrameIterator::StackFrameIterator(aSStack_610,param_3,(ThreadLocalTop *)(param_3 + 0x2bb8));
  StackFrameIterator::Advance(aSStack_610);
  uVar5 = WasmCompiledFrame::wasm_instance(local_88);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar1;
    if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar6 + 1;
    *puVar6 = uVar5;
    uVar5 = *param_2;
    if ((uVar5 & 1) == 0) goto LAB_015bd914;
LAB_015bd94c:
    uVar8 = uVar5 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar8 + *(uint *)(uVar5 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsNumber()");
    }
    if (*(short *)(uVar8 + *(uint *)(uVar5 - 1)) != 0x42) {
LAB_015bdb38:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].ToUint32(&table_index)");
    }
    dVar10 = *(double *)(uVar5 + 3) + 4503599627370496.0;
    if (((ulong)dVar10 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar5 + 3) != (double)((ulong)dVar10 & 0xffffffff))) goto LAB_015bdb38;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar5);
    uVar5 = *param_2;
    if ((uVar5 & 1) != 0) goto LAB_015bd94c;
LAB_015bd914:
    if ((int)(uint)uVar5 < 0) goto LAB_015bdb38;
    dVar10 = (double)(ulong)((uint)uVar5 >> 1);
  }
  uVar5 = param_2[-1];
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar1;
    if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar7 + 1;
    *puVar7 = uVar5;
    uVar5 = param_2[-2];
    if ((uVar5 & 1) == 0) goto LAB_015bd9c0;
LAB_015bd9f8:
    uVar8 = uVar5 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar8 + *(uint *)(uVar5 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].IsNumber()");
    }
    if (*(short *)(uVar8 + *(uint *)(uVar5 - 1)) != 0x42) {
LAB_015bdb4c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].ToUint32(&delta)");
    }
    dVar9 = *(double *)(uVar5 + 3) + 4503599627370496.0;
    if (((ulong)dVar9 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar5 + 3) != (double)((ulong)dVar9 & 0xffffffff))) goto LAB_015bdb4c;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar5);
    uVar5 = param_2[-2];
    if ((uVar5 & 1) != 0) goto LAB_015bd9f8;
LAB_015bd9c0:
    if ((int)(uint)uVar5 < 0) goto LAB_015bdb4c;
    dVar9 = (double)(ulong)((uint)uVar5 >> 1);
  }
  uVar5 = *puVar6 & 0xffffffff00000000;
  uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)(*puVar6 + 0x8f)) + (long)(SUB84(dVar10,0) << 2) + 7);
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
  }
  uVar5 = WasmTableObject::Grow(param_3,puVar6,(ulong)dVar9 & 0xffffffff,puVar7);
  *(long *)pIVar1 = lVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return -((uVar5 & 0xffffffff) >> 0x1f) & 0xfffffffe00000000 | (uVar5 & 0xffffffff) << 1;
  }
LAB_015bdb34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

