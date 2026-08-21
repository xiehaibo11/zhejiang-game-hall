
/* v8::internal::compiler::InstructionSelector::VisitGoto(v8::internal::compiler::BasicBlock*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitGoto
          (InstructionSelector *this,BasicBlock *param_1)

{
  Zone *this_00;
  Instruction *this_01;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = (long)*(int *)(param_1 + 4);
  local_30 = CONCAT35(local_30._5_3_,0x1300000007);
  local_38 = InstructionSequence::AddImmediate
                       (*(InstructionSequence **)(this + 0x10),(Constant *)&local_30);
  local_30 = 0;
  this_00 = *(Zone **)(*(long *)(this + 0x10) + 8);
  this_01 = *(Instruction **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x30) {
    this_01 = (Instruction *)Zone::NewExpand(this_00,0x30);
  }
  else {
    *(Instruction **)(this_00 + 0x10) = this_01 + 0x30;
  }
  Instruction::Instruction
            (this_01,0xd,0,(InstructionOperand *)&local_30,1,(InstructionOperand *)&local_38,0,
             (InstructionOperand *)0x0);
  Emit(this,this_01);
  return;
}

