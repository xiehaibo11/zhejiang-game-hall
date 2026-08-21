
/* v8::internal::Runtime_NewSloppyArguments_Generic(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_NewSloppyArguments_Generic(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  Isolate *pIVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *local_78;
  uint local_6c;
  ulong local_68;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar15 = FUN_01589e90(param_1,param_2,param_3);
    return uVar15;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar1;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar15 = *param_2;
  if (((uVar15 & 1) == 0) ||
     (*(short *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)) != 0x439)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
  }
  local_6c = 0;
  FUN_01591ac0(&local_78,param_3,&local_6c);
  uVar6 = local_6c;
  puVar18 = local_78;
  uVar15 = (ulong)local_6c;
  if (((*(uint *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 0x1b) & 0x1f)
       - 5 & 0xff) < 2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!IsDerivedConstructor(callee->shared().kind())");
  }
  puVar10 = (ulong *)Factory::NewArgumentsObject((Factory *)param_3,param_2,uVar15);
  if (0 < (int)uVar6) {
    uVar7 = *(ushort *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 0x15);
    if (uVar7 != 0) {
      uVar2 = uVar6;
      if ((int)(uint)uVar7 <= (int)uVar6) {
        uVar2 = (uint)uVar7;
      }
      puVar11 = (ulong *)Factory::NewFixedArray((Factory *)param_3,uVar2 + 2,0);
      uVar19 = *(ulong *)(param_3 + 0x270);
      uVar20 = *puVar11;
      if ((int)uVar19 == 0) {
        *(undefined4 *)(uVar20 - 1) = 0;
      }
      else {
        Heap::VerifyObjectLayoutChange((Heap *)(uVar20 & 0xffffffff00000000 | 0x8850),uVar20,uVar19)
        ;
        *(int *)(uVar20 - 1) = (int)uVar19;
        if (((uVar19 & 1) != 0) && ((*(byte *)((uVar19 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0))
        {
          Heap_MarkingBarrierSlow(uVar20,0,uVar19);
        }
      }
      uVar20 = *puVar10;
      uVar19 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
      uVar19 = uVar19 | *(uint *)((uVar19 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1)) + 0x13);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar12 = *(ulong **)pIVar1;
        if (puVar12 == *(ulong **)(param_3 + 0x95a8)) {
          puVar12 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar12 + 1;
        *puVar12 = uVar19;
        uVar5 = *(uint *)(uVar19 + 0xbf);
      }
      else {
        puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar19);
        uVar19 = *puVar12;
        uVar5 = *(uint *)(uVar19 + 0xbf);
      }
      if (uVar5 == 0) {
        *(undefined4 *)(uVar20 - 1) = 0;
      }
      else {
        uVar21 = uVar19 & 0xffffffff00000000 | (ulong)uVar5;
        Heap::VerifyObjectLayoutChange((Heap *)(uVar20 & 0xffffffff00000000 | 0x8850),uVar20,uVar21)
        ;
        *(uint *)(uVar20 - 1) = uVar5;
        if (((uVar5 & 1) != 0) &&
           ((*(byte *)((uVar19 & 0xffffffff00000000 | (ulong)uVar5 & 0xfffffffffffc0000) + 10) >> 2
            & 1) != 0)) {
          Heap_MarkingBarrierSlow(uVar20,0,uVar21);
        }
      }
      uVar20 = *puVar10;
      uVar19 = *puVar11;
      *(int *)(uVar20 + 7) = (int)uVar19;
      if ((uVar19 & 1) != 0) {
        uVar21 = *(ulong *)((uVar19 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar21 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar20,uVar20 + 7,uVar19);
          uVar21 = *(ulong *)(uVar19 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar21 & 0x18) != 0) && ((*(byte *)((uVar20 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar20,uVar20 + 7,uVar19);
        }
      }
      uVar19 = *(ulong *)(param_3 + 0x2bc8);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar12 = *(ulong **)pIVar1;
        if (puVar12 == *(ulong **)(param_3 + 0x95a8)) {
          puVar12 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar12 + 1;
        *puVar12 = uVar19;
      }
      else {
        puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar19);
      }
      puVar13 = (ulong *)Factory::NewFixedArray((Factory *)param_3,uVar6,0);
      uVar19 = *puVar12;
      uVar20 = *puVar11;
      *(int *)(uVar20 + 7) = (int)uVar19;
      if ((uVar19 & 1) != 0) {
        uVar21 = *(ulong *)((uVar19 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar21 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar20,uVar20 + 7,uVar19);
          uVar21 = *(ulong *)(uVar19 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar21 & 0x18) != 0) && ((*(byte *)((uVar20 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar20,uVar20 + 7,uVar19);
        }
      }
      uVar20 = *puVar11;
      uVar19 = *puVar13;
      *(int *)(uVar20 + 0xb) = (int)uVar19;
      if ((uVar19 & 1) != 0) {
        uVar21 = *(ulong *)((uVar19 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar21 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar20,uVar20 + 0xb,uVar19);
          uVar21 = *(ulong *)(uVar19 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar21 & 0x18) != 0) && ((*(byte *)((uVar20 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar20,uVar20 + 0xb,uVar19);
        }
      }
      if ((int)(uint)uVar7 < (int)uVar6) {
        iVar16 = uVar6 * 4;
        do {
          iVar16 = iVar16 + -4;
          lVar17 = uVar15 - 1;
          uVar20 = *puVar13;
          uVar15 = uVar15 - 1;
          uVar19 = *(ulong *)puVar18[lVar17];
          *(int *)(uVar20 + (long)iVar16 + 7) = (int)uVar19;
          if ((uVar19 & 1) != 0) {
            uVar21 = *(ulong *)((uVar19 & 0xfffffffffffc0000) + 8);
            lVar17 = uVar20 + (long)iVar16 + 7;
            if (((uint)uVar21 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar20,lVar17,uVar19);
              uVar21 = *(ulong *)(uVar19 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar21 & 0x18) != 0) &&
               ((*(byte *)((uVar20 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar20,lVar17,uVar19);
            }
          }
        } while ((long)(ulong)uVar2 < (long)uVar15);
      }
      pIVar14 = (Isolate *)(*param_2 & 0xffffffff00000000);
      uVar6 = *(uint *)(((ulong)pIVar14 | (ulong)*(uint *)(*param_2 + 0xb)) + 7);
      if (((uVar6 & 1) == 0) ||
         (uVar15 = (ulong)pIVar14 | (ulong)uVar6,
         *(short *)(((ulong)pIVar14 | 7) + (ulong)*(uint *)(uVar15 - 1)) != 0x83)) {
        uVar15 = ScopeInfo::Empty(pIVar14);
      }
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar12 = *(ulong **)pIVar1;
        if (puVar12 == *(ulong **)(param_3 + 0x95a8)) {
          puVar12 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar12 + 1;
        *puVar12 = uVar15;
      }
      else {
        puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar15);
      }
      if (0 < (int)uVar2) {
        uVar15 = 0;
        lVar17 = 0xf;
        do {
          uVar20 = *puVar13;
          uVar19 = *(ulong *)puVar18[uVar15];
          *(int *)(lVar17 + uVar20 + -8) = (int)uVar19;
          if ((uVar19 & 1) != 0) {
            uVar21 = *(ulong *)((uVar19 & 0xfffffffffffc0000) + 8);
            lVar22 = lVar17 + uVar20 + -8;
            if (((uint)uVar21 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar20,lVar22,uVar19);
              uVar21 = *(ulong *)(uVar19 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar21 & 0x18) != 0) &&
               ((*(byte *)((uVar20 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar20,lVar22,uVar19);
            }
          }
          uVar15 = uVar15 + 1;
          *(undefined4 *)(lVar17 + *puVar11) =
               *(undefined4 *)((*puVar11 & 0xffffffff00000000) + 0xa8);
          lVar17 = lVar17 + 4;
        } while (uVar15 < uVar2);
      }
      iVar16 = 0;
      do {
        uVar15 = *puVar12;
        if (*(int *)(uVar15 + 3) < 2) {
          if (-1 < iVar16) goto LAB_01589dd0;
        }
        else if (*(int *)(uVar15 + 0xf) >> 1 <= iVar16) goto LAB_01589dd0;
        local_68 = uVar15;
        uVar15 = ScopeInfo::ContextLocalIsParameter((ScopeInfo *)&local_68,iVar16);
        if ((uVar15 & 1) != 0) {
          local_68 = *puVar12;
          iVar8 = ScopeInfo::ContextLocalParameterNumber((ScopeInfo *)&local_68,iVar16);
          if (iVar8 < (int)uVar2) {
            *(undefined4 *)(*puVar13 + (long)(iVar8 * 4) + 7) =
                 *(undefined4 *)((*puVar13 & 0xffffffff00000000) + 0xa8);
            local_68 = *puVar12;
            iVar9 = ScopeInfo::ContextHeaderLength((ScopeInfo *)&local_68);
            *(int *)(*puVar11 + (long)(iVar8 * 4 + 8) + 7) = (iVar9 + iVar16) * 2;
          }
        }
        iVar16 = iVar16 + 1;
      } while( true );
    }
    puVar11 = (ulong *)Factory::NewFixedArray((Factory *)param_3,uVar6,0);
    uVar19 = *puVar11;
    uVar20 = *puVar10;
    *(int *)(uVar20 + 7) = (int)uVar19;
    if ((uVar19 & 1) != 0) {
      uVar21 = *(ulong *)((uVar19 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar21 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar20,uVar20 + 7,uVar19);
        uVar21 = *(ulong *)(uVar19 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar21 & 0x18) != 0) && ((*(byte *)((uVar20 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar20,uVar20 + 7,uVar19);
      }
    }
    iVar16 = 0;
    do {
      uVar20 = *puVar11;
      uVar19 = *(ulong *)*puVar18;
      *(int *)(uVar20 + (long)iVar16 + 7) = (int)uVar19;
      if ((uVar19 & 1) != 0) {
        uVar21 = *(ulong *)((uVar19 & 0xfffffffffffc0000) + 8);
        lVar17 = uVar20 + (long)iVar16 + 7;
        if (((uint)uVar21 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar20,lVar17,uVar19);
          uVar21 = *(ulong *)(uVar19 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar21 & 0x18) != 0) && ((*(byte *)((uVar20 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar20,lVar17,uVar19);
        }
      }
      uVar15 = uVar15 - 1;
      iVar16 = iVar16 + 4;
      puVar18 = puVar18 + 1;
    } while (uVar15 != 0);
  }
LAB_01589dd0:
  puVar18 = local_78;
  uVar15 = *puVar10;
  local_78 = (undefined8 *)0x0;
  if (puVar18 != (undefined8 *)0x0) {
    operator_delete__(puVar18);
  }
  if (param_3 != (Isolate *)0x0) {
    *(long *)pIVar1 = lVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar4) {
      *(long *)(param_3 + 0x95a8) = lVar4;
      HandleScope::DeleteExtensions(param_3);
    }
  }
  return uVar15;
}

