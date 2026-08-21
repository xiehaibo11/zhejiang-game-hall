
/* v8::internal::OrderedHashSet::Add(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::OrderedHashSet>, v8::internal::Handle<v8::internal::Object>)
    */

ulong * v8::internal::OrderedHashSet::Add(Isolate *param_1,ulong *param_2,ulong *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  int *piVar10;
  ulong uVar11;
  ulong local_68;
  
  local_68 = *param_3;
  iVar6 = Object::GetOrCreateHash((Object *)&local_68,param_1);
  uVar7 = *param_2;
  uVar2 = iVar6 >> 1;
  piVar10 = (int *)(uVar7 + 7);
  uVar9 = *(uint *)((long)piVar10 +
                   (long)(int)(((*(uint *)(uVar7 + 0xf) >> 1) - 1 & uVar2) * 4 + 0xc));
  if (uVar9 < 0xfffffffe) {
    do {
      iVar6 = (uVar9 & 0xfffffffe) + 3;
      local_68 = uVar7 & 0xffffffff00000000 |
                 (ulong)*(uint *)(uVar7 + (long)(int)((iVar6 + (*(uint *)(uVar7 + 0xf) >> 1)) * 4) +
                                 7);
      uVar7 = Object::SameValueZero((Object *)&local_68,*param_3);
      if ((uVar7 & 1) != 0) {
        return param_2;
      }
      uVar9 = *(uint *)(*param_2 + (long)(int)((iVar6 + (*(uint *)(*param_2 + 0xf) >> 1)) * 4 + 4) +
                       7);
      uVar7 = *param_2;
    } while (uVar9 < 0xfffffffe);
    piVar10 = (int *)(uVar7 + 7);
  }
  iVar6 = *(int *)(uVar7 + 0xb) >> 1;
  uVar9 = *(uint *)(uVar7 + 0xf) & 0xfffffffe;
  if ((int)uVar9 <= iVar6 + (*piVar10 >> 1)) {
    param_2 = (ulong *)OrderedHashTable<v8::internal::OrderedHashSet,1>::Rehash
                                 (param_1,param_2,
                                  uVar9 << (ulong)(iVar6 < (int)*(uint *)(uVar7 + 0xf) >> 1));
  }
  if (param_2 != (ulong *)0x0) {
    uVar11 = *param_2;
    uVar3 = *(uint *)(uVar11 + 0xf);
    uVar4 = *(uint *)(uVar11 + 7 +
                     (long)(int)(((*(uint *)(uVar11 + 0xf) >> 1) - 1 & uVar2) * 4 + 0xc));
    iVar6 = *(int *)(uVar11 + 7);
    uVar9 = (*(uint *)(uVar11 + 0xb) & 0xfffffffe) + iVar6 & 0xfffffffe;
    uVar7 = *param_3;
    iVar5 = (uVar9 + (*(uint *)(uVar11 + 0xf) >> 1)) * 4;
    puVar1 = (undefined4 *)(uVar11 + 7 + (long)(iVar5 + 0xc));
    *puVar1 = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar8 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar11,puVar1,uVar7);
        uVar8 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar11,puVar1,uVar7);
      }
    }
    *(uint *)(*param_2 + (long)(iVar5 + 0x10) + 7) = uVar4 & 0xfffffffe;
    *(uint *)(*param_2 + (long)(int)(((uVar3 >> 1) + 0x3fffffff & uVar2) * 4 + 0xc) + 7) = uVar9;
    *(uint *)(*param_2 + 7) = iVar6 + 2U & 0xfffffffe;
  }
  return param_2;
}

