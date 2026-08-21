
/* v8::internal::compiler::InstructionSelector::VisitFloat64Ieee754Unop(v8::internal::compiler::Node*,
   unsigned int) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitFloat64Ieee754Unop
          (InstructionSelector *this,Node *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  Node *pNVar4;
  
  uVar1 = GetVirtualRegister(this,param_1);
  MarkAsDefined(this,param_1);
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar4 = *(Node **)pNVar4;
  uVar2 = GetVirtualRegister(this,pNVar4);
  MarkAsUsed(this,pNVar4);
  lVar3 = Emit(this,param_2,(uVar1 & 0xffffffff) << 3 | 0xc800000001,
               (uVar2 & 0xffffffff) << 3 | 0xc800000001,0,0);
  *(uint *)(lVar3 + 4) = *(uint *)(lVar3 + 4) | 0x40000000;
  return;
}

