
/* v8::internal::compiler::NodeProperties::ReplaceEffectInput(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, int) */

void v8::internal::compiler::NodeProperties::ReplaceEffectInput
               (Node *param_1,Node *param_2,int param_3)

{
  Node *pNVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  Node *this;
  Node *pNVar5;
  
  iVar2 = *(int *)(*(Operator **)param_1 + 0x14);
  uVar3 = OperatorProperties::HasContextInput(*(Operator **)param_1);
  uVar4 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  pNVar1 = param_1 + 0x20;
  uVar3 = iVar2 + param_3 + (uVar3 & 1) + (uVar4 & 1);
  pNVar5 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar5 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this = *(Node **)(pNVar5 + (long)(int)uVar3 * 8);
  if (this != param_2) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      param_1 = *(Node **)pNVar1;
    }
    if (this != (Node *)0x0) {
      Node::RemoveUse(this,(Use *)(param_1 + (long)(int)~uVar3 * 0x18));
    }
    *(Node **)(pNVar5 + (long)(int)uVar3 * 8) = param_2;
    if (param_2 != (Node *)0x0) {
      Node::AppendUse(param_2,(Use *)(param_1 + (long)(int)~uVar3 * 0x18));
      return;
    }
  }
  return;
}

