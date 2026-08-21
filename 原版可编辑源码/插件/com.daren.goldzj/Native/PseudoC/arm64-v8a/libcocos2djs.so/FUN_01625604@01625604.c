
void FUN_01625604(InstructionSelector *param_1,long param_2,uint param_3)

{
  Node *pNVar1;
  Node *pNVar2;
  ulong uVar3;
  long *plVar4;
  Node *pNVar5;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_38;
  
  plVar4 = (long *)(param_2 + 0x20);
  if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
    plVar4 = (long *)(*plVar4 + 0x10);
  }
  pNVar1 = (Node *)*plVar4;
  pNVar2 = (Node *)plVar4[1];
  pNVar5 = (Node *)plVar4[2];
  uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar1);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar1);
  local_68 = (uVar3 & 0xffffffff) << 3 | 0x5800000001;
  uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar2);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar2);
  local_60 = (uVar3 & 0xffffffff) << 3 | 0x5800000001;
  uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar5);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar5);
  local_58 = (uVar3 & 0xffffffff) << 3 | 0xd800000001;
  uVar3 = v8::internal::compiler::InstructionSequence::NextVirtualRegister
                    (*(InstructionSequence **)(param_1 + 0x10));
  local_38 = (uVar3 & 0xffffffff) << 3 | 0x5800000001;
  v8::internal::compiler::InstructionSelector::Emit
            (param_1,param_3 | 0x400,0,(InstructionOperand *)0x0,3,(InstructionOperand *)&local_68,1
             ,(InstructionOperand *)&local_38);
  return;
}

