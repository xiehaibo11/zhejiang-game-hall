
/* v8::internal::PerfJitLogger::~PerfJitLogger() */

void __thiscall v8::internal::PerfJitLogger::~PerfJitLogger(PerfJitLogger *this)

{
  ~PerfJitLogger(this);
  operator_delete(this);
  return;
}

