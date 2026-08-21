
/* v8::internal::OrderedHashTableIterator<v8::internal::JSMapIterator,
   v8::internal::OrderedHashMap>::HasMore() */

undefined8 __thiscall
v8::internal::OrderedHashTableIterator<v8::internal::JSMapIterator,v8::internal::OrderedHashMap>::
HasMore(OrderedHashTableIterator<v8::internal::JSMapIterator,v8::internal::OrderedHashMap> *this)

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
  int iVar10;
  
  uVar2 = *(uint *)(this + 4);
  Transition(this);
  uVar4 = *(ulong *)this;
  uVar6 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb);
  iVar10 = *(int *)(uVar4 + 0xf) >> 1;
  iVar1 = (*(int *)(uVar6 + 0xb) >> 1) + (*(int *)(uVar6 + 7) >> 1);
  if (iVar10 < iVar1) {
    iVar7 = iVar10 * 2;
    iVar8 = iVar1 - iVar10;
    iVar9 = iVar10 * 3;
    do {
      iVar9 = iVar9 + 3;
      if (*(int *)(uVar6 + 7 + (long)(int)((iVar9 + (*(uint *)(uVar6 + 0xf) >> 1)) * 4)) !=
          *(int *)(((ulong)uVar2 << 0x20) + 0xa8)) {
        *(int *)(uVar4 + 0xf) = iVar7;
        return 1;
      }
      iVar7 = iVar7 + 2;
      iVar8 = iVar8 + -1;
      iVar10 = iVar1;
    } while (iVar8 != 0);
  }
  *(int *)(uVar4 + 0xf) = iVar10 << 1;
  uVar4 = *(ulong *)(((ulong)uVar2 << 0x20) + 0x3f0);
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

