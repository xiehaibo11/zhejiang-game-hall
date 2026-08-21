
/* v8::internal::ObjectHashTableBase<v8::internal::ObjectHashTable,
   v8::internal::ObjectHashTableShape>::Put(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::ObjectHashTable>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, int) */

ulong * v8::internal::
        ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::Put
                  (long param_1,ulong *param_2,ulong *param_3,ulong *param_4,uint param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  ulong local_68;
  
  uVar9 = *param_2;
  uVar2 = *(uint *)(param_1 + 0xa0);
  piVar14 = (int *)(uVar9 + 7);
  uVar5 = (*(int *)(uVar9 + 0xf) >> 1) - 1;
  uVar13 = uVar5 & param_5;
  uVar11 = *(uint *)((long)piVar14 + (long)(int)(uVar13 * 8 + 0xc));
  if (uVar11 != uVar2) {
    iVar6 = 1;
    do {
      local_68 = *param_3;
      uVar7 = Object::SameValue((Object *)&local_68,uVar9 & 0xffffffff00000000 | (ulong)uVar11);
      if ((uVar7 & 1) != 0) {
        uVar7 = *param_2;
        uVar9 = *param_4;
        puVar1 = (undefined4 *)(uVar7 + ((long)(int)(uVar13 * 8 + 0x10) | 7U));
        *puVar1 = (int)uVar9;
        if ((uVar9 & 1) == 0) {
          return param_2;
        }
        uVar10 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar10 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar7,puVar1,uVar9);
          uVar10 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
        }
        if ((uVar10 & 0x18) == 0) {
          return param_2;
        }
        if ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
          return param_2;
        }
        Heap_GenerationalBarrierSlow(uVar7,puVar1,uVar9);
        return param_2;
      }
      uVar13 = uVar13 + iVar6 & uVar5;
      uVar11 = *(uint *)((long)piVar14 + (long)(int)(uVar13 * 8 + 0xc));
      iVar6 = iVar6 + 1;
    } while (uVar11 != uVar2);
    uVar9 = *param_2;
    piVar14 = (int *)(uVar9 + 7);
  }
  if (*piVar14 >> 1 < (int)(*(uint *)(uVar9 + 0xb) & 0xfffffffe)) {
    local_68 = uVar9;
    HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::Rehash
              ((HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape> *)
               &local_68,param_1 + 0x80);
    uVar9 = *param_2;
    piVar14 = (int *)(uVar9 + 7);
  }
  iVar12 = *(int *)(uVar9 + 0xf) >> 1;
  iVar6 = (*piVar14 >> 1) + 1;
  if ((((iVar12 - iVar6 == 0 || iVar12 < iVar6) ||
       (iVar12 - iVar6 >> 1 < *(int *)(uVar9 + 0xb) >> 1)) || (iVar12 < iVar6 + (iVar6 >> 1))) &&
     (uVar13 = *piVar14 + 2,
     iVar6 = base::bits::RoundUpToPowerOfTwo32((uVar13 & 0xfffffffe) + ((int)uVar13 >> 1)),
     0x3fffffd < iVar6)) {
    Heap::CollectAllGarbage(param_1 + 0x8850,0,10,0);
    Heap::CollectAllGarbage(param_1 + 0x8850,0,10,0);
    local_68 = *param_2;
    HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::Rehash
              ((HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape> *)
               &local_68,param_1 + 0x80);
  }
  puVar8 = (ulong *)HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
                    EnsureCapacity(param_1,param_2,1,0);
  local_68 = *puVar8;
  uVar9 = *puVar8;
  uVar13 = (*(int *)(uVar9 + 0xf) >> 1) - 1;
  param_5 = uVar13 & param_5;
  iVar12 = *(int *)(uVar9 + 7 + (long)(int)(param_5 * 8 + 0xc));
  iVar6 = *(int *)((uVar9 & 0xffffffff00000000) + 0xa8);
  if ((iVar12 != iVar6) && (iVar3 = *(int *)((uVar9 & 0xffffffff00000000) + 0xa0), iVar12 != iVar3))
  {
    iVar12 = 1;
    do {
      param_5 = param_5 + iVar12 & uVar13;
      iVar4 = *(int *)(uVar9 + 7 + (long)(int)(param_5 * 8 + 0xc));
      if (iVar4 == iVar6) break;
      iVar12 = iVar12 + 1;
    } while (iVar4 != iVar3);
  }
  AddEntry((ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape> *)
           &local_68,param_5,*param_3,*param_4);
  return puVar8;
}

