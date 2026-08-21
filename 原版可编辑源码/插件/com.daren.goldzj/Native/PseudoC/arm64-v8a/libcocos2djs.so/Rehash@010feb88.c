
/* v8::internal::HashTable<v8::internal::NumberDictionary,
   v8::internal::NumberDictionaryShape>::Rehash(v8::internal::ReadOnlyRoots) */

void __thiscall
v8::internal::HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::Rehash
          (HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape> *this,
          long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  bool bVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  double dVar18;
  
  uVar9 = *(ulong *)((*(ulong *)this & 0xfffffffffffc0000) + 8);
  iVar16 = 0;
  uVar17 = 1;
  uVar3 = *(int *)(*(ulong *)this + 0xf) >> 1;
  uVar15 = (ulong)uVar3;
  iVar7 = (uint)((uVar9 & 0x18) == 0) << 2;
  if ((uVar9 & 0x40000) != 0) {
    iVar7 = 4;
  }
  do {
    if (uVar3 == 0) goto LAB_010fedf8;
    uVar9 = 0;
    bVar14 = true;
    do {
      while( true ) {
        uVar8 = *(ulong *)this;
        uVar5 = *(uint *)(uVar8 + 7 + ((long)(uVar9 * 0xc00000000 + 0x1000000000) >> 0x20));
        if ((uVar5 != *(uint *)(param_2 + 0x28)) && (uVar5 != *(uint *)(param_2 + 0x20))) break;
LAB_010fed88:
        uVar9 = uVar9 + 1;
        if (uVar15 <= uVar9) goto LAB_010febfc;
      }
      if ((uVar5 & 1) == 0) {
        dVar18 = (double)((int)uVar5 >> 1);
      }
      else {
        dVar18 = *(double *)((uVar8 & 0xffffffff00000000 | (ulong)uVar5) + 3);
      }
      uVar12 = *(ulong *)(*(long *)(param_2 + 0x410) + 7);
      uVar5 = (*(int *)(uVar8 + 0xf) >> 1) - 1;
      uVar11 = (uVar12 ^ (ulong)(uint)(int)dVar18 ^ 0xffffffffffffffff) +
               (uVar12 ^ (uint)(int)dVar18) * 0x40000;
      uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
      uVar11 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
      uVar11 = (ulong)(uVar5 & 0x3fffffff & ((uint)(uVar11 >> 0x16) ^ (uint)uVar11));
      if (1 < uVar17) {
        iVar13 = 0;
        do {
          if (uVar11 == uVar9) goto LAB_010fed88;
          iVar2 = (int)uVar11 + iVar13;
          iVar13 = iVar13 + 1;
          uVar11 = (ulong)(iVar2 + 1U & uVar5);
        } while (iVar16 != iVar13);
      }
      if (uVar9 == uVar11) goto LAB_010fed88;
      uVar6 = *(uint *)(uVar8 + 7 + ((long)(uVar11 * 0xc00000000 + 0x1000000000) >> 0x20));
      if ((uVar6 != *(uint *)(param_2 + 0x28)) && (uVar6 != *(uint *)(param_2 + 0x20))) {
        if ((uVar6 & 1) == 0) {
          dVar18 = (double)((int)uVar6 >> 1);
        }
        else {
          dVar18 = *(double *)((uVar8 & 0xffffffff00000000 | (ulong)uVar6) + 3);
        }
        uVar8 = (uVar12 ^ (ulong)(uint)(int)dVar18 ^ 0xffffffffffffffff) +
                (uVar12 ^ (uint)(int)dVar18) * 0x40000;
        uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
        uVar8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
        uVar8 = (ulong)(uVar5 & 0x3fffffff & ((uint)(uVar8 >> 0x16) ^ (uint)uVar8));
        if (1 < uVar17) {
          iVar13 = 0;
          do {
            if (uVar8 == uVar11) goto LAB_010fed84;
            iVar2 = (int)uVar8 + iVar13;
            iVar13 = iVar13 + 1;
            uVar8 = (ulong)(iVar2 + 1U & uVar5);
          } while (iVar16 != iVar13);
        }
        if (uVar8 == uVar11) {
LAB_010fed84:
          bVar14 = false;
          goto LAB_010fed88;
        }
      }
      Swap(this,uVar9,uVar11,iVar7);
    } while (uVar9 < uVar15);
LAB_010febfc:
    uVar17 = uVar17 + 1;
    iVar16 = iVar16 + 1;
  } while (!bVar14);
  if (uVar3 != 0) {
    uVar4 = *(undefined4 *)(param_2 + 0x20);
    iVar16 = *(int *)(param_2 + 0x28);
    lVar10 = 0x1000000000;
    do {
      lVar1 = (lVar10 >> 0x20) + 7;
      if (*(int *)(*(long *)this + lVar1) == iVar16) {
        *(undefined4 *)(*(long *)this + lVar1) = uVar4;
      }
      uVar15 = uVar15 - 1;
      lVar10 = lVar10 + 0xc00000000;
    } while (uVar15 != 0);
  }
LAB_010fedf8:
  *(undefined4 *)(*(long *)this + 0xb) = 0;
  return;
}

