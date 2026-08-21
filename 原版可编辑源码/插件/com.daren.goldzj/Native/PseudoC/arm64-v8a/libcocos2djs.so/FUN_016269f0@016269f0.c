
void FUN_016269f0(InstructionSelector *param_1,undefined4 param_2,Node *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  Node *pNVar6;
  Node *pNVar7;
  InstructionSequence *this;
  Constant aCStack_70 [16];
  
  iVar1 = *(int *)(*(long *)param_3 + 0x2c);
  uVar2 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,param_3);
  v8::internal::compiler::InstructionSelector::MarkAsDefined(param_1,param_3);
  pNVar6 = param_3 + 0x20;
  pNVar7 = pNVar6;
  if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
    pNVar7 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  pNVar7 = *(Node **)pNVar7;
  uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar7);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar7);
  this = *(InstructionSequence **)(param_1 + 0x10);
  v8::internal::compiler::Constant::Constant(aCStack_70,iVar1);
  uVar4 = v8::internal::compiler::InstructionSequence::AddImmediate(this,aCStack_70);
  if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  pNVar6 = *(Node **)(pNVar6 + 8);
  uVar5 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar6);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar6);
  v8::internal::compiler::InstructionSelector::Emit
            (param_1,param_2,(uVar2 & 0xffffffff) << 3 | 0xd800000001,
             (uVar3 & 0xffffffff) << 3 | 0x5800000001,uVar4,(uVar5 & 0xffffffff) << 3 | 0xd800000001
             ,0,0);
  return;
}

