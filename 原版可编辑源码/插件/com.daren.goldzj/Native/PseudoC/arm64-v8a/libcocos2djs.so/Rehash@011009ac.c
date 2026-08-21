
/* v8::internal::HashTable<v8::internal::SimpleNumberDictionary,
   v8::internal::SimpleNumberDictionaryShape>::Rehash(v8::internal::ReadOnlyRoots) */

void __thiscall
v8::internal::
HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::Rehash
          (HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>
           *this,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  bool bVar17;
  double dVar18;
  
  uVar9 = *(ulong *)((*(ulong *)this & 0xfffffffffffc0000) + 8);
  iVar14 = 0;
  uVar16 = 1;
  uVar2 = *(int *)(*(ulong *)this + 0xf) >> 1;
  uVar15 = (ulong)uVar2;
  iVar6 = (uint)((uVar9 & 0x18) == 0) << 2;
  if ((uVar9 & 0x40000) != 0) {
    iVar6 = 4;
  }
  do {
    if (uVar2 == 0) goto LAB_01100c0c;
    uVar9 = 0;
    bVar17 = true;
    do {
      while( true ) {
        uVar7 = *(ulong *)this;
        uVar4 = *(uint *)(uVar7 + 7 + (long)((int)uVar9 * 8 + 0xc));
        if ((uVar4 != *(uint *)(param_2 + 0x28)) && (uVar4 != *(uint *)(param_2 + 0x20))) break;
LAB_01100b98:
        uVar9 = uVar9 + 1;
        if (uVar15 <= uVar9) goto LAB_01100a10;
      }
      if ((uVar4 & 1) == 0) {
        dVar18 = (double)((int)uVar4 >> 1);
      }
      else {
        dVar18 = *(double *)((uVar7 & 0xffffffff00000000 | (ulong)uVar4) + 3);
      }
      uVar12 = *(ulong *)(*(long *)(param_2 + 0x410) + 7);
      uVar4 = (*(int *)(uVar7 + 0xf) >> 1) - 1;
      uVar11 = (uVar12 ^ (ulong)(uint)(int)dVar18 ^ 0xffffffffffffffff) +
               (uVar12 ^ (uint)(int)dVar18) * 0x40000;
      uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
      uVar11 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
      uVar11 = (ulong)(uVar4 & 0x3fffffff & ((uint)(uVar11 >> 0x16) ^ (uint)uVar11));
      if (1 < uVar16) {
        iVar13 = 0;
        do {
          if (uVar11 == uVar9) goto LAB_01100b98;
          iVar1 = (int)uVar11 + iVar13;
          iVar13 = iVar13 + 1;
          uVar11 = (ulong)(iVar1 + 1U & uVar4);
        } while (iVar14 != iVar13);
      }
      if (uVar9 == uVar11) goto LAB_01100b98;
      uVar5 = *(uint *)(uVar7 + 7 + (long)((int)uVar11 * 8 + 0xc));
      if ((uVar5 != *(uint *)(param_2 + 0x28)) && (uVar5 != *(uint *)(param_2 + 0x20))) {
        if ((uVar5 & 1) == 0) {
          dVar18 = (double)((int)uVar5 >> 1);
        }
        else {
          dVar18 = *(double *)((uVar7 & 0xffffffff00000000 | (ulong)uVar5) + 3);
        }
        uVar7 = (uVar12 ^ (ulong)(uint)(int)dVar18 ^ 0xffffffffffffffff) +
                (uVar12 ^ (uint)(int)dVar18) * 0x40000;
        uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
        uVar7 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
        uVar7 = (ulong)(uVar4 & 0x3fffffff & ((uint)(uVar7 >> 0x16) ^ (uint)uVar7));
        if (1 < uVar16) {
          iVar13 = 0;
          do {
            if (uVar7 == uVar11) goto LAB_01100b94;
            iVar1 = (int)uVar7 + iVar13;
            iVar13 = iVar13 + 1;
            uVar7 = (ulong)(iVar1 + 1U & uVar4);
          } while (iVar14 != iVar13);
        }
        if (uVar7 == uVar11) {
LAB_01100b94:
          bVar17 = false;
          goto LAB_01100b98;
        }
      }
      Swap(this,uVar9,uVar11,iVar6);
    } while (uVar9 < uVar15);
LAB_01100a10:
    uVar16 = uVar16 + 1;
    iVar14 = iVar14 + 1;
  } while (!bVar17);
  if (uVar2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x20);
    iVar14 = *(int *)(param_2 + 0x28);
    lVar8 = 0;
    do {
      lVar10 = (long)((int)lVar8 + 0xc);
      if (*(int *)(*(long *)this + 7 + lVar10) == iVar14) {
        *(undefined4 *)(lVar10 + *(long *)this + 7) = uVar3;
      }
      lVar8 = lVar8 + 8;
    } while (uVar15 * 8 - lVar8 != 0);
  }
LAB_01100c0c:
  *(undefined4 *)(*(long *)this + 0xb) = 0;
  return;
}

