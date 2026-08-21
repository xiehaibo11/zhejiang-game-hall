
/* v8::internal::SamplingHeapProfiler::Observer::Step(int, unsigned long, unsigned long) */

void __thiscall
v8::internal::SamplingHeapProfiler::Observer::Step
          (Observer *this,int param_1,ulong param_2,ulong param_3)

{
  if (param_2 != 0) {
    SampleObject(*(SamplingHeapProfiler **)(this + 0x18),param_2,param_3);
    return;
  }
  return;
}

