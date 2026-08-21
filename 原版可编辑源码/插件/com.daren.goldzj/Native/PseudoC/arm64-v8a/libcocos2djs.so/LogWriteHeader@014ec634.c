
/* v8::internal::PerfJitLogger::LogWriteHeader() */

void v8::internal::PerfJitLogger::LogWriteHeader(void)

{
  long *plVar1;
  double dVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  undefined8 uStack_20;
  
  local_30 = 0xdeadbeef;
  uStack_38 = 0xb700000028;
  local_40 = 0x14a695444;
  local_2c = base::OS::GetCurrentProcessId();
  plVar1 = (long *)V8::GetCurrentPlatform();
  dVar2 = (double)(**(code **)(*plVar1 + 0x80))();
  local_28 = (long)(dVar2 * 1000.0);
  uStack_20 = 0;
  fwrite(&local_40,1,0x28,perf_output_handle_);
  return;
}

