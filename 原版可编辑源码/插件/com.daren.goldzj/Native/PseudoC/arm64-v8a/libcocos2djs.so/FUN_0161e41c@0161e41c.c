
void FUN_0161e41c(InstructionSelector *param_1,undefined4 param_2,Node *param_3,undefined4 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  Node *pNVar4;
  Node *pNVar5;
  InstructionSelector *local_58;
  
  local_58 = param_1;
  uVar1 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,param_3);
  v8::internal::compiler::InstructionSelector::MarkAsDefined(param_1,param_3);
  pNVar5 = param_3 + 0x20;
  pNVar4 = pNVar5;
  if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar4 = *(Node **)pNVar4;
  uVar2 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar4);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar4);
  if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  uVar3 = v8::internal::compiler::Arm64OperandGenerator::UseOperand
                    (&local_58,*(undefined8 *)(pNVar5 + 8),param_4);
  v8::internal::compiler::InstructionSelector::Emit
            (param_1,param_2,(uVar1 & 0xffffffff) << 3 | 0xd800000001,
             (uVar2 & 0xffffffff) << 3 | 0x5800000001,uVar3,0,0);
  return;
}

