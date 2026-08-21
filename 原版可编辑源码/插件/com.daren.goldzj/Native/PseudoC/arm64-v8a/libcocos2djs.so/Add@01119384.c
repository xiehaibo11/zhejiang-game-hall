
/* v8::internal::ObjectHashSet::Add(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::ObjectHashSet>, v8::internal::Handle<v8::internal::Object>) */

ulong * v8::internal::ObjectHashSet::Add(Isolate *param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  ulong local_68;
  
  uVar11 = *param_3;
  uVar6 = Object::GetSimpleHash(uVar11);
  if ((uVar6 & 1) != 0) {
    local_68 = uVar11;
    uVar6 = JSReceiver::GetOrCreateIdentityHash((JSReceiver *)&local_68,param_1);
  }
  uVar11 = *param_2;
  uVar2 = *(uint *)(param_1 + 0xa0);
  uVar5 = (*(int *)(uVar11 + 0xf) >> 1) - 1;
  uVar13 = uVar5 & (int)uVar6 >> 1;
  uVar4 = *(uint *)(uVar11 + 7 + (long)(int)(uVar13 * 4 + 0xc));
  if (uVar4 != uVar2) {
    iVar14 = 1;
    do {
      local_68 = *param_3;
      uVar7 = Object::SameValue((Object *)&local_68,uVar11 & 0xffffffff00000000 | (ulong)uVar4);
      if ((uVar7 & 1) != 0) {
        return param_2;
      }
      uVar13 = uVar13 + iVar14 & uVar5;
      uVar4 = *(uint *)(uVar11 + 7 + (long)(int)(uVar13 * 4 + 0xc));
      iVar14 = iVar14 + 1;
    } while (uVar4 != uVar2);
  }
  puVar8 = (ulong *)HashTable<v8::internal::ObjectHashSet,v8::internal::ObjectHashSetShape>::
                    EnsureCapacity(param_1,param_2,1,0);
  uVar11 = *puVar8;
  lVar1 = uVar11 + 7;
  uVar13 = (*(int *)(uVar11 + 0xf) >> 1) - 1;
  uVar6 = uVar13 & (int)uVar6 >> 1;
  piVar12 = (int *)(lVar1 + (int)(uVar6 * 4 + 0xc));
  iVar14 = *piVar12;
  iVar3 = *(int *)((uVar11 & 0xffffffff00000000) + 0xa8);
  if (iVar14 != iVar3) {
    iVar10 = 1;
    do {
      if (iVar14 == *(int *)((uVar11 & 0xffffffff00000000) + 0xa0)) {
        piVar12 = (int *)(lVar1 + (int)(uVar6 * 4 + 0xc));
        break;
      }
      uVar6 = uVar6 + iVar10 & uVar13;
      piVar12 = (int *)(lVar1 + (int)(uVar6 * 4 + 0xc));
      iVar14 = *piVar12;
      iVar10 = iVar10 + 1;
    } while (iVar14 != iVar3);
  }
  uVar7 = *param_3;
  *piVar12 = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar9 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar11,piVar12,uVar7);
      uVar9 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar11,piVar12,uVar7);
    }
  }
  *(uint *)(*puVar8 + 7) = *(uint *)(*puVar8 + 7) + 2 & 0xfffffffe;
  return puVar8;
}

