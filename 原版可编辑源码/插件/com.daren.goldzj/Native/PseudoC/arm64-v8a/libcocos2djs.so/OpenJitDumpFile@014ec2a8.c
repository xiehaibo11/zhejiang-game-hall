
/* v8::internal::PerfJitLogger::OpenJitDumpFile() */

void v8::internal::PerfJitLogger::OpenJitDumpFile(void)

{
  undefined4 uVar1;
  int iVar2;
  char *__file;
  long *plVar3;
  size_t __len;
  
  perf_output_handle_ = (FILE *)0x0;
  __file = operator_new__(0x1e,(nothrow_t *)&std::nothrow);
  if (__file == (char *)0x0) {
    plVar3 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar3 + 0x18))();
    __file = operator_new__(0x1e,(nothrow_t *)&std::nothrow);
    if (__file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  uVar1 = base::OS::GetCurrentProcessId();
  iVar2 = SNPrintF(__file,0x1e,"./jit-%d.dump",uVar1);
  if (iVar2 != -1) {
    iVar2 = open(__file,0x242,0x1b6);
    if (iVar2 != -1) {
      __len = sysconf(0x27);
      if ((__len == 0xffffffffffffffff) ||
         (marker_address_ = mmap((void *)0x0,__len,5,2,iVar2,0),
         marker_address_ == (void *)0xffffffffffffffff)) {
        marker_address_ = (void *)0x0;
      }
      else if (marker_address_ != (void *)0x0) {
        perf_output_handle_ = fdopen(iVar2,"w+");
        if (perf_output_handle_ != (FILE *)0x0) {
          setvbuf(perf_output_handle_,(char *)0x0,0,0x200000);
        }
      }
    }
    operator_delete__(__file);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","size != -1");
}

