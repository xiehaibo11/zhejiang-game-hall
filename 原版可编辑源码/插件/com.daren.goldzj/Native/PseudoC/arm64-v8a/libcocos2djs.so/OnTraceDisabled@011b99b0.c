
/* v8::internal::TracingCpuProfilerImpl::OnTraceDisabled() */

void __thiscall v8::internal::TracingCpuProfilerImpl::OnTraceDisabled(TracingCpuProfilerImpl *this)

{
  base::Mutex::Lock((Mutex *)(this + 0x1c));
  if (this[0x18] != (TracingCpuProfilerImpl)0x0) {
    this[0x18] = (TracingCpuProfilerImpl)0x0;
    Isolate::RequestInterrupt(*(Isolate **)(this + 8),FUN_011b9b24,this);
  }
  base::Mutex::Unlock((Mutex *)(this + 0x1c));
  return;
}

