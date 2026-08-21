
/* v8::internal::CpuProfiler::StartProfiling(v8::internal::String, v8::CpuProfilingOptions) */

void __thiscall
v8::internal::CpuProfiler::StartProfiling(CpuProfiler *this,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined8 local_48;
  undefined4 local_40;
  ulong *local_38;
  
  uVar1 = StringsStorage::GetName(*(StringsStorage **)(this + 0x20));
  local_48 = *param_3;
  local_40 = *(undefined4 *)(param_3 + 1);
  local_38 = (ulong *)0x0;
  if ((ulong *)param_3[2] == (ulong *)0x0) {
    StartProfiling(this,uVar1,&local_48);
  }
  else {
    puVar2 = (ulong *)v8::V8::CopyGlobalReference((ulong *)param_3[2]);
    local_38 = puVar2;
    StartProfiling(this,uVar1,&local_48);
    if (puVar2 != (ulong *)0x0) {
      v8::V8::DisposeGlobal(puVar2);
    }
  }
  return;
}

