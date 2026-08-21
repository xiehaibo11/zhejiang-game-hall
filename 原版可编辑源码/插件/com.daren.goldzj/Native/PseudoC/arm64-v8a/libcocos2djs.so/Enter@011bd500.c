
/* v8::internal::RegExpResultsCache::Enter(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::FixedArray>, v8::internal::Handle<v8::internal::FixedArray>,
   v8::internal::RegExpResultsCache::ResultsCacheType) */

void v8::internal::RegExpResultsCache::Enter
               (Isolate *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
               int param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  Isolate *pIVar12;
  ulong local_68;
  
  uVar6 = *param_2;
  if (0x1f < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1))) {
    return;
  }
  if (param_6 == 1) {
    uVar8 = *param_3;
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (0x1f < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1))) {
      return;
    }
    pIVar12 = param_1 + 0xf20;
  }
  else {
    pIVar12 = param_1 + 0xf28;
  }
  if ((*(uint *)(uVar6 + 3) & 1) == 0) {
    uVar4 = *(uint *)(uVar6 + 3) >> 3;
  }
  else {
    local_68 = uVar6;
    uVar4 = String::ComputeAndSetHash((String *)&local_68);
  }
  uVar6 = *(ulong *)pIVar12;
  uVar4 = (uVar4 & 0xfc) * 4;
  uVar8 = (ulong)uVar4 | 7;
  piVar1 = (int *)(uVar6 + uVar8);
  if (*piVar1 == 0) {
    uVar10 = *param_2;
    *piVar1 = (int)uVar10;
  }
  else {
    uVar3 = uVar4 + 0x10 & 0x3f0;
    uVar10 = (ulong)uVar3;
    piVar1 = (int *)(uVar6 + (uVar10 | 7));
    if (*piVar1 == 0) {
      uVar8 = *param_2;
      *piVar1 = (int)uVar8;
      if ((uVar8 & 1) != 0) {
        uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar7 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar6,piVar1,uVar8);
          uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar6,piVar1,uVar8);
        }
      }
      uVar8 = *(ulong *)pIVar12;
      uVar6 = *param_3;
      lVar11 = (uVar3 | 4) + uVar8;
      *(int *)(lVar11 + 7) = (int)uVar6;
      if ((uVar6 & 1) != 0) {
        uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
        lVar11 = lVar11 + 7;
        if (((uint)uVar7 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar8,lVar11,uVar6);
          uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar8,lVar11,uVar6);
        }
      }
      uVar8 = *(ulong *)pIVar12;
      uVar6 = *param_4;
      puVar2 = (undefined4 *)(uVar8 + (uVar10 | 0xf));
      *puVar2 = (int)uVar6;
      if ((uVar6 & 1) != 0) {
        uVar10 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar10 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar8,puVar2,uVar6);
          uVar10 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar8,puVar2,uVar6);
        }
      }
      uVar8 = *(ulong *)pIVar12;
      uVar6 = *param_5;
      goto LAB_011bd884;
    }
    *piVar1 = 0;
    *(undefined4 *)((ulong)(uVar3 | 4) + *(ulong *)pIVar12 + 7) = 0;
    *(undefined4 *)(*(ulong *)pIVar12 + (uVar10 | 0xf)) = 0;
    *(undefined4 *)((ulong)(uVar3 | 0xc) + *(ulong *)pIVar12 + 7) = 0;
    uVar6 = *(ulong *)pIVar12;
    uVar10 = *param_2;
    piVar1 = (int *)(uVar6 + uVar8);
    *piVar1 = (int)uVar10;
  }
  if ((uVar10 & 1) != 0) {
    uVar8 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,piVar1,uVar10);
      uVar8 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,piVar1,uVar10);
    }
  }
  uVar8 = *(ulong *)pIVar12;
  uVar6 = *param_3;
  lVar11 = (uVar4 | 4) + uVar8;
  *(int *)(lVar11 + 7) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar10 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    lVar11 = lVar11 + 7;
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,lVar11,uVar6);
      uVar10 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,lVar11,uVar6);
    }
  }
  uVar8 = *(ulong *)pIVar12;
  uVar6 = *param_4;
  puVar2 = (undefined4 *)(uVar8 + ((ulong)uVar4 | 0xf));
  *puVar2 = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar10 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,puVar2,uVar6);
      uVar10 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,puVar2,uVar6);
    }
  }
  uVar8 = *(ulong *)pIVar12;
  uVar6 = *param_5;
  uVar3 = uVar4;
LAB_011bd884:
  lVar11 = (uVar3 | 0xc) + uVar8;
  *(int *)(lVar11 + 7) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar10 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    lVar11 = lVar11 + 7;
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,lVar11,uVar6);
      uVar10 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,lVar11,uVar6);
    }
  }
  uVar6 = *param_4;
  if ((param_6 == 1) && (*(int *)(uVar6 + 3) - 2U < 0xc6)) {
    iVar9 = 0;
    lVar11 = 0;
    do {
      uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)((long)iVar9 + 7 + uVar6);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)(param_1 + 0x95a0);
        if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
        *puVar5 = uVar6;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
        uVar6 = *puVar5;
      }
      if (0x1f < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1))) {
        puVar5 = (ulong *)StringTable::LookupString(param_1,puVar5);
        uVar6 = *puVar5;
      }
      uVar8 = *param_4;
      puVar2 = (undefined4 *)(uVar8 + (long)iVar9 + 7);
      *puVar2 = (int)uVar6;
      if ((uVar6 & 1) != 0) {
        uVar10 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar10 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar8,puVar2,uVar6);
          uVar10 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar8,puVar2,uVar6);
        }
      }
      uVar6 = *param_4;
      lVar11 = lVar11 + 1;
      iVar9 = iVar9 + 4;
    } while (lVar11 < *(int *)(uVar6 + 3) >> 1);
  }
  iVar9 = (int)*(undefined8 *)(param_1 + 0xe8);
  if (iVar9 != 0) {
    Heap::VerifyObjectLayoutChange
              ((Heap *)(uVar6 & 0xffffffff00000000 | 0x8850),uVar6,*(undefined8 *)(param_1 + 0xe8));
  }
  *(int *)(uVar6 - 1) = iVar9;
  return;
}

