
/* v8::internal::OrderedHashTable<v8::internal::OrderedHashSet, 1>::Delete(v8::internal::Isolate*,
   v8::internal::OrderedHashSet, v8::internal::Object) */

undefined8
v8::internal::OrderedHashTable<v8::internal::OrderedHashSet,1>::Delete(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong local_28;
  
  local_28 = param_2;
  iVar4 = FindEntry((OrderedHashTable<v8::internal::OrderedHashSet,1> *)&local_28,param_1);
  if (iVar4 == -1) {
    uVar5 = 0;
  }
  else {
    iVar2 = *(int *)(local_28 + 7);
    iVar3 = *(int *)(local_28 + 0xb);
    uVar8 = *(ulong *)(param_1 + 0xa8);
    lVar1 = (long)(int)((iVar4 * 2 + (*(uint *)(local_28 + 0xf) >> 1)) * 4 + 0xc) + 7;
    *(int *)(local_28 + lVar1) = (int)uVar8;
    if ((uVar8 & 1) != 0) {
      puVar9 = (ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
      uVar7 = *puVar9;
      lVar6 = local_28 + lVar1;
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(local_28,lVar6,uVar8);
        uVar7 = *puVar9;
        lVar6 = local_28 + lVar1;
      }
      if (((uVar7 & 0x18) != 0) && ((*(byte *)((local_28 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(local_28,lVar6,uVar8);
      }
    }
    *(uint *)(local_28 + 7) = iVar2 - 2U & 0xfffffffe;
    uVar5 = 1;
    *(uint *)(local_28 + 0xb) = iVar3 + 2U & 0xfffffffe;
  }
  return uVar5;
}

