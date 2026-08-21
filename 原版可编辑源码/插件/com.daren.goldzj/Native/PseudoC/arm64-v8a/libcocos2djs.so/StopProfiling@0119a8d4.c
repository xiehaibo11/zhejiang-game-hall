
/* v8::internal::CpuProfiler::StopProfiling(char const*) */

undefined8 __thiscall v8::internal::CpuProfiler::StopProfiling(CpuProfiler *this,char *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (this[0xb0] == (CpuProfiler)0x0) {
    uVar2 = 0;
  }
  else {
    uVar1 = CpuProfilesCollection::IsLastProfile(*(CpuProfilesCollection **)(this + 0x20),param_1);
    if ((uVar1 & 1) != 0) {
      StopProcessor(this);
    }
    uVar2 = CpuProfilesCollection::StopProfiling(*(CpuProfilesCollection **)(this + 0x20),param_1);
    if (*(long *)(this + 0x30) != 0) {
      uVar3 = CpuProfilesCollection::GetCommonSamplingInterval
                        (*(CpuProfilesCollection **)(this + 0x20));
      (**(code **)(**(long **)(this + 0x30) + 0x20))(*(long **)(this + 0x30),uVar3);
    }
  }
  return uVar2;
}

