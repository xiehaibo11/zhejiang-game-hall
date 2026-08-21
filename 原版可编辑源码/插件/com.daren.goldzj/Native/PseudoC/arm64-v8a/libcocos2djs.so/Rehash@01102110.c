
/* v8::internal::HashTable<v8::internal::NameDictionary,
   v8::internal::NameDictionaryShape>::Rehash(v8::internal::ReadOnlyRoots,
   v8::internal::NameDictionary) */

void __thiscall
v8::internal::HashTable<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::Rehash
          (HashTable<v8::internal::NameDictionary,v8::internal::NameDictionaryShape> *this,
          long param_2,ulong param_3)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  ulong local_68;
  
  uVar11 = *(ulong *)this;
  uVar13 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
  pbVar12 = (byte *)(param_3 & 0xfffffffffffc0000 | 8);
  uVar6 = *(uint *)(uVar11 + 0x13);
  bVar8 = (uVar13 & 0x40000) == 0;
  bVar9 = (uVar13 & 0x18) != 0;
  uVar4 = (uint)(bVar8 && bVar9);
  *(uint *)(param_3 + 0x13) = uVar6;
  if ((uVar4 == 0) && ((uVar6 & 1) != 0)) {
    uVar11 = uVar11 & 0xffffffff00000000;
    uVar16 = uVar11 | uVar6;
    uVar11 = uVar11 | (ulong)uVar6 & 0xfffffffffffc0000;
    uVar13 = *(ulong *)(uVar11 + 8);
    if (((uint)uVar13 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(param_3,param_3 + 0x13,uVar16);
      uVar13 = *(ulong *)(uVar11 | 8);
    }
    if (((uVar13 & 0x18) != 0) && ((*pbVar12 & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(param_3,param_3 + 0x13,uVar16);
    }
  }
  uVar11 = *(ulong *)this;
  uVar6 = *(uint *)(uVar11 + 0x17);
  *(uint *)(param_3 + 0x17) = uVar6;
  if ((!bVar8 || !bVar9) && (uVar6 & 1) != 0) {
    uVar11 = uVar11 & 0xffffffff00000000;
    uVar16 = uVar11 | uVar6;
    uVar11 = uVar11 | (ulong)uVar6 & 0xfffffffffffc0000;
    uVar13 = *(ulong *)(uVar11 + 8);
    if (((uint)uVar13 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(param_3,param_3 + 0x17,uVar16);
      uVar13 = *(ulong *)(uVar11 | 8);
    }
    if (((uVar13 & 0x18) != 0) && ((*pbVar12 & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(param_3,param_3 + 0x17,uVar16);
    }
  }
  uVar11 = *(ulong *)this;
  uVar6 = *(uint *)(uVar11 + 0xf);
  if ((int)uVar6 >> 1 != 0) {
    lVar17 = 0;
    lVar2 = param_3 + 7;
    do {
      lVar3 = (lVar17 * 0xc00000000 + 0x1400000000 >> 0x20) + 7;
      uVar10 = *(uint *)(uVar11 + lVar3);
      if ((uVar10 != *(uint *)(param_2 + 0x28)) && (uVar10 != *(uint *)(param_2 + 0x20))) {
        uVar11 = uVar11 & 0xffffffff00000000 | (ulong)uVar10;
        uVar10 = *(uint *)(uVar11 + 3);
        if ((uVar10 & 1) == 0) {
          uVar10 = uVar10 >> 3;
        }
        else {
          local_68 = uVar11;
          uVar10 = String::ComputeAndSetHash((String *)&local_68);
        }
        uVar7 = (*(int *)(param_3 + 0xf) >> 1) - 1;
        uVar10 = uVar7 & uVar10;
        uVar11 = (ulong)uVar10;
        iVar14 = *(int *)(((long)(uVar11 * 0xc00000000 + 0x1400000000) >> 0x20) + lVar2);
        iVar5 = *(int *)((param_3 & 0xffffffff00000000) + 0xa8);
        if (iVar14 != iVar5) {
          iVar15 = 1;
          do {
            uVar10 = (uint)uVar11;
            if (iVar14 == *(int *)((param_3 & 0xffffffff00000000) + 0xa0)) break;
            uVar10 = uVar10 + iVar15 & uVar7;
            uVar11 = (ulong)uVar10;
            iVar14 = *(int *)(((long)(uVar11 * 0xc00000000 + 0x1400000000) >> 0x20) + lVar2);
            iVar15 = iVar15 + 1;
          } while (iVar14 != iVar5);
        }
        uVar11 = *(ulong *)this;
        uVar7 = *(uint *)(uVar11 + lVar3);
        puVar1 = (uint *)(lVar2 + (int)(uVar10 * 0xc + 0x14));
        *puVar1 = uVar7;
        if (uVar4 == 0 && (uVar7 & 1) != 0) {
          uVar11 = uVar11 & 0xffffffff00000000;
          uVar16 = uVar11 | uVar7;
          uVar11 = uVar11 | (ulong)uVar7 & 0xfffffffffffc0000;
          uVar13 = *(ulong *)(uVar11 + 8);
          if (((uint)uVar13 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_3,puVar1,uVar16);
            uVar13 = *(ulong *)(uVar11 | 8);
          }
          if (((uVar13 & 0x18) != 0) && ((*pbVar12 & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(param_3,puVar1,uVar16);
          }
        }
        uVar11 = *(ulong *)this;
        uVar7 = *(uint *)(uVar11 + (lVar17 * 0xc00000000 + 0x1800000000 >> 0x20) + 7);
        puVar1 = (uint *)(lVar2 + (int)(uVar10 * 0xc + 0x18));
        *puVar1 = uVar7;
        if (uVar4 == 0 && (uVar7 & 1) != 0) {
          uVar11 = uVar11 & 0xffffffff00000000;
          uVar16 = uVar11 | uVar7;
          uVar11 = uVar11 | (ulong)uVar7 & 0xfffffffffffc0000;
          uVar13 = *(ulong *)(uVar11 + 8);
          if (((uint)uVar13 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_3,puVar1,uVar16);
            uVar13 = *(ulong *)(uVar11 | 8);
          }
          if (((uVar13 & 0x18) != 0) && ((*pbVar12 & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(param_3,puVar1,uVar16);
          }
        }
        uVar11 = *(ulong *)this;
        uVar7 = *(uint *)(uVar11 + (lVar17 * 0xc00000000 + 0x1c00000000 >> 0x20) + 7);
        puVar1 = (uint *)(lVar2 + (int)(uVar10 * 0xc + 0x1c));
        *puVar1 = uVar7;
        if ((uVar7 & (uVar4 ^ 0xffffffff) & 1) != 0) {
          uVar11 = uVar11 & 0xffffffff00000000;
          uVar16 = uVar11 | uVar7;
          uVar11 = uVar11 | (ulong)uVar7 & 0xfffffffffffc0000;
          uVar13 = *(ulong *)(uVar11 + 8);
          if (((uint)uVar13 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_3,puVar1,uVar16);
            uVar13 = *(ulong *)(uVar11 | 8);
          }
          if (((uVar13 & 0x18) != 0) && ((*pbVar12 & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(param_3,puVar1,uVar16);
          }
        }
      }
      uVar11 = *(ulong *)this;
      lVar17 = lVar17 + 1;
    } while (lVar17 != (long)((ulong)uVar6 << 0x20) >> 0x21);
  }
  *(uint *)(param_3 + 7) = *(uint *)(uVar11 + 7) & 0xfffffffe;
  *(undefined4 *)(param_3 + 0xb) = 0;
  return;
}

