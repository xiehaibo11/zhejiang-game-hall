
/* v8::internal::OrderedHashTableIterator<v8::internal::JSMapIterator,
   v8::internal::OrderedHashMap>::Transition() */

void __thiscall
v8::internal::OrderedHashTableIterator<v8::internal::JSMapIterator,v8::internal::OrderedHashMap>::
Transition(OrderedHashTableIterator<v8::internal::JSMapIterator,v8::internal::OrderedHashMap> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  
  uVar7 = *(ulong *)this;
  uVar10 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xb);
  if ((*(uint *)(uVar10 + 7) & 1) != 0) {
    uVar4 = *(uint *)(uVar10 + 7);
    iVar5 = *(int *)(uVar7 + 0xf) >> 1;
    while ((uVar4 & 1) != 0) {
      uVar8 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 7);
      iVar11 = iVar5;
      if (0 < iVar5) {
        iVar2 = *(int *)(uVar10 + 0xb) >> 1;
        if (iVar2 == -1) {
          iVar11 = 0;
        }
        else if (1 < *(int *)(uVar10 + 0xb)) {
          iVar9 = 0xc;
          lVar6 = 1;
          do {
            iVar3 = *(int *)(uVar10 + 7 + (long)iVar9) >> 1;
            iVar11 = iVar11 - (uint)(iVar3 < iVar5);
            if (iVar5 <= iVar3) break;
            iVar9 = iVar9 + 4;
            bVar1 = lVar6 < iVar2;
            lVar6 = lVar6 + 1;
          } while (bVar1);
        }
      }
      uVar10 = uVar8;
      iVar5 = iVar11;
      uVar4 = *(uint *)(uVar8 + 7);
    }
    *(int *)(uVar7 + 0xb) = (int)uVar10;
    uVar7 = *(ulong *)this;
    if ((uVar10 & 1) != 0) {
      uVar8 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
      lVar6 = uVar7 + 0xb;
      if (((uint)uVar8 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar7,lVar6,uVar10);
        uVar7 = *(ulong *)this;
        uVar8 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
        lVar6 = uVar7 + 0xb;
      }
      if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar7,lVar6,uVar10);
        uVar7 = *(ulong *)this;
      }
    }
    *(int *)(uVar7 + 0xf) = iVar5 << 1;
  }
  return;
}

