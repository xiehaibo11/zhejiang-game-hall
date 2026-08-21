
ulong FUN_015bdb88(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
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
  WasmCompiledFrame *local_88;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_620 = 0;
  uStack_638 = 0;
  local_640 = (RuntimeCallStats *)0x0;
  uStack_628 = 0;
  uStack_630 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_640 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_640,(ulong)&local_640 | 8,0x28e);
  }
  if (DAT_01d47850 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47850 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47850;
  local_660 = (byte **)0x0;
  if ((*DAT_01d47850 & 5) != 0) {
    local_610 = (long *)0x0;
    local_608 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_WasmTableGrow",0,0,0,0,0,0,0,
                       &local_610,0);
    plVar4 = local_608;
    local_608 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_610;
    local_610 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_660 = &local_658;
    local_650 = "V8.Runtime_Runtime_WasmTableGrow";
    local_658 = pbVar3;
    local_648 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  v8::internal::StackFrameIterator::StackFrameIterator
            ((StackFrameIterator *)&local_610,param_3,(ThreadLocalTop *)(param_3 + 0x2bb8));
  v8::internal::StackFrameIterator::Advance((StackFrameIterator *)&local_610);
  uVar6 = v8::internal::WasmCompiledFrame::wasm_instance(local_88);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(param_3 + 0x95a0);
    if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
      puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar6;
    uVar6 = *param_2;
    if ((uVar6 & 1) == 0) goto LAB_015bdd04;
LAB_015bdd3c:
    uVar9 = uVar6 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar9 + *(uint *)(uVar6 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsNumber()");
    }
    if (*(short *)(uVar9 + *(uint *)(uVar6 - 1)) != 0x42) {
LAB_015bdf74:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].ToUint32(&table_index)");
    }
    dVar11 = *(double *)(uVar6 + 3) + 4503599627370496.0;
    if (((ulong)dVar11 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar6 + 3) != (double)((ulong)dVar11 & 0xffffffff))) goto LAB_015bdf74;
  }
  else {
    puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
    uVar6 = *param_2;
    if ((uVar6 & 1) != 0) goto LAB_015bdd3c;
LAB_015bdd04:
    if ((int)(uint)uVar6 < 0) goto LAB_015bdf74;
    dVar11 = (double)(ulong)((uint)uVar6 >> 1);
  }
  uVar6 = param_2[-1];
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(param_3 + 0x95a0);
    if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
      puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar6;
    uVar6 = param_2[-2];
  }
  else {
    puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
    uVar6 = param_2[-2];
  }
  if ((uVar6 & 1) == 0) {
    if (-1 < (int)(uint)uVar6) {
      dVar10 = (double)(ulong)((uint)uVar6 >> 1);
LAB_015bde3c:
      uVar6 = *puVar7 & 0xffffffff00000000;
      uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)(*puVar7 + 0x8f)) + (long)(SUB84(dVar11,0) << 2) +
                               7);
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
      }
      uVar6 = v8::internal::WasmTableObject::Grow(param_3,puVar7,(ulong)dVar10 & 0xffffffff,puVar8);
      *(undefined8 *)(param_3 + 0x95a0) = uVar5;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        v8::internal::HandleScope::DeleteExtensions(param_3);
      }
      if ((local_660 != (byte **)0x0) && (*local_658 != 0)) {
        plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar4 + 0x28))(plVar4,local_658,local_650,local_648);
      }
      if (local_640 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_640,(RuntimeCallTimer *)((ulong)&local_640 | 8))
        ;
      }
      if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return -((uVar6 & 0xffffffff) >> 0x1f) & 0xfffffffe00000000 | (uVar6 & 0xffffffff) << 1;
    }
  }
  else {
    uVar9 = uVar6 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar9 + *(uint *)(uVar6 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].IsNumber()");
    }
    if (*(short *)(uVar9 + *(uint *)(uVar6 - 1)) == 0x42) {
      dVar10 = *(double *)(uVar6 + 3) + 4503599627370496.0;
      if (((ulong)dVar10 >> 0x20 == 0x43300000) &&
         (*(double *)(uVar6 + 3) == (double)((ulong)dVar10 & 0xffffffff))) goto LAB_015bde3c;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[2].ToUint32(&delta)");
}

