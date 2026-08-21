
/* v8::internal::compiler::NodeProperties::FindSuccessfulControlProjection(v8::internal::compiler::Node*)
    */

Node * v8::internal::compiler::NodeProperties::FindSuccessfulControlProjection(Node *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  Node *pNVar7;
  Node *pNVar8;
  long *plVar9;
  long *plVar10;
  
  pNVar8 = param_1;
  if ((*(byte *)(*(long *)param_1 + 0x12) >> 5 & 1) == 0) {
    plVar9 = (long *)*(long *)(param_1 + 0x18);
    do {
      do {
        do {
          plVar4 = plVar9;
          if (plVar4 == (long *)0x0) {
            return param_1;
          }
          plVar9 = (long *)*plVar4;
          plVar10 = plVar4 + (ulong)(*(uint *)(plVar4 + 2) >> 1) * 3 + 3;
          if ((*(uint *)(plVar4 + 2) & 1) == 0) {
            plVar10 = (long *)*plVar10;
          }
          iVar1 = *(int *)((Operator *)*plVar10 + 0x14);
          uVar5 = OperatorProperties::HasContextInput((Operator *)*plVar10);
          uVar6 = OperatorProperties::HasFrameStateInput((Operator *)*plVar10);
          iVar2 = *(int *)(*plVar10 + 0x1c);
        } while (iVar2 == 0);
        uVar3 = *(uint *)(plVar4 + 2);
        iVar1 = iVar1 + (uVar5 & 1) + (uVar6 & 1) + *(int *)(*plVar10 + 0x18);
        uVar5 = uVar3 >> 1;
      } while ((iVar2 + iVar1 <= (int)uVar5) || ((int)uVar5 < iVar1));
      pNVar8 = (Node *)(plVar4 + (ulong)uVar5 * 3 + 3);
      pNVar7 = pNVar8;
      if ((uVar3 & 1) == 0) {
        pNVar7 = *(Node **)pNVar8;
      }
    } while (*(short *)(*(long *)pNVar7 + 0x10) != 6);
    if ((uVar3 & 1) == 0) {
      pNVar8 = *(Node **)pNVar8;
    }
  }
  return pNVar8;
}

