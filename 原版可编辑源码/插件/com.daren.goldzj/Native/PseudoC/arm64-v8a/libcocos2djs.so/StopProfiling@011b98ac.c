
/* v8::internal::TracingCpuProfilerImpl::StopProfiling() */

void __thiscall v8::internal::TracingCpuProfilerImpl::StopProfiling(TracingCpuProfilerImpl *this)

{
  CpuProfiler *this_00;
  
  base::Mutex::Lock((Mutex *)(this + 0x1c));
  if (*(CpuProfiler **)(this + 0x10) != (CpuProfiler *)0x0) {
    CpuProfiler::StopProfiling(*(CpuProfiler **)(this + 0x10),"");
    this_00 = *(CpuProfiler **)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0;
    if (this_00 != (CpuProfiler *)0x0) {
      CpuProfiler::~CpuProfiler(this_00);
      operator_delete(this_00);
    }
  }
  base::Mutex::Unlock((Mutex *)(this + 0x1c));
  return;
}

