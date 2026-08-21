
/* v8::internal::PerfJitLogger::CloseJitDumpFile() */

int v8::internal::PerfJitLogger::CloseJitDumpFile(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (perf_output_handle_ != (FILE *)0x0) {
    iVar1 = fclose(perf_output_handle_);
    perf_output_handle_ = (FILE *)0x0;
  }
  return iVar1;
}

