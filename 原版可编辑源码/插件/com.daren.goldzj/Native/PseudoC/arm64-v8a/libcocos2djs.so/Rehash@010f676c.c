
/* v8::internal::HashTable<v8::internal::CompilationCacheTable,
   v8::internal::CompilationCacheShape>::Rehash(v8::internal::ReadOnlyRoots) */

void __thiscall
v8::internal::HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>::
Rehash(HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape> *this,
      long param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  bool bVar12;
  
  uVar8 = *(ulong *)((*(ulong *)this & 0xfffffffffffc0000) + 8);
  iVar10 = 1;
  uVar2 = *(int *)(*(ulong *)this + 0xf) >> 1;
  uVar11 = (ulong)uVar2;
  iVar5 = (uint)((uVar8 & 0x18) == 0) << 2;
  if ((uVar8 & 0x40000) != 0) {
    iVar5 = 4;
  }
  do {
    if (uVar2 == 0) goto LAB_010f68fc;
    uVar8 = 0;
    bVar12 = true;
    do {
      while( true ) {
        uVar4 = *(uint *)(*(ulong *)this + ((long)(uVar8 * 0xc00000000 + 0xc00000000) >> 0x20) + 7);
        if (((uVar4 != *(uint *)(param_2 + 0x28)) && (uVar4 != *(uint *)(param_2 + 0x20))) &&
           (uVar6 = EntryForProbe(this,param_2,*(ulong *)this & 0xffffffff00000000 | (ulong)uVar4,
                                  iVar10,uVar8), uVar8 != uVar6)) break;
LAB_010f67e8:
        uVar8 = uVar8 + 1;
        if (uVar11 <= uVar8) goto LAB_010f67cc;
      }
      uVar4 = *(uint *)(*(ulong *)this + ((long)(uVar6 * 0xc00000000 + 0xc00000000) >> 0x20) + 7);
      if (((uVar4 != *(uint *)(param_2 + 0x28)) && (uVar4 != *(uint *)(param_2 + 0x20))) &&
         (uVar7 = EntryForProbe(this,param_2,*(ulong *)this & 0xffffffff00000000 | (ulong)uVar4,
                                iVar10,uVar6), uVar7 == uVar6)) {
        bVar12 = false;
        goto LAB_010f67e8;
      }
      Swap(this,uVar8,uVar6,iVar5);
    } while (uVar8 < uVar11);
LAB_010f67cc:
    iVar10 = iVar10 + 1;
  } while (!bVar12);
  if (uVar2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x20);
    iVar10 = *(int *)(param_2 + 0x28);
    lVar9 = 0xc00000000;
    do {
      lVar1 = (lVar9 >> 0x20) + 7;
      if (*(int *)(*(long *)this + lVar1) == iVar10) {
        *(undefined4 *)(*(long *)this + lVar1) = uVar3;
      }
      uVar11 = uVar11 - 1;
      lVar9 = lVar9 + 0xc00000000;
    } while (uVar11 != 0);
  }
LAB_010f68fc:
  *(undefined4 *)(*(long *)this + 0xb) = 0;
  return;
}

