
/* WARNING: Removing unreachable block (ram,0x011b6d60) */
/* v8::internal::SamplingHeapProfiler::Observer::GetNextStepSize() */

ulong __thiscall v8::internal::SamplingHeapProfiler::Observer::GetNextStepSize(Observer *this)

{
  ulong uVar1;
  double dVar2;
  
  uVar1 = *(ulong *)(this + 0x30);
  if (FLAG_sampling_heap_profiler_suppress_randomness == '\0') {
    dVar2 = (double)base::RandomNumberGenerator::NextDouble
                              (*(RandomNumberGenerator **)(this + 0x28));
    dVar2 = (double)base::ieee754::log(dVar2);
    dVar2 = (double)uVar1 * -dVar2;
    uVar1 = 4;
    if (4.0 <= dVar2) {
      uVar1 = (long)dVar2;
    }
  }
  return uVar1;
}

