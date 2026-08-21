
/* v8::internal::compiler::UnwindingInfoWriter::MarkLinkRegisterOnTopOfStack(int,
   v8::internal::Register const&) */

void __thiscall
v8::internal::compiler::UnwindingInfoWriter::MarkLinkRegisterOnTopOfStack
          (UnwindingInfoWriter *this,int param_1,Register *param_2)

{
  EhFrameWriter *this_00;
  int iVar1;
  
  if (FLAG_perf_prof_unwinding_info != '\0') {
    this_00 = (EhFrameWriter *)(this + 8);
    EhFrameWriter::AdvanceLocation(this_00,param_1);
    EhFrameWriter::SetBaseAddressRegisterAndOffset
              (this_00,*(undefined8 *)param_2,*(undefined4 *)(param_2 + 8),0);
    iVar1 = EhFrameWriter::RegisterToDwarfCode(0x400000001e,0);
    EhFrameWriter::RecordRegisterSavedToStack(this_00,iVar1,0);
    return;
  }
  return;
}

