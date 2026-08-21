
/* v8::internal::compiler::NodeProperties::GetFrameStateInput(v8::internal::compiler::Node*) */

undefined8 v8::internal::compiler::NodeProperties::GetFrameStateInput(Node *param_1)

{
  int iVar1;
  uint uVar2;
  Node *pNVar3;
  
  iVar1 = *(int *)(*(Operator **)param_1 + 0x14);
  uVar2 = OperatorProperties::HasContextInput(*(Operator **)param_1);
  pNVar3 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
  }
  return *(undefined8 *)(pNVar3 + (long)(int)(iVar1 + (uVar2 & 1)) * 8);
}

