
/* v8::internal::CpuProfiler::CollectSample() */

void __thiscall v8::internal::CpuProfiler::CollectSample(CpuProfiler *this)

{
  if (*(ProfilerEventsProcessor **)(this + 0x30) != (ProfilerEventsProcessor *)0x0) {
    ProfilerEventsProcessor::AddCurrentStack(*(ProfilerEventsProcessor **)(this + 0x30),false);
    return;
  }
  return;
}

