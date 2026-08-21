
/* v8::internal::compiler::NodeProperties::PastFrameStateIndex(v8::internal::compiler::Node*) */

int v8::internal::compiler::NodeProperties::PastFrameStateIndex(Node *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(*(Operator **)param_1 + 0x14);
  uVar2 = OperatorProperties::HasContextInput(*(Operator **)param_1);
  uVar3 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  return iVar1 + (uVar2 & 1) + (uVar3 & 1);
}

