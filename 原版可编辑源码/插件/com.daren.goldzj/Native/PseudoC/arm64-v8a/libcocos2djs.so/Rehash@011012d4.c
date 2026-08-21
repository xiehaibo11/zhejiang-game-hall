
/* v8::internal::HashTable<v8::internal::SimpleNumberDictionary,
   v8::internal::SimpleNumberDictionaryShape>::Rehash(v8::internal::ReadOnlyRoots,
   v8::internal::SimpleNumberDictionary) */

void __thiscall
v8::internal::
HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::Rehash
          (HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>
           *this,long param_2,ulong param_3)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  double dVar19;
  
  uVar11 = *(ulong *)this;
  uVar6 = *(uint *)(uVar11 + 0xf);
  if ((int)uVar6 >> 1 != 0) {
    uVar12 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
    pbVar13 = (byte *)(param_3 & 0xfffffffffffc0000 | 8);
    bVar9 = (uVar12 & 0x40000) != 0;
    bVar10 = (uVar12 & 0x18) == 0;
    lVar18 = 0;
    lVar2 = param_3 + 7;
    do {
      iVar7 = (int)lVar18 * 8;
      lVar3 = (long)(iVar7 + 0xc) + 7;
      uVar14 = *(uint *)(lVar3 + uVar11);
      if ((uVar14 != *(uint *)(param_2 + 0x28)) && (uVar14 != *(uint *)(param_2 + 0x20))) {
        uVar12 = uVar11 & 0xffffffff00000000;
        if ((uVar14 & 1) == 0) {
          dVar19 = (double)((int)uVar14 >> 1);
        }
        else {
          dVar19 = *(double *)((uVar12 | uVar14) + 3);
        }
        uVar15 = *(ulong *)(*(long *)(param_2 + 0x410) + 7);
        uVar8 = (*(int *)(param_3 + 0xf) >> 1) - 1;
        uVar15 = (uVar15 ^ (ulong)(uint)(int)dVar19 ^ 0xffffffffffffffff) +
                 (uVar15 ^ (uint)(int)dVar19) * 0x40000;
        uVar15 = (uVar15 ^ uVar15 >> 0x1f) * 0x15;
        uVar15 = (uVar15 ^ uVar15 >> 0xb) * 0x41;
        uVar4 = uVar8 & ((uint)(uVar15 >> 0x16) ^ (uint)uVar15);
        uVar14 = uVar4 & 0x3fffffff;
        iVar16 = *(int *)(lVar2 + (int)(uVar4 * 8 + 0xc));
        iVar5 = *(int *)((param_3 & 0xffffffff00000000) + 0xa8);
        if (iVar16 != iVar5) {
          iVar17 = 1;
          do {
            if (iVar16 == *(int *)((param_3 & 0xffffffff00000000) + 0xa0)) break;
            uVar14 = uVar14 + iVar17 & uVar8;
            iVar16 = *(int *)(lVar2 + (int)(uVar14 * 8 + 0xc));
            iVar17 = iVar17 + 1;
          } while (iVar16 != iVar5);
        }
        uVar4 = *(uint *)(uVar11 + lVar3);
        puVar1 = (uint *)(lVar2 + (int)(uVar14 * 8 + 0xc));
        *puVar1 = uVar4;
        if ((bVar9 || bVar10) && (uVar4 & 1) != 0) {
          uVar15 = uVar12 | uVar4;
          uVar12 = uVar12 | (ulong)uVar4 & 0xfffffffffffc0000;
          uVar11 = *(ulong *)(uVar12 + 8);
          if (((uint)uVar11 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_3,puVar1,uVar15);
            uVar11 = *(ulong *)(uVar12 | 8);
          }
          if (((uVar11 & 0x18) != 0) && ((*pbVar13 & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(param_3,puVar1,uVar15);
          }
        }
        uVar11 = *(ulong *)this;
        uVar4 = *(uint *)(uVar11 + ((long)(iVar7 + 0x10) | 7U));
        puVar1 = (uint *)(lVar2 + (int)(uVar14 * 8 + 0x10));
        *puVar1 = uVar4;
        if ((bVar9 || bVar10) && (uVar4 & 1) != 0) {
          uVar11 = uVar11 & 0xffffffff00000000;
          uVar15 = uVar11 | uVar4;
          uVar11 = uVar11 | (ulong)uVar4 & 0xfffffffffffc0000;
          uVar12 = *(ulong *)(uVar11 + 8);
          if (((uint)uVar12 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_3,puVar1,uVar15);
            uVar12 = *(ulong *)(uVar11 | 8);
          }
          if (((uVar12 & 0x18) != 0) && ((*pbVar13 & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(param_3,puVar1,uVar15);
          }
        }
      }
      uVar11 = *(ulong *)this;
      lVar18 = lVar18 + 1;
    } while (lVar18 != (long)((ulong)uVar6 << 0x20) >> 0x21);
  }
  *(uint *)(param_3 + 7) = *(uint *)(uVar11 + 7) & 0xfffffffe;
  *(undefined4 *)(param_3 + 0xb) = 0;
  return;
}

