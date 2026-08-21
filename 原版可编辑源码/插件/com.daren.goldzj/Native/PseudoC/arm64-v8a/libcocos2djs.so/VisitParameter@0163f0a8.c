
/* v8::internal::compiler::InstructionSelector::VisitParameter(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitParameter(InstructionSelector *this,Node *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  Instruction *this_00;
  ulong uVar4;
  Zone *this_01;
  long lVar5;
  long *plVar6;
  InstructionSelector *pIVar7;
  ulong uVar8;
  InstructionSelector *local_48;
  ulong local_28;
  
  local_48 = this;
  iVar1 = ParameterIndexOf(*(Operator **)param_1);
  uVar3 = Linkage::ParameterHasSecondaryLocation(*(Linkage **)(this + 8),iVar1);
  lVar5 = *(long *)*(Linkage **)(this + 8);
  if (iVar1 == -1) {
    lVar5 = *(long *)(lVar5 + 8);
  }
  else {
    plVar6 = *(long **)(lVar5 + 0x10);
    lVar5 = *(long *)(plVar6[2] + (*plVar6 + (long)iVar1) * 8);
  }
  if ((uVar3 & 1) == 0) {
    local_28 = OperandGenerator::DefineAsLocation((OperandGenerator *)&local_48,param_1,lVar5);
  }
  else {
    uVar3 = Linkage::GetParameterSecondaryLocation(*(Linkage **)(this + 8),iVar1);
    uVar8 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    uVar2 = *(uint *)(*(long *)(this + 0x118) + uVar8 * 4);
    pIVar7 = this;
    if (uVar2 == 0xffffffff) {
      uVar2 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
      *(uint *)(*(long *)(this + 0x118) + uVar8 * 4) = uVar2;
      uVar8 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
      pIVar7 = local_48;
    }
    uVar4 = uVar8 >> 3 & 0x1ffff8;
    local_28 = (uVar3 & 0x3fffe) << 0x2e | lVar5 << 0x28 | (ulong)uVar2 << 3 | 0x1b800000001;
    *(ulong *)(*(long *)(pIVar7 + 0xb8) + uVar4) =
         *(ulong *)(*(long *)(pIVar7 + 0xb8) + uVar4) | 1L << (uVar8 & 0x3f);
  }
  uVar3 = local_28 & 7;
  this_01 = *(Zone **)(*(long *)(this + 0x10) + 8);
  this_00 = *(Instruction **)(this_01 + 0x10);
  if ((ulong)(*(long *)(this_01 + 0x18) - (long)this_00) < 0x30) {
    this_00 = (Instruction *)Zone::NewExpand(this_01,0x30);
  }
  else {
    *(Instruction **)(this_01 + 0x10) = this_00 + 0x30;
  }
  Instruction::Instruction
            (this_00,0x11,(ulong)(uVar3 != 0),(InstructionOperand *)&local_28,0,
             (InstructionOperand *)0x0,0,(InstructionOperand *)0x0);
  Emit(this,this_00);
  return;
}

