
/* v8::internal::HashTable<v8::internal::NumberDictionary,
   v8::internal::NumberDictionaryShape>::Rehash(v8::internal::ReadOnlyRoots,
   v8::internal::NumberDictionary) */

void __thiscall
v8::internal::HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::Rehash
          (HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape> *this,
          long param_2,ulong param_3)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  double dVar16;
  
  uVar8 = *(ulong *)this;
  uVar10 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
  pbVar9 = (byte *)(param_3 & 0xfffffffffffc0000 | 8);
  uVar6 = *(uint *)(uVar8 + 0x13);
  uVar4 = (uint)((uVar10 & 0x40000) == 0 && (uVar10 & 0x18) != 0);
  *(uint *)(param_3 + 0x13) = uVar6;
  if ((uVar4 == 0) && ((uVar6 & 1) != 0)) {
    uVar8 = uVar8 & 0xffffffff00000000;
    uVar13 = uVar8 | uVar6;
    uVar8 = uVar8 | (ulong)uVar6 & 0xfffffffffffc0000;
    uVar10 = *(ulong *)(uVar8 + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(param_3,param_3 + 0x13,uVar13);
      uVar10 = *(ulong *)(uVar8 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*pbVar9 & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(param_3,param_3 + 0x13,uVar13);
    }
  }
  uVar8 = *(ulong *)this;
  uVar6 = *(uint *)(uVar8 + 0xf);
  if ((int)uVar6 >> 1 != 0) {
    lVar15 = 0;
    lVar2 = param_3 + 7;
    do {
      lVar3 = (lVar15 * 0xc00000000 + 0x1000000000 >> 0x20) + 7;
      uVar14 = *(uint *)(lVar3 + uVar8);
      if ((uVar14 != *(uint *)(param_2 + 0x28)) && (uVar14 != *(uint *)(param_2 + 0x20))) {
        uVar10 = uVar8 & 0xffffffff00000000;
        if ((uVar14 & 1) == 0) {
          dVar16 = (double)((int)uVar14 >> 1);
        }
        else {
          dVar16 = *(double *)((uVar10 | uVar14) + 3);
        }
        uVar13 = *(ulong *)(*(long *)(param_2 + 0x410) + 7);
        uVar7 = (*(int *)(param_3 + 0xf) >> 1) - 1;
        uVar13 = (uVar13 ^ (ulong)(uint)(int)dVar16 ^ 0xffffffffffffffff) +
                 (uVar13 ^ (uint)(int)dVar16) * 0x40000;
        uVar13 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
        uVar13 = (uVar13 ^ uVar13 >> 0xb) * 0x41;
        uVar14 = uVar7 & ((uint)(uVar13 >> 0x16) ^ (uint)uVar13) & 0x3fffffff;
        uVar13 = (ulong)uVar14;
        iVar12 = *(int *)(((long)(uVar13 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar2);
        iVar5 = *(int *)((param_3 & 0xffffffff00000000) + 0xa8);
        if (iVar12 != iVar5) {
          iVar11 = 1;
          do {
            uVar14 = (uint)uVar13;
            if (iVar12 == *(int *)((param_3 & 0xffffffff00000000) + 0xa0)) break;
            uVar14 = uVar14 + iVar11 & uVar7;
            uVar13 = (ulong)uVar14;
            iVar12 = *(int *)(((long)(uVar13 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar2);
            iVar11 = iVar11 + 1;
          } while (iVar12 != iVar5);
        }
        uVar7 = *(uint *)(uVar8 + lVar3);
        puVar1 = (uint *)(lVar2 + (int)(uVar14 * 0xc + 0x10));
        *puVar1 = uVar7;
        if (uVar4 == 0 && (uVar7 & 1) != 0) {
          uVar13 = uVar10 | uVar7;
          uVar10 = uVar10 | (ulong)uVar7 & 0xfffffffffffc0000;
          uVar8 = *(ulong *)(uVar10 + 8);
          if (((uint)uVar8 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_3,puVar1,uVar13);
            uVar8 = *(ulong *)(uVar10 | 8);
          }
          if (((uVar8 & 0x18) != 0) && ((*pbVar9 & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(param_3,puVar1,uVar13);
          }
        }
        uVar8 = *(ulong *)this;
        uVar7 = *(uint *)(uVar8 + (lVar15 * 0xc00000000 + 0x1400000000 >> 0x20) + 7);
        puVar1 = (uint *)(lVar2 + (int)(uVar14 * 0xc + 0x14));
        *puVar1 = uVar7;
        if (uVar4 == 0 && (uVar7 & 1) != 0) {
          uVar8 = uVar8 & 0xffffffff00000000;
          uVar13 = uVar8 | uVar7;
          uVar8 = uVar8 | (ulong)uVar7 & 0xfffffffffffc0000;
          uVar10 = *(ulong *)(uVar8 + 8);
          if (((uint)uVar10 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_3,puVar1,uVar13);
            uVar10 = *(ulong *)(uVar8 | 8);
          }
          if (((uVar10 & 0x18) != 0) && ((*pbVar9 & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(param_3,puVar1,uVar13);
          }
        }
        uVar8 = *(ulong *)this;
        uVar7 = *(uint *)(uVar8 + (lVar15 * 0xc00000000 + 0x1800000000 >> 0x20) + 7);
        puVar1 = (uint *)(lVar2 + (int)(uVar14 * 0xc + 0x18));
        *puVar1 = uVar7;
        if ((uVar7 & (uVar4 ^ 0xffffffff) & 1) != 0) {
          uVar8 = uVar8 & 0xffffffff00000000;
          uVar13 = uVar8 | uVar7;
          uVar8 = uVar8 | (ulong)uVar7 & 0xfffffffffffc0000;
          uVar10 = *(ulong *)(uVar8 + 8);
          if (((uint)uVar10 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_3,puVar1,uVar13);
            uVar10 = *(ulong *)(uVar8 | 8);
          }
          if (((uVar10 & 0x18) != 0) && ((*pbVar9 & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(param_3,puVar1,uVar13);
          }
        }
      }
      uVar8 = *(ulong *)this;
      lVar15 = lVar15 + 1;
    } while (lVar15 != (long)((ulong)uVar6 << 0x20) >> 0x21);
  }
  *(uint *)(param_3 + 7) = *(uint *)(uVar8 + 7) & 0xfffffffe;
  *(undefined4 *)(param_3 + 0xb) = 0;
  return;
}

