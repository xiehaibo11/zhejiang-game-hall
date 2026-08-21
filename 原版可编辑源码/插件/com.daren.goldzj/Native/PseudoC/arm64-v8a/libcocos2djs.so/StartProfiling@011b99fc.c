
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* v8::internal::TracingCpuProfilerImpl::StartProfiling() */

void __thiscall v8::internal::TracingCpuProfilerImpl::StartProfiling(TracingCpuProfilerImpl *this)

{
  undefined8 uVar1;
  long *plVar2;
  CpuProfiler *pCVar3;
  CpuProfiler *this_00;
  CpuProfilingOptions aCStack_58 [16];
  ulong *local_48;
  
  base::Mutex::Lock((Mutex *)(this + 0x1c));
  if ((this[0x18] != (TracingCpuProfilerImpl)0x0) && (*(long *)(this + 0x10) == 0)) {
    if (_DAT_01d3f938 == (byte *)0x0) {
      plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
      _DAT_01d3f938 =
           (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.cpu_profiler.hires")
      ;
    }
    uVar1 = 1000;
    if ((*_DAT_01d3f938 & 5) != 0) {
      uVar1 = 100;
    }
    pCVar3 = operator_new(0xb8);
    CpuProfiler::CpuProfiler(pCVar3,*(undefined8 *)(this + 8),1,0);
    this_00 = *(CpuProfiler **)(this + 0x10);
    *(CpuProfiler **)(this + 0x10) = pCVar3;
    if (this_00 != (CpuProfiler *)0x0) {
      CpuProfiler::~CpuProfiler(this_00);
      operator_delete(this_00);
      pCVar3 = *(CpuProfiler **)(this + 0x10);
    }
    CpuProfiler::set_sampling_interval(pCVar3,uVar1);
    pCVar3 = *(CpuProfiler **)(this + 0x10);
    CpuProfilingOptions::CpuProfilingOptions(aCStack_58,0,0xffffffff,0,0);
    CpuProfiler::StartProfiling(pCVar3,&DAT_0189703a,aCStack_58);
    if (local_48 != (ulong *)0x0) {
      v8::V8::DisposeGlobal(local_48);
      local_48 = (ulong *)0x0;
    }
  }
  base::Mutex::Unlock((Mutex *)(this + 0x1c));
  return;
}

