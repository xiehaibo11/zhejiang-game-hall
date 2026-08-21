
/* v8::internal::CpuProfiler::StopProfiling(v8::internal::String) */

undefined8 v8::internal::CpuProfiler::StopProfiling(CpuProfiler *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = (char *)StringsStorage::GetName(*(StringsStorage **)(param_1 + 0x20));
  if (param_1[0xb0] == (CpuProfiler)0x0) {
    uVar3 = 0;
  }
  else {
    uVar2 = CpuProfilesCollection::IsLastProfile(*(CpuProfilesCollection **)(param_1 + 0x20),pcVar1)
    ;
    if ((uVar2 & 1) != 0) {
      StopProcessor(param_1);
    }
    uVar3 = CpuProfilesCollection::StopProfiling(*(CpuProfilesCollection **)(param_1 + 0x20),pcVar1)
    ;
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar4 = CpuProfilesCollection::GetCommonSamplingInterval
                        (*(CpuProfilesCollection **)(param_1 + 0x20));
      (**(code **)(**(long **)(param_1 + 0x30) + 0x20))(*(long **)(param_1 + 0x30),uVar4);
    }
  }
  return uVar3;
}

