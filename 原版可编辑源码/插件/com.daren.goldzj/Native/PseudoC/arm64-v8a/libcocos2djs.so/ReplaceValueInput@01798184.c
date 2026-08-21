
/* v8::internal::compiler::NodeProperties::ReplaceValueInput(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, int) */

void v8::internal::compiler::NodeProperties::ReplaceValueInput
               (Node *param_1,Node *param_2,int param_3)

{
  Node *pNVar1;
  Node *this;
  Node *pNVar2;
  
  pNVar1 = param_1 + 0x20;
  pNVar2 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar2 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this = *(Node **)(pNVar2 + (long)param_3 * 8);
  if (this != param_2) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      param_1 = *(Node **)pNVar1;
    }
    if (this != (Node *)0x0) {
      Node::RemoveUse(this,(Use *)(param_1 + (long)~param_3 * 0x18));
    }
    *(Node **)(pNVar2 + (long)param_3 * 8) = param_2;
    if (param_2 != (Node *)0x0) {
      Node::AppendUse(param_2,(Use *)(param_1 + (long)~param_3 * 0x18));
      return;
    }
  }
  return;
}

