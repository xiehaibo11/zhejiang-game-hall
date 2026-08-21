
/* v8::internal::compiler::NodeProperties::FindFrameStateBefore(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * v8::internal::compiler::NodeProperties::FindFrameStateBefore(Node *param_1,Node *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  Operator *pOVar4;
  Node *pNVar5;
  int iVar6;
  
  pOVar4 = *(Operator **)param_1;
  iVar6 = *(int *)(pOVar4 + 0x14);
  while( true ) {
    uVar2 = OperatorProperties::HasContextInput(pOVar4);
    uVar3 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
    pNVar5 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
    }
    param_1 = *(Node **)(pNVar5 + (long)(int)(iVar6 + (uVar2 & 1) + (uVar3 & 1)) * 8);
    pOVar4 = *(Operator **)param_1;
    sVar1 = *(short *)(pOVar4 + 0x10);
    if (sVar1 == 0x26) {
      iVar6 = *(int *)(pOVar4 + 0x14);
      uVar2 = OperatorProperties::HasContextInput(pOVar4);
      pNVar5 = param_1 + 0x20;
      if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
        pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
      }
      return *(Node **)(pNVar5 + (long)(int)(iVar6 + (uVar2 & 1)) * 8);
    }
    if (sVar1 == 0x3b) {
      return param_2;
    }
    if (sVar1 == 0x3d) break;
    iVar6 = *(int *)(pOVar4 + 0x14);
  }
  return param_2;
}

