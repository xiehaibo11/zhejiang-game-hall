
/* v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::Delete(v8::internal::Isolate*,
   v8::internal::SmallOrderedHashSet, v8::internal::Object) */

undefined8
v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::Delete
          (long param_1,ulong param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong local_28;
  
  local_28 = param_2;
  iVar3 = FindEntry((SmallOrderedHashTable<v8::internal::SmallOrderedHashSet> *)&local_28,param_1);
  if (iVar3 == 0xff) {
    uVar4 = 0;
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0xa8);
    lVar8 = (long)(iVar3 * 4 + 8) + -1;
    cVar1 = *(char *)(local_28 + 3);
    cVar2 = *(char *)(local_28 + 4);
    *(int *)(local_28 + lVar8) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      puVar9 = (ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      uVar6 = *puVar9;
      lVar5 = local_28 + lVar8;
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(local_28,lVar5,uVar7);
        uVar6 = *puVar9;
        lVar5 = local_28 + lVar8;
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((local_28 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(local_28,lVar5,uVar7);
      }
    }
    *(char *)(local_28 + 3) = cVar1 + -1;
    uVar4 = 1;
    *(char *)(local_28 + 4) = cVar2 + '\x01';
  }
  return uVar4;
}

