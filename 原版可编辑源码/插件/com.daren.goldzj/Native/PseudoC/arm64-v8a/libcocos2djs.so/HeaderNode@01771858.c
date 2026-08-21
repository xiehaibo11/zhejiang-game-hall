
/* v8::internal::compiler::LoopTree::HeaderNode(v8::internal::compiler::LoopTree::Loop*) */

void __thiscall v8::internal::compiler::LoopTree::HeaderNode(LoopTree *this,Loop *param_1)

{
  Node *pNVar1;
  
  pNVar1 = *(Node **)(*(long *)(this + 0x68) + (long)*(int *)(param_1 + 0x30) * 8);
  if (*(short *)(*(long *)pNVar1 + 0x10) == 1) {
    return;
  }
  NodeProperties::GetControlInput(pNVar1,0);
  return;
}

