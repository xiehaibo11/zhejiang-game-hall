
/* v8::internal::RelocInfo::set_wasm_call_address(unsigned long, v8::internal::ICacheFlushMode) */

void __thiscall
v8::internal::RelocInfo::set_wasm_call_address(RelocInfo *this,Instruction *param_1,int param_3)

{
  Instruction *pIVar1;
  undefined8 *puVar2;
  Instruction *this_00;
  
  this_00 = *(Instruction **)this;
  if (this_00[3] == (Instruction)0x58) {
    puVar2 = (undefined8 *)Instruction::ImmPCOffsetTarget(this_00);
    *puVar2 = param_1;
  }
  else {
    pIVar1 = this_00;
    if (param_1 != (Instruction *)0x0) {
      pIVar1 = param_1;
    }
    Instruction::SetBranchImmTarget(this_00,pIVar1);
    if (param_3 != 1) {
      FlushInstructionCache(this_00,4);
      return;
    }
  }
  return;
}

