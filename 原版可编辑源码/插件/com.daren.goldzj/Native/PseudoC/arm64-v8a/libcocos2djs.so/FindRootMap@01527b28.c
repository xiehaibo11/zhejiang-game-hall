
/* v8::internal::MapUpdater::FindRootMap() */

undefined4 __thiscall v8::internal::MapUpdater::FindRootMap(MapUpdater *this)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  MapUpdater MVar12;
  long lVar13;
  char *pcVar14;
  undefined4 uVar15;
  Isolate *pIVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 local_38;
  
  local_38 = **(undefined8 **)(this + 8);
  uVar7 = Map::FindRootMap((Map *)&local_38,*(Isolate **)this);
  pIVar16 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar16 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(pIVar16 + 0x95a0);
    if (puVar8 == *(ulong **)(pIVar16 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(pIVar16);
    }
    *(ulong **)(pIVar16 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar7;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar16 + 0x95b8),uVar7);
  }
  *(ulong **)(this + 0x18) = puVar8;
  MVar12 = this[0x54];
  bVar4 = *(byte *)(*puVar8 + 10);
  if ((*(uint *)(*puVar8 + 0xb) >> 0x18 & 1) != 0) {
    *(undefined4 *)(this + 0x50) = 4;
    uVar18 = *(uint *)(*puVar8 + 0x13);
    uVar7 = *puVar8 & 0xffffffff00000000;
    uVar17 = uVar7 | uVar18;
    if ((uVar18 & 1) != 0) {
      do {
        if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar17 - 1)) != 0xa2) break;
        puVar1 = (uint *)(uVar17 + 0x13);
        uVar17 = uVar7 | *puVar1;
      } while ((*puVar1 & 1) != 0);
    }
    pIVar16 = *(Isolate **)this;
    uVar7 = uVar17 & 0xffffffff00000000 | (ulong)*(uint *)(uVar17 + 0x1b);
    if (*(CanonicalHandleScope **)(pIVar16 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(pIVar16 + 0x95a0);
      if (puVar8 == *(ulong **)(pIVar16 + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(pIVar16);
      }
      *(ulong **)(pIVar16 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar7;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar16 + 0x95b8),uVar7);
    }
    *(ulong **)(this + 0x28) = puVar8;
    uVar9 = Map::AsElementsKind(*(undefined8 *)this,puVar8,MVar12);
    *(undefined8 *)(this + 0x28) = uVar9;
    return *(undefined4 *)(this + 0x50);
  }
  local_38 = **(undefined8 **)(this + 8);
  uVar7 = Map::EquivalentToForTransition((Map *)&local_38,*puVar8);
  if ((uVar7 & 1) == 0) {
    uVar9 = *(undefined8 *)this;
    uVar11 = *(undefined8 *)(this + 8);
    MVar12 = this[0x54];
    pcVar14 = "Normalize_NotEquivalent";
  }
  else {
    if ((*(uint *)(**(long **)(this + 8) + 0xb) >> 0x1b & 1) !=
        (*(uint *)(**(long **)(this + 0x18) + 0xb) & 0x8000000) >> 0x1b) {
      uVar7 = TrySaveIntegrityLevelTransitions(this);
      if ((uVar7 & 1) == 0) {
        uVar9 = *(undefined8 *)this;
        uVar11 = *(undefined8 *)(this + 8);
        MVar12 = this[0x54];
        pcVar14 = "Normalize_PrivateSymbolsOnNonExtensible";
        goto LAB_01527e20;
      }
      MVar12 = (MapUpdater)(*(byte *)(**(long **)(this + 0x48) + 10) >> 3);
    }
    uVar18 = (uint)(byte)MVar12;
    bVar5 = bVar4 >> 3;
    if (((bVar5 == uVar18) || ((uVar18 < 0x11 && ((1 << (ulong)(uVar18 & 0x1f) & 0x15000U) != 0))))
       || ((bVar4 < 0x30 &&
           ((bVar5 != 3 &&
            (uVar7 = IsMoreGeneralElementsKindTransition(bVar5,uVar18), (uVar7 & 1) != 0)))))) {
      plVar10 = *(long **)(this + 0x18);
      lVar13 = *(long *)(this + 0x58);
      if ((lVar13 == -1) || ((int)(*(uint *)(*plVar10 + 0xb) >> 10 & 0x3ff) <= (int)lVar13)) {
LAB_01527e60:
        uVar9 = Map::AsElementsKind(*(undefined8 *)this,plVar10,uVar18);
        uVar15 = 1;
        *(undefined8 *)(this + 0x18) = uVar9;
        goto LAB_01527e30;
      }
      uVar3 = *(uint *)((lVar13 * 0xc00000000 + 0x1000000000 >> 0x20 | 3U) +
                       **(long **)(this + 0x10));
      uVar2 = (int)uVar3 >> 1;
      if (((uVar2 & 1) == *(uint *)(this + 0x60)) && ((uVar2 >> 3 & 7) == *(uint *)(this + 100))) {
        if ((uVar3 >> 2 & 1) == 0) {
          MVar12 = this[0x70];
          uVar2 = uVar2 >> 6 & 7;
          bVar6 = MVar12 == (MapUpdater)0x0;
          if (uVar2 != 3) {
            bVar6 = (int)(char)MVar12 < (int)uVar2;
          }
          if (((byte)MVar12 == uVar2) || (bVar6)) {
            Map::GeneralizeField
                      (*(undefined8 *)this,*(undefined8 *)(this + 8),lVar13,
                       *(undefined4 *)(this + 0x68),uVar2,*(undefined8 *)(this + 0x78));
            plVar10 = *(long **)(this + 0x18);
            goto LAB_01527e60;
          }
          uVar9 = *(undefined8 *)this;
          uVar11 = *(undefined8 *)(this + 8);
          MVar12 = this[0x54];
          pcVar14 = "Normalize_RootModification4";
        }
        else {
          uVar9 = *(undefined8 *)this;
          uVar11 = *(undefined8 *)(this + 8);
          MVar12 = this[0x54];
          pcVar14 = "Normalize_RootModification2";
        }
      }
      else {
        uVar9 = *(undefined8 *)this;
        uVar11 = *(undefined8 *)(this + 8);
        MVar12 = this[0x54];
        pcVar14 = "Normalize_RootModification1";
      }
    }
    else {
      uVar9 = *(undefined8 *)this;
      uVar11 = *(undefined8 *)(this + 8);
      MVar12 = this[0x54];
      pcVar14 = "Normalize_InvalidElementsTransition";
    }
  }
LAB_01527e20:
  uVar9 = Map::Normalize(uVar9,uVar11,MVar12,0,pcVar14);
  *(undefined8 *)(this + 0x28) = uVar9;
  uVar15 = 4;
LAB_01527e30:
  *(undefined4 *)(this + 0x50) = uVar15;
  return uVar15;
}

