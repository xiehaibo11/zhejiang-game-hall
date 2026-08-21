
/* v8::internal::CpuProfiler::DeleteAllProfiles() */

void __thiscall v8::internal::CpuProfiler::DeleteAllProfiles(CpuProfiler *this)

{
  if (this[0xb0] != (CpuProfiler)0x0) {
    StopProcessor(this);
  }
  ResetProfiles(this);
  return;
}

