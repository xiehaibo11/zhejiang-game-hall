
/* v8::CpuProfiler::Dispose() */

void __thiscall v8::CpuProfiler::Dispose(CpuProfiler *this)

{
  if (this != (CpuProfiler *)0x0) {
    internal::CpuProfiler::~CpuProfiler((CpuProfiler *)this);
    operator_delete(this);
    return;
  }
  return;
}

