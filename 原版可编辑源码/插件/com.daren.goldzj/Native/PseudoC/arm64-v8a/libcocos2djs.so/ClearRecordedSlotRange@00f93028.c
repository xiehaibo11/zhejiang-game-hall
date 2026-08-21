
/* v8::internal::Heap::ClearRecordedSlotRange(unsigned long, unsigned long) */

Heap * __thiscall v8::internal::Heap::ClearRecordedSlotRange(Heap *this,ulong param_1,ulong param_2)

{
  Heap *pHVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 & 0xfffffffffffc0000);
  if ((((*(byte *)(plVar2 + 1) & 0x18) == 0) && (plVar2[0x15] != 0)) &&
     (this = (Heap *)0x0, (SlotSet *)plVar2[6] != (SlotSet *)0x0)) {
    pHVar1 = (Heap *)SlotSet::RemoveRange
                               ((SlotSet *)plVar2[6],(long)((int)param_1 - (int)plVar2),
                                (long)((int)param_2 - (int)plVar2),*plVar2 + 0xfffU >> 0xc,1);
    return pHVar1;
  }
  return this;
}

