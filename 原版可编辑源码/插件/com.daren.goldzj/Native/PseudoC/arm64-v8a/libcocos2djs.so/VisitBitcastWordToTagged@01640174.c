
/* v8::internal::compiler::InstructionSelector::VisitBitcastWordToTagged(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitBitcastWordToTagged
          (InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  Zone *this_00;
  Instruction *this_01;
  ulong uVar2;
  Node *pNVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong local_40;
  ulong uStack_38;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar1 = *(uint *)(*(long *)(this + 0x118) + uVar5 * 4);
  if (uVar1 == 0xffffffff) {
    uVar1 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
    *(uint *)(*(long *)(this + 0x118) + uVar5 * 4) = uVar1;
    uVar5 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  }
  uVar2 = uVar5 >> 3 & 0x1ffff8;
  *(ulong *)(*(long *)(this + 0xb8) + uVar2) =
       *(ulong *)(*(long *)(this + 0xb8) + uVar2) | 1L << (uVar5 & 0x3f);
  pNVar3 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
  }
  lVar6 = *(long *)pNVar3;
  uVar2 = (ulong)uVar1 << 3 | 0xf800000001;
  uVar5 = (ulong)*(uint *)(lVar6 + 0x14) & 0xffffff;
  uVar1 = *(uint *)(*(long *)(this + 0x118) + uVar5 * 4);
  if (uVar1 == 0xffffffff) {
    uVar1 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
    *(uint *)(*(long *)(this + 0x118) + uVar5 * 4) = uVar1;
    uVar5 = (ulong)*(uint *)(lVar6 + 0x14) & 0xffffff;
  }
  uVar4 = uVar5 >> 3 & 0x1ffff8;
  local_40 = (ulong)uVar1 << 3 | 0x800000001;
  *(ulong *)(*(long *)(this + 0xd8) + uVar4) =
       *(ulong *)(*(long *)(this + 0xd8) + uVar4) | 1L << (uVar5 & 0x3f);
  this_00 = *(Zone **)(*(long *)(this + 0x10) + 8);
  this_01 = *(Instruction **)(this_00 + 0x10);
  uStack_38 = uVar2;
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x38) {
    this_01 = (Instruction *)Zone::NewExpand(this_00,0x38);
  }
  else {
    *(Instruction **)(this_00 + 0x10) = this_01 + 0x38;
  }
  Instruction::Instruction
            (this_01,0x11,1,(InstructionOperand *)&uStack_38,1,(InstructionOperand *)&local_40,0,
             (InstructionOperand *)0x0);
  Emit(this,this_01);
  return;
}

