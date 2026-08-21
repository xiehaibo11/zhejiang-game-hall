
/* v8::internal::Map::TransitionElementsTo(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::ElementsKind) */

ulong * v8::internal::Map::TransitionElementsTo(Isolate *param_1,ulong *param_2,ulong param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  ulong *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  MapUpdater aMStack_c8 [136];
  
  uVar10 = *param_2;
  bVar3 = *(byte *)(uVar10 + 10);
  bVar4 = bVar3 >> 3;
  uVar7 = (uint)param_3;
  uVar8 = (uint)bVar4;
  if (uVar8 == (uVar7 & 0xff)) {
    return param_2;
  }
  uVar11 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  pIVar1 = param_1 + 0x95a0;
  uVar12 = uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  iVar9 = (int)uVar10;
  if (uVar8 == 0xe) {
    if (*(int *)(uVar12 + 0x293) == iVar9) {
      uVar7 = *(uint *)(uVar12 + 0xbf);
LAB_010ec96c:
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11 | uVar7);
        return puVar6;
      }
      puVar6 = *(ulong **)pIVar1;
      if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar6 + 1;
      *puVar6 = uVar11 | uVar7;
      return puVar6;
    }
LAB_010ec9f8:
    bVar3 = 0;
    bVar5 = (uVar8 | 2) == 0xf || (uVar8 - 0x11 & 0xff) < 0xb;
  }
  else {
    if (uVar8 == 0xd) {
      if (*(int *)(uVar12 + 0xbf) == iVar9) {
        uVar7 = *(uint *)(uVar12 + 0x293);
        goto LAB_010ec96c;
      }
      goto LAB_010ec9f8;
    }
    if (0x2f < bVar3) goto LAB_010ec9f8;
    if (((((uVar7 & 0xff) < 6) && (*(int *)(uVar12 + 0x15f + (ulong)bVar4 * 4) == iVar9)) &&
        (uVar2 = *(uint *)(uVar12 + 0x15f + (param_3 & 0xff) * 4), (uVar2 & 1) != 0)) &&
       (uVar12 = uVar11 | uVar2, *(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar12 - 1)) == 0xa2))
    goto LAB_010ecb04;
    if ((bVar3 >> 3 & 1) != 0) {
      if (uVar8 == 1) {
        if ((param_3 & 0xff) == 0) goto LAB_010eca74;
      }
      else if (uVar8 == 3) {
        if ((uVar7 & 0xff) == 2) goto LAB_010eca74;
      }
      else if (uVar8 == 5) {
        if ((uVar7 & 0xff) == 4) {
LAB_010eca74:
          uVar2 = *(uint *)(uVar10 + 0x13);
          uVar10 = uVar10 & 0xffffffff00000000;
          uVar12 = uVar10 | uVar2;
          if (((uVar2 & 1) == 0) ||
             (uVar11 = uVar12, *(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0xa2)) {
            uVar11 = *(ulong *)(uVar10 + 0xa0);
          }
          if (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0xa2)
          {
            if (((uVar2 & 1) == 0) ||
               (uVar11 = uVar12, *(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0xa2)) {
              uVar11 = *(ulong *)(uVar10 + 0xa0);
            }
            if ((uint)(*(byte *)(uVar11 + 10) >> 3) == (uVar7 & 0xff)) {
              if (((uVar2 & 1) == 0) ||
                 (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0xa2)) {
                uVar12 = *(ulong *)(uVar10 + 0xa0);
              }
LAB_010ecb04:
              if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
                puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                            (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
                return puVar6;
              }
              puVar6 = *(ulong **)pIVar1;
              if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
                puVar6 = (ulong *)HandleScope::Extend(param_1);
              }
              *(ulong **)pIVar1 = puVar6 + 1;
              *puVar6 = uVar12;
              return puVar6;
            }
          }
        }
      }
      else if (uVar8 == (uVar7 & 0xff)) goto LAB_010eca74;
    }
    bVar3 = 1;
    bVar5 = true;
  }
  if (((uVar7 & 0xff) < 6) && (bVar5)) {
    if ((!(bool)(uVar8 == 3 | bVar3 ^ 1)) &&
       (uVar10 = IsMoreGeneralElementsKindTransition((ulong)bVar4,param_3 & 0xffffffff),
       (uVar10 & 1) != 0)) {
LAB_010ecb7c:
      MapUpdater::MapUpdater(aMStack_c8,param_1,param_2);
      puVar6 = (ulong *)MapUpdater::ReconfigureElementsKind(aMStack_c8,param_3 & 0xffffffff);
      return puVar6;
    }
    puVar6 = (ulong *)Copy(param_1,param_2,"CopyAsElementsKind");
  }
  else {
    if ((bool)(5 < (uVar7 & 0xff) & bVar5)) goto LAB_010ecb7c;
    puVar6 = (ulong *)Copy(param_1,param_2,"CopyAsElementsKind");
    if (0x1b < (uVar7 & 0xff)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","static_cast<int>(elements_kind) < kElementsKindCount");
    }
  }
  *(byte *)(*puVar6 + 10) = *(byte *)(*puVar6 + 10) & 7 | (byte)(uVar7 << 3);
  return puVar6;
}

