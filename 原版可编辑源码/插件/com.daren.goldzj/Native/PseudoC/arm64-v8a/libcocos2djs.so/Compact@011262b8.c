
/* v8::internal::OSROptimizedCodeCache::Compact(v8::internal::Handle<v8::internal::NativeContext>)
    */

void v8::internal::OSROptimizedCodeCache::Compact(ulong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  ulong local_48;
  
  pIVar3 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar7 = (ulong)pIVar3 | (ulong)*(uint *)(*param_1 + 0x3cf);
  if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar7;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),uVar7);
    uVar7 = *puVar4;
  }
  if (1 < *(int *)(uVar7 + 3)) {
    lVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    iVar11 = 4;
    pIVar3 = (Isolate *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
    do {
      if ((*(int *)(uVar7 + 7 + (lVar10 >> 0x20)) != 3) && (*(int *)(uVar7 + 7 + (long)iVar11) != 3)
         ) {
        if (uVar9 != uVar8) {
          local_48 = uVar7;
          MoveEntry((OSROptimizedCodeCache *)&local_48,(int)uVar9,uVar8,pIVar3);
          uVar7 = *puVar4;
        }
        uVar8 = uVar8 + 3;
      }
      uVar9 = uVar9 + 3;
      iVar11 = iVar11 + 0xc;
      lVar10 = lVar10 + 0xc00000000;
      iVar2 = *(int *)(uVar7 + 3) >> 1;
    } while ((long)uVar9 < (long)iVar2);
    if ((0x19 < *(int *)(uVar7 + 3)) && ((int)(uVar8 * 3) < iVar2)) {
      iVar11 = 0xc00;
      if ((int)uVar8 < 0x601) {
        iVar11 = uVar8 << 1;
      }
      iVar2 = 0xc;
      if (uVar8 != 0) {
        iVar2 = iVar11;
      }
      puVar5 = (ulong *)Factory::NewWeakFixedArray(pIVar3,iVar2,1);
      uVar7 = *puVar5;
      iVar11 = *(int *)(uVar7 + 3) >> 1;
      if (iVar11 != 0) {
        uVar9 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
        iVar2 = (uint)((uVar9 & 0x18) == 0) << 2;
        if ((uVar9 & 0x40000) != 0) {
          iVar2 = 4;
        }
        Heap::CopyRange<v8::internal::CompressedMaybeObjectSlot>
                  ((Heap *)((ulong)*(uint *)((long)param_1 + 4) << 0x20 | 0x8850),uVar7,uVar7 + 7,
                   *puVar4 + 7,iVar11,iVar2);
        uVar7 = *puVar5;
      }
      uVar9 = *param_1;
      puVar1 = (undefined4 *)(uVar9 + 0x3cf);
      *puVar1 = (int)uVar7;
      if ((uVar7 & 1) != 0) {
        uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar6 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar9,puVar1,uVar7);
          uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar9,puVar1,uVar7);
        }
      }
    }
  }
  return;
}

