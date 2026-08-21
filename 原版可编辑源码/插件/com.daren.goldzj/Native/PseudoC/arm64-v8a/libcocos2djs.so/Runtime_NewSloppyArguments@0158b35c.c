
/* v8::internal::Runtime_NewSloppyArguments(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_NewSloppyArguments(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  Isolate *pIVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ushort uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  Isolate *pIVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  ulong *puVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  ulong local_618;
  StackFrameIterator aSStack_610 [1416];
  long *local_88;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  if (TracingFlags::runtime_stats != 0) {
    uVar16 = FUN_0158bbd4(param_1,param_2,param_3);
    if (*(long *)(lVar8 + 0x28) == local_70) {
      return uVar16;
    }
    goto LAB_0158bba8;
  }
  pIVar2 = param_3 + 0x95a0;
  lVar4 = *(long *)pIVar2;
  lVar5 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar16 = *param_2;
  if (((uVar16 & 1) == 0) ||
     (*(short *)((uVar16 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar16 - 1)) != 0x439)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
  }
  StackFrameIterator::StackFrameIterator(aSStack_610,param_3);
  StackFrameIterator::Advance(aSStack_610);
  StackFrameIterator::Advance(aSStack_610);
  plVar24 = local_88;
  uVar9 = (**(code **)(*local_88 + 0x78))(local_88);
  plVar24 = (long *)plVar24[4];
  if (*(long *)(*plVar24 + -8) == 0x26) {
    StackFrameIterator::Advance(aSStack_610);
    uVar9 = (**(code **)(*local_88 + 0x78))(local_88);
    plVar24 = (long *)local_88[4];
  }
  uVar16 = (ulong)uVar9;
  if (((*(uint *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 0x1b) & 0x1f)
       - 5 & 0xff) < 2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!IsDerivedConstructor(callee->shared().kind())");
  }
  puVar11 = (ulong *)Factory::NewArgumentsObject((Factory *)param_3,param_2,uVar16);
  if ((int)uVar9 < 1) {
    uVar16 = *puVar11;
LAB_0158bb30:
    *(long *)pIVar2 = lVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar5) {
      *(long *)(param_3 + 0x95a8) = lVar5;
      HandleScope::DeleteExtensions(param_3);
    }
  }
  else {
    uVar7 = *(ushort *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 0x15);
    iVar19 = uVar9 << 3;
    lVar17 = (long)iVar19;
    lVar25 = lVar17 + 0x10;
    if (uVar7 != 0) {
      uVar3 = uVar9;
      if ((int)(uint)uVar7 <= (int)uVar9) {
        uVar3 = (uint)uVar7;
      }
      puVar12 = (ulong *)Factory::NewFixedArray((Factory *)param_3,uVar3 + 2,0);
      uVar16 = *(ulong *)(param_3 + 0x270);
      uVar22 = *puVar12;
      if ((int)uVar16 == 0) {
        *(undefined4 *)(uVar22 - 1) = 0;
      }
      else {
        Heap::VerifyObjectLayoutChange((Heap *)(uVar22 & 0xffffffff00000000 | 0x8850),uVar22,uVar16)
        ;
        *(int *)(uVar22 - 1) = (int)uVar16;
        if (((uVar16 & 1) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0))
        {
          Heap_MarkingBarrierSlow(uVar22,0,uVar16);
        }
      }
      uVar22 = *puVar11;
      uVar16 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
      uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1)) + 0x13);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar13 = *(ulong **)pIVar2;
        if (puVar13 == *(ulong **)(param_3 + 0x95a8)) {
          puVar13 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar2 = puVar13 + 1;
        *puVar13 = uVar16;
      }
      else {
        puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar16);
        uVar16 = *puVar13;
      }
      uVar6 = *(uint *)(uVar16 + 0xbf);
      if (uVar6 == 0) {
        *(undefined4 *)(uVar22 - 1) = 0;
      }
      else {
        uVar23 = uVar16 & 0xffffffff00000000 | (ulong)uVar6;
        Heap::VerifyObjectLayoutChange((Heap *)(uVar22 & 0xffffffff00000000 | 0x8850),uVar22,uVar23)
        ;
        *(uint *)(uVar22 - 1) = uVar6;
        if (((uVar6 & 1) != 0) &&
           ((*(byte *)((uVar16 & 0xffffffff00000000 | (ulong)uVar6 & 0xfffffffffffc0000) + 10) >> 2
            & 1) != 0)) {
          Heap_MarkingBarrierSlow(uVar22,0,uVar23);
        }
      }
      uVar22 = *puVar11;
      uVar16 = *puVar12;
      *(int *)(uVar22 + 7) = (int)uVar16;
      if ((uVar16 & 1) != 0) {
        uVar23 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar23 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar22,uVar22 + 7,uVar16);
          uVar23 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar23 & 0x18) != 0) && ((*(byte *)((uVar22 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar22,uVar22 + 7,uVar16);
        }
      }
      uVar16 = *(ulong *)(param_3 + 0x2bc8);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar13 = *(ulong **)pIVar2;
        if (puVar13 == *(ulong **)(param_3 + 0x95a8)) {
          puVar13 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar2 = puVar13 + 1;
        *puVar13 = uVar16;
      }
      else {
        puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar16);
      }
      puVar14 = (ulong *)Factory::NewFixedArray((Factory *)param_3,uVar9,0);
      uVar16 = *puVar13;
      uVar22 = *puVar12;
      *(int *)(uVar22 + 7) = (int)uVar16;
      if ((uVar16 & 1) != 0) {
        uVar23 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar23 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar22,uVar22 + 7,uVar16);
          uVar23 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar23 & 0x18) != 0) && ((*(byte *)((uVar22 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar22,uVar22 + 7,uVar16);
        }
      }
      uVar16 = *puVar14;
      uVar22 = *puVar12;
      *(int *)(uVar22 + 0xb) = (int)uVar16;
      if ((uVar16 & 1) != 0) {
        uVar23 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar23 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar22,uVar22 + 0xb,uVar16);
          uVar23 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar23 & 0x18) != 0) && ((*(byte *)((uVar22 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar22,uVar22 + 0xb,uVar16);
        }
      }
      if ((int)(uint)uVar7 < (int)uVar9) {
        uVar16 = (ulong)uVar9;
        iVar21 = uVar9 * 4;
        do {
          iVar21 = iVar21 + -4;
          uVar22 = *puVar14;
          uVar23 = *(ulong *)((long)plVar24 + (lVar25 - iVar19));
          uVar16 = uVar16 - 1;
          *(int *)(uVar22 + (long)iVar21 + 7) = (int)uVar23;
          if ((uVar23 & 1) != 0) {
            uVar18 = *(ulong *)((uVar23 & 0xfffffffffffc0000) + 8);
            lVar1 = uVar22 + (long)iVar21 + 7;
            if (((uint)uVar18 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar22,lVar1,uVar23);
              uVar18 = *(ulong *)(uVar23 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar18 & 0x18) != 0) &&
               ((*(byte *)((uVar22 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar22,lVar1,uVar23);
            }
          }
          iVar19 = iVar19 + -8;
        } while ((long)(ulong)uVar3 < (long)uVar16);
      }
      pIVar15 = (Isolate *)(*param_2 & 0xffffffff00000000);
      uVar9 = *(uint *)(((ulong)pIVar15 | (ulong)*(uint *)(*param_2 + 0xb)) + 7);
      if (((uVar9 & 1) == 0) ||
         (uVar16 = (ulong)pIVar15 | (ulong)uVar9,
         *(short *)(((ulong)pIVar15 | 7) + (ulong)*(uint *)(uVar16 - 1)) != 0x83)) {
        uVar16 = ScopeInfo::Empty(pIVar15);
      }
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar13 = *(ulong **)pIVar2;
        if (puVar13 == *(ulong **)(param_3 + 0x95a8)) {
          puVar13 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar2 = puVar13 + 1;
        *puVar13 = uVar16;
      }
      else {
        puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar16);
      }
      if (0 < (int)uVar3) {
        uVar16 = 0;
        lVar25 = 0xf;
        puVar20 = (ulong *)((long)plVar24 + lVar17 + 8);
        do {
          uVar23 = *puVar14;
          uVar22 = *puVar20;
          *(int *)(lVar25 + uVar23 + -8) = (int)uVar22;
          if ((uVar22 & 1) != 0) {
            uVar18 = *(ulong *)((uVar22 & 0xfffffffffffc0000) + 8);
            lVar17 = lVar25 + uVar23 + -8;
            if (((uint)uVar18 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar23,lVar17,uVar22);
              uVar18 = *(ulong *)(uVar22 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar18 & 0x18) != 0) &&
               ((*(byte *)((uVar23 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar23,lVar17,uVar22);
            }
          }
          uVar16 = uVar16 + 1;
          puVar20 = puVar20 + -1;
          *(undefined4 *)(lVar25 + *puVar12) =
               *(undefined4 *)((*puVar12 & 0xffffffff00000000) + 0xa8);
          lVar25 = lVar25 + 4;
        } while (uVar16 < uVar3);
      }
      iVar19 = 0;
      do {
        uVar16 = *puVar13;
        if (*(int *)(uVar16 + 3) < 2) {
          if (-1 < iVar19) goto LAB_0158bb1c;
        }
        else if (*(int *)(uVar16 + 0xf) >> 1 <= iVar19) goto LAB_0158bb1c;
        local_618 = uVar16;
        uVar16 = ScopeInfo::ContextLocalIsParameter((ScopeInfo *)&local_618,iVar19);
        if ((uVar16 & 1) != 0) {
          local_618 = *puVar13;
          iVar21 = ScopeInfo::ContextLocalParameterNumber((ScopeInfo *)&local_618,iVar19);
          if (iVar21 < (int)uVar3) {
            *(undefined4 *)(*puVar14 + (long)(iVar21 * 4) + 7) =
                 *(undefined4 *)((*puVar14 & 0xffffffff00000000) + 0xa8);
            local_618 = *puVar13;
            iVar10 = ScopeInfo::ContextHeaderLength((ScopeInfo *)&local_618);
            *(int *)(*puVar12 + (long)(iVar21 * 4 + 8) + 7) = (iVar10 + iVar19) * 2;
          }
        }
        iVar19 = iVar19 + 1;
      } while( true );
    }
    puVar12 = (ulong *)Factory::NewFixedArray((Factory *)param_3,uVar16,0);
    uVar23 = *puVar11;
    uVar22 = *puVar12;
    *(int *)(uVar23 + 7) = (int)uVar22;
    if ((uVar22 & 1) != 0) {
      uVar18 = *(ulong *)((uVar22 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar18 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar23,uVar23 + 7,uVar22);
        uVar18 = *(ulong *)(uVar22 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar18 & 0x18) != 0) && ((*(byte *)((uVar23 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar23,uVar23 + 7,uVar22);
      }
    }
    iVar21 = 0;
    iVar19 = 8;
    do {
      uVar22 = *puVar12;
      uVar23 = *(ulong *)((long)plVar24 + (lVar25 - iVar19));
      *(int *)(uVar22 + (long)iVar21 + 7) = (int)uVar23;
      if ((uVar23 & 1) != 0) {
        uVar18 = *(ulong *)((uVar23 & 0xfffffffffffc0000) + 8);
        lVar17 = uVar22 + (long)iVar21 + 7;
        if (((uint)uVar18 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar22,lVar17,uVar23);
          uVar18 = *(ulong *)(uVar23 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar18 & 0x18) != 0) && ((*(byte *)((uVar22 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar22,lVar17,uVar23);
        }
      }
      uVar16 = uVar16 - 1;
      iVar19 = iVar19 + 8;
      iVar21 = iVar21 + 4;
    } while (uVar16 != 0);
LAB_0158bb1c:
    uVar16 = *puVar11;
    if (param_3 != (Isolate *)0x0) goto LAB_0158bb30;
  }
  if (*(long *)(lVar8 + 0x28) == local_70) {
    return uVar16;
  }
LAB_0158bba8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

