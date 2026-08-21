
undefined8 FUN_01570040(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  Isolate *pIVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  byte **local_f0;
  byte *local_e8;
  char *local_e0;
  undefined8 local_d8;
  RuntimeCallStats *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  Isolate *local_a8;
  ulong *local_a0;
  ulong *local_98;
  ulong *puStack_90;
  byte local_88;
  Isolate *local_80;
  uint local_78;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = (RuntimeCallStats *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_d0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_d0,(ulong)&local_d0 | 8,0x173);
  }
  if (DAT_01d470e8 == (byte *)0x0) {
    plVar9 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d470e8 = (byte *)(**(code **)(*plVar9 + 0x10))(plVar9,"disabled-by-default-v8.runtime");
  }
  pbVar8 = DAT_01d470e8;
  local_f0 = (byte **)0x0;
  if ((*DAT_01d470e8 & 5) != 0) {
    local_a8 = (Isolate *)0x0;
    local_a0 = (ulong *)0x0;
    plVar9 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar10 = (**(code **)(*plVar9 + 0x18))
                       (plVar9,0x58,pbVar8,"V8.Runtime_Runtime_CreateArrayLiteral",0,0,0,0,0,0,0,
                        &local_a8,0);
    puVar4 = local_a0;
    local_a0 = (ulong *)0x0;
    if (puVar4 != (ulong *)0x0) {
      (**(code **)(*puVar4 + 8))();
    }
    pIVar15 = local_a8;
    local_a8 = (Isolate *)0x0;
    if (pIVar15 != (Isolate *)0x0) {
      (**(code **)(*(long *)pIVar15 + 8))();
    }
    local_f0 = &local_e8;
    local_e0 = "V8.Runtime_Runtime_CreateArrayLiteral";
    local_e8 = pbVar8;
    local_d8 = uVar10;
  }
  puVar4 = *(ulong **)(param_3 + 0x95a0);
  puVar5 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar17 = *param_2;
  if ((uVar17 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsHeapObject()");
  }
  if ((param_2[-1] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsSmi()");
  }
  puVar12 = param_2 + -2;
  uVar19 = *puVar12;
  if (((uVar19 & 1) == 0) ||
     (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) != 0x56)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsArrayBoilerplateDescription()");
  }
  uVar20 = (uint)param_2[-3];
  if ((param_2[-3] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[3].IsSmi()");
  }
  if (*(short *)((uVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0x9f) {
    iVar2 = (int)param_2[-1] >> 1;
    if (*(int *)(uVar17 + 0xf) <= iVar2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","literals_slot.ToInt() < vector->length()");
    }
    lVar16 = (long)(iVar2 << 2) + 0x1f;
    uVar17 = uVar17 & 0xffffffff00000000 | (ulong)*(uint *)(lVar16 + uVar17);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar11 = puVar4;
      if (puVar5 == puVar4) {
        puVar11 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar11 + 1;
      *puVar11 = uVar17;
    }
    else {
      puVar11 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar17);
      uVar17 = *puVar11;
    }
    uVar6 = uVar20 >> 1 & 1;
    uVar3 = uVar6;
    if (v8::internal::FLAG_track_double_fields != '\0') {
      uVar3 = 0;
    }
    if ((uVar17 & 1) == 0) {
      if (((int)uVar20 >> 1 & 4U) == 0 && (int)uVar17 == 0) {
        *(undefined4 *)(*param_2 + lVar16) = 2;
        pIVar15 = (Isolate *)FUN_01571a14(param_3,puVar12,0);
        if ((uVar6 == 0) || (v8::internal::FLAG_track_double_fields != '\0')) {
          local_a8 = (Isolate *)&local_80;
          local_a0 = (ulong *)((ulong)local_a0 & 0xffffffff00000000);
          local_80 = param_3;
          lVar16 = FUN_01570f78(&local_a8,pIVar15);
          goto joined_r0x01570254;
        }
        goto joined_r0x015703e8;
      }
      puVar12 = (ulong *)FUN_01571a14(param_3,puVar12,1);
      local_a0 = (ulong *)0x0;
      local_98 = (ulong *)0x0;
      local_a8 = param_3;
      puVar11 = (ulong *)FUN_01570ca8(&local_a8);
      local_78 = 0;
      local_80 = (Isolate *)&local_a8;
      lVar13 = FUN_01571d94(&local_80,puVar12);
      if (lVar13 == 0) goto LAB_01570508;
      FUN_01570e50(&local_a8,puVar11,puVar12);
      uVar19 = *param_2;
      uVar17 = *puVar11;
      piVar1 = (int *)(uVar19 + lVar16);
      *piVar1 = (int)uVar17;
      if (((int)uVar17 != 3) && ((uVar17 & 1) != 0)) {
        uVar18 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar18 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar19,piVar1,uVar17 & 0xfffffffffffffffd);
          uVar18 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar18 & 0x18) != 0) && ((*(byte *)((uVar19 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar19,piVar1,uVar17 & 0xfffffffffffffffd);
        }
      }
    }
    else {
      uVar17 = uVar17 & 0xffffffff00000000 | (ulong)*(uint *)(uVar17 + 3);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar12 = *(ulong **)(param_3 + 0x95a0);
        if (puVar12 == *(ulong **)(param_3 + 0x95a8)) {
          puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar12 + 1;
        *puVar12 = uVar17;
      }
      else {
        puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar17);
      }
    }
    local_88 = ((byte)((uint)((int)uVar20 >> 1) >> 1) ^ 0xff) & 1;
    local_98 = (ulong *)0x0;
    puVar14 = *(ulong **)(param_3 + 0x95a0);
    uVar17 = *puVar11;
    local_a8 = param_3;
    local_a0 = puVar11;
    puStack_90 = puVar11;
    if (puVar14 == *(ulong **)(param_3 + 0x95a8)) {
      puVar14 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar14 + 1;
    *puVar14 = uVar17;
    uVar17 = *puVar14;
    local_98 = puVar14;
    if (*(CanonicalHandleScope **)(local_a8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      pIVar15 = local_a8 + 0x95a0;
      puVar11 = *(ulong **)pIVar15;
      if (puVar11 == *(ulong **)(local_a8 + 0x95a8)) {
        puVar11 = (ulong *)v8::internal::HandleScope::Extend(local_a8);
      }
      *(ulong **)pIVar15 = puVar11 + 1;
      *puVar11 = uVar17;
    }
    else {
      v8::internal::CanonicalHandleScope::Lookup
                (*(CanonicalHandleScope **)(local_a8 + 0x95b8),uVar17);
    }
    local_80 = (Isolate *)&local_a8;
    local_78 = uVar3;
    pIVar15 = (Isolate *)FUN_01572554(&local_80,puVar12);
joined_r0x015703e8:
    if (pIVar15 != (Isolate *)0x0) goto LAB_0157050c;
  }
  else {
    pIVar15 = (Isolate *)FUN_01571a14(param_3,puVar12,0);
    if (((uVar20 >> 1 & 1) != 0) && (v8::internal::FLAG_track_double_fields == '\0'))
    goto joined_r0x015703e8;
    local_a8 = (Isolate *)&local_80;
    local_a0 = (ulong *)((ulong)local_a0 & 0xffffffff00000000);
    local_80 = param_3;
    lVar16 = FUN_01570f78(&local_a8,pIVar15);
joined_r0x01570254:
    if (lVar16 != 0) goto joined_r0x015703e8;
  }
LAB_01570508:
  pIVar15 = param_3 + 0x180;
LAB_0157050c:
  uVar10 = *(undefined8 *)pIVar15;
  *(ulong **)(param_3 + 0x95a0) = puVar4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar5) {
    *(ulong **)(param_3 + 0x95a8) = puVar5;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_f0 != (byte **)0x0) && (*local_e8 != 0)) {
    plVar9 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar9 + 0x28))(plVar9,local_e8,local_e0,local_d8);
  }
  if (local_d0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_d0,(RuntimeCallTimer *)((ulong)&local_d0 | 8));
  }
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}

