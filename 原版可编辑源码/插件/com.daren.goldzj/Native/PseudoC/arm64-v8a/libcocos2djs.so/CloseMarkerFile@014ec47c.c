
/* v8::internal::PerfJitLogger::CloseMarkerFile(void*) */

PerfJitLogger * __thiscall
v8::internal::PerfJitLogger::CloseMarkerFile(PerfJitLogger *this,void *param_1)

{
  uint uVar1;
  
  if ((param_1 != (void *)0x0) &&
     (this = (PerfJitLogger *)sysconf(0x27), this != (PerfJitLogger *)0xffffffffffffffff)) {
    uVar1 = munmap(param_1,(size_t)this);
    return (PerfJitLogger *)(ulong)uVar1;
  }
  return this;
}

