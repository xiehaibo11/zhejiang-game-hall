
/* v8::internal::TracingCpuProfilerImpl::OnTraceEnabled() */

void __thiscall v8::internal::TracingCpuProfilerImpl::OnTraceEnabled(TracingCpuProfilerImpl *this)

{
  long *plVar1;
  
  if (DAT_01d3f930 == (byte *)0x0) {
    plVar1 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f930 = (byte *)(**(code **)(*plVar1 + 0x10))
                                     (plVar1,"disabled-by-default-v8.cpu_profiler");
  }
  if ((*DAT_01d3f930 & 5) != 0) {
    this[0x18] = (TracingCpuProfilerImpl)0x1;
    Isolate::RequestInterrupt(*(Isolate **)(this + 8),FUN_011b9b1c,this);
    return;
  }
  return;
}

