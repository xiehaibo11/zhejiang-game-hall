
/* v8::internal::Runtime_WasmTableFill(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_WasmTableFill(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  double dVar15;
  int iVar16;
  double dVar17;
  StackFrameIterator aSStack_610 [1416];
  WasmCompiledFrame *local_88;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  if (TracingFlags::runtime_stats != 0) {
    uVar12 = FUN_015bf3f4(param_1,param_2,param_3);
    if (*(long *)(lVar6 + 0x28) == local_70) {
      return uVar12;
    }
    goto LAB_015be378;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar1;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  StackFrameIterator::StackFrameIterator(aSStack_610,param_3,(ThreadLocalTop *)(param_3 + 0x2bb8));
  StackFrameIterator::Advance(aSStack_610);
  uVar7 = WasmCompiledFrame::wasm_instance(local_88);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)pIVar1;
    if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar8 + 1;
    *puVar8 = uVar7;
    uVar7 = *param_2;
    if ((uVar7 & 1) == 0) goto LAB_015be06c;
LAB_015be0ac:
    uVar13 = uVar7 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar13 + *(uint *)(uVar7 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsNumber()");
    }
    if (*(short *)(uVar13 + *(uint *)(uVar7 - 1)) != 0x42) {
LAB_015be37c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].ToUint32(&table_index)");
    }
    dVar17 = *(double *)(uVar7 + 3) + 4503599627370496.0;
    if (((ulong)dVar17 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar7 + 3) != (double)((ulong)dVar17 & 0xffffffff))) goto LAB_015be37c;
    uVar7 = param_2[-1];
    if ((uVar7 & 1) == 0) goto LAB_015be108;
LAB_015be114:
    iVar16 = SUB84(dVar17,0);
    uVar13 = uVar7 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar13 + *(uint *)(uVar7 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsNumber()");
    }
    if (*(short *)(uVar13 + *(uint *)(uVar7 - 1)) != 0x42) goto LAB_015be390;
    dVar17 = *(double *)(uVar7 + 3) + 4503599627370496.0;
    if (((ulong)dVar17 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar7 + 3) != (double)((ulong)dVar17 & 0xffffffff))) goto LAB_015be390;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
    uVar7 = *param_2;
    if ((uVar7 & 1) != 0) goto LAB_015be0ac;
LAB_015be06c:
    if ((int)(uint)uVar7 < 0) goto LAB_015be37c;
    dVar17 = (double)(ulong)((uint)uVar7 >> 1);
    uVar7 = param_2[-1];
    if ((uVar7 & 1) != 0) goto LAB_015be114;
LAB_015be108:
    iVar16 = SUB84(dVar17,0);
    if ((int)(uint)uVar7 < 0) {
LAB_015be390:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].ToUint32(&start)");
    }
    dVar17 = (double)(ulong)((uint)uVar7 >> 1);
  }
  uVar7 = param_2[-2];
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)pIVar1;
    if (puVar9 == *(ulong **)(param_3 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar9 + 1;
    *puVar9 = uVar7;
    uVar7 = param_2[-3];
    if ((uVar7 & 1) == 0) goto LAB_015be18c;
LAB_015be1c4:
    uVar13 = uVar7 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar13 + *(uint *)(uVar7 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[3].IsNumber()");
    }
    if (*(short *)(uVar13 + *(uint *)(uVar7 - 1)) != 0x42) {
LAB_015be3a4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[3].ToUint32(&count)");
    }
    dVar15 = *(double *)(uVar7 + 3) + 4503599627370496.0;
    if (((ulong)dVar15 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar7 + 3) != (double)((ulong)dVar15 & 0xffffffff))) goto LAB_015be3a4;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
    uVar7 = param_2[-3];
    if ((uVar7 & 1) != 0) goto LAB_015be1c4;
LAB_015be18c:
    if ((int)(uint)uVar7 < 0) goto LAB_015be3a4;
    dVar15 = (double)(ulong)((uint)uVar7 >> 1);
  }
  uVar7 = *puVar8 & 0xffffffff00000000;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)(*puVar8 + 0x8f)) + (long)(iVar16 << 2) + 7);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)pIVar1;
    if (puVar10 == *(ulong **)(param_3 + 0x95a8)) {
      puVar10 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar10 + 1;
    *puVar10 = uVar7;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
    uVar7 = *puVar10;
  }
  uVar2 = *(int *)(uVar7 + 0xf) >> 1;
  uVar5 = uVar2 - SUB84(dVar17,0);
  if (uVar2 < SUB84(dVar17,0)) {
LAB_015be2a8:
    if (*(int *)(param_3 + 0x2bc8) == 0) {
      *(ulong *)(param_3 + 0x2bc8) = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0x77)
      ;
    }
    puVar11 = (undefined8 *)Factory::NewWasmRuntimeError((Factory *)param_3,0x162,0,0,0);
    uVar12 = Isolate::Throw(param_3,*puVar11,0);
  }
  else {
    uVar14 = SUB84(dVar15,0);
    uVar2 = uVar5;
    if (uVar14 <= uVar5) {
      uVar2 = uVar14;
    }
    WasmTableObject::Fill(param_3,puVar10,(ulong)dVar17 & 0xffffffff,puVar9,uVar2);
    if (uVar5 < uVar14) goto LAB_015be2a8;
    uVar12 = *(undefined8 *)(param_3 + 0xa0);
  }
  *(long *)pIVar1 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    HandleScope::DeleteExtensions(param_3);
  }
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return uVar12;
  }
LAB_015be378:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

