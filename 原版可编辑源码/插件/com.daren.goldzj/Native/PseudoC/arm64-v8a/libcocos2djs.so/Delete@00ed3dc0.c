
/* v8::CpuProfile::Delete() */

void __thiscall v8::CpuProfile::Delete(CpuProfile *this)

{
  internal::CpuProfiler::DeleteProfile(*(CpuProfiler **)(this + 0x98),(CpuProfile *)this);
  return;
}

