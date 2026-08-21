
/* v8::internal::YoungGenerationRecordMigratedSlotVisitor::RecordMigratedSlot(v8::internal::HeapObject,
   v8::internal::MaybeObject, unsigned long) */

void __thiscall
v8::internal::YoungGenerationRecordMigratedSlotVisitor::RecordMigratedSlot
          (undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong uVar7;
  ulong uVar8;
  SlotSet *pSVar9;
  MemoryChunk *pMVar10;
  
  if ((int)param_3 == 3) {
    return;
  }
  if ((param_3 & 1) == 0) {
    return;
  }
  uVar7 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
  if ((uVar7 & 0x18) == 0) {
    if (((uint)uVar7 >> 6 & 1) == 0) {
      return;
    }
    pMVar10 = (MemoryChunk *)(param_2 & 0xfffffffffffc0000);
    puVar1 = (uint *)(*(long *)(pMVar10 + 0x10) + (param_2 - (long)pMVar10 >> 7 & 0x1ffffff) * 4);
    uVar2 = 1 << (ulong)((uint)(param_2 - (long)pMVar10 >> 2) & 0x1f);
    if ((*puVar1 & uVar2) == 0) {
      return;
    }
    uVar2 = uVar2 << 1;
    bVar5 = uVar2 == 0;
    if (bVar5) {
      uVar2 = 1;
    }
    if ((puVar1[bVar5] & uVar2) == 0) {
      return;
    }
    pSVar9 = *(SlotSet **)(pMVar10 + 0x38);
    if (pSVar9 == (SlotSet *)0x0) {
      pSVar9 = MemoryChunk::AllocateSlotSet<(v8::internal::RememberedSetType)1>(pMVar10);
      param_2 = extraout_x1_00;
    }
    uVar8 = param_4 - (long)pMVar10;
    puVar6 = *(undefined8 **)(pSVar9 + (uVar8 >> 0xc) * 8);
    uVar7 = uVar8 >> 7 & 0x1f;
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = Malloced::operator_new((Malloced *)0x80,param_2);
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[9] = 0;
      puVar6[8] = 0;
      puVar6[0xb] = 0;
      puVar6[10] = 0;
      puVar6[0xd] = 0;
      puVar6[0xc] = 0;
      puVar6[0xf] = 0;
      puVar6[0xe] = 0;
      *(undefined8 **)(pSVar9 + (uVar8 >> 0xc) * 8) = puVar6;
    }
    uVar2 = *(uint *)((long)puVar6 + uVar7 * 4);
    uVar3 = 1 << (ulong)((uint)uVar8 >> 2 & 0x1f);
    uVar4 = uVar2 & uVar3;
  }
  else {
    pMVar10 = (MemoryChunk *)(param_2 & 0xfffffffffffc0000);
    pSVar9 = *(SlotSet **)(pMVar10 + 0x30);
    if (pSVar9 == (SlotSet *)0x0) {
      pSVar9 = MemoryChunk::AllocateSlotSet<(v8::internal::RememberedSetType)0>(pMVar10);
      param_2 = extraout_x1;
    }
    uVar8 = param_4 - (long)pMVar10;
    puVar6 = *(undefined8 **)(pSVar9 + (uVar8 >> 0xc) * 8);
    uVar7 = uVar8 >> 7 & 0x1f;
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = Malloced::operator_new((Malloced *)0x80,param_2);
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[9] = 0;
      puVar6[8] = 0;
      puVar6[0xb] = 0;
      puVar6[10] = 0;
      puVar6[0xd] = 0;
      puVar6[0xc] = 0;
      puVar6[0xf] = 0;
      puVar6[0xe] = 0;
      *(undefined8 **)(pSVar9 + (uVar8 >> 0xc) * 8) = puVar6;
    }
    uVar2 = *(uint *)((long)puVar6 + uVar7 * 4);
    uVar3 = 1 << (ulong)((uint)uVar8 >> 2 & 0x1f);
    uVar4 = uVar2 & uVar3;
  }
  if (uVar4 == 0) {
    *(uint *)((long)puVar6 + uVar7 * 4) = uVar2 | uVar3;
  }
  return;
}

