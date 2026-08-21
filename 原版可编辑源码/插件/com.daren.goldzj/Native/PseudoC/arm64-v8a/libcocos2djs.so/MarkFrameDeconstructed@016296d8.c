
/* v8::internal::compiler::UnwindingInfoWriter::MarkFrameDeconstructed(int) */

void __thiscall
v8::internal::compiler::UnwindingInfoWriter::MarkFrameDeconstructed
          (UnwindingInfoWriter *this,int param_1)

{
  if (FLAG_perf_prof_unwinding_info != '\0') {
    EhFrameWriter::AdvanceLocation((EhFrameWriter *)(this + 8),param_1);
    EhFrameWriter::RecordRegisterFollowsInitialRule((EhFrameWriter *)(this + 8),0x400000001e,0);
    this[0x48] = (UnwindingInfoWriter)0x0;
  }
  return;
}

