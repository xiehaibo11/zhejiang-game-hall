
/* v8::internal::CpuProfiler::StopProcessorIfLastProfile(char const*) */

void __thiscall
v8::internal::CpuProfiler::StopProcessorIfLastProfile(CpuProfiler *this,char *param_1)

{
  ulong uVar1;
  
  uVar1 = CpuProfilesCollection::IsLastProfile(*(CpuProfilesCollection **)(this + 0x20),param_1);
  if ((uVar1 & 1) != 0) {
    StopProcessor(this);
    return;
  }
  return;
}

