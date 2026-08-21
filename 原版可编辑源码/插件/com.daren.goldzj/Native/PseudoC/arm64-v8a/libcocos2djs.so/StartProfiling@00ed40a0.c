
/* v8::CpuProfiler::StartProfiling(v8::Local<v8::String>, v8::CpuProfilingMode, bool, unsigned int)
    */

void __thiscall
v8::CpuProfiler::StartProfiling
          (CpuProfiler *this,undefined8 *param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  ulong *local_18;
  
  if ((param_4 & 1) == 0) {
    param_5 = 0;
  }
  local_20 = 0;
  local_18 = (ulong *)0x0;
  local_28 = param_3;
  uStack_24 = param_5;
  internal::CpuProfiler::StartProfiling((CpuProfiler *)this,*param_2,&local_28);
  if (local_18 != (ulong *)0x0) {
    internal::GlobalHandles::Destroy(local_18);
  }
  return;
}

