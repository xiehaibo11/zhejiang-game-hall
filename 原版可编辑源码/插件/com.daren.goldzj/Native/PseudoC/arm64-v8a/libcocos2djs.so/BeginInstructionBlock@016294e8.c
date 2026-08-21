
/* v8::internal::compiler::UnwindingInfoWriter::BeginInstructionBlock(int,
   v8::internal::compiler::InstructionBlock const*) */

void __thiscall
v8::internal::compiler::UnwindingInfoWriter::BeginInstructionBlock
          (UnwindingInfoWriter *this,int param_1,InstructionBlock *param_2)

{
  EhFrameWriter *this_00;
  int iVar1;
  UnwindingInfoWriter *pUVar2;
  
  if (FLAG_perf_prof_unwinding_info != '\0') {
    this[0x49] = (UnwindingInfoWriter)0x0;
    pUVar2 = *(UnwindingInfoWriter **)(*(long *)(this + 0x50) + (long)*(int *)(param_2 + 100) * 8);
    if ((pUVar2 != (UnwindingInfoWriter *)0x0) && (*pUVar2 != this[0x48])) {
      this_00 = (EhFrameWriter *)(this + 8);
      EhFrameWriter::AdvanceLocation(this_00,param_1);
      if (*pUVar2 == (UnwindingInfoWriter)0x0) {
        EhFrameWriter::RecordRegisterFollowsInitialRule(this_00,0x400000001e,0);
      }
      else {
        iVar1 = EhFrameWriter::RegisterToDwarfCode(0x400000001e,0);
        EhFrameWriter::RecordRegisterSavedToStack(this_00,iVar1,8);
        iVar1 = EhFrameWriter::RegisterToDwarfCode(0x400000001d,0);
        EhFrameWriter::RecordRegisterSavedToStack(this_00,iVar1,0);
      }
      this[0x48] = *pUVar2;
    }
  }
  return;
}

