
/* v8::internal::Script::InitLineEnds(v8::internal::Handle<v8::internal::Script>) */

void v8::internal::Script::InitLineEnds(ulong *param_1)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  Isolate *pIVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  
  uVar5 = *param_1;
  puVar6 = (uint *)(uVar5 + 0x1b);
  if ((*puVar6 & 1) == 0) {
    return;
  }
  pIVar4 = (Isolate *)(uVar5 & 0xffffffff00000000);
  if (*puVar6 != *(uint *)(pIVar4 + 0xa0)) {
    return;
  }
  if (((*(uint *)(uVar5 + 3) & 1) == 0) ||
     (uVar7 = (ulong)pIVar4 | (ulong)*(uint *)(uVar5 + 3),
     0x3f < *(ushort *)(((ulong)pIVar4 | 7) + (ulong)*(uint *)(uVar7 - 1)))) {
    uVar7 = *(ulong *)(pIVar4 + 0x168);
    *puVar6 = (uint)uVar7;
    if ((uVar7 & 1) == 0) {
      return;
    }
    uVar3 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,puVar6,uVar7);
      uVar3 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar3 & 0x18) == 0) {
      return;
    }
    bVar1 = *(byte *)((uVar5 & 0xfffffffffffc0000) + 8);
  }
  else {
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar7;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar7);
    }
    puVar2 = (ulong *)String::CalculateLineEnds(pIVar4,puVar2,1);
    uVar5 = *param_1;
    uVar7 = *puVar2;
    *(int *)(uVar5 + 0x1b) = (int)uVar7;
    if ((uVar7 & 1) == 0) {
      return;
    }
    uVar3 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    puVar6 = (uint *)(uVar5 + 0x1b);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,puVar6,uVar7);
      uVar3 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar3 & 0x18) == 0) {
      return;
    }
    bVar1 = *(byte *)((uVar5 & 0xfffffffffffc0000) + 8);
  }
  if ((bVar1 & 0x18) != 0) {
    return;
  }
  Heap_GenerationalBarrierSlow(uVar5,puVar6,uVar7);
  return;
}

