
/* v8::internal::PerfJitLogger::LogWriteBytes(char const*, int) */

void __thiscall
v8::internal::PerfJitLogger::LogWriteBytes(PerfJitLogger *this,char *param_1,int param_2)

{
  fwrite(param_1,1,(long)param_2,perf_output_handle_);
  return;
}

