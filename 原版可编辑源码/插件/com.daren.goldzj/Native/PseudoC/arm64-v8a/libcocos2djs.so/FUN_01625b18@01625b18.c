
void FUN_01625b18(InstructionSelector *param_1,Node *param_2,uint param_3)

{
  Node *pNVar1;
  Node *pNVar2;
  Node *pNVar3;
  ulong uVar4;
  Node *pNVar5;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_48;
  
  pNVar5 = param_2 + 0x20;
  if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar1 = *(Node **)pNVar5;
  pNVar3 = *(Node **)(pNVar5 + 8);
  pNVar2 = *(Node **)(pNVar5 + 0x10);
  pNVar5 = *(Node **)(pNVar5 + 0x18);
  uVar4 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar1);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar1);
  local_80 = (uVar4 & 0xffffffff) << 3 | 0x5800000001;
  uVar4 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar3);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar3);
  local_78 = (uVar4 & 0xffffffff) << 3 | 0x5800000001;
  uVar4 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar2);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar2);
  local_70 = (uVar4 & 0xffffffff) << 3 | 0xd800000001;
  uVar4 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar5);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar5);
  local_68 = (uVar4 & 0xffffffff) << 3 | 0xd800000001;
  uVar4 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,param_2);
  v8::internal::compiler::InstructionSelector::MarkAsDefined(param_1,param_2);
  local_48 = (uVar4 & 0xffffffff) << 3 | 0xd800000001;
  uVar4 = v8::internal::compiler::InstructionSequence::NextVirtualRegister
                    (*(InstructionSequence **)(param_1 + 0x10));
  local_90 = (uVar4 & 0xffffffff) << 3 | 0x5800000001;
  uVar4 = v8::internal::compiler::InstructionSequence::NextVirtualRegister
                    (*(InstructionSequence **)(param_1 + 0x10));
  local_88 = (uVar4 & 0xffffffff) << 3 | 0x5800000001;
  v8::internal::compiler::InstructionSelector::Emit
            (param_1,param_3 | 0x400,1,(InstructionOperand *)&local_48,4,
             (InstructionOperand *)&local_80,2,(InstructionOperand *)&local_90);
  return;
}

