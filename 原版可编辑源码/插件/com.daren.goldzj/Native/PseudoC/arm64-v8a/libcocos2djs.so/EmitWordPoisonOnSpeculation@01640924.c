
/* v8::internal::compiler::InstructionSelector::EmitWordPoisonOnSpeculation(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::EmitWordPoisonOnSpeculation
          (InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  Zone *this_00;
  Instruction *this_01;
  Node *pNVar4;
  Node *pNVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_40;
  ulong uStack_38;
  
  if (*(int *)(this + 0x16c) == 1) {
    pNVar4 = param_1 + 0x20;
    pNVar5 = pNVar4;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar5 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar7 = ((ulong)*(uint *)(*(long *)pNVar5 + 0x14) & 0xffffc0) >> 3;
    *(ulong *)(*(long *)(this + 0xd8) + uVar7) =
         1L << ((ulong)*(uint *)(*(long *)pNVar5 + 0x14) & 0x3f) |
         *(ulong *)(*(long *)(this + 0xd8) + uVar7);
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    SetRename(this,param_1,*(Node **)pNVar4);
    return;
  }
  lVar3 = NodeProperties::GetValueInput(param_1,0);
  uVar7 = (ulong)*(uint *)(lVar3 + 0x14) & 0xffffff;
  uVar1 = *(uint *)(*(long *)(this + 0x118) + uVar7 * 4);
  if (uVar1 == 0xffffffff) {
    uVar1 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
    *(uint *)(*(long *)(this + 0x118) + uVar7 * 4) = uVar1;
    uVar7 = (ulong)*(uint *)(lVar3 + 0x14) & 0xffffff;
  }
  uVar6 = uVar7 >> 3 & 0x1ffff8;
  *(ulong *)(*(long *)(this + 0xd8) + uVar6) =
       *(ulong *)(*(long *)(this + 0xd8) + uVar6) | 1L << (uVar7 & 0x3f);
  uVar6 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar2 = *(uint *)(*(long *)(this + 0x118) + uVar6 * 4);
  uVar7 = (ulong)uVar1 << 3 | 0x5800000001;
  if (uVar2 == 0xffffffff) {
    uVar2 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
    *(uint *)(*(long *)(this + 0x118) + uVar6 * 4) = uVar2;
    uVar6 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  }
  uVar8 = uVar6 >> 3 & 0x1ffff8;
  uStack_38 = (ulong)uVar2 << 3 | 0xf800000001;
  *(ulong *)(*(long *)(this + 0xb8) + uVar8) =
       *(ulong *)(*(long *)(this + 0xb8) + uVar8) | 1L << (uVar6 & 0x3f);
  this_00 = *(Zone **)(*(long *)(this + 0x10) + 8);
  this_01 = *(Instruction **)(this_00 + 0x10);
  local_40 = uVar7;
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x38) {
    this_01 = (Instruction *)Zone::NewExpand(this_00,0x38);
  }
  else {
    *(Instruction **)(this_00 + 0x10) = this_01 + 0x38;
  }
  Instruction::Instruction
            (this_01,0x1d,1,(InstructionOperand *)&uStack_38,1,(InstructionOperand *)&local_40,0,
             (InstructionOperand *)0x0);
  Emit(this,this_01);
  return;
}

