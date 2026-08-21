
/* v8::internal::compiler::UnwindingInfoWriter::MarkFrameConstructed(int) */

void __thiscall
v8::internal::compiler::UnwindingInfoWriter::MarkFrameConstructed
          (UnwindingInfoWriter *this,int param_1)

{
  EhFrameWriter *this_00;
  int iVar1;
  
  if (FLAG_perf_prof_unwinding_info != '\0') {
    this_00 = (EhFrameWriter *)(this + 8);
    EhFrameWriter::AdvanceLocation(this_00,param_1);
    iVar1 = EhFrameWriter::RegisterToDwarfCode(0x400000001e,0);
    EhFrameWriter::RecordRegisterSavedToStack(this_00,iVar1,8);
    iVar1 = EhFrameWriter::RegisterToDwarfCode(0x400000001d,0);
    EhFrameWriter::RecordRegisterSavedToStack(this_00,iVar1,0);
    this[0x48] = (UnwindingInfoWriter)0x1;
  }
  return;
}

