
/* v8::internal::compiler::NodeProperties::GetEffectInput(v8::internal::compiler::Node*, int) */

undefined8 v8::internal::compiler::NodeProperties::GetEffectInput(Node *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Node *pNVar4;
  
  iVar1 = *(int *)(*(Operator **)param_1 + 0x14);
  uVar2 = OperatorProperties::HasContextInput(*(Operator **)param_1);
  uVar3 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  return *(undefined8 *)(pNVar4 + (long)(int)(iVar1 + param_2 + (uVar2 & 1) + (uVar3 & 1)) * 8);
}

