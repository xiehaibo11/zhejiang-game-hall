
/* v8::internal::compiler::NodeProperties::ReplaceValueInputs(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void v8::internal::compiler::NodeProperties::ReplaceValueInputs(Node *param_1,Node *param_2)

{
  Node *pNVar1;
  int iVar2;
  Node *this;
  Use *pUVar3;
  Node *pNVar4;
  
  iVar2 = *(int *)(*(long *)param_1 + 0x14);
  pNVar1 = param_1 + 0x20;
  pNVar4 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar4 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this = *(Node **)pNVar4;
  if (this != param_2) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar3 = (Use *)(*(long *)pNVar1 + -0x18);
    }
    else {
      pUVar3 = (Use *)(param_1 + -0x18);
    }
    if (this != (Node *)0x0) {
      Node::RemoveUse(this,pUVar3);
    }
    *(Node **)pNVar4 = param_2;
    if (param_2 != (Node *)0x0) {
      Node::AppendUse(param_2,pUVar3);
    }
  }
  while (iVar2 = iVar2 + -1, 0 < iVar2) {
    Node::RemoveInput(param_1,iVar2);
  }
  return;
}

