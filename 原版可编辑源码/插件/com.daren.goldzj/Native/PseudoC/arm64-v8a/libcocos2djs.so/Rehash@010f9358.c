
/* v8::internal::HashTable<v8::internal::ObjectHashSet,
   v8::internal::ObjectHashSetShape>::Rehash(v8::internal::ReadOnlyRoots,
   v8::internal::ObjectHashSet) */

void __thiscall
v8::internal::HashTable<v8::internal::ObjectHashSet,v8::internal::ObjectHashSetShape>::Rehash
          (HashTable<v8::internal::ObjectHashSet,v8::internal::ObjectHashSetShape> *this,
          long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  ulong local_68;
  
  uVar7 = *(ulong *)this;
  uVar4 = *(uint *)(uVar7 + 0xf);
  if ((int)uVar4 >> 1 != 0) {
    uVar9 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
    lVar14 = 0;
    lVar1 = param_3 + 7;
    do {
      lVar2 = (long)((int)lVar14 * 4 + 0xc) + 7;
      uVar6 = *(uint *)(uVar7 + lVar2);
      if ((uVar6 != *(uint *)(param_2 + 0x28)) && (uVar6 != *(uint *)(param_2 + 0x20))) {
        uVar7 = uVar7 & 0xffffffff00000000 | (ulong)uVar6;
        uVar6 = Object::GetSimpleHash(uVar7);
        if ((uVar6 & 1) != 0) {
          local_68 = uVar7;
          uVar6 = JSReceiver::GetIdentityHash((JSReceiver *)&local_68);
        }
        uVar5 = (*(int *)(param_3 + 0xf) >> 1) - 1;
        uVar6 = uVar5 & (int)uVar6 >> 1;
        puVar12 = (uint *)(lVar1 + (int)(uVar6 * 4 + 0xc));
        uVar10 = *puVar12;
        uVar3 = *(uint *)((param_3 & 0xffffffff00000000) + 0xa8);
        if (uVar10 != uVar3) {
          iVar11 = 1;
          do {
            if (uVar10 == *(uint *)((param_3 & 0xffffffff00000000) + 0xa0)) {
              puVar12 = (uint *)(lVar1 + (int)(uVar6 * 4 + 0xc));
              break;
            }
            uVar6 = uVar6 + iVar11 & uVar5;
            puVar12 = (uint *)(lVar1 + (int)(uVar6 * 4 + 0xc));
            uVar10 = *puVar12;
            iVar11 = iVar11 + 1;
          } while (uVar10 != uVar3);
        }
        uVar7 = *(ulong *)this;
        uVar6 = *(uint *)(uVar7 + lVar2);
        *puVar12 = uVar6;
        if (((uVar9 & 0x40000) != 0 || (uVar9 & 0x18) == 0) && (uVar6 & 1) != 0) {
          uVar7 = uVar7 & 0xffffffff00000000;
          uVar13 = uVar7 | uVar6;
          uVar7 = uVar7 | (ulong)uVar6 & 0xfffffffffffc0000;
          uVar8 = *(ulong *)(uVar7 + 8);
          if (((uint)uVar8 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_3,puVar12,uVar13);
            uVar8 = *(ulong *)(uVar7 | 8);
          }
          if (((uVar8 & 0x18) != 0) && ((*(byte *)(param_3 & 0xfffffffffffc0000 | 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(param_3,puVar12,uVar13);
          }
        }
      }
      uVar7 = *(ulong *)this;
      lVar14 = lVar14 + 1;
    } while (lVar14 != (long)((ulong)uVar4 << 0x20) >> 0x21);
  }
  *(uint *)(param_3 + 7) = *(uint *)(uVar7 + 7) & 0xfffffffe;
  *(undefined4 *)(param_3 + 0xb) = 0;
  return;
}

