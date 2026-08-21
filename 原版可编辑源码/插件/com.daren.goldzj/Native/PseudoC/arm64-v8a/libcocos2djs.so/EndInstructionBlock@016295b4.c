
/* v8::internal::compiler::UnwindingInfoWriter::EndInstructionBlock(v8::internal::compiler::InstructionBlock
   const*) */

void __thiscall
v8::internal::compiler::UnwindingInfoWriter::EndInstructionBlock
          (UnwindingInfoWriter *this,InstructionBlock *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  UnwindingInfoWriter *pUVar4;
  Zone *this_00;
  
  if ((FLAG_perf_prof_unwinding_info != '\0') && (this[0x49] == (UnwindingInfoWriter)0x0)) {
    piVar2 = *(int **)(param_1 + 8);
    for (piVar1 = *(int **)param_1; piVar1 != piVar2; piVar1 = piVar1 + 1) {
      iVar3 = *piVar1;
      if (*(long *)(*(long *)(this + 0x50) + (long)iVar3 * 8) == 0) {
        this_00 = *(Zone **)this;
        pUVar4 = *(UnwindingInfoWriter **)(this_00 + 0x10);
        if ((ulong)(*(long *)(this_00 + 0x18) - (long)pUVar4) < 8) {
          pUVar4 = (UnwindingInfoWriter *)Zone::NewExpand(this_00,8);
        }
        else {
          *(UnwindingInfoWriter **)(this_00 + 0x10) = pUVar4 + 8;
        }
        *pUVar4 = this[0x48];
        *(UnwindingInfoWriter **)(*(long *)(this + 0x50) + (long)iVar3 * 8) = pUVar4;
      }
    }
  }
  return;
}

