
/* v8::internal::HashTable<v8::internal::EphemeronHashTable,
   v8::internal::EphemeronHashTableShape>::Rehash(v8::internal::ReadOnlyRoots) */

void __thiscall
v8::internal::HashTable<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>::
Rehash(HashTable<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape> *this,
      long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  bool bVar16;
  ulong local_68;
  
  iVar13 = 0;
  uVar9 = *(ulong *)((*(ulong *)this & 0xfffffffffffc0000) + 8);
  uVar15 = 1;
  uVar3 = *(int *)(*(ulong *)this + 0xf) >> 1;
  uVar14 = (ulong)uVar3;
  iVar5 = (uint)((uVar9 & 0x18) == 0) << 2;
  if ((uVar9 & 0x40000) != 0) {
    iVar5 = 4;
  }
  do {
    if (uVar3 == 0) goto LAB_010fa6dc;
    uVar9 = 0;
    bVar16 = true;
    do {
      while( true ) {
        uVar7 = *(uint *)(*(ulong *)this + (long)((int)uVar9 * 8 + 0xc) + 7);
        if ((uVar7 != *(uint *)(param_2 + 0x28)) && (uVar7 != *(uint *)(param_2 + 0x20))) break;
LAB_010fa52c:
        uVar9 = uVar9 + 1;
        if (uVar14 <= uVar9) goto LAB_010fa50c;
      }
      uVar11 = *(ulong *)this & 0xffffffff00000000 | (ulong)uVar7;
      uVar7 = Object::GetSimpleHash(uVar11);
      if ((uVar7 & 1) != 0) {
        local_68 = uVar11;
        uVar7 = JSReceiver::GetIdentityHash((JSReceiver *)&local_68);
      }
      uVar11 = *(ulong *)this;
      uVar6 = (*(int *)(uVar11 + 0xf) >> 1) - 1;
      uVar12 = (ulong)(uVar6 & (int)uVar7 >> 1);
      if (1 < uVar15) {
        iVar10 = 0;
        do {
          if (uVar12 == uVar9) goto LAB_010fa52c;
          iVar2 = (int)uVar12 + iVar10;
          iVar10 = iVar10 + 1;
          uVar12 = (ulong)(iVar2 + 1U & uVar6);
        } while (iVar13 != iVar10);
      }
      if (uVar9 == uVar12) goto LAB_010fa52c;
      uVar7 = *(uint *)(uVar11 + (long)((int)uVar12 * 8 + 0xc) + 7);
      if ((uVar7 != *(uint *)(param_2 + 0x28)) && (uVar7 != *(uint *)(param_2 + 0x20))) {
        uVar11 = uVar11 & 0xffffffff00000000 | (ulong)uVar7;
        uVar7 = Object::GetSimpleHash(uVar11);
        if ((uVar7 & 1) != 0) {
          local_68 = uVar11;
          uVar7 = JSReceiver::GetIdentityHash((JSReceiver *)&local_68);
        }
        uVar6 = (*(int *)(*(long *)this + 0xf) >> 1) - 1;
        uVar11 = (ulong)(uVar6 & (int)uVar7 >> 1);
        if (1 < uVar15) {
          iVar10 = 0;
          do {
            if (uVar11 == uVar12) goto LAB_010fa528;
            iVar2 = (int)uVar11 + iVar10;
            iVar10 = iVar10 + 1;
            uVar11 = (ulong)(iVar2 + 1U & uVar6);
          } while (iVar13 != iVar10);
        }
        if (uVar11 == uVar12) {
LAB_010fa528:
          bVar16 = false;
          goto LAB_010fa52c;
        }
      }
      Swap(this,uVar9,uVar12,iVar5);
    } while (uVar9 < uVar14);
LAB_010fa50c:
    uVar15 = uVar15 + 1;
    iVar13 = iVar13 + 1;
  } while (!bVar16);
  if (uVar3 != 0) {
    uVar4 = *(undefined4 *)(param_2 + 0x20);
    iVar13 = *(int *)(param_2 + 0x28);
    lVar8 = 0;
    do {
      lVar1 = (long)((int)lVar8 + 0xc) + 7;
      if (*(int *)(lVar1 + *(long *)this) == iVar13) {
        *(undefined4 *)(*(long *)this + lVar1) = uVar4;
      }
      lVar8 = lVar8 + 8;
    } while (uVar14 * 8 - lVar8 != 0);
  }
LAB_010fa6dc:
  *(undefined4 *)(*(long *)this + 0xb) = 0;
  return;
}

