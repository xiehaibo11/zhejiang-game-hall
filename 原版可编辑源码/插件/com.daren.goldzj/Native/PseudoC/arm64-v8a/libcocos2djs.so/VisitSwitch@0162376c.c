
/* v8::internal::compiler::InstructionSelector::VisitSwitch(v8::internal::compiler::Node*,
   v8::internal::compiler::SwitchInfo const&) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitSwitch
          (InstructionSelector *this,Node *param_1,SwitchInfo *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  Node *pNVar5;
  InstructionSequence *this_00;
  ulong local_58;
  Constant aCStack_50 [16];
  ulong local_28;
  
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar5 = *(Node **)pNVar5;
  uVar1 = GetVirtualRegister(this,pNVar5);
  uVar1 = (uVar1 & 0xffffffff) << 3 | 0x5800000001;
  MarkAsUsed(this,pNVar5);
  local_28 = uVar1;
  if (*(int *)(this + 0x168) == 1) {
    lVar3 = (*(long **)param_2)[1] - **(long **)param_2;
    uVar4 = lVar3 >> 4;
    if ((((4 < uVar4) && (*(ulong *)(param_2 + 0x10) + 0xd <= uVar4 * 3 + (lVar3 >> 3) + 3)) &&
        (*(ulong *)(param_2 + 0x10) < 0x20001)) && (*(int *)(param_2 + 8) != -0x80000000)) {
      local_58 = uVar1;
      if (*(int *)(param_2 + 8) != 0) {
        uVar4 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
        uVar4 = (uVar4 & 0xffffffff) << 3 | 0x5800000001;
        this_00 = *(InstructionSequence **)(this + 0x10);
        local_58 = uVar4;
        Constant::Constant(aCStack_50,*(int *)(param_2 + 8));
        uVar2 = InstructionSequence::AddImmediate(this_00,aCStack_50);
        Emit(this,0x77,uVar4,uVar1,uVar2,0,0);
      }
      EmitTableSwitch(this,param_2,(InstructionOperand *)&local_58);
      return;
    }
  }
  EmitBinarySearchSwitch(this,param_2,(InstructionOperand *)&local_28);
  return;
}

