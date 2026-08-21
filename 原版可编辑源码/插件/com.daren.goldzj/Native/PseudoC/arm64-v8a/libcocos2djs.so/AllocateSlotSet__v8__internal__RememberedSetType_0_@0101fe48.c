
/* v8::internal::SlotSet*
   v8::internal::MemoryChunk::AllocateSlotSet<(v8::internal::RememberedSetType)0>() */

SlotSet * __thiscall
v8::internal::MemoryChunk::AllocateSlotSet<(v8::internal::RememberedSetType)0>(MemoryChunk *this)

{
  SlotSet *pSVar1;
  
  pSVar1 = (SlotSet *)AllocateSlotSet(this,(SlotSet **)(this + 0x30));
  return pSVar1;
}

