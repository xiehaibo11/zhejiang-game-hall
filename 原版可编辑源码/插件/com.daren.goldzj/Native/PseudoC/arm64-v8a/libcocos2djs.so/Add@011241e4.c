
/* v8::internal::OrderedNameDictionary::Add(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::OrderedNameDictionary>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::PropertyDetails) */

ulong * v8::internal::OrderedNameDictionary::Add
                  (undefined8 param_1,ulong *param_2,ulong *param_3,ulong *param_4,int param_5)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_68;
  
  uVar10 = *param_2;
  iVar3 = *(int *)(uVar10 + 0xf) >> 1;
  uVar8 = *(uint *)(uVar10 + 0x13) & 0xfffffffe;
  if (iVar3 + (*(int *)(uVar10 + 0xb) >> 1) < (int)uVar8) {
    puVar9 = param_2;
    if (param_2 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
  }
  else {
    puVar9 = (ulong *)OrderedHashTable<v8::internal::OrderedNameDictionary,3>::Rehash
                                (param_1,param_2,
                                 uVar8 << (ulong)(iVar3 < (int)*(uint *)(uVar10 + 0x13) >> 1));
    if (puVar9 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    *(uint *)(*puVar9 + 7) = *(uint *)(*param_2 + 7) & 0xfffffffe;
  }
  uVar10 = *param_3;
  if ((*(uint *)(uVar10 + 3) & 1) == 0) {
    uVar8 = *(uint *)(uVar10 + 3) >> 3;
  }
  else {
    local_68 = uVar10;
    uVar8 = String::ComputeAndSetHash((String *)&local_68);
    uVar10 = *param_3;
  }
  uVar12 = *puVar9;
  uVar4 = *(uint *)(uVar12 + 0x13);
  uVar6 = *(uint *)(uVar12 + 7 +
                   (long)(int)(((*(uint *)(uVar12 + 0x13) >> 1) - 1 & uVar8) * 4 + 0x10));
  iVar5 = *(int *)(uVar12 + 0xb);
  iVar3 = (*(int *)(uVar12 + 0xf) >> 1) + (iVar5 >> 1);
  iVar7 = ((*(uint *)(uVar12 + 0x13) >> 1) + iVar3 * 4) * 4;
  puVar1 = (undefined4 *)(uVar12 + 7 + (long)(iVar7 + 0x10));
  *puVar1 = (int)uVar10;
  if ((uVar10 & 1) != 0) {
    uVar11 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar11 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar12,puVar1,uVar10);
      uVar11 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar12,puVar1,uVar10);
    }
  }
  uVar12 = *puVar9;
  uVar10 = *param_4;
  lVar2 = uVar12 + (long)(iVar7 + 0x14);
  *(int *)(lVar2 + 7) = (int)uVar10;
  if ((uVar10 & 1) != 0) {
    uVar11 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    lVar2 = lVar2 + 7;
    if (((uint)uVar11 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar12,lVar2,uVar10);
      uVar11 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar12,lVar2,uVar10);
    }
  }
  *(int *)(*puVar9 + (long)(iVar7 + 0x18) + 7) = param_5 << 1;
  *(uint *)(*puVar9 + (long)(iVar7 + 0x1c) + 7) = uVar6 & 0xfffffffe;
  *(int *)(*puVar9 + (long)(int)(((uVar4 >> 1) + 0x3fffffff & uVar8) * 4 + 0x10) + 7) = iVar3 * 2;
  *(uint *)(*puVar9 + 0xb) = iVar5 + 2U & 0xfffffffe;
  return puVar9;
}

