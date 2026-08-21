
/* v8::internal::compiler::InstructionSelector::VisitOsrValue(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitOsrValue(InstructionSelector *this,Node *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  Zone *this_00;
  Instruction *this_01;
  InstructionSelector *local_38;
  ulong local_18;
  
  local_38 = this;
  iVar2 = OsrValueIndexOf(*(Operator **)param_1);
  uVar3 = Linkage::GetOsrValueLocation(*(Linkage **)(this + 8),iVar2);
  local_18 = OperandGenerator::DefineAsLocation((OperandGenerator *)&local_38,param_1,uVar3);
  uVar1 = local_18 & 7;
  this_00 = *(Zone **)(*(long *)(this + 0x10) + 8);
  this_01 = *(Instruction **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x30) {
    this_01 = (Instruction *)Zone::NewExpand(this_00,0x30);
  }
  else {
    *(Instruction **)(this_00 + 0x10) = this_01 + 0x30;
  }
  Instruction::Instruction
            (this_01,0x11,(ulong)(uVar1 != 0),(InstructionOperand *)&local_18,0,
             (InstructionOperand *)0x0,0,(InstructionOperand *)0x0);
  Emit(this,this_01);
  return;
}

