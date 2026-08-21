
/* v8::internal::compiler::NodeProperties::NoObservableSideEffectBetween(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

undefined8
v8::internal::compiler::NodeProperties::NoObservableSideEffectBetween(Node *param_1,Node *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Operator *pOVar4;
  Node *pNVar5;
  
  while( true ) {
    if (param_1 == param_2) {
      return 1;
    }
    pOVar4 = *(Operator **)param_1;
    if ((*(int *)(pOVar4 + 0x18) != 1) || (((byte)pOVar4[0x12] >> 4 & 1) == 0)) break;
    iVar1 = *(int *)(pOVar4 + 0x14);
    uVar2 = OperatorProperties::HasContextInput(pOVar4);
    uVar3 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
    pNVar5 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
    }
    param_1 = *(Node **)(pNVar5 + (long)(int)(iVar1 + (uVar2 & 1) + (uVar3 & 1)) * 8);
  }
  return 0;
}

