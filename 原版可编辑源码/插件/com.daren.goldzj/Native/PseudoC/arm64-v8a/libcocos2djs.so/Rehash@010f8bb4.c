
/* v8::internal::HashTable<v8::internal::ObjectHashSet,
   v8::internal::ObjectHashSetShape>::Rehash(v8::internal::ReadOnlyRoots) */

void __thiscall
v8::internal::HashTable<v8::internal::ObjectHashSet,v8::internal::ObjectHashSetShape>::Rehash
          (HashTable<v8::internal::ObjectHashSet,v8::internal::ObjectHashSetShape> *this,
          long param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  bool bVar16;
  ulong local_68;
  
  iVar13 = 0;
  uVar8 = *(ulong *)((*(ulong *)this & 0xfffffffffffc0000) + 8);
  uVar15 = 1;
  uVar2 = *(int *)(*(ulong *)this + 0xf) >> 1;
  uVar14 = (ulong)uVar2;
  iVar4 = (uint)((uVar8 & 0x18) == 0) << 2;
  if ((uVar8 & 0x40000) != 0) {
    iVar4 = 4;
  }
  do {
    if (uVar2 == 0) goto LAB_010f8de8;
    uVar8 = 0;
    bVar16 = true;
    do {
      while( true ) {
        uVar6 = *(uint *)(*(ulong *)this + (long)((int)uVar8 * 4 + 0xc) + 7);
        if ((uVar6 != *(uint *)(param_2 + 0x28)) && (uVar6 != *(uint *)(param_2 + 0x20))) break;
LAB_010f8c38:
        uVar8 = uVar8 + 1;
        if (uVar14 <= uVar8) goto LAB_010f8c18;
      }
      uVar11 = *(ulong *)this & 0xffffffff00000000 | (ulong)uVar6;
      uVar6 = Object::GetSimpleHash(uVar11);
      if ((uVar6 & 1) != 0) {
        local_68 = uVar11;
        uVar6 = JSReceiver::GetIdentityHash((JSReceiver *)&local_68);
      }
      uVar11 = *(ulong *)this;
      uVar5 = (*(int *)(uVar11 + 0xf) >> 1) - 1;
      uVar12 = (ulong)(uVar5 & (int)uVar6 >> 1);
      if (1 < uVar15) {
        iVar9 = 0;
        do {
          if (uVar12 == uVar8) goto LAB_010f8c38;
          iVar1 = (int)uVar12 + iVar9;
          iVar9 = iVar9 + 1;
          uVar12 = (ulong)(iVar1 + 1U & uVar5);
        } while (iVar13 != iVar9);
      }
      if (uVar8 == uVar12) goto LAB_010f8c38;
      uVar6 = *(uint *)(uVar11 + (long)((int)uVar12 * 4 + 0xc) + 7);
      if ((uVar6 != *(uint *)(param_2 + 0x28)) && (uVar6 != *(uint *)(param_2 + 0x20))) {
        uVar11 = uVar11 & 0xffffffff00000000 | (ulong)uVar6;
        uVar6 = Object::GetSimpleHash(uVar11);
        if ((uVar6 & 1) != 0) {
          local_68 = uVar11;
          uVar6 = JSReceiver::GetIdentityHash((JSReceiver *)&local_68);
        }
        uVar5 = (*(int *)(*(long *)this + 0xf) >> 1) - 1;
        uVar11 = (ulong)(uVar5 & (int)uVar6 >> 1);
        if (1 < uVar15) {
          iVar9 = 0;
          do {
            if (uVar11 == uVar12) goto LAB_010f8c34;
            iVar1 = (int)uVar11 + iVar9;
            iVar9 = iVar9 + 1;
            uVar11 = (ulong)(iVar1 + 1U & uVar5);
          } while (iVar13 != iVar9);
        }
        if (uVar11 == uVar12) {
LAB_010f8c34:
          bVar16 = false;
          goto LAB_010f8c38;
        }
      }
      Swap(this,uVar8,uVar12,iVar4);
    } while (uVar8 < uVar14);
LAB_010f8c18:
    uVar15 = uVar15 + 1;
    iVar13 = iVar13 + 1;
  } while (!bVar16);
  if (uVar2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x20);
    iVar13 = *(int *)(param_2 + 0x28);
    lVar7 = 0;
    do {
      lVar10 = (long)((int)lVar7 + 0xc);
      if (*(int *)(*(long *)this + 7 + lVar10) == iVar13) {
        *(undefined4 *)(lVar10 + *(long *)this + 7) = uVar3;
      }
      lVar7 = lVar7 + 4;
    } while (uVar14 * 4 - lVar7 != 0);
  }
LAB_010f8de8:
  *(undefined4 *)(*(long *)this + 0xb) = 0;
  return;
}

