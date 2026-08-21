
void FUN_01625434(InstructionSelector *param_1,Node *param_2,uint param_3)

{
  Node *pNVar1;
  ulong uVar2;
  Node *pNVar3;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_38;
  
  pNVar3 = param_2 + 0x20;
  if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
    pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
  }
  pNVar1 = *(Node **)pNVar3;
  pNVar3 = *(Node **)(pNVar3 + 8);
  uVar2 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar1);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar1);
  local_60 = (uVar2 & 0xffffffff) << 3 | 0x5800000001;
  uVar2 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar3);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar3);
  local_58 = (uVar2 & 0xffffffff) << 3 | 0x5800000001;
  uVar2 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,param_2);
  v8::internal::compiler::InstructionSelector::MarkAsDefined(param_1,param_2);
  local_38 = (uVar2 & 0xffffffff) << 3 | 0xd800000001;
  uVar2 = v8::internal::compiler::InstructionSequence::NextVirtualRegister
                    (*(InstructionSequence **)(param_1 + 0x10));
  local_68 = (uVar2 & 0xffffffff) << 3 | 0x5800000001;
  v8::internal::compiler::InstructionSelector::Emit
            (param_1,param_3 | 0x400,1,(InstructionOperand *)&local_38,2,
             (InstructionOperand *)&local_60,1,(InstructionOperand *)&local_68);
  return;
}

