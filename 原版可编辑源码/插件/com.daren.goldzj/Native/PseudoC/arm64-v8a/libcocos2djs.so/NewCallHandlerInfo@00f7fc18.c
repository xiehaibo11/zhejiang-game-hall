
/* v8::internal::Factory::NewCallHandlerInfo(bool) */

ulong * __thiscall v8::internal::Factory::NewCallHandlerInfo(Factory *this,bool param_1)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong *puVar7;
  
  lVar1 = 600;
  if (!param_1) {
    lVar1 = 0x250;
  }
  uVar2 = Heap::AllocateRawWithRetryOrFailSlowPath
                    ((Heap *)(this + 0x8850),(ulong)*(byte *)(*(long *)(this + lVar1) + 3) << 2,1,1,
                     0);
  uVar4 = *(ulong *)(this + lVar1);
  *(int *)(uVar2 - 1) = (int)uVar4;
  if (((uVar4 & 1) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
    Heap_MarkingBarrierSlow(uVar2,0);
  }
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(this + 0x95a0);
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar2;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
    uVar2 = *puVar3;
  }
  uVar4 = *(ulong *)(this + 0xa0);
  uVar6 = (undefined4)uVar4;
  *(undefined4 *)(uVar2 + 3) = uVar6;
  if ((uVar4 & 1) == 0) {
    *(undefined4 *)(*puVar3 + 7) = uVar6;
    *(undefined4 *)(*puVar3 + 0xb) = uVar6;
  }
  else {
    uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    puVar7 = (ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar2,uVar2 + 3,uVar4);
      uVar5 = *puVar7;
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar2,uVar2 + 3,uVar4);
    }
    uVar5 = *puVar3;
    *(undefined4 *)(uVar5 + 7) = uVar6;
    uVar2 = *puVar7;
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 7,uVar4);
      uVar2 = *puVar7;
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 7,uVar4);
    }
    uVar5 = *puVar3;
    *(undefined4 *)(uVar5 + 0xb) = uVar6;
    uVar2 = *puVar7;
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0xb,uVar4);
      uVar2 = *puVar7;
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0xb,uVar4);
    }
  }
  return puVar3;
}

