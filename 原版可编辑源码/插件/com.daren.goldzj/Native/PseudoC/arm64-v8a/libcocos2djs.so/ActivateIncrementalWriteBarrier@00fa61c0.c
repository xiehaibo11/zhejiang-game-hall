
/* v8::internal::IncrementalMarking::ActivateIncrementalWriteBarrier(v8::internal::PagedSpace*) */

IncrementalMarking * __thiscall
v8::internal::IncrementalMarking::ActivateIncrementalWriteBarrier
          (IncrementalMarking *this,PagedSpace *param_1)

{
  MemoryChunk *this_00;
  
  for (this_00 = *(MemoryChunk **)(param_1 + 0x20); this_00 != (MemoryChunk *)0x0;
      this_00 = *(MemoryChunk **)(this_00 + 0xe0)) {
    this = (IncrementalMarking *)MemoryChunk::SetOldGenerationPageFlags(this_00,true);
  }
  return this;
}

