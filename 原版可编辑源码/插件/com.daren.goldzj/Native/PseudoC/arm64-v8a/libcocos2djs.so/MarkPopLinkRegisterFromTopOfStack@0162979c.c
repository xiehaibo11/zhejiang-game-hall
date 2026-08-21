
/* v8::internal::compiler::UnwindingInfoWriter::MarkPopLinkRegisterFromTopOfStack(int) */

void __thiscall
v8::internal::compiler::UnwindingInfoWriter::MarkPopLinkRegisterFromTopOfStack
          (UnwindingInfoWriter *this,int param_1)

{
  EhFrameWriter *this_00;
  
  if (FLAG_perf_prof_unwinding_info != '\0') {
    this_00 = (EhFrameWriter *)(this + 8);
    EhFrameWriter::AdvanceLocation(this_00,param_1);
    EhFrameWriter::SetBaseAddressRegisterAndOffset(this_00,0x400000001d,0,0);
    EhFrameWriter::RecordRegisterFollowsInitialRule(this_00,0x400000001e,0);
    return;
  }
  return;
}

