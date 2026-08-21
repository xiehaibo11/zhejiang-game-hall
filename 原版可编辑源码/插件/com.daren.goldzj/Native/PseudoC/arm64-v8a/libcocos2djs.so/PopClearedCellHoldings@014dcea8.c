
/* v8::internal::JSFinalizationGroup::PopClearedCellHoldings(v8::internal::Handle<v8::internal::JSFinalizationGroup>,
   v8::internal::Isolate*) */

ulong v8::internal::JSFinalizationGroup::PopClearedCellHoldings(ulong *param_1,Isolate *param_2)

{
  long lVar1;
  Isolate *pIVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_64 [4];
  
  pIVar2 = param_2 + 0x95a0;
  uVar12 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0x17);
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar2;
    if (puVar6 == *(ulong **)(param_2 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(param_2);
    }
    *(ulong **)pIVar2 = puVar6 + 1;
    *puVar6 = uVar12;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar12);
    uVar12 = *puVar6;
  }
  uVar14 = *param_1;
  uVar3 = *(uint *)(uVar12 + 0x13);
  *(uint *)(uVar14 + 0x17) = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar13 = uVar12 & 0xffffffff00000000 | (ulong)uVar3;
    uVar11 = uVar12 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
    uVar12 = *(ulong *)(uVar11 + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar14,uVar14 + 0x17,uVar13);
      uVar12 = *(ulong *)(uVar11 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0x17,uVar13);
    }
  }
  uVar14 = *puVar6;
  uVar12 = *(ulong *)(param_2 + 0xa0);
  *(int *)(uVar14 + 0x13) = (int)uVar12;
  if ((uVar12 & 1) != 0) {
    uVar11 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar11 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar14,uVar14 + 0x13,uVar12);
      uVar11 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0x13,uVar12);
    }
  }
  uVar14 = (ulong)*(uint *)(*param_1 + 0x17);
  uVar12 = *param_1 & 0xffffffff00000000;
  uVar11 = uVar12 | uVar14;
  if (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0xa8) {
    uVar13 = *(ulong *)(param_2 + 0xa0);
    *(int *)(uVar11 + 0xf) = (int)uVar13;
    if ((uVar13 & 1) != 0) {
      uVar10 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar10 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar11,uVar11 + 0xf,uVar13);
        uVar10 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar10 & 0x18) != 0) &&
         ((*(byte *)((uVar12 | uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar11,uVar11 + 0xf,uVar13);
      }
    }
  }
  uVar12 = *puVar6;
  if (((*(uint *)(uVar12 + 0x17) & 1) != 0) &&
     (*(uint *)(uVar12 + 0x17) == *(uint *)(param_2 + 0xa0))) goto LAB_014dd454;
  uVar3 = *(uint *)(uVar12 + 0x1b);
  if ((uVar3 == *(uint *)(param_2 + 0xa0)) && (*(uint *)(uVar12 + 0x1f) == uVar3)) {
    uVar12 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0x1b);
    if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar2;
      if (puVar7 == *(ulong **)(param_2 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(param_2);
      }
      *(ulong **)pIVar2 = puVar7 + 1;
      *puVar7 = uVar12;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar12);
    }
    uVar12 = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 0x17);
    if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)pIVar2;
      if (puVar9 == *(ulong **)(param_2 + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(param_2);
      }
      *(ulong **)pIVar2 = puVar9 + 1;
      *puVar9 = uVar12;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar12);
    }
    puVar7 = (ulong *)ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                      ::Remove(param_2,puVar7,puVar9,auStack_64);
LAB_014dd3f4:
    uVar14 = *param_1;
    uVar11 = *puVar7;
    *(int *)(uVar14 + 0x1b) = (int)uVar11;
    if ((uVar11 & 1) == 0) goto LAB_014dd454;
    uVar12 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
    lVar1 = uVar14 + 0x1b;
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar14,lVar1,uVar11);
      uVar12 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar12 & 0x18) == 0) goto LAB_014dd454;
    bVar5 = *(byte *)((uVar14 & 0xfffffffffffc0000) + 8);
  }
  else {
    uVar14 = uVar12 & 0xffffffff00000000;
    if (uVar3 == *(uint *)(uVar14 + 0xa0)) {
      uVar12 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0x1b);
      if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)pIVar2;
        if (puVar7 == *(ulong **)(param_2 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(param_2);
        }
        *(ulong **)pIVar2 = puVar7 + 1;
        *puVar7 = uVar12;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar12);
      }
      uVar12 = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 0x17);
      if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)pIVar2;
        if (puVar9 == *(ulong **)(param_2 + 0x95a8)) {
          puVar9 = (ulong *)HandleScope::Extend(param_2);
        }
        *(ulong **)pIVar2 = puVar9 + 1;
        *puVar9 = uVar12;
      }
      else {
        puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar12);
      }
      uVar12 = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 0x1f);
      if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar2;
        if (puVar8 == *(ulong **)(param_2 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(param_2);
        }
        *(ulong **)pIVar2 = puVar8 + 1;
        *puVar8 = uVar12;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar12);
      }
      uVar14 = *puVar8;
      uVar12 = *(ulong *)(param_2 + 0xa0);
      *(int *)(uVar14 + 0x1b) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar11 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar14,uVar14 + 0x1b,uVar12);
          uVar11 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0x1b,uVar12);
        }
      }
      uVar14 = *puVar6;
      uVar12 = *(ulong *)(param_2 + 0xa0);
      *(int *)(uVar14 + 0x1f) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar11 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar14,uVar14 + 0x1f,uVar12);
          uVar11 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0x1f,uVar12);
        }
      }
      puVar7 = (ulong *)ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                        ::Put(puVar7,puVar9,puVar8);
      goto LAB_014dd3f4;
    }
    uVar4 = *(uint *)(uVar12 + 0x1f);
    uVar12 = uVar14 | uVar3;
    *(uint *)(uVar12 + 0x1f) = uVar4;
    if ((uVar4 & 1) != 0) {
      uVar10 = uVar14 | uVar4;
      uVar13 = uVar14 | (ulong)uVar4 & 0xfffffffffffc0000;
      uVar11 = *(ulong *)(uVar13 + 8);
      if (((uint)uVar11 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar12,uVar12 + 0x1f,uVar10);
        uVar11 = *(ulong *)(uVar13 | 8);
      }
      if (((uVar11 & 0x18) != 0) &&
         ((*(byte *)((uVar14 | (ulong)uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar12,uVar12 + 0x1f,uVar10);
      }
    }
    uVar14 = *puVar6;
    uVar12 = uVar14 & 0xffffffff00000000;
    uVar3 = *(uint *)(uVar14 + 0x1f);
    if (uVar3 == *(uint *)(uVar12 + 0xa0)) goto LAB_014dd454;
    uVar4 = *(uint *)(uVar14 + 0x1b);
    uVar14 = uVar12 | uVar3;
    *(uint *)(uVar14 + 0x1b) = uVar4;
    if ((uVar4 & 1) == 0) goto LAB_014dd454;
    uVar11 = uVar12 | uVar4;
    uVar10 = uVar12 | (ulong)uVar4 & 0xfffffffffffc0000;
    uVar13 = *(ulong *)(uVar10 + 8);
    lVar1 = uVar14 + 0x1b;
    if (((uint)uVar13 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar14,lVar1,uVar11);
      uVar13 = *(ulong *)(uVar10 | 8);
    }
    if ((uVar13 & 0x18) == 0) goto LAB_014dd454;
    bVar5 = *(byte *)((uVar12 | (ulong)uVar3 & 0xfffffffffffc0000) + 8);
  }
  if ((bVar5 & 0x18) == 0) {
    Heap_GenerationalBarrierSlow(uVar14,lVar1,uVar11);
  }
LAB_014dd454:
  return *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 0xb);
}

