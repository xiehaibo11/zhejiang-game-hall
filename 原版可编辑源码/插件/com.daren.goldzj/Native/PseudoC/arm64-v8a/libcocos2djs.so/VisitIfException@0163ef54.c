
/* v8::internal::compiler::InstructionSelector::VisitIfException(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitIfException
          (InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  Zone *this_00;
  Instruction *this_01;
  ulong uVar2;
  ulong uVar3;
  ulong local_18;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar1 = *(uint *)(*(long *)(this + 0x118) + uVar3 * 4);
  if (uVar1 == 0xffffffff) {
    uVar1 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
    *(uint *)(*(long *)(this + 0x118) + uVar3 * 4) = uVar1;
    uVar3 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  }
  uVar2 = uVar3 >> 3 & 0x1ffff8;
  local_18 = (ulong)uVar1 << 3 | 0xb800000001;
  *(ulong *)(*(long *)(this + 0xb8) + uVar2) =
       1L << (uVar3 & 0x3f) | *(ulong *)(*(long *)(this + 0xb8) + uVar2);
  this_00 = *(Zone **)(*(long *)(this + 0x10) + 8);
  this_01 = *(Instruction **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x30) {
    this_01 = (Instruction *)Zone::NewExpand(this_00,0x30);
  }
  else {
    *(Instruction **)(this_00 + 0x10) = this_01 + 0x30;
  }
  Instruction::Instruction
            (this_01,0x11,1,(InstructionOperand *)&local_18,0,(InstructionOperand *)0x0,0,
             (InstructionOperand *)0x0);
  Emit(this,this_01);
  return;
}

