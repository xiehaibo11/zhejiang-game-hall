
/* v8::internal::IncrementalMarking::ActivateIncrementalWriteBarrier(v8::internal::NewSpace*) */

IncrementalMarking * __thiscall
v8::internal::IncrementalMarking::ActivateIncrementalWriteBarrier
          (IncrementalMarking *this,NewSpace *param_1)

{
  MemoryChunk *this_00;
  
  for (this_00 = *(MemoryChunk **)(param_1 + 0xf0); this_00 != (MemoryChunk *)0x0;
      this_00 = *(MemoryChunk **)(this_00 + 0xe0)) {
    this = (IncrementalMarking *)MemoryChunk::SetYoungGenerationPageFlags(this_00,true);
  }
  return this;
}

