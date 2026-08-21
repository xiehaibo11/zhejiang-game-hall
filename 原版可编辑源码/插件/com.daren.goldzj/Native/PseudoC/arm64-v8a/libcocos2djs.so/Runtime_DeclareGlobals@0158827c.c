
/* v8::internal::Runtime_DeclareGlobals(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_DeclareGlobals(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  Isolate *pIVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined4 uVar23;
  int iVar24;
  long lVar25;
  ulong *local_a8;
  long local_70;
  undefined8 local_68;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar18 = FUN_01588914(param_1,param_2,param_3);
    return uVar18;
  }
  pIVar2 = param_3 + 0x95a0;
  iVar24 = *(int *)(param_3 + 0x95b0);
  lVar4 = *(long *)pIVar2;
  lVar6 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = iVar24 + 1;
  uVar20 = *param_2;
  if (((uVar20 & 1) == 0) ||
     (0xe < *(ushort *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) - 0x76)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsFixedArray()");
  }
  uVar20 = param_2[-1];
  if ((uVar20 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsSmi()");
  }
  uVar21 = param_2[-2];
  if (((uVar21 & 1) == 0) ||
     (*(short *)((uVar21 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar21 - 1)) != 0x439)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsJSFunction()");
  }
  *(int *)(param_3 + 0x95b0) = iVar24 + 2;
  local_68 = *(undefined8 *)(param_3 + 0x2bc8);
  uVar21 = Context::global_object((Context *)&local_68);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar11 = *(ulong **)pIVar2;
    if (puVar11 == *(ulong **)(param_3 + 0x95a8)) {
      puVar11 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar2 = puVar11 + 1;
    *puVar11 = uVar21;
  }
  else {
    puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar21);
  }
  uVar21 = *(ulong *)(param_3 + 0x2bc8);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar12 = *(ulong **)pIVar2;
    if (puVar12 == *(ulong **)(param_3 + 0x95a8)) {
      puVar12 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar2 = puVar12 + 1;
    *puVar12 = uVar21;
  }
  else {
    puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar21);
  }
  uVar22 = param_2[-2];
  uVar21 = uVar22 & 0xffffffff00000000;
  uVar3 = *(uint *)((uVar21 | *(uint *)(uVar22 + 0xb)) + 3);
  if ((uVar3 == 0x84) ||
     ((((uVar3 & 1) != 0 &&
       (*(ushort *)((uVar21 | 7) + (ulong)*(uint *)((uVar21 | uVar3) - 1)) - 0x95 < 2)) ||
      (*(short *)((uVar21 | 7) +
                 (ulong)*(uint *)((uVar21 | *(uint *)((uVar21 | *(uint *)(uVar22 + 0x13)) + 3)) - 1)
                 ) != 0x9f)))) {
    uVar21 = param_2[-2] & 0xffffffff00000000;
    uVar21 = uVar21 | *(uint *)((uVar21 | *(uint *)(param_2[-2] + 0x13)) + 3);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) != (CanonicalHandleScope *)0x0) {
      local_a8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar21);
      puVar13 = (ulong *)0x0;
      goto LAB_0158850c;
    }
    local_a8 = *(ulong **)pIVar2;
    if (local_a8 == *(ulong **)(param_3 + 0x95a8)) {
      local_a8 = (ulong *)HandleScope::Extend(param_3);
    }
    puVar13 = (ulong *)0x0;
  }
  else {
    uVar21 = param_2[-2] & 0xffffffff00000000;
    uVar21 = uVar21 | *(uint *)((uVar21 | *(uint *)(param_2[-2] + 0x13)) + 3);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar13 = *(ulong **)pIVar2;
      if (puVar13 == *(ulong **)(param_3 + 0x95a8)) {
        puVar13 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar2 = puVar13 + 1;
      *puVar13 = uVar21;
    }
    else {
      puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar21);
      uVar21 = *puVar13;
    }
    uVar21 = uVar21 & 0xffffffff00000000 | (ulong)*(uint *)(uVar21 + 0xb);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) != (CanonicalHandleScope *)0x0) {
      local_a8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar21);
      goto LAB_0158850c;
    }
    local_a8 = *(ulong **)pIVar2;
    if (local_a8 == *(ulong **)(param_3 + 0x95a8)) {
      local_a8 = (ulong *)HandleScope::Extend(param_3);
    }
  }
  *(ulong **)pIVar2 = local_a8 + 1;
  *local_a8 = uVar21;
LAB_0158850c:
  pIVar1 = param_3 + 0xa0;
  uVar3 = *(uint *)(*param_2 + 3);
  local_70 = 0;
  lVar25 = 0;
  do {
    while( true ) {
      iVar24 = (int)lVar25;
      if ((int)uVar3 >> 1 <= iVar24) {
        uVar18 = *(undefined8 *)pIVar1;
        goto LAB_01588814;
      }
      iVar8 = *(int *)(param_3 + 0x95b0);
      lVar5 = *(long *)pIVar2;
      lVar7 = *(long *)(param_3 + 0x95a8);
      lVar19 = (long)iVar24;
      local_70 = local_70 + 0x400;
      *(int *)(param_3 + 0x95b0) = iVar8 + 1;
      if (lVar19 < local_70) break;
      *(int *)(param_3 + 0x95b0) = iVar8;
    }
    iVar24 = iVar24 << 2;
    do {
      uVar21 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + (long)iVar24 + 7);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar14 = *(ulong **)pIVar2;
        if (puVar14 == *(ulong **)(param_3 + 0x95a8)) {
          puVar14 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar2 = puVar14 + 1;
        *puVar14 = uVar21;
      }
      else {
        puVar14 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar21);
      }
      lVar25 = *param_2 + 7;
      iVar8 = *(int *)(lVar25 + (iVar24 + 4));
      uVar21 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(lVar25 + (iVar24 + 8));
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar15 = *(ulong **)pIVar2;
        if (puVar15 == *(ulong **)(param_3 + 0x95a8)) {
          puVar15 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar2 = puVar15 + 1;
        *puVar15 = uVar21;
      }
      else {
        puVar15 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar21);
      }
      uVar9 = *(uint *)(*param_2 + (long)(iVar24 + 0xc) + 7);
      uVar21 = *param_2 & 0xffffffff00000000 | (ulong)uVar9;
      pIVar17 = pIVar1;
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar16 = *(ulong **)pIVar2;
        if (puVar16 == *(ulong **)(param_3 + 0x95a8)) {
          puVar16 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar2 = puVar16 + 1;
        *puVar16 = uVar21;
        if ((uVar9 & 1) != 0) goto LAB_015886ac;
LAB_01588674:
        uVar23 = 0;
        bVar10 = false;
      }
      else {
        puVar16 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar21);
        uVar21 = *puVar16;
        if ((uVar21 & 1) == 0) goto LAB_01588674;
LAB_015886ac:
        bVar10 = (int)uVar21 == *(int *)pIVar1;
        if (*(short *)((uVar21 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar21 - 1)) == 0xa6) {
          pIVar17 = (Isolate *)(*local_a8 & 0xffffffff00000000);
          uVar21 = (ulong)pIVar17 |
                   (ulong)*(uint *)(*local_a8 + (long)(int)(((uint)*puVar15 & 0x7ffffffe) << 1) + 7)
          ;
          if (*(CanonicalHandleScope **)((ulong)pIVar17 | 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar15 = *(ulong **)(pIVar17 + 0x95a0);
            if (puVar15 == *(ulong **)(pIVar17 + 0x95a8)) {
              puVar15 = (ulong *)HandleScope::Extend(pIVar17);
            }
            *(ulong **)(pIVar17 + 0x95a0) = puVar15 + 1;
            *puVar15 = uVar21;
          }
          else {
            puVar15 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)((ulong)pIVar17 | 0x95b8),uVar21
                                         );
          }
          uVar23 = 1;
          pIVar17 = (Isolate *)
                    Factory::NewFunctionFromSharedFunctionInfo
                              ((Factory *)param_3,puVar16,puVar12,puVar15,1);
        }
        else {
          uVar23 = 0;
        }
      }
      uVar18 = FUN_01591228(param_3,puVar11,puVar14,pIVar17,((int)uVar20 << 1 ^ 0xffffffffU) & 4,
                            bVar10,uVar23,0,puVar13,iVar8 >> 1);
      if (((*(ulong *)(param_3 + 0x2bd8) & 1) == 0) ||
         ((int)*(ulong *)(param_3 + 0x2bd8) != *(int *)(param_3 + 0xa8))) {
        bVar10 = true;
        goto LAB_015887d4;
      }
      lVar19 = lVar19 + 4;
    } while ((lVar19 < (long)((ulong)uVar3 << 0x20) >> 0x21) &&
            (iVar24 = iVar24 + 0x10, lVar19 < local_70));
    bVar10 = false;
LAB_015887d4:
    *(long *)pIVar2 = lVar5;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar7) {
      *(long *)(param_3 + 0x95a8) = lVar7;
      HandleScope::DeleteExtensions(param_3);
    }
    lVar25 = lVar19;
  } while (!bVar10);
LAB_01588814:
  iVar24 = *(int *)(param_3 + 0x95b0);
  *(int *)(param_3 + 0x95b0) = iVar24 + -1;
  *(long *)pIVar2 = lVar4;
  if (*(long *)(param_3 + 0x95a8) == lVar6) {
    *(long *)pIVar2 = lVar4;
    *(int *)(param_3 + 0x95b0) = iVar24 + -2;
  }
  else {
    *(long *)(param_3 + 0x95a8) = lVar6;
    HandleScope::DeleteExtensions(param_3);
    *(long *)pIVar2 = lVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar6) {
      *(long *)(param_3 + 0x95a8) = lVar6;
      HandleScope::DeleteExtensions(param_3);
    }
  }
  return uVar18;
}

