
/* v8::internal::PerfJitLogger::OpenMarkerFile(int) */

void * __thiscall v8::internal::PerfJitLogger::OpenMarkerFile(PerfJitLogger *this,int param_1)

{
  size_t __len;
  void *pvVar1;
  void *pvVar2;
  
  __len = sysconf(0x27);
  if (__len == 0xffffffffffffffff) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar1 = mmap((void *)0x0,__len,5,2,param_1,0);
    pvVar2 = (void *)0x0;
    if (pvVar1 != (void *)0xffffffffffffffff) {
      pvVar2 = pvVar1;
    }
  }
  return pvVar2;
}

