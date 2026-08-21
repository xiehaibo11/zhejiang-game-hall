
/* v8::internal::HashTable<v8::internal::ObjectHashTable,
   v8::internal::ObjectHashTableShape>::Rehash(v8::internal::ReadOnlyRoots,
   v8::internal::ObjectHashTable) */

void __thiscall
v8::internal::HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::Rehash
          (HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape> *this,
          long param_2,ulong param_3)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
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
  uVar5 = *(uint *)(uVar11 + 0xf);
  if ((int)uVar5 >> 1 != 0) {
    uVar13 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
    pbVar12 = (byte *)(param_3 & 0xfffffffffffc0000 | 8);
    lVar17 = 0;
    bVar8 = (uVar13 & 0x40000) != 0;
    bVar9 = (uVar13 & 0x18) == 0;
    lVar2 = param_3 + 7;
    do {
      iVar6 = (int)lVar17 * 8;
      lVar3 = (long)(iVar6 + 0xc) + 7;
      uVar10 = *(uint *)(uVar11 + lVar3);
      if ((uVar10 != *(uint *)(param_2 + 0x28)) && (uVar10 != *(uint *)(param_2 + 0x20))) {
        uVar11 = uVar11 & 0xffffffff00000000 | (ulong)uVar10;
        uVar10 = Object::GetSimpleHash(uVar11);
        if ((uVar10 & 1) != 0) {
          local_68 = uVar11;
          uVar10 = JSReceiver::GetIdentityHash((JSReceiver *)&local_68);
        }
        uVar7 = (*(int *)(param_3 + 0xf) >> 1) - 1;
        uVar10 = uVar7 & (int)uVar10 >> 1;
        iVar14 = *(int *)(lVar2 + (int)(uVar10 * 8 + 0xc));
        iVar4 = *(int *)((param_3 & 0xffffffff00000000) + 0xa8);
        if (iVar14 != iVar4) {
          iVar15 = 1;
          do {
            if (iVar14 == *(int *)((param_3 & 0xffffffff00000000) + 0xa0)) break;
            uVar10 = uVar10 + iVar15 & uVar7;
            iVar14 = *(int *)(lVar2 + (int)(uVar10 * 8 + 0xc));
            iVar15 = iVar15 + 1;
          } while (iVar14 != iVar4);
        }
        uVar11 = *(ulong *)this;
        puVar1 = (uint *)(lVar2 + (int)(uVar10 * 8 + 0xc));
        uVar7 = *(uint *)(uVar11 + lVar3);
        *puVar1 = uVar7;
        if ((bVar8 || bVar9) && (uVar7 & 1) != 0) {
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
        uVar7 = *(uint *)(uVar11 + ((long)(iVar6 + 0x10) | 7U));
        puVar1 = (uint *)(lVar2 + (int)(uVar10 * 8 + 0x10));
        *puVar1 = uVar7;
        if ((bVar8 || bVar9) && (uVar7 & 1) != 0) {
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
    } while (lVar17 != (long)((ulong)uVar5 << 0x20) >> 0x21);
  }
  *(uint *)(param_3 + 7) = *(uint *)(uVar11 + 7) & 0xfffffffe;
  *(undefined4 *)(param_3 + 0xb) = 0;
  return;
}

