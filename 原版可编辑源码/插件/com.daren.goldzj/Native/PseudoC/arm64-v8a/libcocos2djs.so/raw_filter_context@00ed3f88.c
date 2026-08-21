
/* v8::CpuProfilingOptions::raw_filter_context() const */

long __thiscall v8::CpuProfilingOptions::raw_filter_context(CpuProfilingOptions *this)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)(this + 0x10) & 0xffffffff00000000;
  return (uVar1 | *(uint *)((uVar1 | *(uint *)(**(ulong **)(this + 0x10) - 1)) + 0x13)) - 1;
}

