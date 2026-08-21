
/* v8::internal::TracingCpuProfilerImpl::~TracingCpuProfilerImpl() */

void __thiscall
v8::internal::TracingCpuProfilerImpl::~TracingCpuProfilerImpl(TracingCpuProfilerImpl *this)

{
  ~TracingCpuProfilerImpl(this);
  operator_delete(this);
  return;
}

