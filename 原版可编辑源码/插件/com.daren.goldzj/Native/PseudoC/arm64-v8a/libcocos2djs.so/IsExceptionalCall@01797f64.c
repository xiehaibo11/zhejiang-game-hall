
/* v8::internal::compiler::NodeProperties::IsExceptionalCall(v8::internal::compiler::Node*,
   v8::internal::compiler::Node**) */

undefined8 v8::internal::compiler::NodeProperties::IsExceptionalCall(Node *param_1,Node **param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  Node *pNVar8;
  Node *pNVar9;
  long *plVar10;
  long *plVar11;
  
  if ((*(byte *)(*(long *)param_1 + 0x12) >> 5 & 1) == 0) {
    plVar10 = (long *)*(long *)(param_1 + 0x18);
    do {
      do {
        do {
          plVar4 = plVar10;
          if (plVar4 == (long *)0x0) goto LAB_01798044;
          plVar10 = (long *)*plVar4;
          plVar11 = plVar4 + (ulong)(*(uint *)(plVar4 + 2) >> 1) * 3 + 3;
          if ((*(uint *)(plVar4 + 2) & 1) == 0) {
            plVar11 = (long *)*plVar11;
          }
          iVar1 = *(int *)((Operator *)*plVar11 + 0x14);
          uVar5 = OperatorProperties::HasContextInput((Operator *)*plVar11);
          uVar6 = OperatorProperties::HasFrameStateInput((Operator *)*plVar11);
          iVar2 = *(int *)(*plVar11 + 0x1c);
        } while (iVar2 == 0);
        uVar3 = *(uint *)(plVar4 + 2);
        iVar1 = iVar1 + (uVar5 & 1) + (uVar6 & 1) + *(int *)(*plVar11 + 0x18);
        uVar5 = uVar3 >> 1;
      } while ((iVar2 + iVar1 <= (int)uVar5) || ((int)uVar5 < iVar1));
      pNVar8 = (Node *)(plVar4 + (ulong)uVar5 * 3 + 3);
      pNVar9 = pNVar8;
      if ((uVar3 & 1) == 0) {
        pNVar9 = *(Node **)pNVar8;
      }
    } while (*(short *)(*(long *)pNVar9 + 0x10) != 7);
    if (param_2 != (Node **)0x0) {
      if ((uVar3 & 1) == 0) {
        pNVar8 = *(Node **)pNVar8;
      }
      *param_2 = pNVar8;
    }
    uVar7 = 1;
  }
  else {
LAB_01798044:
    uVar7 = 0;
  }
  return uVar7;
}

