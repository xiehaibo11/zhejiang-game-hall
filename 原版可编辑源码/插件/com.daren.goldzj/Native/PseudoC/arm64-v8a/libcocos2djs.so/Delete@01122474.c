
/* v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::Delete(v8::internal::Isolate*,
   v8::internal::SmallOrderedNameDictionary, v8::internal::Object) */

undefined8
v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::Delete
          (long param_1,ulong param_2,long param_3)

{
  long lVar1;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  byte *pbVar14;
  long local_48;
  
  if ((*(uint *)(param_3 + 3) & 1) == 0) {
    uVar7 = *(uint *)(param_3 + 3) >> 3;
  }
  else {
    local_48 = param_3;
    uVar7 = String::ComputeAndSetHash((String *)&local_48);
  }
  bVar3 = *(byte *)(param_2 + 9);
  lVar11 = param_2 - 1;
  lVar1 = (ulong)(uint)bVar3 * 0x18 + 0xc;
  bVar6 = *(byte *)(lVar11 + (int)((int)lVar1 + (bVar3 - 1 & uVar7)));
  uVar7 = (uint)bVar6;
  if (bVar6 != 0xff) {
    do {
      if (*(int *)(uVar7 * 0xc + param_2 + 0xb) == (int)param_3) {
        cVar4 = *(char *)(param_2 + 7);
        uVar10 = *(ulong *)(param_1 + 0xa8);
        cVar5 = *(char *)(param_2 + 8);
        uVar13 = (ulong)(uVar7 * 0xc + 0xc);
        puVar2 = (undefined4 *)(lVar11 + uVar13);
        uVar9 = (undefined4)uVar10;
        *puVar2 = uVar9;
        if ((uVar10 & 1) == 0) {
          *(undefined4 *)(uVar13 + lVar11 + 4) = uVar9;
          *(undefined4 *)(uVar13 + lVar11 + 8) = uVar9;
        }
        else {
          puVar12 = (ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
          uVar8 = *puVar12;
          if (((uint)uVar8 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_2,puVar2,uVar10);
            uVar8 = *puVar12;
          }
          pbVar14 = (byte *)(param_2 & 0xfffffffffffc0000 | 8);
          if (((uVar8 & 0x18) != 0) && ((*pbVar14 & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(param_2,puVar2,uVar10);
          }
          *(undefined4 *)(uVar13 + lVar11 + 4) = uVar9;
          uVar8 = *puVar12;
          lVar1 = uVar13 + lVar11 + 4;
          if (((uint)uVar8 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_2,lVar1,uVar10);
            uVar8 = *puVar12;
          }
          if (((uVar8 & 0x18) != 0) && ((*pbVar14 & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(param_2,lVar1,uVar10);
          }
          *(undefined4 *)(uVar13 + lVar11 + 8) = uVar9;
          uVar8 = *puVar12;
          lVar1 = uVar13 + lVar11 + 8;
          if (((uint)uVar8 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_2,lVar1,uVar10);
            uVar8 = *puVar12;
          }
          if (((uVar8 & 0x18) != 0) && ((*pbVar14 & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(param_2,lVar1,uVar10);
          }
        }
        *(char *)(param_2 + 7) = cVar4 + -1;
        *(char *)(param_2 + 8) = cVar5 + '\x01';
        return 1;
      }
      uVar7 = (uint)*(byte *)(lVar11 + lVar1 + (ulong)bVar3 + (ulong)(byte)uVar7);
    } while (uVar7 != 0xff);
  }
  return 0;
}

