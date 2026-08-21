
/* v8::internal::RecordMigratedSlotVisitor::RecordMigratedSlot(v8::internal::HeapObject,
   v8::internal::MaybeObject, unsigned long) */

void __thiscall
v8::internal::RecordMigratedSlotVisitor::RecordMigratedSlot
          (undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  SlotSet *pSVar7;
  
  if (((int)param_3 != 3) && ((param_3 & 1) != 0)) {
    uVar5 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
    uVar4 = param_2;
    if ((uVar5 & 0x18) == 0) {
      if (((uint)uVar5 >> 6 & 1) == 0) {
        return;
      }
      pSVar7 = *(SlotSet **)((MemoryChunk *)(param_2 & 0xfffffffffffc0000) + 0x38);
      if (pSVar7 == (SlotSet *)0x0) {
        pSVar7 = MemoryChunk::AllocateSlotSet<(v8::internal::RememberedSetType)1>
                           ((MemoryChunk *)(param_2 & 0xfffffffffffc0000));
        uVar4 = extraout_x1_00;
      }
    }
    else {
      pSVar7 = *(SlotSet **)((MemoryChunk *)(param_2 & 0xfffffffffffc0000) + 0x30);
      if (pSVar7 == (SlotSet *)0x0) {
        pSVar7 = MemoryChunk::AllocateSlotSet<(v8::internal::RememberedSetType)0>
                           ((MemoryChunk *)(param_2 & 0xfffffffffffc0000));
        uVar4 = extraout_x1;
      }
    }
    uVar5 = param_4 - (param_2 & 0xfffffffffffc0000);
    puVar3 = *(undefined8 **)(pSVar7 + (uVar5 >> 0xc) * 8);
    uVar6 = uVar5 >> 7 & 0x1f;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = Malloced::operator_new((Malloced *)0x80,uVar4);
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      *(undefined8 **)(pSVar7 + (uVar5 >> 0xc) * 8) = puVar3;
    }
    uVar1 = *(uint *)((long)puVar3 + uVar6 * 4);
    uVar2 = 1 << (ulong)((uint)uVar5 >> 2 & 0x1f);
    if ((uVar1 & uVar2) == 0) {
      *(uint *)((long)puVar3 + uVar6 * 4) = uVar1 | uVar2;
    }
  }
  return;
}

