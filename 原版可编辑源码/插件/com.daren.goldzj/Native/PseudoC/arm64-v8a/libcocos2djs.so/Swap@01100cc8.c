
/* v8::internal::HashTable<v8::internal::SimpleNumberDictionary,
   v8::internal::SimpleNumberDictionaryShape>::Swap(v8::internal::InternalIndex,
   v8::internal::InternalIndex, v8::internal::WriteBarrierMode) */

void __thiscall
v8::internal::
HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::Swap
          (HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>
           *this,int param_2,int param_3,int param_4)

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
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  
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
  if (param_4 != 0) {
    if (param_4 == 4) {
      if ((uVar6 & 1) != 0) {
        uVar11 = uVar7 | uVar10 & 0xfffffffffffc0000;
        pbVar15 = (byte *)(uVar11 | 8);
        if ((*(byte *)(uVar11 + 10) >> 2 & 1) != 0) {
          Heap_MarkingBarrierSlow(*(long *)this,*(long *)this + lVar2,uVar7 | uVar10);
        }
LAB_01100d88:
        if (((*pbVar15 & 0x18) != 0) &&
           (uVar11 = *(ulong *)this, (*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar11,uVar11 + lVar2,uVar7 | uVar10);
        }
      }
    }
    else if ((uVar6 & 1) != 0) {
      pbVar15 = (byte *)(uVar7 | uVar10 & 0xfffffffffffc0000 | 8);
      goto LAB_01100d88;
    }
  }
  uVar11 = *(ulong *)this;
  uVar13 = (long)(param_3 * 8 + 0x10) | 7;
  uVar6 = *(uint *)(uVar11 + uVar13);
  uVar10 = (ulong)uVar6;
  uVar14 = (long)iVar1 | 7;
  uVar12 = uVar11 & 0xffffffff00000000;
  *(uint *)(uVar11 + uVar14) = uVar6;
  if (param_4 == 4) {
    if ((uVar6 & 1) != 0) {
      uVar11 = uVar12 | uVar10 & 0xfffffffffffc0000;
      pbVar15 = (byte *)(uVar11 | 8);
      if ((*(byte *)(uVar11 + 10) >> 2 & 1) != 0) {
        Heap_MarkingBarrierSlow(*(long *)this,*(long *)this + uVar14,uVar12 | uVar10);
      }
LAB_01100e3c:
      if (((*pbVar15 & 0x18) != 0) &&
         (uVar11 = *(ulong *)this, (*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar11,uVar11 + uVar14,uVar12 | uVar10);
      }
      goto LAB_01100e68;
    }
    *(uint *)(*(long *)this + lVar3) = uVar4;
LAB_01100e90:
    if ((uVar4 & 1) != 0) {
      uVar10 = uVar7 | uVar8 & 0xfffffffffffc0000;
      pbVar15 = (byte *)(uVar10 | 8);
      if ((*(byte *)(uVar10 + 10) >> 2 & 1) != 0) {
        Heap_MarkingBarrierSlow(*(long *)this,*(long *)this + lVar3,uVar7 | uVar8);
      }
LAB_01100ed8:
      if (((*pbVar15 & 0x18) != 0) &&
         (uVar10 = *(ulong *)this, (*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar10,uVar10 + lVar3,uVar7 | uVar8);
      }
      goto LAB_01100f04;
    }
    *(uint *)(*(long *)this + uVar13) = uVar5;
  }
  else {
    if (param_4 == 0) {
      *(uint *)(*(long *)this + lVar3) = uVar4;
      goto LAB_01100e80;
    }
    if ((uVar6 & 1) != 0) {
      pbVar15 = (byte *)(uVar12 | uVar10 & 0xfffffffffffc0000 | 8);
      goto LAB_01100e3c;
    }
LAB_01100e68:
    *(uint *)(*(long *)this + lVar3) = uVar4;
    if (param_4 == 4) goto LAB_01100e90;
    if (param_4 == 0) {
LAB_01100e80:
      *(uint *)(*(long *)this + uVar13) = uVar5;
      return;
    }
    if ((uVar4 & 1) != 0) {
      pbVar15 = (byte *)(uVar7 | uVar8 & 0xfffffffffffc0000 | 8);
      goto LAB_01100ed8;
    }
LAB_01100f04:
    *(uint *)(*(long *)this + uVar13) = uVar5;
    if (param_4 == 0) {
      return;
    }
    if (param_4 != 4) {
      if ((uVar5 & 1) == 0) {
        return;
      }
      pbVar15 = (byte *)(uVar7 | uVar9 & 0xfffffffffffc0000 | 8);
      goto LAB_01100f50;
    }
  }
  if ((uVar5 & 1) == 0) {
    return;
  }
  uVar8 = uVar7 | uVar9 & 0xfffffffffffc0000;
  pbVar15 = (byte *)(uVar8 | 8);
  if ((*(byte *)(uVar8 + 10) >> 2 & 1) != 0) {
    Heap_MarkingBarrierSlow(*(long *)this,*(long *)this + uVar13,uVar7 | uVar9);
  }
LAB_01100f50:
  if (((*pbVar15 & 0x18) != 0) &&
     (uVar8 = *(ulong *)this, (*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
    Heap_GenerationalBarrierSlow(uVar8,uVar8 + uVar13,uVar7 | uVar9);
  }
  return;
}

