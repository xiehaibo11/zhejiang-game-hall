
/* v8::internal::HeapProfiler::GetAllocationProfile() */

void __thiscall v8::internal::HeapProfiler::GetAllocationProfile(HeapProfiler *this)

{
  if (*(SamplingHeapProfiler **)(this + 0x68) != (SamplingHeapProfiler *)0x0) {
    SamplingHeapProfiler::GetAllocationProfile(*(SamplingHeapProfiler **)(this + 0x68));
    return;
  }
  return;
}

