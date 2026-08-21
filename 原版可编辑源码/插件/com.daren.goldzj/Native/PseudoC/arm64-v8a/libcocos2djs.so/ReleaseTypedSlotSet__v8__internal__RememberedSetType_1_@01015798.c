
/* void v8::internal::MemoryChunk::ReleaseTypedSlotSet<(v8::internal::RememberedSetType)1>() */

void __thiscall
v8::internal::MemoryChunk::ReleaseTypedSlotSet<(v8::internal::RememberedSetType)1>
          (MemoryChunk *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x80);
  if (plVar1 != (long *)0x0) {
    *(undefined8 *)(this + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x010157b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}

