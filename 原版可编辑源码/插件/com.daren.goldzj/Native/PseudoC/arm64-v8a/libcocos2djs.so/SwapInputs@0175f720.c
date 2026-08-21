
/* v8::internal::compiler::JSBinopReduction::SwapInputs() */

void __thiscall v8::internal::compiler::JSBinopReduction::SwapInputs(JSBinopReduction *this)

{
  long *plVar1;
  uint uVar2;
  Node *this_00;
  Node *pNVar3;
  Node *this_01;
  long lVar4;
  long *plVar5;
  
  this_00 = (Node *)NodeProperties::GetValueInput(*(Node **)(this + 8),0);
  pNVar3 = (Node *)NodeProperties::GetValueInput(*(Node **)(this + 8),1);
  lVar4 = *(long *)(this + 8);
  plVar1 = (long *)(lVar4 + 0x20);
  uVar2 = *(uint *)(lVar4 + 0x14) & 0xf000000;
  plVar5 = plVar1;
  if (uVar2 == 0xf000000) {
    plVar5 = (long *)(*plVar1 + 0x10);
  }
  this_01 = (Node *)*plVar5;
  if (this_01 != pNVar3) {
    if (uVar2 == 0xf000000) {
      lVar4 = *plVar1;
    }
    if (this_01 != (Node *)0x0) {
      Node::RemoveUse(this_01,(Use *)(lVar4 + -0x18));
    }
    *plVar5 = (long)pNVar3;
    if (pNVar3 != (Node *)0x0) {
      Node::AppendUse(pNVar3,(Use *)(lVar4 + -0x18));
    }
  }
  lVar4 = *(long *)(this + 8);
  plVar1 = (long *)(lVar4 + 0x20);
  uVar2 = *(uint *)(lVar4 + 0x14) & 0xf000000;
  plVar5 = plVar1;
  if (uVar2 == 0xf000000) {
    plVar5 = (long *)(*plVar1 + 0x10);
  }
  pNVar3 = (Node *)plVar5[1];
  if (pNVar3 != this_00) {
    if (uVar2 == 0xf000000) {
      lVar4 = *plVar1;
    }
    if (pNVar3 != (Node *)0x0) {
      Node::RemoveUse(pNVar3,(Use *)(lVar4 + -0x30));
    }
    plVar5[1] = (long)this_00;
    if (this_00 != (Node *)0x0) {
      Node::AppendUse(this_00,(Use *)(lVar4 + -0x30));
      return;
    }
  }
  return;
}

