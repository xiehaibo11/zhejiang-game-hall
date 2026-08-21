
/* v8::internal::compiler::NodeProperties::CollectControlProjections(v8::internal::compiler::Node*,
   v8::internal::compiler::Node**, unsigned long) */

void v8::internal::compiler::NodeProperties::CollectControlProjections
               (Node *param_1,Node **param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  Node *pNVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    lVar9 = 0;
    plVar10 = *(long **)(param_1 + 0x18);
    do {
      plVar8 = (long *)*plVar10;
      plVar11 = plVar10 + (ulong)(*(uint *)(plVar10 + 2) >> 1) * 3 + 3;
      if ((*(uint *)(plVar10 + 2) & 1) == 0) {
        plVar11 = (long *)*plVar11;
      }
      iVar1 = *(int *)((Operator *)*plVar11 + 0x14);
      uVar3 = OperatorProperties::HasContextInput((Operator *)*plVar11);
      uVar4 = OperatorProperties::HasFrameStateInput((Operator *)*plVar11);
      iVar2 = *(int *)(*plVar11 + 0x1c);
      lVar6 = lVar9;
      if (iVar2 != 0) {
        iVar1 = iVar1 + (uVar3 & 1) + (uVar4 & 1) + *(int *)(*plVar11 + 0x18);
        uVar3 = *(uint *)(plVar10 + 2) >> 1;
        if (((int)uVar3 < iVar2 + iVar1) && (iVar1 <= (int)uVar3)) {
          pNVar5 = (Node *)(plVar10 + (ulong)uVar3 * 3 + 3);
          if ((*(uint *)(plVar10 + 2) & 1) == 0) {
            pNVar5 = *(Node **)pNVar5;
          }
          lVar7 = 0;
          switch(*(undefined2 *)(*(long *)pNVar5 + 0x10)) {
          case 4:
          case 6:
            break;
          case 5:
          case 7:
            lVar7 = 1;
            break;
          case 8:
            lVar6 = lVar9 + 1;
            lVar7 = lVar9;
            break;
          case 9:
            lVar7 = param_3 - 1;
            break;
          default:
            goto switchD_01798bf4_default;
          }
          param_2[lVar7] = pNVar5;
        }
      }
switchD_01798bf4_default:
      lVar9 = lVar6;
      plVar10 = plVar8;
    } while (plVar8 != (long *)0x0);
  }
  return;
}

