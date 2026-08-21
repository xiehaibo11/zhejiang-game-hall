
undefined8 FUN_015bf3f4(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint uVar15;
  double dVar16;
  int iVar17;
  double dVar18;
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
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  local_620 = 0;
  uStack_638 = 0;
  local_640 = (RuntimeCallStats *)0x0;
  uStack_628 = 0;
  uStack_630 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_640 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_640,(ulong)&local_640 | 8,0x28f);
  }
  if (DAT_01d47858 == (byte *)0x0) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47858 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.runtime");
  }
  pbVar5 = DAT_01d47858;
  local_660 = (byte **)0x0;
  if ((*DAT_01d47858 & 5) != 0) {
    local_610 = (long *)0x0;
    local_608 = (long *)0x0;
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar5,"V8.Runtime_Runtime_WasmTableFill",0,0,0,0,0,0,0,
                       &local_610,0);
    plVar6 = local_608;
    local_608 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_610;
    local_610 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_660 = &local_658;
    local_650 = "V8.Runtime_Runtime_WasmTableFill";
    local_658 = pbVar5;
    local_648 = uVar7;
  }
  uVar7 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  v8::internal::StackFrameIterator::StackFrameIterator
            ((StackFrameIterator *)&local_610,param_3,(ThreadLocalTop *)(param_3 + 0x2bb8));
  v8::internal::StackFrameIterator::Advance((StackFrameIterator *)&local_610);
  uVar8 = v8::internal::WasmCompiledFrame::wasm_instance(local_88);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(param_3 + 0x95a0);
    if (puVar9 == *(ulong **)(param_3 + 0x95a8)) {
      puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar8;
    uVar8 = *param_2;
    if ((uVar8 & 1) != 0) goto LAB_015bf5b0;
LAB_015bf570:
    if ((int)(uint)uVar8 < 0) {
LAB_015bf8cc:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].ToUint32(&table_index)");
    }
    dVar18 = (double)(ulong)((uint)uVar8 >> 1);
    uVar8 = param_2[-1];
    if ((uVar8 & 1) == 0) goto LAB_015bf60c;
LAB_015bf618:
    iVar17 = SUB84(dVar18,0);
    uVar14 = uVar8 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar14 + *(uint *)(uVar8 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsNumber()");
    }
    if (*(short *)(uVar14 + *(uint *)(uVar8 - 1)) != 0x42) goto LAB_015bf8e0;
    dVar18 = *(double *)(uVar8 + 3) + 4503599627370496.0;
    if (((ulong)dVar18 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar8 + 3) != (double)((ulong)dVar18 & 0xffffffff))) goto LAB_015bf8e0;
  }
  else {
    puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar8);
    uVar8 = *param_2;
    if ((uVar8 & 1) == 0) goto LAB_015bf570;
LAB_015bf5b0:
    uVar14 = uVar8 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar14 + *(uint *)(uVar8 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsNumber()");
    }
    if (*(short *)(uVar14 + *(uint *)(uVar8 - 1)) != 0x42) goto LAB_015bf8cc;
    dVar18 = *(double *)(uVar8 + 3) + 4503599627370496.0;
    if (((ulong)dVar18 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar8 + 3) != (double)((ulong)dVar18 & 0xffffffff))) goto LAB_015bf8cc;
    uVar8 = param_2[-1];
    if ((uVar8 & 1) != 0) goto LAB_015bf618;
LAB_015bf60c:
    iVar17 = SUB84(dVar18,0);
    if ((int)(uint)uVar8 < 0) {
LAB_015bf8e0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].ToUint32(&start)");
    }
    dVar18 = (double)(ulong)((uint)uVar8 >> 1);
  }
  uVar8 = param_2[-2];
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)(param_3 + 0x95a0);
    if (puVar10 == *(ulong **)(param_3 + 0x95a8)) {
      puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar10 + 1;
    *puVar10 = uVar8;
    uVar8 = param_2[-3];
    if ((uVar8 & 1) != 0) goto LAB_015bf6c8;
LAB_015bf690:
    if ((int)(uint)uVar8 < 0) {
LAB_015bf8f4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[3].ToUint32(&count)");
    }
    dVar16 = (double)(ulong)((uint)uVar8 >> 1);
  }
  else {
    puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar8);
    uVar8 = param_2[-3];
    if ((uVar8 & 1) == 0) goto LAB_015bf690;
LAB_015bf6c8:
    uVar14 = uVar8 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar14 + *(uint *)(uVar8 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[3].IsNumber()");
    }
    if (*(short *)(uVar14 + *(uint *)(uVar8 - 1)) != 0x42) goto LAB_015bf8f4;
    dVar16 = *(double *)(uVar8 + 3) + 4503599627370496.0;
    if (((ulong)dVar16 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar8 + 3) != (double)((ulong)dVar16 & 0xffffffff))) goto LAB_015bf8f4;
  }
  uVar8 = *puVar9 & 0xffffffff00000000;
  uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(*puVar9 + 0x8f)) + (long)(iVar17 << 2) + 7);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar11 = *(ulong **)(param_3 + 0x95a0);
    if (puVar11 == *(ulong **)(param_3 + 0x95a8)) {
      puVar11 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar11 + 1;
    *puVar11 = uVar8;
  }
  else {
    puVar11 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar8);
    uVar8 = *puVar11;
  }
  uVar1 = *(int *)(uVar8 + 0xf) >> 1;
  uVar3 = uVar1 - SUB84(dVar18,0);
  if (SUB84(dVar18,0) <= uVar1) {
    uVar15 = SUB84(dVar16,0);
    uVar1 = uVar3;
    if (uVar15 <= uVar3) {
      uVar1 = uVar15;
    }
    v8::internal::WasmTableObject::Fill(param_3,puVar11,(ulong)dVar18 & 0xffffffff,puVar10,uVar1);
    if (uVar15 <= uVar3) {
      uVar13 = *(undefined8 *)(param_3 + 0xa0);
      goto LAB_015bf804;
    }
  }
  if (*(int *)(param_3 + 0x2bc8) == 0) {
    *(ulong *)(param_3 + 0x2bc8) = *puVar9 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar9 + 0x77);
  }
  puVar12 = (undefined8 *)v8::internal::Factory::NewWasmRuntimeError((Factory *)param_3,0x162,0,0,0)
  ;
  uVar13 = v8::internal::Isolate::Throw(param_3,*puVar12,0);
LAB_015bf804:
  *(undefined8 *)(param_3 + 0x95a0) = uVar7;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_660 != (byte **)0x0) && (*local_658 != 0)) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_658,local_650,local_648);
  }
  if (local_640 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_640,(RuntimeCallTimer *)((ulong)&local_640 | 8));
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

