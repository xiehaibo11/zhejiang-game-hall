
/* v8::internal::TracingCpuProfilerImpl::~TracingCpuProfilerImpl() */

void __thiscall
v8::internal::TracingCpuProfilerImpl::~TracingCpuProfilerImpl(TracingCpuProfilerImpl *this)

{
  Mutex *this_00;
  long *plVar1;
  CpuProfiler *pCVar2;
  
  this_00 = (Mutex *)(this + 0x1c);
  *(undefined ***)this = &PTR__TracingCpuProfilerImpl_01cb78d8;
  base::Mutex::Lock(this_00);
  if (*(CpuProfiler **)(this + 0x10) != (CpuProfiler *)0x0) {
    CpuProfiler::StopProfiling(*(CpuProfiler **)(this + 0x10),"");
    pCVar2 = *(CpuProfiler **)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0;
    if (pCVar2 != (CpuProfiler *)0x0) {
      CpuProfiler::~CpuProfiler(pCVar2);
      operator_delete(pCVar2);
    }
  }
  base::Mutex::Unlock(this_00);
  plVar1 = (long *)V8::GetCurrentPlatform();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x90))();
  (**(code **)(*plVar1 + 0x38))(plVar1,this);
  base::Mutex::~Mutex(this_00);
  pCVar2 = *(CpuProfiler **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  if (pCVar2 != (CpuProfiler *)0x0) {
    CpuProfiler::~CpuProfiler(pCVar2);
    operator_delete(pCVar2);
    return;
  }
  return;
}

