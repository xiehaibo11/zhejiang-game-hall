
/* v8::CpuProfiler::StartProfiling(v8::Local<v8::String>, v8::CpuProfilingOptions) */

void __thiscall
v8::CpuProfiler::StartProfiling(CpuProfiler *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined4 local_30;
  ulong *local_28;
  
  local_30 = *(undefined4 *)(param_3 + 1);
  local_38 = *param_3;
  uVar1 = *param_2;
  local_28 = (ulong *)0x0;
  if ((ulong *)param_3[2] != (ulong *)0x0) {
    local_28 = (ulong *)internal::GlobalHandles::CopyGlobal((ulong *)param_3[2]);
  }
  internal::CpuProfiler::StartProfiling((CpuProfiler *)this,uVar1,&local_38);
  if (local_28 != (ulong *)0x0) {
    internal::GlobalHandles::Destroy(local_28);
  }
  return;
}

