
/* v8::internal::OrderedHashMap::Add(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::OrderedHashMap>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>) */

ulong * v8::internal::OrderedHashMap::Add
                  (Isolate *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  ulong local_68;
  
  local_68 = *param_3;
  iVar8 = Object::GetOrCreateHash((Object *)&local_68,param_1);
  uVar9 = *param_2;
  uVar4 = iVar8 >> 1;
  piVar11 = (int *)(uVar9 + 7);
  iVar8 = *(int *)((long)piVar11 +
                  (long)(int)(((*(uint *)(uVar9 + 0xf) >> 1) - 1 & uVar4) * 4 + 0xc)) >> 1;
  if (iVar8 != -1) {
    uVar12 = *param_3;
    do {
      iVar8 = iVar8 * 3 + 3;
      local_68 = uVar9 & 0xffffffff00000000 |
                 (ulong)*(uint *)(uVar9 + (long)(int)((iVar8 + (*(uint *)(uVar9 + 0xf) >> 1)) * 4) +
                                 7);
      uVar9 = Object::SameValueZero((Object *)&local_68,uVar12);
      if ((uVar9 & 1) != 0) {
        return param_2;
      }
      uVar9 = *param_2;
      iVar8 = *(int *)(*param_2 + (long)(int)((iVar8 + (*(uint *)(*param_2 + 0xf) >> 1)) * 4 + 8) +
                      7) >> 1;
    } while (iVar8 != -1);
    piVar11 = (int *)(uVar9 + 7);
  }
  iVar8 = *(int *)(uVar9 + 0xb) >> 1;
  uVar3 = *(uint *)(uVar9 + 0xf) & 0xfffffffe;
  if ((int)uVar3 <= iVar8 + (*piVar11 >> 1)) {
    param_2 = (ulong *)OrderedHashTable<v8::internal::OrderedHashMap,2>::Rehash
                                 (param_1,param_2,
                                  uVar3 << (ulong)(iVar8 < (int)*(uint *)(uVar9 + 0xf) >> 1));
  }
  if (param_2 != (ulong *)0x0) {
    uVar12 = *param_2;
    uVar3 = *(uint *)(uVar12 + 0xf);
    uVar6 = *(uint *)(uVar12 + 7 +
                     (long)(int)(((*(uint *)(uVar12 + 0xf) >> 1) - 1 & uVar4) * 4 + 0xc));
    iVar5 = *(int *)(uVar12 + 7);
    uVar9 = *param_3;
    iVar8 = (*(int *)(uVar12 + 0xb) >> 1) + (iVar5 >> 1);
    iVar7 = (iVar8 * 3 + (*(uint *)(uVar12 + 0xf) >> 1)) * 4;
    puVar1 = (undefined4 *)(uVar12 + 7 + (long)(iVar7 + 0xc));
    *puVar1 = (int)uVar9;
    if ((uVar9 & 1) != 0) {
      uVar10 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar10 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar12,puVar1,uVar9);
        uVar10 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar12,puVar1,uVar9);
      }
    }
    uVar12 = *param_2;
    uVar9 = *param_4;
    lVar2 = uVar12 + (long)(iVar7 + 0x10);
    *(int *)(lVar2 + 7) = (int)uVar9;
    if ((uVar9 & 1) != 0) {
      uVar10 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
      lVar2 = lVar2 + 7;
      if (((uint)uVar10 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar12,lVar2,uVar9);
        uVar10 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar12,lVar2,uVar9);
      }
    }
    *(uint *)(*param_2 + (long)(iVar7 + 0x14) + 7) = uVar6 & 0xfffffffe;
    *(int *)(*param_2 + (long)(int)(((uVar3 >> 1) + 0x3fffffff & uVar4) * 4 + 0xc) + 7) = iVar8 * 2;
    *(uint *)(*param_2 + 7) = iVar5 + 2U & 0xfffffffe;
  }
  return param_2;
}

