
/* v8::internal::HashTable<v8::internal::NameDictionary,
   v8::internal::NameDictionaryShape>::Rehash(v8::internal::ReadOnlyRoots) */

void __thiscall
v8::internal::HashTable<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::Rehash
          (HashTable<v8::internal::NameDictionary,v8::internal::NameDictionaryShape> *this,
          long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  ulong local_68;
  
  uVar10 = *(ulong *)((*(ulong *)this & 0xfffffffffffc0000) + 8);
  iVar16 = 0;
  uVar17 = 1;
  uVar3 = *(int *)(*(ulong *)this + 0xf) >> 1;
  uVar15 = (ulong)uVar3;
  iVar5 = (uint)((uVar10 & 0x18) == 0) << 2;
  if ((uVar10 & 0x40000) != 0) {
    iVar5 = 4;
  }
  do {
    if (uVar3 == 0) goto LAB_0110bf08;
    uVar10 = 0;
    bVar7 = true;
    do {
      while( true ) {
        uVar9 = *(ulong *)this;
        uVar8 = *(uint *)(uVar9 + ((long)(uVar10 * 0xc00000000 + 0x1400000000) >> 0x20) + 7);
        if ((uVar8 != *(uint *)(param_2 + 0x28)) && (uVar8 != *(uint *)(param_2 + 0x20))) break;
LAB_0110bd50:
        uVar10 = uVar10 + 1;
        if (uVar15 <= uVar10) goto LAB_0110bd28;
      }
      uVar11 = uVar9 & 0xffffffff00000000 | (ulong)uVar8;
      uVar8 = *(uint *)(uVar11 + 3);
      if ((uVar8 & 1) == 0) {
        uVar8 = uVar8 >> 3;
      }
      else {
        local_68 = uVar11;
        uVar8 = String::ComputeAndSetHash((String *)&local_68);
        uVar9 = *(ulong *)this;
      }
      piVar12 = (int *)(uVar9 + 0xf);
      uVar6 = (*piVar12 >> 1) - 1;
      uVar11 = (ulong)(uVar6 & uVar8);
      if (1 < uVar17) {
        iVar14 = 0;
        do {
          if (uVar11 == uVar10) goto LAB_0110bd50;
          iVar2 = (int)uVar11 + iVar14;
          iVar14 = iVar14 + 1;
          uVar11 = (ulong)(iVar2 + 1U & uVar6);
        } while (iVar16 != iVar14);
      }
      if (uVar10 == uVar11) goto LAB_0110bd50;
      uVar8 = *(uint *)(uVar9 + ((long)(uVar11 * 0xc00000000 + 0x1400000000) >> 0x20) + 7);
      if ((uVar8 != *(uint *)(param_2 + 0x28)) && (uVar8 != *(uint *)(param_2 + 0x20))) {
        uVar9 = uVar9 & 0xffffffff00000000 | (ulong)uVar8;
        uVar8 = *(uint *)(uVar9 + 3);
        if ((uVar8 & 1) == 0) {
          uVar8 = uVar8 >> 3;
        }
        else {
          local_68 = uVar9;
          uVar8 = String::ComputeAndSetHash((String *)&local_68);
          piVar12 = (int *)(*(long *)this + 0xf);
        }
        uVar6 = (*piVar12 >> 1) - 1;
        uVar9 = (ulong)(uVar6 & uVar8);
        if (1 < uVar17) {
          iVar14 = 0;
          do {
            if (uVar9 == uVar11) goto LAB_0110bd4c;
            iVar2 = (int)uVar9 + iVar14;
            iVar14 = iVar14 + 1;
            uVar9 = (ulong)(iVar2 + 1U & uVar6);
          } while (iVar16 != iVar14);
        }
        if (uVar9 == uVar11) {
LAB_0110bd4c:
          bVar7 = false;
          goto LAB_0110bd50;
        }
      }
      Swap(this,uVar10,uVar11,iVar5);
    } while (uVar10 < uVar15);
LAB_0110bd28:
    uVar17 = uVar17 + 1;
    iVar16 = iVar16 + 1;
  } while (!bVar7);
  if (uVar3 != 0) {
    uVar4 = *(undefined4 *)(param_2 + 0x20);
    iVar16 = *(int *)(param_2 + 0x28);
    lVar13 = 0x1400000000;
    do {
      lVar1 = (lVar13 >> 0x20) + 7;
      if (*(int *)(*(long *)this + lVar1) == iVar16) {
        *(undefined4 *)(*(long *)this + lVar1) = uVar4;
      }
      uVar15 = uVar15 - 1;
      lVar13 = lVar13 + 0xc00000000;
    } while (uVar15 != 0);
  }
LAB_0110bf08:
  *(undefined4 *)(*(long *)this + 0xb) = 0;
  return;
}

