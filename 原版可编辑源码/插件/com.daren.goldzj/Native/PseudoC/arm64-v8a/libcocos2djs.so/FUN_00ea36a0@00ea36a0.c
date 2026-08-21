
void FUN_00ea36a0(ulong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  ulong *puVar4;
  ulong uVar5;
  Isolate *pIVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar7 = *param_1;
  pIVar6 = (Isolate *)(uVar7 & 0xffffffff00000000);
  puVar1 = (uint *)(uVar7 + 0x27f);
  uVar8 = *(ulong *)(pIVar6 + 0x168);
  if ((*puVar1 == (uint)uVar8) ||
     (*(int *)(((ulong)pIVar6 | (ulong)*puVar1) - 1) == *(int *)(pIVar6 + 0x1b8))) {
    uVar2 = *puVar1;
    if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar6 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar6);
      }
      *(ulong **)(pIVar6 + 0x95a0) = puVar4 + 1;
      *puVar4 = (ulong)pIVar6 | (ulong)uVar2;
    }
    else {
      puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),
                                   (ulong)pIVar6 | (ulong)uVar2);
    }
    puVar4 = (ulong *)v8::internal::ArrayList::Elements(pIVar6,puVar4);
    uVar7 = *param_1;
    uVar8 = *puVar4;
    puVar1 = (uint *)(uVar7 + 0x27f);
    *puVar1 = (uint)uVar8;
    if ((uVar8 & 1) == 0) {
      return;
    }
    uVar5 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar7,puVar1,uVar8);
      uVar5 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar5 & 0x18) == 0) {
      return;
    }
    bVar3 = *(byte *)((uVar7 & 0xfffffffffffc0000) + 8);
  }
  else {
    *puVar1 = (uint)uVar8;
    if ((uVar8 & 1) == 0) {
      return;
    }
    uVar5 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar7,puVar1,uVar8);
      uVar5 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar5 & 0x18) == 0) {
      return;
    }
    bVar3 = *(byte *)((uVar7 & 0xfffffffffffc0000) + 8);
  }
  if ((bVar3 & 0x18) != 0) {
    return;
  }
  v8::internal::Heap_GenerationalBarrierSlow(uVar7,puVar1,uVar8);
  return;
}

