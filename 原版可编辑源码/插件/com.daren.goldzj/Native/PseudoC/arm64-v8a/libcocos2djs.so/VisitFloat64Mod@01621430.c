
/* v8::internal::compiler::InstructionSelector::VisitFloat64Mod(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitFloat64Mod
          (InstructionSelector *this,Node *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
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
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar5 = *(Node **)(pNVar5 + 8);
  uVar3 = GetVirtualRegister(this,pNVar5);
  MarkAsUsed(this,pNVar5);
  lVar4 = Emit(this,0xbd,(uVar1 & 0xffffffff) << 3 | 0xc800000001,
               (uVar2 & 0xffffffff) << 3 | 0xc800000001,(uVar3 & 0xffffffff) << 3 | 0x2c800000001,0,
               0);
  *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) | 0x40000000;
  return;
}

