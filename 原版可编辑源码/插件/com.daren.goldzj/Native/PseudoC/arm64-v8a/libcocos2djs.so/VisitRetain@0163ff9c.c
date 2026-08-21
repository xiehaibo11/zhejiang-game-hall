
/* v8::internal::compiler::InstructionSelector::VisitRetain(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitRetain(InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  Zone *this_00;
  Instruction *this_01;
  Node *pNVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_38;
  undefined8 local_18;
  
  pNVar2 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  lVar5 = *(long *)pNVar2;
  uVar4 = (ulong)*(uint *)(lVar5 + 0x14) & 0xffffff;
  uVar1 = *(uint *)(*(long *)(this + 0x118) + uVar4 * 4);
  if (uVar1 == 0xffffffff) {
    uVar1 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
    *(uint *)(*(long *)(this + 0x118) + uVar4 * 4) = uVar1;
    uVar4 = (ulong)*(uint *)(lVar5 + 0x14) & 0xffffff;
  }
  uVar3 = uVar4 >> 3 & 0x1ffff8;
  local_38 = (ulong)uVar1 << 3 | 0x1800000001;
  *(ulong *)(*(long *)(this + 0xd8) + uVar3) =
       *(ulong *)(*(long *)(this + 0xd8) + uVar3) | 1L << (uVar4 & 0x3f);
  local_18 = 0;
  this_00 = *(Zone **)(*(long *)(this + 0x10) + 8);
  this_01 = *(Instruction **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x30) {
    this_01 = (Instruction *)Zone::NewExpand(this_00,0x30);
  }
  else {
    *(Instruction **)(this_00 + 0x10) = this_01 + 0x30;
  }
  Instruction::Instruction
            (this_01,0x11,0,(InstructionOperand *)&local_18,1,(InstructionOperand *)&local_38,0,
             (InstructionOperand *)0x0);
  Emit(this,this_01);
  return;
}

