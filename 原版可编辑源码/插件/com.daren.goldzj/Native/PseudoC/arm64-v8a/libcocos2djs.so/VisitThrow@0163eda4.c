
/* v8::internal::compiler::InstructionSelector::VisitThrow(v8::internal::compiler::Node*) */

void v8::internal::compiler::InstructionSelector::VisitThrow(Node *param_1)

{
  Zone *this;
  Instruction *this_00;
  undefined8 local_28;
  
  local_28 = 0;
  this = *(Zone **)(*(long *)(param_1 + 0x10) + 8);
  this_00 = *(Instruction **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)this_00) < 0x30) {
    this_00 = (Instruction *)Zone::NewExpand(this,0x30);
  }
  else {
    *(Instruction **)(this + 0x10) = this_00 + 0x30;
  }
  Instruction::Instruction
            (this_00,0x15,0,(InstructionOperand *)&local_28,0,(InstructionOperand *)0x0,0,
             (InstructionOperand *)0x0);
  Emit((InstructionSelector *)param_1,this_00);
  return;
}

