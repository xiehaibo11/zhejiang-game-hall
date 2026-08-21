
/* v8::internal::compiler::InstructionSelector::VisitFinishRegion(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitFinishRegion
          (InstructionSelector *this,Node *param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  ulong uVar3;
  
  pNVar1 = param_1 + 0x20;
  pNVar2 = pNVar1;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar2 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  uVar3 = ((ulong)*(uint *)(*(long *)pNVar2 + 0x14) & 0xffffc0) >> 3;
  *(ulong *)(*(long *)(this + 0xd8) + uVar3) =
       1L << ((ulong)*(uint *)(*(long *)pNVar2 + 0x14) & 0x3f) |
       *(ulong *)(*(long *)(this + 0xd8) + uVar3);
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar1 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  SetRename(this,param_1,*(Node **)pNVar1);
  return;
}

