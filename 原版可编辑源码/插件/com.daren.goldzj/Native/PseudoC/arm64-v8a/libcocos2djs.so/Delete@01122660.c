
/* v8::internal::OrderedHashTable<v8::internal::OrderedNameDictionary,
   3>::Delete(v8::internal::Isolate*, v8::internal::OrderedNameDictionary, v8::internal::Object) */

undefined8
v8::internal::OrderedHashTable<v8::internal::OrderedNameDictionary,3>::Delete
          (long param_1,ulong param_2,long param_3)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong *puVar10;
  byte *pbVar11;
  long local_48;
  
  if ((*(uint *)(param_3 + 3) & 1) == 0) {
    uVar6 = *(uint *)(param_3 + 3) >> 3;
  }
  else {
    local_48 = param_3;
    uVar6 = String::ComputeAndSetHash((String *)&local_48);
  }
  lVar3 = param_2 + 7;
  iVar5 = *(int *)(lVar3 + (int)(((*(uint *)(param_2 + 0x13) >> 1) - 1 & uVar6) * 4 + 0x10));
  while( true ) {
    iVar5 = iVar5 >> 1;
    if (iVar5 == -1) {
      return 0;
    }
    iVar2 = iVar5 * 4 + 4;
    if (*(int *)(lVar3 + (int)((iVar2 + (*(uint *)(param_2 + 0x13) >> 1)) * 4)) == (int)param_3)
    break;
    iVar5 = *(int *)(lVar3 + (int)((iVar2 + (*(uint *)(param_2 + 0x13) >> 1)) * 4 + 0xc));
  }
  if (iVar5 == -1) {
    return 0;
  }
  iVar5 = *(int *)(param_2 + 0xb);
  iVar4 = *(int *)(param_2 + 0xf);
  uVar9 = *(ulong *)(param_1 + 0xa8);
  iVar2 = (iVar2 + (*(uint *)(param_2 + 0x13) >> 1)) * 4;
  puVar1 = (undefined4 *)(lVar3 + iVar2);
  uVar8 = (undefined4)uVar9;
  *puVar1 = uVar8;
  if ((uVar9 & 1) == 0) {
    *(undefined4 *)(lVar3 + (iVar2 + 4)) = uVar8;
    *(undefined4 *)(lVar3 + (iVar2 + 8)) = uVar8;
  }
  else {
    puVar10 = (ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    uVar7 = *puVar10;
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(param_2,puVar1,uVar9);
      uVar7 = *puVar10;
    }
    pbVar11 = (byte *)(param_2 & 0xfffffffffffc0000 | 8);
    if (((uVar7 & 0x18) != 0) && ((*pbVar11 & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(param_2,puVar1,uVar9);
    }
    puVar1 = (undefined4 *)(lVar3 + (iVar2 + 4));
    *puVar1 = uVar8;
    uVar7 = *puVar10;
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(param_2,puVar1,uVar9);
      uVar7 = *puVar10;
    }
    if (((uVar7 & 0x18) != 0) && ((*pbVar11 & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(param_2,puVar1,uVar9);
    }
    puVar1 = (undefined4 *)(lVar3 + (iVar2 + 8));
    *puVar1 = uVar8;
    uVar7 = *puVar10;
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(param_2,puVar1,uVar9);
      uVar7 = *puVar10;
    }
    if (((uVar7 & 0x18) != 0) && ((*pbVar11 & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(param_2,puVar1,uVar9);
    }
  }
  *(uint *)(param_2 + 0xb) = iVar5 - 2U & 0xfffffffe;
  *(uint *)(param_2 + 0xf) = iVar4 + 2U & 0xfffffffe;
  return 1;
}

