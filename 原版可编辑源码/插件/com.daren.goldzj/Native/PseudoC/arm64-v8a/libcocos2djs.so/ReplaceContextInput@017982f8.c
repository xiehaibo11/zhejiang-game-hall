
/* v8::internal::compiler::NodeProperties::ReplaceContextInput(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void v8::internal::compiler::NodeProperties::ReplaceContextInput(Node *param_1,Node *param_2)

{
  Node *pNVar1;
  uint uVar2;
  Node *this;
  Node *pNVar3;
  
  uVar2 = *(uint *)(*(long *)param_1 + 0x14);
  pNVar1 = param_1 + 0x20;
  pNVar3 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar3 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this = *(Node **)(pNVar3 + (long)(int)uVar2 * 8);
  if (this != param_2) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      param_1 = *(Node **)pNVar1;
    }
    if (this != (Node *)0x0) {
      Node::RemoveUse(this,(Use *)(param_1 + (long)(int)~uVar2 * 0x18));
    }
    *(Node **)(pNVar3 + (long)(int)uVar2 * 8) = param_2;
    if (param_2 != (Node *)0x0) {
      Node::AppendUse(param_2,(Use *)(param_1 + (long)(int)~uVar2 * 0x18));
      return;
    }
  }
  return;
}

