
/* v8::internal::CpuProfiler::DeleteProfile(v8::internal::CpuProfile*) */

void __thiscall v8::internal::CpuProfiler::DeleteProfile(CpuProfiler *this,CpuProfile *param_1)

{
  CpuProfilesCollection::RemoveProfile(*(CpuProfilesCollection **)(this + 0x20),param_1);
  if ((*(long *)(*(long *)(this + 0x20) + 0x18) == *(long *)(*(long *)(this + 0x20) + 0x20)) &&
     (this[0xb0] == (CpuProfiler)0x0)) {
    ResetProfiles(this);
    return;
  }
  return;
}

