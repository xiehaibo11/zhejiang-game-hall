
/* v8::internal::HashTable<v8::internal::EphemeronHashTable,
   v8::internal::EphemeronHashTableShape>::Swap(v8::internal::InternalIndex,
   v8::internal::InternalIndex, v8::internal::WriteBarrierMode) */

void __thiscall
v8::internal::HashTable<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>::
Swap(HashTable<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape> *this,
    int param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar11 = *(ulong *)this;
  iVar1 = param_2 * 8 + 0x10;
  lVar2 = (long)(param_2 * 8 + 0xc) + 7;
  uVar4 = *(uint *)(lVar2 + uVar11);
  uVar8 = (ulong)uVar4;
  uVar7 = uVar11 & 0xffffffff00000000;
  uVar5 = *(uint *)(uVar11 + ((long)iVar1 | 7U));
  uVar9 = (ulong)uVar5;
  lVar3 = (long)(param_3 * 8 + 0xc) + 7;
  uVar6 = *(uint *)(uVar11 + lVar3);
  uVar10 = (ulong)uVar6;
  *(uint *)(lVar2 + uVar11) = uVar6;
  uVar12 = *(ulong *)this;
  uVar11 = uVar12;
  if (param_4 != 0) {
    if (((param_4 == 4) && ((uVar6 & 1) != 0)) &&
       ((*(byte *)((uVar7 | uVar10 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
      Heap_MarkingBarrierSlow(uVar12,uVar12 + lVar2,uVar7 | uVar10);
      uVar11 = *(ulong *)this;
    }
    if (((*(byte *)((uVar7 | uVar10 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
       ((*(byte *)(uVar12 & 0xfffffffffffc0000 | 8) & 0x18) == 0)) {
      Heap_GenerationalEphemeronKeyBarrierSlow
                (*(undefined8 *)(uVar12 & 0xfffffffffffc0000 | 0x18),uVar12,uVar11 + lVar2);
      uVar11 = *(ulong *)this;
    }
  }
  uVar14 = (long)(param_3 * 8 + 0x10) | 7;
  uVar6 = *(uint *)(uVar11 + uVar14);
  uVar10 = (ulong)uVar6;
  uVar12 = uVar11 & 0xffffffff00000000;
  uVar15 = (long)iVar1 | 7;
  *(uint *)(uVar11 + uVar15) = uVar6;
  if (param_4 == 4) {
    if ((uVar6 & 1) != 0) {
      uVar11 = uVar12 | uVar10 & 0xfffffffffffc0000;
      pbVar13 = (byte *)(uVar11 | 8);
      if ((*(byte *)(uVar11 + 10) >> 2 & 1) != 0) {
        Heap_MarkingBarrierSlow(*(long *)this,*(long *)this + uVar15,uVar12 | uVar10);
      }
LAB_010fa92c:
      if (((*pbVar13 & 0x18) != 0) &&
         (uVar11 = *(ulong *)this, (*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar11,uVar11 + uVar15,uVar12 | uVar10);
      }
      goto LAB_010fa958;
    }
    *(uint *)(*(long *)this + lVar3) = uVar4;
    uVar11 = *(ulong *)this;
  }
  else {
    if (param_4 == 0) {
      *(uint *)(*(long *)this + lVar3) = uVar4;
      uVar11 = *(ulong *)this;
      goto LAB_010fa978;
    }
    if ((uVar6 & 1) != 0) {
      pbVar13 = (byte *)(uVar12 | uVar10 & 0xfffffffffffc0000 | 8);
      goto LAB_010fa92c;
    }
LAB_010fa958:
    *(uint *)(*(long *)this + lVar3) = uVar4;
    uVar11 = *(ulong *)this;
    if (param_4 != 4) {
      uVar10 = uVar11;
      if (param_4 == 0) {
LAB_010fa978:
        *(uint *)(uVar11 + uVar14) = uVar5;
        return;
      }
      goto LAB_010fa9b0;
    }
  }
  uVar10 = uVar11;
  if (((uVar4 & 1) != 0) && ((*(byte *)((uVar7 | uVar8 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0))
  {
    Heap_MarkingBarrierSlow(uVar11,uVar11 + lVar3,uVar7 | uVar8);
    uVar10 = *(ulong *)this;
  }
LAB_010fa9b0:
  if (((*(byte *)((uVar7 | uVar8 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
     ((*(byte *)(uVar11 & 0xfffffffffffc0000 | 8) & 0x18) == 0)) {
    Heap_GenerationalEphemeronKeyBarrierSlow
              (*(undefined8 *)(uVar11 & 0xfffffffffffc0000 | 0x18),uVar11,uVar10 + lVar3);
    uVar10 = *(ulong *)this;
  }
  *(uint *)(uVar10 + uVar14) = uVar5;
  if (param_4 != 0) {
    if (param_4 == 4) {
      if ((uVar5 & 1) == 0) {
        return;
      }
      uVar11 = uVar7 | uVar9 & 0xfffffffffffc0000;
      pbVar13 = (byte *)(uVar11 | 8);
      if ((*(byte *)(uVar11 + 10) >> 2 & 1) != 0) {
        Heap_MarkingBarrierSlow(*(long *)this,*(long *)this + uVar14,uVar7 | uVar9);
      }
    }
    else {
      if ((uVar5 & 1) == 0) {
        return;
      }
      pbVar13 = (byte *)(uVar7 | uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((*pbVar13 & 0x18) != 0) &&
       (uVar11 = *(ulong *)this, (*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar11,uVar11 + uVar14,uVar7 | uVar9);
    }
  }
  return;
}

