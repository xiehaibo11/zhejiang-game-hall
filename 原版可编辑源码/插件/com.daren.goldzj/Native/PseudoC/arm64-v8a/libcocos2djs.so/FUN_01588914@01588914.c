
undefined8 FUN_01588914(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  Isolate *pIVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined4 uVar24;
  int iVar25;
  long lVar26;
  ulong *local_100;
  long local_c8;
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x1e7);
  }
  if (DAT_01d47290 == (byte *)0x0) {
    plVar10 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47290 = (byte *)(**(code **)(*plVar10 + 0x10))(plVar10,"disabled-by-default-v8.runtime");
  }
  pbVar8 = DAT_01d47290;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d47290 & 5) != 0) {
    local_78 = (long *)0x0;
    local_70 = (long *)0x0;
    plVar10 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar11 = (**(code **)(*plVar10 + 0x18))
                       (plVar10,0x58,pbVar8,"V8.Runtime_Runtime_DeclareGlobals",0,0,0,0,0,0,0,
                        &local_78,0);
    plVar10 = local_70;
    local_70 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    plVar10 = local_78;
    local_78 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_DeclareGlobals";
    local_b8 = pbVar8;
    local_a8 = uVar11;
  }
  iVar25 = *(int *)(param_3 + 0x95b0);
  uVar11 = *(undefined8 *)(param_3 + 0x95a0);
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = iVar25 + 1;
  uVar21 = *param_2;
  if (((uVar21 & 1) == 0) ||
     (0xe < *(ushort *)((uVar21 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar21 - 1)) - 0x76)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsFixedArray()");
  }
  uVar21 = param_2[-1];
  if ((uVar21 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsSmi()");
  }
  uVar22 = param_2[-2];
  if (((uVar22 & 1) == 0) ||
     (*(short *)((uVar22 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar22 - 1)) != 0x439)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsJSFunction()");
  }
  *(int *)(param_3 + 0x95b0) = iVar25 + 2;
  local_78 = *(long **)(param_3 + 0x2bc8);
  uVar22 = v8::internal::Context::global_object((Context *)&local_78);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar12 = *(ulong **)(param_3 + 0x95a0);
    if (puVar12 == *(ulong **)(param_3 + 0x95a8)) {
      puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar12 + 1;
    *puVar12 = uVar22;
  }
  else {
    puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar22);
  }
  uVar22 = *(ulong *)(param_3 + 0x2bc8);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar13 = *(ulong **)(param_3 + 0x95a0);
    if (puVar13 == *(ulong **)(param_3 + 0x95a8)) {
      puVar13 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar13 + 1;
    *puVar13 = uVar22;
  }
  else {
    puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar22);
  }
  uVar23 = param_2[-2];
  uVar22 = uVar23 & 0xffffffff00000000;
  uVar2 = *(uint *)((uVar22 | *(uint *)(uVar23 + 0xb)) + 3);
  if ((uVar2 == 0x84) ||
     ((((uVar2 & 1) != 0 &&
       (*(ushort *)((uVar22 | 7) + (ulong)*(uint *)((uVar22 | uVar2) - 1)) - 0x95 < 2)) ||
      (*(short *)((uVar22 | 7) +
                 (ulong)*(uint *)((uVar22 | *(uint *)((uVar22 | *(uint *)(uVar23 + 0x13)) + 3)) - 1)
                 ) != 0x9f)))) {
    uVar22 = param_2[-2] & 0xffffffff00000000;
    uVar22 = uVar22 | *(uint *)((uVar22 | *(uint *)(param_2[-2] + 0x13)) + 3);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) != (CanonicalHandleScope *)0x0) {
      local_100 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar22);
      puVar14 = (ulong *)0x0;
      goto LAB_01588c68;
    }
    local_100 = *(ulong **)(param_3 + 0x95a0);
    if (local_100 == *(ulong **)(param_3 + 0x95a8)) {
      local_100 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    puVar14 = (ulong *)0x0;
  }
  else {
    uVar22 = param_2[-2] & 0xffffffff00000000;
    uVar22 = uVar22 | *(uint *)((uVar22 | *(uint *)(param_2[-2] + 0x13)) + 3);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar14 = *(ulong **)(param_3 + 0x95a0);
      if (puVar14 == *(ulong **)(param_3 + 0x95a8)) {
        puVar14 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar14 + 1;
      *puVar14 = uVar22;
    }
    else {
      puVar14 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar22);
      uVar22 = *puVar14;
    }
    uVar22 = uVar22 & 0xffffffff00000000 | (ulong)*(uint *)(uVar22 + 0xb);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) != (CanonicalHandleScope *)0x0) {
      local_100 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar22);
      goto LAB_01588c68;
    }
    local_100 = *(ulong **)(param_3 + 0x95a0);
    if (local_100 == *(ulong **)(param_3 + 0x95a8)) {
      local_100 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
  }
  *(ulong **)(param_3 + 0x95a0) = local_100 + 1;
  *local_100 = uVar22;
LAB_01588c68:
  pIVar1 = param_3 + 0xa0;
  uVar2 = *(uint *)(*param_2 + 3);
  local_c8 = 0;
  lVar26 = 0;
  do {
    while( true ) {
      iVar25 = (int)lVar26;
      if ((int)uVar2 >> 1 <= iVar25) {
        uVar19 = *(undefined8 *)pIVar1;
        goto LAB_01588f6c;
      }
      iVar6 = *(int *)(param_3 + 0x95b0);
      uVar3 = *(undefined8 *)(param_3 + 0x95a0);
      lVar5 = *(long *)(param_3 + 0x95a8);
      lVar20 = (long)iVar25;
      local_c8 = local_c8 + 0x400;
      *(int *)(param_3 + 0x95b0) = iVar6 + 1;
      if (lVar20 < local_c8) break;
      *(int *)(param_3 + 0x95b0) = iVar6;
    }
    iVar25 = iVar25 << 2;
    do {
      uVar22 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + (long)iVar25 + 7);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar15 = *(ulong **)(param_3 + 0x95a0);
        if (puVar15 == *(ulong **)(param_3 + 0x95a8)) {
          puVar15 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar15 + 1;
        *puVar15 = uVar22;
      }
      else {
        puVar15 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar22);
      }
      lVar26 = *param_2 + 7;
      iVar6 = *(int *)(lVar26 + (iVar25 + 4));
      uVar22 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(lVar26 + (iVar25 + 8));
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar16 = *(ulong **)(param_3 + 0x95a0);
        if (puVar16 == *(ulong **)(param_3 + 0x95a8)) {
          puVar16 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar16 + 1;
        *puVar16 = uVar22;
      }
      else {
        puVar16 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar22);
      }
      uVar7 = *(uint *)(*param_2 + (long)(iVar25 + 0xc) + 7);
      uVar22 = *param_2 & 0xffffffff00000000 | (ulong)uVar7;
      pIVar18 = pIVar1;
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar17 = *(ulong **)(param_3 + 0x95a0);
        if (puVar17 == *(ulong **)(param_3 + 0x95a8)) {
          puVar17 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar17 + 1;
        *puVar17 = uVar22;
        if ((uVar7 & 1) != 0) goto LAB_01588e08;
LAB_01588dd0:
        uVar24 = 0;
        bVar9 = false;
      }
      else {
        puVar17 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar22);
        uVar22 = *puVar17;
        if ((uVar22 & 1) == 0) goto LAB_01588dd0;
LAB_01588e08:
        bVar9 = (int)uVar22 == *(int *)pIVar1;
        if (*(short *)((uVar22 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar22 - 1)) == 0xa6) {
          pIVar18 = (Isolate *)(*local_100 & 0xffffffff00000000);
          uVar22 = (ulong)pIVar18 |
                   (ulong)*(uint *)(*local_100 + (long)(int)(((uint)*puVar16 & 0x7ffffffe) << 1) + 7
                                   );
          if (*(CanonicalHandleScope **)((ulong)pIVar18 | 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar16 = *(ulong **)(pIVar18 + 0x95a0);
            if (puVar16 == *(ulong **)(pIVar18 + 0x95a8)) {
              puVar16 = (ulong *)v8::internal::HandleScope::Extend(pIVar18);
            }
            *(ulong **)(pIVar18 + 0x95a0) = puVar16 + 1;
            *puVar16 = uVar22;
          }
          else {
            puVar16 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)((ulong)pIVar18 | 0x95b8),uVar22
                                         );
          }
          uVar24 = 1;
          pIVar18 = (Isolate *)
                    v8::internal::Factory::NewFunctionFromSharedFunctionInfo
                              ((Factory *)param_3,puVar17,puVar13,puVar16,1);
        }
        else {
          uVar24 = 0;
        }
      }
      uVar19 = FUN_01591228(param_3,puVar12,puVar15,pIVar18,((int)uVar21 << 1 ^ 0xffffffffU) & 4,
                            bVar9,uVar24,0,puVar14,iVar6 >> 1);
      if (((*(ulong *)(param_3 + 0x2bd8) & 1) == 0) ||
         ((int)*(ulong *)(param_3 + 0x2bd8) != *(int *)(param_3 + 0xa8))) {
        bVar9 = true;
        goto LAB_01588f2c;
      }
      lVar20 = lVar20 + 4;
    } while ((lVar20 < (long)((ulong)uVar2 << 0x20) >> 0x21) &&
            (iVar25 = iVar25 + 0x10, lVar20 < local_c8));
    bVar9 = false;
LAB_01588f2c:
    *(undefined8 *)(param_3 + 0x95a0) = uVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar5) {
      *(long *)(param_3 + 0x95a8) = lVar5;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
    lVar26 = lVar20;
  } while (!bVar9);
LAB_01588f6c:
  iVar25 = *(int *)(param_3 + 0x95b0);
  *(int *)(param_3 + 0x95b0) = iVar25 + -1;
  *(undefined8 *)(param_3 + 0x95a0) = uVar11;
  if (*(long *)(param_3 + 0x95a8) == lVar4) {
    *(undefined8 *)(param_3 + 0x95a0) = uVar11;
    *(int *)(param_3 + 0x95b0) = iVar25 + -2;
  }
  else {
    *(long *)(param_3 + 0x95a8) = lVar4;
    v8::internal::HandleScope::DeleteExtensions(param_3);
    *(undefined8 *)(param_3 + 0x95a0) = uVar11;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar4) {
      *(long *)(param_3 + 0x95a8) = lVar4;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
  }
  if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
    plVar10 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar10 + 0x28))(plVar10,local_b8,local_b0,local_a8);
  }
  if (local_a0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  return uVar19;
}

