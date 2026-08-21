
ulong * FUN_010e13f8(Isolate *param_1,ulong *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  ulong *puVar9;
  ulong *puVar10;
  int *piVar11;
  ulong *puVar12;
  Isolate *pIVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  ulong local_68;
  
  pIVar13 = param_1 + 0x9520;
  uVar19 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(param_1 + 0x95a0);
    if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
      puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar19;
  }
  else {
    puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar19);
    uVar19 = *puVar9;
  }
  uVar16 = uVar19 & 0xffffffff00000000;
  uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)((uVar16 | *(uint *)(uVar19 + 0x17)) + 0xb)) + 3);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)(param_1 + 0x95a0);
    if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
      puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar10 + 1;
    *puVar10 = uVar16;
  }
  else {
    puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar16);
  }
  uVar8 = *(uint *)(*puVar9 + 0xb) & 0x3ff;
  if (uVar8 != 0x3ff) {
    lVar18 = *(long *)pIVar13;
    if (*(char *)(lVar18 + 0x1bb8) == '\0') {
      *(char *)(lVar18 + 0x1bb8) = '\x01';
      piVar11 = (int *)v8::internal::StatsCounterBase::FindLocationInStatsTable
                                 ((StatsCounterBase *)(lVar18 + 0x1ba0));
      *(int **)(lVar18 + 0x1bb0) = piVar11;
    }
    else {
      piVar11 = *(int **)(lVar18 + 0x1bb0);
    }
    if (piVar11 != (int *)0x0) {
      *piVar11 = *piVar11 + 1;
    }
    if (uVar8 == *(int *)(*puVar10 + 3) >> 1) {
      return puVar10;
    }
LAB_010e15ec:
    puVar9 = (ulong *)v8::internal::Factory::CopyFixedArrayUpTo((Factory *)param_1,puVar10,uVar8,0);
    return puVar9;
  }
  local_68 = *puVar9;
  uVar8 = v8::internal::Map::NumberOfEnumerableProperties((Map *)&local_68);
  if ((int)uVar8 <= *(int *)(*puVar10 + 3) >> 1) {
    local_68 = *puVar9;
    uVar19 = v8::internal::Map::OnlyHasSimpleProperties((Map *)&local_68);
    if ((uVar19 & 1) != 0) {
      if ((uVar8 != 0x3ff) && (0x3fc < uVar8)) goto LAB_010e19a4;
      *(uint *)(*puVar9 + 0xb) = *(uint *)(*puVar9 + 0xb) & 0xfffffc00 | uVar8;
    }
    lVar18 = *(long *)pIVar13;
    if (*(char *)(lVar18 + 0x1bb8) == '\0') {
      *(char *)(lVar18 + 0x1bb8) = '\x01';
      piVar11 = (int *)v8::internal::StatsCounterBase::FindLocationInStatsTable
                                 ((StatsCounterBase *)(lVar18 + 0x1ba0));
      *(int **)(lVar18 + 0x1bb0) = piVar11;
    }
    else {
      piVar11 = *(int **)(lVar18 + 0x1bb0);
    }
    if (piVar11 != (int *)0x0) {
      *piVar11 = *piVar11 + 1;
    }
    if (uVar8 == *(int *)(*puVar10 + 3) >> 1) {
      return puVar10;
    }
    goto LAB_010e15ec;
  }
  uVar19 = *puVar9 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar9 + 0x17);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)(param_1 + 0x95a0);
    if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
      puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar10 + 1;
    *puVar10 = uVar19;
  }
  else {
    puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar19);
  }
  lVar18 = *(long *)pIVar13;
  if (*(char *)(lVar18 + 0x1bd8) == '\0') {
    *(char *)(lVar18 + 0x1bd8) = '\x01';
    piVar11 = (int *)v8::internal::StatsCounterBase::FindLocationInStatsTable
                               ((StatsCounterBase *)(lVar18 + 0x1bc0));
    *(int **)(lVar18 + 0x1bd0) = piVar11;
  }
  else {
    piVar11 = *(int **)(lVar18 + 0x1bd0);
  }
  if (piVar11 != (int *)0x0) {
    *piVar11 = *piVar11 + 1;
  }
  puVar12 = (ulong *)v8::internal::Factory::NewFixedArray((Factory *)param_1,uVar8,0);
  uVar19 = (ulong)(*(uint *)(*puVar9 + 0xb) >> 10) & 0x3ff;
  if ((int)uVar19 == 0) {
LAB_010e1784:
    pIVar13 = (Isolate *)v8::internal::Factory::NewFixedArray((Factory *)param_1,uVar8,0);
    uVar19 = (ulong)(*(uint *)(*puVar9 + 0xb) >> 10) & 0x3ff;
    if ((int)uVar19 != 0) {
      lVar18 = 0;
      iVar22 = 0;
      do {
        lVar1 = lVar18 + *puVar10;
        if (((*(uint *)(lVar1 + 0x13) >> 5 & 1) == 0) &&
           ((uVar3 = *(uint *)(lVar1 + 0xf), (uVar3 & 1) == 0 ||
            (uVar16 = *puVar10 & 0xffffffff00000000,
            *(short *)((uVar16 | 7) + (ulong)*(uint *)((uVar16 | uVar3) - 1)) != 0x40)))) {
          uVar16 = *puVar9;
          uVar3 = *(int *)((uVar16 & 0xffffffff00000000 | lVar18 + 0x13U) +
                          (ulong)*(uint *)(uVar16 + 0x17)) >> 1;
          uVar4 = uVar3 >> 0x13 & 0x3ff;
          iVar5 = (uint)*(byte *)(uVar16 + 3) - (uint)*(byte *)(uVar16 + 4);
          if ((int)uVar4 < iVar5) {
            uVar17 = (uVar4 + *(byte *)(uVar16 + 4)) * 4;
          }
          else {
            uVar17 = (uVar4 - iVar5) * 4 + 8;
          }
          uVar3 = uVar3 >> 6 & 7;
          local_68 = CONCAT71(local_68._1_7_,(char)uVar3);
          if (4 < uVar3) {
            uVar14 = v8::internal::Representation::Mnemonic((Representation *)&local_68);
            v8::internal::PrintF("%s\n",uVar14);
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          uVar6 = uVar17 >> 2 & 0x7ff;
          iVar2 = 1 - uVar6;
          if ((int)uVar4 < iVar5 || ((long)(int)uVar17 & 0x2000U) != 0) {
            iVar2 = uVar6 + 0x3ffffffd;
          }
          iVar5 = iVar22 << 2;
          iVar22 = iVar22 + 1;
          *(uint *)(*(long *)pIVar13 + (long)iVar5 + 7) =
               iVar2 << 2 |
               (uint)((*(ulong *)(&DAT_019d77b0 + (ulong)uVar3 * 8) | (long)(int)uVar17 & 0xc000U)
                     == 0x4000) << 1;
        }
        lVar18 = lVar18 + 0xc;
      } while (uVar19 * 0xc - lVar18 != 0);
    }
  }
  else {
    lVar18 = 0;
    iVar22 = 0;
    bVar7 = true;
    do {
      lVar1 = lVar18 + *puVar10;
      uVar3 = *(uint *)(lVar1 + 0x13);
      if ((uVar3 >> 5 & 1) == 0) {
        uVar4 = *(uint *)(lVar1 + 0xf);
        uVar16 = *puVar10 & 0xffffffff00000000;
        uVar20 = uVar16 | uVar4;
        if (((uVar4 & 1) == 0) || (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x40))
        {
          uVar21 = *puVar12;
          lVar1 = uVar21 + (long)(iVar22 << 2);
          *(uint *)(lVar1 + 7) = uVar4;
          if ((uVar4 & 1) != 0) {
            uVar16 = uVar16 | (ulong)uVar4 & 0xfffffffffffc0000;
            uVar15 = *(ulong *)(uVar16 + 8);
            lVar1 = lVar1 + 7;
            if (((uint)uVar15 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar21,lVar1,uVar20);
              uVar15 = *(ulong *)(uVar16 | 8);
            }
            if (((uVar15 & 0x18) != 0) &&
               ((*(byte *)((uVar21 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar21,lVar1,uVar20);
            }
          }
          bVar7 = (bool)(bVar7 & (uVar3 & 4) == 0);
          iVar22 = iVar22 + 1;
        }
      }
      lVar18 = lVar18 + 0xc;
    } while (uVar19 * 0xc - lVar18 != 0);
    if (bVar7) goto LAB_010e1784;
    pIVar13 = param_1 + 0x168;
  }
  v8::internal::DescriptorArray::InitializeOrChangeEnumCache(puVar10,param_1,puVar12,pIVar13);
  local_68 = *puVar9;
  uVar19 = v8::internal::Map::OnlyHasSimpleProperties((Map *)&local_68);
  if ((uVar19 & 1) == 0) {
    return puVar12;
  }
  if ((uVar8 == 0x3ff) || (uVar8 < 0x3fd)) {
    *(uint *)(*puVar9 + 0xb) = *(uint *)(*puVar9 + 0xb) & 0xfffffc00 | uVar8;
    return puVar12;
  }
LAB_010e19a4:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "static_cast<unsigned>(length) <= static_cast<unsigned>(kMaxNumberOfDescriptors)");
}

