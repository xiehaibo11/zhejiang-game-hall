
/* WARNING: Removing unreachable block (ram,0x011b574c) */
/* v8::internal::SamplingHeapProfiler::Observer::GetNextSampleInterval(unsigned long) */

ulong __thiscall
v8::internal::SamplingHeapProfiler::Observer::GetNextSampleInterval(Observer *this,ulong param_1)

{
  ulong uVar1;
  double dVar2;
  
  uVar1 = param_1;
  if (FLAG_sampling_heap_profiler_suppress_randomness == '\0') {
    dVar2 = (double)base::RandomNumberGenerator::NextDouble
                              (*(RandomNumberGenerator **)(this + 0x28));
    dVar2 = (double)base::ieee754::log(dVar2);
    uVar1 = 4;
    if (4.0 <= (double)param_1 * -dVar2) {
      uVar1 = (long)((double)param_1 * -dVar2);
    }
  }
  return uVar1;
}

