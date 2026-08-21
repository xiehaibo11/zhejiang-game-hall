
/* v8::internal::PerfJitLogger::LogWriteUnwindingInfo(v8::internal::Code) */

void __thiscall v8::internal::PerfJitLogger::LogWriteUnwindingInfo(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined4 local_158;
  uint local_154;
  undefined **local_150;
  long local_148;
  undefined8 local_140;
  long local_138;
  timespec local_130;
  locale alStack_120 [64];
  undefined **local_e0 [19];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_158 = 4;
  clock_gettime(1,&local_130);
  local_148 = 0x14;
  local_150 = (undefined **)(local_130.tv_nsec + local_130.tv_sec * 125000000 * 8);
  local_140 = 0x14;
  if ((*(byte *)(param_2 + 0x17) & 1) == 0) {
    local_138 = 0;
  }
  else {
    local_148 = (long)*(int *)(param_2 + ((long)(*(int *)(param_2 + 0x13) + 0x47) &
                                         0xfffffffffffffff8U) + -1);
    local_138 = local_148;
  }
  local_154 = (int)local_148 + 0x2fU & 0xfffffff8;
  iVar1 = local_154 - (int)local_148;
  fwrite(&local_158,1,0x28,perf_output_handle_);
  if ((*(byte *)(param_2 + 0x17) & 1) == 0) {
    OFStream::OFStream((OFStream *)&local_130,(__sFILE *)perf_output_handle_);
    EhFrameWriter::WriteEmptyEhFrame((basic_ostream *)&local_130);
    local_130.tv_sec = (__time_t)&PTR__OFStream_01ca1000;
    local_e0[0] = &PTR__OFStream_01ca1028;
    local_130.tv_nsec = (long)&PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_120);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_e0);
  }
  else {
    param_2 = ((long)(*(int *)(param_2 + 0x13) + 0x47) & 0xfffffffffffffff8U) + param_2;
    fwrite((void *)(param_2 + 7),1,(long)*(int *)(param_2 + -1),perf_output_handle_);
  }
  local_130.tv_nsec = local_130.tv_nsec & 0xffffffffffffff00;
  local_130.tv_sec = 0;
  fwrite(&local_130,1,(long)(iVar1 + -0x28),perf_output_handle_);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

