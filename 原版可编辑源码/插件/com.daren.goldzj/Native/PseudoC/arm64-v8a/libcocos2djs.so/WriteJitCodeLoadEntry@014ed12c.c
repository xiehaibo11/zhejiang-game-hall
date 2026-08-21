
/* v8::internal::PerfJitLogger::WriteJitCodeLoadEntry(unsigned char const*, unsigned int, char
   const*, int) */

void __thiscall
v8::internal::PerfJitLogger::WriteJitCodeLoadEntry
          (PerfJitLogger *this,uchar *param_1,uint param_2,char *param_3,int param_4)

{
  undefined4 local_88;
  int iStack_84;
  long local_80;
  undefined4 local_78;
  undefined4 local_74;
  uchar *local_70;
  uchar *puStack_68;
  ulong local_60;
  long lStack_58;
  timespec local_50;
  
  iStack_84 = param_2 + param_4 + 0x39;
  local_88 = 0;
  clock_gettime(1,&local_50);
  local_80 = local_50.tv_nsec + local_50.tv_sec * 1000000000;
  local_78 = base::OS::GetCurrentProcessId();
  local_74 = base::OS::GetCurrentThreadId();
  lStack_58 = code_index_;
  code_index_ = code_index_ + 1;
  local_70 = param_1;
  puStack_68 = param_1;
  local_60 = (ulong)param_2;
  fwrite(&local_88,1,0x38,perf_output_handle_);
  fwrite(param_3,1,(long)param_4,perf_output_handle_);
  fputc(0,perf_output_handle_);
  fwrite(param_1,1,(long)(int)param_2,perf_output_handle_);
  return;
}

