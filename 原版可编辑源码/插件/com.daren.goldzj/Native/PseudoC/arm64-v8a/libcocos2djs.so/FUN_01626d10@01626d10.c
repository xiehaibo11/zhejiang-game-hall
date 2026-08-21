
void FUN_01626d10(InstructionSelector *param_1,undefined4 param_2,Node *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  Node *pNVar4;
  Node *pNVar5;
  ulong local_60;
  ulong local_58;
  
  uVar1 = v8::internal::compiler::InstructionSequence::NextVirtualRegister
                    (*(InstructionSequence **)(param_1 + 0x10));
  v8::internal::compiler::InstructionSequence::MarkAsRepresentation
            (*(InstructionSequence **)(param_1 + 0x10),0xd);
  local_60 = (uVar1 & 0xffffffff) << 3 | 0x5800000001;
  uVar1 = v8::internal::compiler::InstructionSequence::NextVirtualRegister
                    (*(InstructionSequence **)(param_1 + 0x10));
  local_58 = (uVar1 & 0xffffffff) << 3 | 0x5800000001;
  uVar1 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,param_3);
  v8::internal::compiler::InstructionSelector::MarkAsDefined(param_1,param_3);
  pNVar4 = param_3 + 0x20;
  pNVar5 = pNVar4;
  if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar5 = *(Node **)pNVar5;
  uVar2 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar5);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar5);
  if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar4 = *(Node **)(pNVar4 + 8);
  uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar4);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar4);
  v8::internal::compiler::InstructionSelector::Emit
            (param_1,param_2,(uVar1 & 0xffffffff) << 3 | 0xd800000001,
             (uVar2 & 0xffffffff) << 3 | 0x5800000001,(uVar3 & 0xffffffff) << 3 | 0x5800000001,2,
             &local_60);
  return;
}

