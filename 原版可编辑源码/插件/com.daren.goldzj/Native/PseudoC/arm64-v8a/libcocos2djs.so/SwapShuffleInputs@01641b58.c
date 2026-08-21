
/* v8::internal::compiler::InstructionSelector::SwapShuffleInputs(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::SwapShuffleInputs
          (InstructionSelector *this,Node *param_1)

{
  Node *pNVar1;
  Node *this_00;
  Node *pNVar2;
  Node *pNVar3;
  Use *pUVar4;
  
  pNVar1 = param_1 + 0x20;
  pNVar3 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar3 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this_00 = *(Node **)pNVar3;
  pNVar2 = *(Node **)(pNVar3 + 8);
  if (this_00 != pNVar2) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar4 = (Use *)(*(long *)pNVar1 + -0x18);
    }
    else {
      pUVar4 = (Use *)(param_1 + -0x18);
    }
    if (this_00 != (Node *)0x0) {
      Node::RemoveUse(this_00,pUVar4);
    }
    *(Node **)pNVar3 = pNVar2;
    if (pNVar2 != (Node *)0x0) {
      Node::AppendUse(pNVar2,pUVar4);
    }
  }
  pNVar3 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar3 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar2 = *(Node **)(pNVar3 + 8);
  if (pNVar2 != this_00) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      param_1 = *(Node **)pNVar1;
    }
    if (pNVar2 != (Node *)0x0) {
      Node::RemoveUse(pNVar2,(Use *)(param_1 + -0x30));
    }
    *(Node **)(pNVar3 + 8) = this_00;
    if (this_00 != (Node *)0x0) {
      Node::AppendUse(this_00,(Use *)(param_1 + -0x30));
      return;
    }
  }
  return;
}

