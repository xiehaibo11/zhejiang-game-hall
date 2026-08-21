
/* v8::internal::compiler::InstructionSelector::VisitF32x4Qfms(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitF32x4Qfms(InstructionSelector *this,Node *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  Node *pNVar5;
  Node *pNVar6;
  
  uVar1 = GetVirtualRegister(this,param_1);
  MarkAsDefined(this,param_1);
  pNVar5 = param_1 + 0x20;
  pNVar6 = pNVar5;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar6 = *(Node **)pNVar6;
  uVar2 = GetVirtualRegister(this,pNVar6);
  MarkAsUsed(this,pNVar6);
  pNVar6 = pNVar5;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar6 = *(Node **)(pNVar6 + 8);
  uVar3 = GetVirtualRegister(this,pNVar6);
  MarkAsUsed(this,pNVar6);
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar5 = *(Node **)(pNVar5 + 0x10);
  uVar4 = GetVirtualRegister(this,pNVar5);
  MarkAsUsed(this,pNVar5);
  Emit(this,0x124,(uVar1 & 0xffffffff) << 3 | 0xf800000001,(uVar2 & 0xffffffff) << 3 | 0x5800000001,
       (uVar3 & 0xffffffff) << 3 | 0x5800000001,(uVar4 & 0xffffffff) << 3 | 0x5800000001,0,0);
  return;
}

