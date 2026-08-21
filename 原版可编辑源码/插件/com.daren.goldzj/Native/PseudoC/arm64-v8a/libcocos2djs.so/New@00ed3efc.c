
/* v8::CpuProfiler::New(v8::Isolate*, v8::CpuProfilingNamingMode, v8::CpuProfilingLoggingMode) */

CpuProfiler * v8::CpuProfiler::New(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  CpuProfiler *pCVar1;
  
  pCVar1 = operator_new(0xb8);
  internal::CpuProfiler::CpuProfiler(pCVar1,param_1,param_2,param_3);
  return pCVar1;
}

