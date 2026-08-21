
/* v8::internal::CpuProfiler::AdjustSamplingInterval() */

void __thiscall v8::internal::CpuProfiler::AdjustSamplingInterval(CpuProfiler *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x30) != 0) {
    uVar1 = CpuProfilesCollection::GetCommonSamplingInterval
                      (*(CpuProfilesCollection **)(this + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0119a374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 0x20))(*(long **)(this + 0x30),uVar1);
    return;
  }
  return;
}

