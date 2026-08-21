
/* v8::internal::HashTable<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::Rehash(v8::internal::ReadOnlyRoots,
   v8::internal::GlobalDictionary) */

void __thiscall
v8::internal::HashTable<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::Rehash
          (HashTable<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape> *this,
          long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  ulong local_68;
  
  uVar8 = *(ulong *)this;
  uVar10 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
  pbVar9 = (byte *)(param_3 & 0xfffffffffffc0000 | 8);
  uVar3 = *(uint *)(uVar8 + 0x13);
  bVar5 = (uVar10 & 0x40000) != 0;
  bVar6 = (uVar10 & 0x18) == 0;
  *(uint *)(param_3 + 0x13) = uVar3;
  if ((bVar5 || bVar6) && ((uVar3 & 1) != 0)) {
    uVar8 = uVar8 & 0xffffffff00000000;
    uVar12 = uVar8 | uVar3;
    uVar8 = uVar8 | (ulong)uVar3 & 0xfffffffffffc0000;
    uVar10 = *(ulong *)(uVar8 + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(param_3,param_3 + 0x13,uVar12);
      uVar10 = *(ulong *)(uVar8 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*pbVar9 & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(param_3,param_3 + 0x13,uVar12);
    }
  }
  uVar8 = *(ulong *)this;
  uVar3 = *(uint *)(uVar8 + 0x17);
  *(uint *)(param_3 + 0x17) = uVar3;
  if ((bVar5 || bVar6) && (uVar3 & 1) != 0) {
    uVar8 = uVar8 & 0xffffffff00000000;
    uVar12 = uVar8 | uVar3;
    uVar8 = uVar8 | (ulong)uVar3 & 0xfffffffffffc0000;
    uVar10 = *(ulong *)(uVar8 + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(param_3,param_3 + 0x17,uVar12);
      uVar10 = *(ulong *)(uVar8 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*pbVar9 & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(param_3,param_3 + 0x17,uVar12);
    }
  }
  uVar8 = *(ulong *)this;
  uVar3 = *(uint *)(uVar8 + 0xf);
  if ((int)uVar3 >> 1 != 0) {
    lVar14 = 0;
    do {
      lVar1 = (long)((int)lVar14 * 4 + 0x14) + 7;
      uVar7 = *(uint *)(uVar8 + lVar1);
      if (uVar7 != *(uint *)(param_2 + 0x20)) {
        uVar8 = uVar8 & 0xffffffff00000000 |
                (ulong)*(uint *)((uVar8 & 0xffffffff00000000 | (ulong)uVar7) + 3);
        uVar7 = *(uint *)(uVar8 + 3);
        if ((uVar7 & 1) == 0) {
          uVar7 = uVar7 >> 3;
        }
        else {
          local_68 = uVar8;
          uVar7 = String::ComputeAndSetHash((String *)&local_68);
        }
        uVar4 = (*(int *)(param_3 + 0xf) >> 1) - 1;
        uVar7 = uVar4 & uVar7;
        puVar13 = (uint *)(param_3 + 7 + (long)(int)(uVar7 * 4 + 0x14));
        uVar2 = *(uint *)((param_3 & 0xffffffff00000000) + 0xa0);
        if (*puVar13 != uVar2) {
          iVar11 = 1;
          do {
            uVar7 = uVar7 + iVar11 & uVar4;
            puVar13 = (uint *)(param_3 + 7 + (long)(int)(uVar7 * 4 + 0x14));
            iVar11 = iVar11 + 1;
          } while (*puVar13 != uVar2);
        }
        uVar8 = *(ulong *)this;
        uVar7 = *(uint *)(uVar8 + lVar1);
        *puVar13 = uVar7;
        if ((bVar5 || bVar6) && (uVar7 & 1) != 0) {
          uVar8 = uVar8 & 0xffffffff00000000;
          uVar12 = uVar8 | uVar7;
          uVar8 = uVar8 | (ulong)uVar7 & 0xfffffffffffc0000;
          uVar10 = *(ulong *)(uVar8 + 8);
          if (((uint)uVar10 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_3,puVar13,uVar12);
            uVar10 = *(ulong *)(uVar8 | 8);
          }
          if (((uVar10 & 0x18) != 0) && ((*pbVar9 & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(param_3,puVar13,uVar12);
          }
        }
      }
      uVar8 = *(ulong *)this;
      lVar14 = lVar14 + 1;
    } while (lVar14 != (long)((ulong)uVar3 << 0x20) >> 0x21);
  }
  *(uint *)(param_3 + 7) = *(uint *)(uVar8 + 7) & 0xfffffffe;
  *(undefined4 *)(param_3 + 0xb) = 0;
  return;
}

