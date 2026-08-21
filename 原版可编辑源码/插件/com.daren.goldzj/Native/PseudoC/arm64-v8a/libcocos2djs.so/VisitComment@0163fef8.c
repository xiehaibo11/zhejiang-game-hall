
/* v8::internal::compiler::InstructionSelector::VisitComment(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitComment(InstructionSelector *this,Node *param_1)

{
  undefined8 uVar1;
  Zone *this_00;
  Instruction *this_01;
  InstructionSequence *this_02;
  undefined1 local_30 [16];
  
  this_02 = *(InstructionSequence **)(this + 0x10);
  local_30 = OperandGenerator::ToConstant(param_1);
  uVar1 = InstructionSequence::AddImmediate(this_02,(Constant *)local_30);
  this_00 = *(Zone **)(*(long *)(this + 0x10) + 8);
  this_01 = *(Instruction **)(this_00 + 0x10);
  local_30._0_8_ = uVar1;
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x30) {
    this_01 = (Instruction *)Zone::NewExpand(this_00,0x30);
  }
  else {
    *(Instruction **)(this_00 + 0x10) = this_01 + 0x30;
  }
  Instruction::Instruction
            (this_01,0x14,0,(InstructionOperand *)0x0,1,(InstructionOperand *)local_30,0,
             (InstructionOperand *)0x0);
  Emit(this,this_01);
  return;
}

