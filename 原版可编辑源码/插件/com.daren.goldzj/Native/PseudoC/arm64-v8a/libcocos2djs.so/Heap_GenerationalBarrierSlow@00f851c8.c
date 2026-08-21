
/* v8::internal::Heap_GenerationalBarrierSlow(v8::internal::HeapObject, unsigned long,
   v8::internal::HeapObject) */

void v8::internal::Heap_GenerationalBarrierSlow(ulong param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong extraout_x1;
  ulong uVar4;
  SlotSet *pSVar5;
  MemoryChunk *this;
  ulong uVar6;
  
  this = (MemoryChunk *)(param_1 & 0xfffffffffffc0000);
  pSVar5 = *(SlotSet **)(this + 0x30);
  uVar4 = param_2;
  if (pSVar5 == (SlotSet *)0x0) {
    pSVar5 = MemoryChunk::AllocateSlotSet<(v8::internal::RememberedSetType)0>(this);
    uVar4 = extraout_x1;
  }
  param_2 = param_2 - (long)this;
  puVar3 = *(undefined8 **)(pSVar5 + (param_2 >> 0xc) * 8);
  uVar6 = param_2 >> 7 & 0x1f;
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
    *(undefined8 **)(pSVar5 + (param_2 >> 0xc) * 8) = puVar3;
  }
  uVar1 = *(uint *)((long)puVar3 + uVar6 * 4);
  uVar2 = 1 << (ulong)((uint)param_2 >> 2 & 0x1f);
  if ((uVar1 & uVar2) == 0) {
    *(uint *)((long)puVar3 + uVar6 * 4) = uVar1 | uVar2;
  }
  return;
}

