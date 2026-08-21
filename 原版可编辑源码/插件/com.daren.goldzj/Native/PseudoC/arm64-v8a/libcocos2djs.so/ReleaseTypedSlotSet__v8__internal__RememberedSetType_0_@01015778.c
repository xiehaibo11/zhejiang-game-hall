
/* void v8::internal::MemoryChunk::ReleaseTypedSlotSet<(v8::internal::RememberedSetType)0>() */

void __thiscall
v8::internal::MemoryChunk::ReleaseTypedSlotSet<(v8::internal::RememberedSetType)0>
          (MemoryChunk *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x78);
  if (plVar1 != (long *)0x0) {
    *(undefined8 *)(this + 0x78) = 0;
                    /* WARNING: Could not recover jumptable at 0x01015790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}

