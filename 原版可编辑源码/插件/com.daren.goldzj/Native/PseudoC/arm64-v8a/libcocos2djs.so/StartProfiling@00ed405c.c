
/* v8::CpuProfiler::StartProfiling(v8::Local<v8::String>, bool) */

void __thiscall v8::CpuProfiler::StartProfiling(CpuProfiler *this,undefined8 *param_2,uint param_3)

{
  undefined4 local_28;
  int iStack_24;
  undefined4 local_20;
  ulong *local_18;
  
  iStack_24 = -(param_3 & 1);
  local_28 = 0;
  local_20 = 0;
  local_18 = (ulong *)0x0;
  internal::CpuProfiler::StartProfiling((CpuProfiler *)this,*param_2,&local_28);
  if (local_18 != (ulong *)0x0) {
    internal::GlobalHandles::Destroy(local_18);
  }
  return;
}

