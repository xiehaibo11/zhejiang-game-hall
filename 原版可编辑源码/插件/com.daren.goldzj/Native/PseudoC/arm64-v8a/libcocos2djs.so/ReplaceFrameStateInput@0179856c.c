
/* v8::internal::compiler::NodeProperties::ReplaceFrameStateInput(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void v8::internal::compiler::NodeProperties::ReplaceFrameStateInput(Node *param_1,Node *param_2)

{
  Node *pNVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  Node *this;
  Node *pNVar5;
  
  iVar3 = *(int *)(*(Operator **)param_1 + 0x14);
  uVar4 = OperatorProperties::HasContextInput(*(Operator **)param_1);
  pNVar1 = param_1 + 0x20;
  lVar2 = (long)iVar3 + (uVar4 & 1);
  pNVar5 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar5 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this = *(Node **)(pNVar5 + lVar2 * 8);
  if (this != param_2) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      param_1 = *(Node **)pNVar1;
    }
    if (this != (Node *)0x0) {
      Node::RemoveUse(this,(Use *)(param_1 + (long)(int)~(uint)lVar2 * 0x18));
    }
    *(Node **)(pNVar5 + lVar2 * 8) = param_2;
    if (param_2 != (Node *)0x0) {
      Node::AppendUse(param_2,(Use *)(param_1 + (long)(int)~(uint)lVar2 * 0x18));
      return;
    }
  }
  return;
}

