
/* v8::internal::MemoryChunk::AllocateSweepingSlotSet() */

void __thiscall v8::internal::MemoryChunk::AllocateSweepingSlotSet(MemoryChunk *this)

{
  AllocateSlotSet(this,(SlotSet **)(this + 0x70));
  return;
}

