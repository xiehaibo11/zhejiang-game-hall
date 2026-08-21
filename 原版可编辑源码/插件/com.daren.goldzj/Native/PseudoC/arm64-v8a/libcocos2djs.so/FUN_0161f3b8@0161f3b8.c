
void FUN_0161f3b8(InstructionSelector *param_1,undefined4 param_2,Node *param_3)

{
  ulong uVar1;
  ulong uVar2;
  Node *pNVar3;
  
  uVar1 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,param_3);
  v8::internal::compiler::InstructionSelector::MarkAsDefined(param_1,param_3);
  pNVar3 = param_3 + 0x20;
  if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
    pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
  }
  pNVar3 = *(Node **)pNVar3;
  uVar2 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar3);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar3);
  v8::internal::compiler::InstructionSelector::Emit
            (param_1,param_2,(uVar1 & 0xffffffff) << 3 | 0xd800000001,
             (uVar2 & 0xffffffff) << 3 | 0x5800000001,0,0);
  return;
}

