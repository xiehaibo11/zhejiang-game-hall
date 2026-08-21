
ulong FUN_0158bbd4(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  long lVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  Isolate *pIVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  ulong *puVar25;
  byte **local_660;
  byte *local_658;
  char *local_650;
  undefined8 local_648;
  RuntimeCallStats *local_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 local_620;
  ulong local_618;
  long *local_610;
  long *local_608;
  long *local_88;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  local_620 = 0;
  uStack_638 = 0;
  local_640 = (RuntimeCallStats *)0x0;
  uStack_628 = 0;
  uStack_630 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_640 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_640,(ulong)&local_640 | 8,0x1f1);
  }
  if (DAT_01d472c0 == (byte *)0x0) {
    plVar10 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d472c0 = (byte *)(**(code **)(*plVar10 + 0x10))(plVar10,"disabled-by-default-v8.runtime");
  }
  pbVar7 = DAT_01d472c0;
  local_660 = (byte **)0x0;
  if ((*DAT_01d472c0 & 5) != 0) {
    local_610 = (long *)0x0;
    local_608 = (long *)0x0;
    plVar10 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar11 = (**(code **)(*plVar10 + 0x18))
                       (plVar10,0x58,pbVar7,"V8.Runtime_Runtime_NewSloppyArguments",0,0,0,0,0,0,0,
                        &local_610,0);
    plVar10 = local_608;
    local_608 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    plVar10 = local_610;
    local_610 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    local_660 = &local_658;
    local_650 = "V8.Runtime_Runtime_NewSloppyArguments";
    local_658 = pbVar7;
    local_648 = uVar11;
  }
  uVar11 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar17 = *param_2;
  if (((uVar17 & 1) == 0) ||
     (*(short *)((uVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar17 - 1)) != 0x439)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
  }
  v8::internal::StackFrameIterator::StackFrameIterator((StackFrameIterator *)&local_610,param_3);
  v8::internal::StackFrameIterator::Advance((StackFrameIterator *)&local_610);
  v8::internal::StackFrameIterator::Advance((StackFrameIterator *)&local_610);
  plVar10 = local_88;
  uVar8 = (**(code **)(*local_88 + 0x78))(local_88);
  plVar10 = (long *)plVar10[4];
  if (*(long *)(*plVar10 + -8) == 0x26) {
    v8::internal::StackFrameIterator::Advance((StackFrameIterator *)&local_610);
    uVar8 = (**(code **)(*local_88 + 0x78))(local_88);
    plVar10 = (long *)local_88[4];
  }
  uVar17 = (ulong)uVar8;
  if (((*(uint *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 0x1b) & 0x1f)
       - 5 & 0xff) < 2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!IsDerivedConstructor(callee->shared().kind())");
  }
  puVar12 = (ulong *)v8::internal::Factory::NewArgumentsObject((Factory *)param_3,param_2,uVar17);
  if ((int)uVar8 < 1) {
    uVar17 = *puVar12;
  }
  else {
    uVar5 = *(ushort *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 0x15);
    iVar20 = uVar8 << 3;
    lVar18 = (long)iVar20;
    lVar21 = lVar18 + 0x10;
    if (uVar5 != 0) {
      uVar2 = uVar8;
      if ((int)(uint)uVar5 <= (int)uVar8) {
        uVar2 = (uint)uVar5;
      }
      puVar13 = (ulong *)v8::internal::Factory::NewFixedArray((Factory *)param_3,uVar2 + 2,0);
      uVar17 = *(ulong *)(param_3 + 0x270);
      uVar23 = *puVar13;
      if ((int)uVar17 == 0) {
        *(undefined4 *)(uVar23 - 1) = 0;
      }
      else {
        v8::internal::Heap::VerifyObjectLayoutChange
                  ((Heap *)(uVar23 & 0xffffffff00000000 | 0x8850),uVar23,uVar17);
        *(int *)(uVar23 - 1) = (int)uVar17;
        if (((uVar17 & 1) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0))
        {
          v8::internal::Heap_MarkingBarrierSlow(uVar23,0,uVar17);
        }
      }
      uVar23 = *puVar12;
      uVar17 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
      uVar17 = uVar17 | *(uint *)((uVar17 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1)) + 0x13);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar14 = *(ulong **)(param_3 + 0x95a0);
        if (puVar14 == *(ulong **)(param_3 + 0x95a8)) {
          puVar14 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar14 + 1;
        *puVar14 = uVar17;
      }
      else {
        puVar14 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar17);
        uVar17 = *puVar14;
      }
      uVar4 = *(uint *)(uVar17 + 0xbf);
      if (uVar4 == 0) {
        *(undefined4 *)(uVar23 - 1) = 0;
      }
      else {
        uVar24 = uVar17 & 0xffffffff00000000 | (ulong)uVar4;
        v8::internal::Heap::VerifyObjectLayoutChange
                  ((Heap *)(uVar23 & 0xffffffff00000000 | 0x8850),uVar23,uVar24);
        *(uint *)(uVar23 - 1) = uVar4;
        if (((uVar4 & 1) != 0) &&
           ((*(byte *)((uVar17 & 0xffffffff00000000 | (ulong)uVar4 & 0xfffffffffffc0000) + 10) >> 2
            & 1) != 0)) {
          v8::internal::Heap_MarkingBarrierSlow(uVar23,0,uVar24);
        }
      }
      uVar17 = *puVar13;
      uVar23 = *puVar12;
      *(int *)(uVar23 + 7) = (int)uVar17;
      if ((uVar17 & 1) != 0) {
        uVar24 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar24 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar23,uVar23 + 7,uVar17);
          uVar24 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar24 & 0x18) != 0) && ((*(byte *)((uVar23 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar23,uVar23 + 7,uVar17);
        }
      }
      uVar17 = *(ulong *)(param_3 + 0x2bc8);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar14 = *(ulong **)(param_3 + 0x95a0);
        if (puVar14 == *(ulong **)(param_3 + 0x95a8)) {
          puVar14 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar14 + 1;
        *puVar14 = uVar17;
      }
      else {
        puVar14 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar17);
      }
      puVar15 = (ulong *)v8::internal::Factory::NewFixedArray((Factory *)param_3,uVar8,0);
      uVar23 = *puVar13;
      uVar17 = *puVar14;
      *(int *)(uVar23 + 7) = (int)uVar17;
      if ((uVar17 & 1) != 0) {
        uVar24 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar24 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar23,uVar23 + 7,uVar17);
          uVar24 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar24 & 0x18) != 0) && ((*(byte *)((uVar23 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar23,uVar23 + 7,uVar17);
        }
      }
      uVar23 = *puVar13;
      uVar17 = *puVar15;
      *(int *)(uVar23 + 0xb) = (int)uVar17;
      if ((uVar17 & 1) != 0) {
        uVar24 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar24 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar23,uVar23 + 0xb,uVar17);
          uVar24 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar24 & 0x18) != 0) && ((*(byte *)((uVar23 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar23,uVar23 + 0xb,uVar17);
        }
      }
      if ((int)(uint)uVar5 < (int)uVar8) {
        uVar17 = (ulong)uVar8;
        iVar22 = uVar8 * 4;
        do {
          iVar22 = iVar22 + -4;
          uVar23 = *puVar15;
          uVar24 = *(ulong *)((long)plVar10 + (lVar21 - iVar20));
          uVar17 = uVar17 - 1;
          *(int *)(uVar23 + (long)iVar22 + 7) = (int)uVar24;
          if ((uVar24 & 1) != 0) {
            uVar19 = *(ulong *)((uVar24 & 0xfffffffffffc0000) + 8);
            lVar1 = uVar23 + (long)iVar22 + 7;
            if (((uint)uVar19 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar23,lVar1,uVar24);
              uVar19 = *(ulong *)(uVar24 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar19 & 0x18) != 0) &&
               ((*(byte *)((uVar23 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar23,lVar1,uVar24);
            }
          }
          iVar20 = iVar20 + -8;
        } while ((long)(ulong)uVar2 < (long)uVar17);
      }
      pIVar16 = (Isolate *)(*param_2 & 0xffffffff00000000);
      uVar8 = *(uint *)(((ulong)pIVar16 | (ulong)*(uint *)(*param_2 + 0xb)) + 7);
      if (((uVar8 & 1) == 0) ||
         (uVar17 = (ulong)pIVar16 | (ulong)uVar8,
         *(short *)(((ulong)pIVar16 | 7) + (ulong)*(uint *)(uVar17 - 1)) != 0x83)) {
        uVar17 = v8::internal::ScopeInfo::Empty(pIVar16);
      }
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar14 = *(ulong **)(param_3 + 0x95a0);
        if (puVar14 == *(ulong **)(param_3 + 0x95a8)) {
          puVar14 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar14 + 1;
        *puVar14 = uVar17;
      }
      else {
        puVar14 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar17);
      }
      if (0 < (int)uVar2) {
        uVar17 = 0;
        lVar21 = 0xf;
        puVar25 = (ulong *)((long)plVar10 + lVar18 + 8);
        do {
          uVar24 = *puVar15;
          uVar23 = *puVar25;
          *(int *)(lVar21 + uVar24 + -8) = (int)uVar23;
          if ((uVar23 & 1) != 0) {
            uVar19 = *(ulong *)((uVar23 & 0xfffffffffffc0000) + 8);
            lVar18 = lVar21 + uVar24 + -8;
            if (((uint)uVar19 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar24,lVar18,uVar23);
              uVar19 = *(ulong *)(uVar23 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar19 & 0x18) != 0) &&
               ((*(byte *)((uVar24 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar24,lVar18,uVar23);
            }
          }
          uVar17 = uVar17 + 1;
          puVar25 = puVar25 + -1;
          *(undefined4 *)(lVar21 + *puVar13) =
               *(undefined4 *)((*puVar13 & 0xffffffff00000000) + 0xa8);
          lVar21 = lVar21 + 4;
        } while (uVar17 < uVar2);
      }
      iVar20 = 0;
      do {
        uVar17 = *puVar14;
        if (*(int *)(uVar17 + 3) < 2) {
          if (-1 < iVar20) goto LAB_0158c468;
        }
        else if (*(int *)(uVar17 + 0xf) >> 1 <= iVar20) goto LAB_0158c468;
        local_618 = uVar17;
        uVar17 = v8::internal::ScopeInfo::ContextLocalIsParameter((ScopeInfo *)&local_618,iVar20);
        if ((uVar17 & 1) != 0) {
          local_618 = *puVar14;
          iVar22 = v8::internal::ScopeInfo::ContextLocalParameterNumber
                             ((ScopeInfo *)&local_618,iVar20);
          if (iVar22 < (int)uVar2) {
            *(undefined4 *)(*puVar15 + (long)(iVar22 * 4) + 7) =
                 *(undefined4 *)((*puVar15 & 0xffffffff00000000) + 0xa8);
            local_618 = *puVar14;
            iVar9 = v8::internal::ScopeInfo::ContextHeaderLength((ScopeInfo *)&local_618);
            *(int *)(*puVar13 + (long)(iVar22 * 4 + 8) + 7) = (iVar9 + iVar20) * 2;
          }
        }
        iVar20 = iVar20 + 1;
      } while( true );
    }
    puVar13 = (ulong *)v8::internal::Factory::NewFixedArray((Factory *)param_3,uVar17,0);
    uVar24 = *puVar12;
    uVar23 = *puVar13;
    *(int *)(uVar24 + 7) = (int)uVar23;
    if ((uVar23 & 1) != 0) {
      uVar19 = *(ulong *)((uVar23 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar19 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar24,uVar24 + 7,uVar23);
        uVar19 = *(ulong *)(uVar23 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar19 & 0x18) != 0) && ((*(byte *)((uVar24 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar24,uVar24 + 7,uVar23);
      }
    }
    iVar22 = 0;
    iVar20 = 8;
    do {
      uVar23 = *puVar13;
      uVar24 = *(ulong *)((long)plVar10 + (lVar21 - iVar20));
      *(int *)(uVar23 + (long)iVar22 + 7) = (int)uVar24;
      if ((uVar24 & 1) != 0) {
        uVar19 = *(ulong *)((uVar24 & 0xfffffffffffc0000) + 8);
        lVar18 = uVar23 + (long)iVar22 + 7;
        if (((uint)uVar19 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar23,lVar18,uVar24);
          uVar19 = *(ulong *)(uVar24 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar19 & 0x18) != 0) && ((*(byte *)((uVar23 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar23,lVar18,uVar24);
        }
      }
      uVar17 = uVar17 - 1;
      iVar20 = iVar20 + 8;
      iVar22 = iVar22 + 4;
    } while (uVar17 != 0);
LAB_0158c468:
    uVar17 = *puVar12;
    if (param_3 == (Isolate *)0x0) goto LAB_0158c4a8;
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar11;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
LAB_0158c4a8:
  if ((local_660 != (byte **)0x0) && (*local_658 != 0)) {
    plVar10 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar10 + 0x28))(plVar10,local_658,local_650,local_648);
  }
  if (local_640 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_640,(RuntimeCallTimer *)((ulong)&local_640 | 8));
  }
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17;
}

