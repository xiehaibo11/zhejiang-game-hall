
/* v8::internal::HashTable<v8::internal::ObjectHashSet,
   v8::internal::ObjectHashSetShape>::Swap(v8::internal::InternalIndex, v8::internal::InternalIndex,
   v8::internal::WriteBarrierMode) */

void __thiscall
v8::internal::HashTable<v8::internal::ObjectHashSet,v8::internal::ObjectHashSetShape>::Swap
          (HashTable<v8::internal::ObjectHashSet,v8::internal::ObjectHashSetShape> *this,int param_2
          ,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  
  uVar9 = *(ulong *)this;
  lVar1 = (long)(param_2 * 4 + 0xc) + 7;
  uVar3 = *(uint *)(lVar1 + uVar9);
  uVar6 = (ulong)uVar3;
  lVar2 = (long)(param_3 * 4 + 0xc) + 7;
  uVar8 = uVar9 & 0xffffffff00000000;
  uVar4 = *(uint *)(uVar9 + lVar2);
  uVar7 = (ulong)uVar4;
  *(uint *)(lVar1 + uVar9) = uVar4;
  if (param_4 == 4) {
    lVar5 = *(long *)this;
    if ((uVar4 & 1) != 0) {
      uVar9 = uVar8 | uVar7 & 0xfffffffffffc0000;
      pbVar10 = (byte *)(uVar9 | 8);
      if ((*(byte *)(uVar9 + 10) >> 2 & 1) != 0) {
        Heap_MarkingBarrierSlow(lVar5,lVar5 + lVar1,uVar8 | uVar7);
      }
      goto LAB_010f8f6c;
    }
    *(uint *)(lVar5 + lVar2) = uVar3;
  }
  else {
    if (param_4 == 0) {
      *(uint *)(*(long *)this + lVar2) = uVar3;
      return;
    }
    if ((uVar4 & 1) != 0) {
      pbVar10 = (byte *)(uVar8 | uVar7 & 0xfffffffffffc0000 | 8);
LAB_010f8f6c:
      if (((*pbVar10 & 0x18) != 0) &&
         (uVar9 = *(ulong *)this, (*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar9,uVar9 + lVar1,uVar8 | uVar7);
      }
    }
    *(uint *)(*(long *)this + lVar2) = uVar3;
    if (param_4 == 0) {
      return;
    }
    if (param_4 != 4) {
      if ((uVar3 & 1) == 0) {
        return;
      }
      pbVar10 = (byte *)(uVar8 | uVar6 & 0xfffffffffffc0000 | 8);
      goto LAB_010f8fe4;
    }
  }
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar7 = uVar8 | uVar6 & 0xfffffffffffc0000;
  pbVar10 = (byte *)(uVar7 | 8);
  if ((*(byte *)(uVar7 + 10) >> 2 & 1) != 0) {
    Heap_MarkingBarrierSlow(*(long *)this,*(long *)this + lVar2,uVar8 | uVar6);
  }
LAB_010f8fe4:
  if (((*pbVar10 & 0x18) != 0) &&
     (uVar7 = *(ulong *)this, (*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
    Heap_GenerationalBarrierSlow(uVar7,uVar7 + lVar2,uVar8 | uVar6);
  }
  return;
}

