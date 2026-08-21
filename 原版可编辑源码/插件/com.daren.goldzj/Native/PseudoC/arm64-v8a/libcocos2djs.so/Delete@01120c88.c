
/* v8::internal::OrderedHashTable<v8::internal::OrderedHashMap, 2>::Delete(v8::internal::Isolate*,
   v8::internal::OrderedHashMap, v8::internal::Object) */

undefined8
v8::internal::OrderedHashTable<v8::internal::OrderedHashMap,2>::Delete(long param_1,ulong param_2)

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
  ulong local_48;
  
  local_48 = param_2;
  iVar4 = FindEntry((OrderedHashTable<v8::internal::OrderedHashMap,2> *)&local_48,param_1);
  if (iVar4 == -1) {
    uVar5 = 0;
  }
  else {
    iVar2 = *(int *)(local_48 + 7);
    iVar3 = *(int *)(local_48 + 0xb);
    uVar8 = *(ulong *)(param_1 + 0xa8);
    iVar4 = (iVar4 * 3 + (*(uint *)(local_48 + 0xf) >> 1) + 3) * 4;
    lVar1 = (long)iVar4 + 7;
    *(int *)(local_48 + lVar1) = (int)uVar8;
    puVar9 = (ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    if ((uVar8 & 1) != 0) {
      uVar7 = *puVar9;
      lVar6 = local_48 + lVar1;
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(local_48,lVar6,uVar8);
        uVar7 = *puVar9;
        lVar6 = local_48 + lVar1;
      }
      if (((uVar7 & 0x18) != 0) && ((*(byte *)((local_48 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(local_48,lVar6,uVar8);
      }
    }
    lVar1 = (long)(iVar4 + 4) + 7;
    *(int *)(local_48 + lVar1) = (int)uVar8;
    if ((uVar8 & 1) != 0) {
      uVar7 = *puVar9;
      lVar6 = local_48 + lVar1;
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(local_48,lVar6,uVar8);
        uVar7 = *puVar9;
        lVar6 = local_48 + lVar1;
      }
      if (((uVar7 & 0x18) != 0) && ((*(byte *)((local_48 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(local_48,lVar6,uVar8);
      }
    }
    *(uint *)(local_48 + 7) = iVar2 - 2U & 0xfffffffe;
    uVar5 = 1;
    *(uint *)(local_48 + 0xb) = iVar3 + 2U & 0xfffffffe;
  }
  return uVar5;
}

