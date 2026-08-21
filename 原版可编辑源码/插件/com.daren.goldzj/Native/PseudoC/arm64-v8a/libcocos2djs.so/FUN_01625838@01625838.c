
void FUN_01625838(InstructionSelector *param_1,Node *param_2,uint param_3)

{
  Node *pNVar1;
  Node *pNVar2;
  ulong uVar3;
  Node *pNVar4;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  
  pNVar4 = param_2 + 0x20;
  if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar1 = *(Node **)pNVar4;
  pNVar2 = *(Node **)(pNVar4 + 8);
  pNVar4 = *(Node **)(pNVar4 + 0x10);
  uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar1);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar1);
  local_68 = (uVar3 & 0xffffffff) << 3 | 0x5800000001;
  uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar2);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar2);
  local_60 = (uVar3 & 0xffffffff) << 3 | 0x5800000001;
  uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar4);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar4);
  local_58 = (uVar3 & 0xffffffff) << 3 | 0xd800000001;
  uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,param_2);
  v8::internal::compiler::InstructionSelector::MarkAsDefined(param_1,param_2);
  local_70 = (uVar3 & 0xffffffff) << 3 | 0xd800000001;
  uVar3 = v8::internal::compiler::InstructionSequence::NextVirtualRegister
                    (*(InstructionSequence **)(param_1 + 0x10));
  local_80 = (uVar3 & 0xffffffff) << 3 | 0x5800000001;
  uVar3 = v8::internal::compiler::InstructionSequence::NextVirtualRegister
                    (*(InstructionSequence **)(param_1 + 0x10));
  local_78 = (uVar3 & 0xffffffff) << 3 | 0x5800000001;
  v8::internal::compiler::InstructionSelector::Emit
            (param_1,param_3 | 0x400,1,(InstructionOperand *)&local_70,3,
             (InstructionOperand *)&local_68,2,(InstructionOperand *)&local_80);
  return;
}

