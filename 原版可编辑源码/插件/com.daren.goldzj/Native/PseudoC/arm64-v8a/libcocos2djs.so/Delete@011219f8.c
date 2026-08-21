
/* v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::Delete(v8::internal::Isolate*,
   v8::internal::SmallOrderedHashMap, v8::internal::Object) */

undefined8
v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::Delete
          (long param_1,ulong param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong local_48;
  
  local_48 = param_2;
  iVar3 = FindEntry((SmallOrderedHashTable<v8::internal::SmallOrderedHashMap> *)&local_48,param_1);
  if (iVar3 == 0xff) {
    uVar4 = 0;
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0xa8);
    uVar9 = (ulong)(iVar3 * 8 + 8);
    lVar10 = uVar9 - 1;
    cVar1 = *(char *)(local_48 + 3);
    cVar2 = *(char *)(local_48 + 4);
    *(int *)(local_48 + lVar10) = (int)uVar7;
    puVar8 = (ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    if ((uVar7 & 1) != 0) {
      uVar6 = *puVar8;
      lVar5 = local_48 + lVar10;
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(local_48,lVar5,uVar7);
        uVar6 = *puVar8;
        lVar5 = local_48 + lVar10;
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((local_48 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(local_48,lVar5,uVar7);
      }
    }
    lVar10 = (uVar9 | 4) - 1;
    *(int *)(local_48 + lVar10) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar9 = *puVar8;
      lVar5 = local_48 + lVar10;
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(local_48,lVar5,uVar7);
        uVar9 = *puVar8;
        lVar5 = local_48 + lVar10;
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((local_48 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(local_48,lVar5,uVar7);
      }
    }
    *(char *)(local_48 + 3) = cVar1 + -1;
    uVar4 = 1;
    *(char *)(local_48 + 4) = cVar2 + '\x01';
  }
  return uVar4;
}

