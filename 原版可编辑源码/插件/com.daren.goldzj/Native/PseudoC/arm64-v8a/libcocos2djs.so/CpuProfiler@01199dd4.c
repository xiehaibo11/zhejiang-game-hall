
/* v8::internal::CpuProfiler::CpuProfiler(v8::internal::Isolate*, v8::CpuProfilingNamingMode,
   v8::CpuProfilingLoggingMode) */

void __thiscall
v8::internal::CpuProfiler::CpuProfiler
          (CpuProfiler *this,Isolate *param_1,undefined4 param_3,undefined4 param_4)

{
  CpuProfilesCollection *this_00;
  
  this_00 = operator_new(0x60);
  CpuProfilesCollection::CpuProfilesCollection(this_00,param_1);
  CpuProfiler(this,param_1,param_3,param_4,this_00,0,0);
  return;
}

