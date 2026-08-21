
/* v8::internal::CpuProfiler::GetProfilesCount() */

ulong __thiscall v8::internal::CpuProfiler::GetProfilesCount(CpuProfiler *this)

{
  return (ulong)(*(long *)(*(long *)(this + 0x20) + 0x20) - *(long *)(*(long *)(this + 0x20) + 0x18)
                ) >> 3;
}

