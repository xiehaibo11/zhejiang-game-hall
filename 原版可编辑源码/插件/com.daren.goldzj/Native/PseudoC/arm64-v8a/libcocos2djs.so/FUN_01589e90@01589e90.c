
ulong FUN_01589e90(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  Isolate *pIVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  byte **local_d0;
  byte *local_c8;
  char *local_c0;
  undefined8 local_b8;
  RuntimeCallStats *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *local_88;
  uint local_7c;
  long *local_78;
  long *local_70;
  
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = (RuntimeCallStats *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_b0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_b0,(ulong)&local_b0 | 8,0x1f2);
  }
  if (DAT_01d472a8 == (byte *)0x0) {
    plVar9 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d472a8 = (byte *)(**(code **)(*plVar9 + 0x10))(plVar9,"disabled-by-default-v8.runtime");
  }
  pbVar6 = DAT_01d472a8;
  local_d0 = (byte **)0x0;
  if ((*DAT_01d472a8 & 5) != 0) {
    local_78 = (long *)0x0;
    local_70 = (long *)0x0;
    plVar9 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar10 = (**(code **)(*plVar9 + 0x18))
                       (plVar9,0x58,pbVar6,"V8.Runtime_Runtime_NewSloppyArguments_Generic",0,0,0,0,0
                        ,0,0,&local_78,0);
    plVar9 = local_70;
    local_70 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    plVar9 = local_78;
    local_78 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    local_d0 = &local_c8;
    local_c0 = "V8.Runtime_Runtime_NewSloppyArguments_Generic";
    local_c8 = pbVar6;
    local_b8 = uVar10;
  }
  uVar10 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar16 = *param_2;
  if (((uVar16 & 1) == 0) ||
     (*(short *)((uVar16 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar16 - 1)) != 0x439)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
  }
  local_7c = 0;
  FUN_01591ac0(&local_88,param_3,&local_7c);
  uVar4 = local_7c;
  puVar19 = local_88;
  uVar16 = (ulong)local_7c;
  if (((*(uint *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 0x1b) & 0x1f)
       - 5 & 0xff) < 2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!IsDerivedConstructor(callee->shared().kind())");
  }
  puVar11 = (ulong *)v8::internal::Factory::NewArgumentsObject((Factory *)param_3,param_2,uVar16);
  if (0 < (int)uVar4) {
    uVar5 = *(ushort *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 0x15);
    if (uVar5 != 0) {
      uVar1 = uVar4;
      if ((int)(uint)uVar5 <= (int)uVar4) {
        uVar1 = (uint)uVar5;
      }
      puVar12 = (ulong *)v8::internal::Factory::NewFixedArray((Factory *)param_3,uVar1 + 2,0);
      uVar20 = *(ulong *)(param_3 + 0x270);
      uVar21 = *puVar12;
      if ((int)uVar20 == 0) {
        *(undefined4 *)(uVar21 - 1) = 0;
      }
      else {
        v8::internal::Heap::VerifyObjectLayoutChange
                  ((Heap *)(uVar21 & 0xffffffff00000000 | 0x8850),uVar21,uVar20);
        *(int *)(uVar21 - 1) = (int)uVar20;
        if (((uVar20 & 1) != 0) && ((*(byte *)((uVar20 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0))
        {
          v8::internal::Heap_MarkingBarrierSlow(uVar21,0,uVar20);
        }
      }
      uVar21 = *puVar11;
      uVar20 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
      uVar20 = uVar20 | *(uint *)((uVar20 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1)) + 0x13);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar13 = *(ulong **)(param_3 + 0x95a0);
        if (puVar13 == *(ulong **)(param_3 + 0x95a8)) {
          puVar13 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar13 + 1;
        *puVar13 = uVar20;
        uVar3 = *(uint *)(uVar20 + 0xbf);
      }
      else {
        puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar20);
        uVar20 = *puVar13;
        uVar3 = *(uint *)(uVar20 + 0xbf);
      }
      if (uVar3 == 0) {
        *(undefined4 *)(uVar21 - 1) = 0;
      }
      else {
        uVar22 = uVar20 & 0xffffffff00000000 | (ulong)uVar3;
        v8::internal::Heap::VerifyObjectLayoutChange
                  ((Heap *)(uVar21 & 0xffffffff00000000 | 0x8850),uVar21,uVar22);
        *(uint *)(uVar21 - 1) = uVar3;
        if (((uVar3 & 1) != 0) &&
           ((*(byte *)((uVar20 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000) + 10) >> 2
            & 1) != 0)) {
          v8::internal::Heap_MarkingBarrierSlow(uVar21,0,uVar22);
        }
      }
      uVar21 = *puVar11;
      uVar20 = *puVar12;
      *(int *)(uVar21 + 7) = (int)uVar20;
      if ((uVar20 & 1) != 0) {
        uVar22 = *(ulong *)((uVar20 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar22 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar21,uVar21 + 7,uVar20);
          uVar22 = *(ulong *)(uVar20 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar22 & 0x18) != 0) && ((*(byte *)((uVar21 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar21,uVar21 + 7,uVar20);
        }
      }
      uVar20 = *(ulong *)(param_3 + 0x2bc8);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar13 = *(ulong **)(param_3 + 0x95a0);
        if (puVar13 == *(ulong **)(param_3 + 0x95a8)) {
          puVar13 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar13 + 1;
        *puVar13 = uVar20;
      }
      else {
        puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar20);
      }
      puVar14 = (ulong *)v8::internal::Factory::NewFixedArray((Factory *)param_3,uVar4,0);
      uVar20 = *puVar13;
      uVar21 = *puVar12;
      *(int *)(uVar21 + 7) = (int)uVar20;
      if ((uVar20 & 1) != 0) {
        uVar22 = *(ulong *)((uVar20 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar22 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar21,uVar21 + 7,uVar20);
          uVar22 = *(ulong *)(uVar20 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar22 & 0x18) != 0) && ((*(byte *)((uVar21 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar21,uVar21 + 7,uVar20);
        }
      }
      uVar21 = *puVar12;
      uVar20 = *puVar14;
      *(int *)(uVar21 + 0xb) = (int)uVar20;
      if ((uVar20 & 1) != 0) {
        uVar22 = *(ulong *)((uVar20 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar22 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar21,uVar21 + 0xb,uVar20);
          uVar22 = *(ulong *)(uVar20 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar22 & 0x18) != 0) && ((*(byte *)((uVar21 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar21,uVar21 + 0xb,uVar20);
        }
      }
      if ((int)(uint)uVar5 < (int)uVar4) {
        iVar17 = uVar4 * 4;
        do {
          iVar17 = iVar17 + -4;
          lVar18 = uVar16 - 1;
          uVar21 = *puVar14;
          uVar16 = uVar16 - 1;
          uVar20 = *(ulong *)puVar19[lVar18];
          *(int *)(uVar21 + (long)iVar17 + 7) = (int)uVar20;
          if ((uVar20 & 1) != 0) {
            uVar22 = *(ulong *)((uVar20 & 0xfffffffffffc0000) + 8);
            lVar18 = uVar21 + (long)iVar17 + 7;
            if (((uint)uVar22 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar21,lVar18,uVar20);
              uVar22 = *(ulong *)(uVar20 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar22 & 0x18) != 0) &&
               ((*(byte *)((uVar21 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar21,lVar18,uVar20);
            }
          }
        } while ((long)(ulong)uVar1 < (long)uVar16);
      }
      pIVar15 = (Isolate *)(*param_2 & 0xffffffff00000000);
      uVar4 = *(uint *)(((ulong)pIVar15 | (ulong)*(uint *)(*param_2 + 0xb)) + 7);
      if (((uVar4 & 1) == 0) ||
         (uVar16 = (ulong)pIVar15 | (ulong)uVar4,
         *(short *)(((ulong)pIVar15 | 7) + (ulong)*(uint *)(uVar16 - 1)) != 0x83)) {
        uVar16 = v8::internal::ScopeInfo::Empty(pIVar15);
      }
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar13 = *(ulong **)(param_3 + 0x95a0);
        if (puVar13 == *(ulong **)(param_3 + 0x95a8)) {
          puVar13 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar13 + 1;
        *puVar13 = uVar16;
      }
      else {
        puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar16);
      }
      if (0 < (int)uVar1) {
        uVar16 = 0;
        lVar18 = 0xf;
        do {
          uVar21 = *puVar14;
          uVar20 = *(ulong *)puVar19[uVar16];
          *(int *)(lVar18 + uVar21 + -8) = (int)uVar20;
          if ((uVar20 & 1) != 0) {
            uVar22 = *(ulong *)((uVar20 & 0xfffffffffffc0000) + 8);
            lVar23 = lVar18 + uVar21 + -8;
            if (((uint)uVar22 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar21,lVar23,uVar20);
              uVar22 = *(ulong *)(uVar20 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar22 & 0x18) != 0) &&
               ((*(byte *)((uVar21 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar21,lVar23,uVar20);
            }
          }
          uVar16 = uVar16 + 1;
          *(undefined4 *)(lVar18 + *puVar12) =
               *(undefined4 *)((*puVar12 & 0xffffffff00000000) + 0xa8);
          lVar18 = lVar18 + 4;
        } while (uVar16 < uVar1);
      }
      iVar17 = 0;
      do {
        plVar9 = (long *)*puVar13;
        if (*(int *)((long)plVar9 + 3) < 2) {
          if (-1 < iVar17) goto LAB_0158a694;
        }
        else if (*(int *)((long)plVar9 + 0xf) >> 1 <= iVar17) goto LAB_0158a694;
        local_78 = plVar9;
        uVar16 = v8::internal::ScopeInfo::ContextLocalIsParameter((ScopeInfo *)&local_78,iVar17);
        if ((uVar16 & 1) != 0) {
          local_78 = (long *)*puVar13;
          iVar7 = v8::internal::ScopeInfo::ContextLocalParameterNumber
                            ((ScopeInfo *)&local_78,iVar17);
          if (iVar7 < (int)uVar1) {
            *(undefined4 *)(*puVar14 + (long)(iVar7 * 4) + 7) =
                 *(undefined4 *)((*puVar14 & 0xffffffff00000000) + 0xa8);
            local_78 = (long *)*puVar13;
            iVar8 = v8::internal::ScopeInfo::ContextHeaderLength((ScopeInfo *)&local_78);
            *(int *)(*puVar12 + (long)(iVar7 * 4 + 8) + 7) = (iVar8 + iVar17) * 2;
          }
        }
        iVar17 = iVar17 + 1;
      } while( true );
    }
    puVar12 = (ulong *)v8::internal::Factory::NewFixedArray((Factory *)param_3,uVar4,0);
    uVar20 = *puVar12;
    uVar21 = *puVar11;
    *(int *)(uVar21 + 7) = (int)uVar20;
    if ((uVar20 & 1) != 0) {
      uVar22 = *(ulong *)((uVar20 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar22 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar21,uVar21 + 7,uVar20);
        uVar22 = *(ulong *)(uVar20 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar22 & 0x18) != 0) && ((*(byte *)((uVar21 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar21,uVar21 + 7,uVar20);
      }
    }
    iVar17 = 0;
    do {
      uVar21 = *puVar12;
      uVar20 = *(ulong *)*puVar19;
      *(int *)(uVar21 + (long)iVar17 + 7) = (int)uVar20;
      if ((uVar20 & 1) != 0) {
        uVar22 = *(ulong *)((uVar20 & 0xfffffffffffc0000) + 8);
        lVar18 = uVar21 + (long)iVar17 + 7;
        if (((uint)uVar22 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar21,lVar18,uVar20);
          uVar22 = *(ulong *)(uVar20 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar22 & 0x18) != 0) && ((*(byte *)((uVar21 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar21,lVar18,uVar20);
        }
      }
      uVar16 = uVar16 - 1;
      iVar17 = iVar17 + 4;
      puVar19 = puVar19 + 1;
    } while (uVar16 != 0);
  }
LAB_0158a694:
  puVar19 = local_88;
  uVar16 = *puVar11;
  local_88 = (undefined8 *)0x0;
  if (puVar19 != (undefined8 *)0x0) {
    operator_delete__(puVar19);
  }
  if (param_3 != (Isolate *)0x0) {
    *(undefined8 *)(param_3 + 0x95a0) = uVar10;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
  }
  if ((local_d0 != (byte **)0x0) && (*local_c8 != 0)) {
    plVar9 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar9 + 0x28))(plVar9,local_c8,local_c0,local_b8);
  }
  if (local_b0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_b0,(RuntimeCallTimer *)((ulong)&local_b0 | 8));
  }
  return uVar16;
}

