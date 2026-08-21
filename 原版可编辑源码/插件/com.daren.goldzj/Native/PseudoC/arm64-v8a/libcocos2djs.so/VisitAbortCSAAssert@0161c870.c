
/* v8::internal::compiler::InstructionSelector::VisitAbortCSAAssert(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitAbortCSAAssert
          (InstructionSelector *this,Node *param_1)

{
  ulong uVar1;
  Node *pNVar2;
  
  pNVar2 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  pNVar2 = *(Node **)pNVar2;
  uVar1 = GetVirtualRegister(this,pNVar2);
  MarkAsUsed(this,pNVar2);
  Emit(this,0x12,0,(uVar1 & 0xffffffff) << 3 | 0x2b800000001,0,0);
  return;
}

