
/* v8::internal::OrderedHashTableIterator<v8::internal::JSSetIterator,
   v8::internal::OrderedHashSet>::HasMore() */

undefined8 __thiscall
v8::internal::OrderedHashTableIterator<v8::internal::JSSetIterator,v8::internal::OrderedHashSet>::
HasMore(OrderedHashTableIterator<v8::internal::JSSetIterator,v8::internal::OrderedHashSet> *this)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar2 = *(uint *)(this + 4);
  Transition(this);
  uVar4 = *(ulong *)this;
  uVar6 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb);
  iVar9 = *(int *)(uVar4 + 0xf) >> 1;
  iVar1 = (*(int *)(uVar6 + 0xb) >> 1) + (*(int *)(uVar6 + 7) >> 1);
  if (iVar9 < iVar1) {
    iVar7 = iVar9 << 1;
    iVar8 = iVar1 - iVar9;
    do {
      if (*(int *)(uVar6 + 7 + (long)(int)((iVar7 + (*(uint *)(uVar6 + 0xf) >> 1)) * 4 + 0xc)) !=
          *(int *)(((ulong)uVar2 << 0x20) + 0xa8)) {
        *(int *)(uVar4 + 0xf) = iVar7;
        return 1;
      }
      iVar8 = iVar8 + -1;
      iVar7 = iVar7 + 2;
      iVar9 = iVar1;
    } while (iVar8 != 0);
  }
  *(int *)(uVar4 + 0xf) = iVar9 << 1;
  uVar4 = *(ulong *)(((ulong)uVar2 << 0x20) + 0x3f8);
  *(int *)(*(long *)this + 0xb) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar6 = *(ulong *)this;
    uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    lVar3 = uVar6 + 0xb;
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,lVar3,uVar4);
      uVar6 = *(ulong *)this;
      uVar5 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
      lVar3 = uVar6 + 0xb;
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,lVar3,uVar4);
    }
  }
  return 0;
}

