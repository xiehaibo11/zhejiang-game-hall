
void FUN_016268a4(InstructionSelector *param_1,undefined4 param_2,Node *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  Node *pNVar5;
  InstructionSequence *this;
  Constant aCStack_50 [16];
  
  iVar1 = *(int *)(*(long *)param_3 + 0x2c);
  uVar2 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,param_3);
  v8::internal::compiler::InstructionSelector::MarkAsDefined(param_1,param_3);
  pNVar5 = param_3 + 0x20;
  if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar5 = *(Node **)pNVar5;
  uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar5);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar5);
  this = *(InstructionSequence **)(param_1 + 0x10);
  v8::internal::compiler::Constant::Constant(aCStack_50,iVar1);
  uVar4 = v8::internal::compiler::InstructionSequence::AddImmediate(this,aCStack_50);
  v8::internal::compiler::InstructionSelector::Emit
            (param_1,param_2,(uVar2 & 0xffffffff) << 3 | 0xd800000001,
             (uVar3 & 0xffffffff) << 3 | 0x5800000001,uVar4,0,0);
  return;
}

