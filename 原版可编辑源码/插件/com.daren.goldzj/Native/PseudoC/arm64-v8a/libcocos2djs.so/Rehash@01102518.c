
/* v8::internal::HashTable<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::Rehash(v8::internal::ReadOnlyRoots) */

void __thiscall
v8::internal::HashTable<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::Rehash
          (HashTable<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape> *this,
          long param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  bool bVar17;
  ulong local_48;
  
  iVar14 = 0;
  uVar9 = *(ulong *)((*(ulong *)this & 0xfffffffffffc0000) + 8);
  uVar16 = 1;
  uVar2 = *(int *)(*(ulong *)this + 0xf) >> 1;
  uVar15 = (ulong)uVar2;
  iVar4 = (uint)((uVar9 & 0x18) == 0) << 2;
  if ((uVar9 & 0x40000) != 0) {
    iVar4 = 4;
  }
  do {
    if (uVar2 == 0) goto LAB_01102750;
    uVar9 = 0;
    bVar17 = true;
    do {
      while( true ) {
        uVar7 = *(ulong *)this;
        uVar6 = *(uint *)(uVar7 + (long)((int)uVar9 * 4 + 0x14) + 7);
        if (uVar6 != *(uint *)(param_2 + 0x20)) break;
LAB_01102598:
        uVar9 = uVar9 + 1;
        if (uVar15 <= uVar9) goto LAB_01102578;
      }
      uVar10 = uVar7 & 0xffffffff00000000 |
               (ulong)*(uint *)((uVar7 & 0xffffffff00000000 | (ulong)uVar6) + 3);
      uVar6 = *(uint *)(uVar10 + 3);
      if ((uVar6 & 1) == 0) {
        uVar6 = uVar6 >> 3;
      }
      else {
        local_48 = uVar10;
        uVar6 = String::ComputeAndSetHash((String *)&local_48);
        uVar7 = *(ulong *)this;
      }
      piVar11 = (int *)(uVar7 + 0xf);
      uVar5 = (*piVar11 >> 1) - 1;
      uVar10 = (ulong)(uVar5 & uVar6);
      if (1 < uVar16) {
        iVar12 = 0;
        do {
          if (uVar10 == uVar9) goto LAB_01102598;
          iVar1 = (int)uVar10 + iVar12;
          iVar12 = iVar12 + 1;
          uVar10 = (ulong)(iVar1 + 1U & uVar5);
        } while (iVar14 != iVar12);
      }
      if (uVar9 == uVar10) goto LAB_01102598;
      uVar6 = *(uint *)(uVar7 + (long)((int)uVar10 * 4 + 0x14) + 7);
      if (uVar6 != *(uint *)(param_2 + 0x20)) {
        uVar7 = uVar7 & 0xffffffff00000000 |
                (ulong)*(uint *)((uVar7 & 0xffffffff00000000 | (ulong)uVar6) + 3);
        uVar6 = *(uint *)(uVar7 + 3);
        if ((uVar6 & 1) == 0) {
          uVar6 = uVar6 >> 3;
        }
        else {
          local_48 = uVar7;
          uVar6 = String::ComputeAndSetHash((String *)&local_48);
          piVar11 = (int *)(*(long *)this + 0xf);
        }
        uVar5 = (*piVar11 >> 1) - 1;
        uVar7 = (ulong)(uVar5 & uVar6);
        if (1 < uVar16) {
          iVar12 = 0;
          do {
            if (uVar7 == uVar10) goto LAB_01102594;
            iVar1 = (int)uVar7 + iVar12;
            iVar12 = iVar12 + 1;
            uVar7 = (ulong)(iVar1 + 1U & uVar5);
          } while (iVar14 != iVar12);
        }
        if (uVar7 == uVar10) {
LAB_01102594:
          bVar17 = false;
          goto LAB_01102598;
        }
      }
      Swap(this,uVar9,uVar10,iVar4);
    } while (uVar9 < uVar15);
LAB_01102578:
    uVar16 = uVar16 + 1;
    iVar14 = iVar14 + 1;
  } while (!bVar17);
  if (uVar2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x20);
    iVar14 = *(int *)(param_2 + 0x28);
    lVar8 = 0;
    do {
      lVar13 = (long)((int)lVar8 + 0x14);
      if (*(int *)(*(long *)this + 7 + lVar13) == iVar14) {
        *(undefined4 *)(lVar13 + *(long *)this + 7) = uVar3;
      }
      lVar8 = lVar8 + 4;
    } while (uVar15 * 4 - lVar8 != 0);
  }
LAB_01102750:
  *(undefined4 *)(*(long *)this + 0xb) = 0;
  return;
}

