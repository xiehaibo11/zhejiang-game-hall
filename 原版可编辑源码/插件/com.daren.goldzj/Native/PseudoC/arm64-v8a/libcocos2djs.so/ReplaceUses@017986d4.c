
/* v8::internal::compiler::NodeProperties::ReplaceUses(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void v8::internal::compiler::NodeProperties::ReplaceUses
               (Node *param_1,Node *param_2,Node *param_3,Node *param_4,Node *param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Use *pUVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  Node *pNVar9;
  Use *pUVar10;
  ulong uVar11;
  Use *pUVar12;
  Use *pUVar13;
  Use *pUVar14;
  
  pUVar14 = *(Use **)(param_1 + 0x18);
joined_r0x01798704:
  while( true ) {
    pUVar4 = pUVar14;
    if (pUVar4 == (Use *)0x0) {
      return;
    }
    uVar7 = *(uint *)(pUVar4 + 0x10);
    pUVar14 = *(Use **)pUVar4;
    uVar11 = (ulong)(uVar7 >> 1);
    pUVar12 = pUVar4 + uVar11 * 0x18 + 0x18;
    lVar1 = 0x10;
    if ((uVar7 & 1) != 0) {
      lVar1 = 0x20;
    }
    pUVar13 = pUVar12;
    if ((uVar7 & 1) == 0) {
      pUVar13 = *(Use **)pUVar12;
    }
    iVar2 = *(int *)(*(Operator **)pUVar13 + 0x14);
    uVar5 = OperatorProperties::HasContextInput(*(Operator **)pUVar13);
    uVar6 = OperatorProperties::HasFrameStateInput(*(Operator **)pUVar13);
    uVar7 = *(uint *)(pUVar4 + 0x10);
    iVar3 = *(int *)(*(long *)pUVar13 + 0x1c);
    uVar8 = uVar7 >> 1;
    if (((iVar3 != 0) &&
        (iVar2 = iVar2 + (uVar5 & 1) + (uVar6 & 1) + *(int *)(*(long *)pUVar13 + 0x18),
        (int)uVar8 < iVar3 + iVar2)) && (iVar2 <= (int)uVar8)) break;
    pUVar13 = pUVar4 + (ulong)uVar8 * 0x18 + 0x18;
    if ((uVar7 & 1) == 0) {
      pUVar13 = *(Use **)pUVar13;
    }
    iVar2 = *(int *)(*(Operator **)pUVar13 + 0x14);
    uVar7 = OperatorProperties::HasContextInput(*(Operator **)pUVar13);
    uVar8 = OperatorProperties::HasFrameStateInput(*(Operator **)pUVar13);
    if (*(int *)(*(long *)pUVar13 + 0x18) == 0) {
LAB_01798840:
      pNVar9 = *(Node **)(pUVar12 + uVar11 * 8 + lVar1);
      if (pNVar9 != param_2) {
        if (pNVar9 != (Node *)0x0) {
          Node::RemoveUse(pNVar9,pUVar4);
        }
        *(Node **)(pUVar12 + uVar11 * 8 + lVar1) = param_2;
        pNVar9 = param_2;
        goto joined_r0x01798834;
      }
    }
    else {
      iVar2 = iVar2 + (uVar7 & 1) + (uVar8 & 1);
      if ((*(int *)(*(long *)pUVar13 + 0x18) + iVar2 <= (int)(*(uint *)(pUVar4 + 0x10) >> 1)) ||
         ((int)(*(uint *)(pUVar4 + 0x10) >> 1) < iVar2)) goto LAB_01798840;
      pNVar9 = *(Node **)(pUVar12 + uVar11 * 8 + lVar1);
      if (pNVar9 != param_3) {
        if (pNVar9 != (Node *)0x0) {
          Node::RemoveUse(pNVar9,pUVar4);
        }
        *(Node **)(pUVar12 + uVar11 * 8 + lVar1) = param_3;
        pNVar9 = param_3;
joined_r0x01798834:
        if (pNVar9 != (Node *)0x0) {
          Node::AppendUse(pNVar9,pUVar4);
        }
      }
    }
  }
  pUVar10 = pUVar4 + (ulong)uVar8 * 0x18 + 0x18;
  pUVar13 = pUVar10;
  if ((uVar7 & 1) == 0) {
    pUVar13 = *(Use **)pUVar10;
  }
  if (*(short *)(*(long *)pUVar13 + 0x10) == 6) {
    pNVar9 = *(Node **)(pUVar12 + uVar11 * 8 + lVar1);
  }
  else {
    if ((uVar7 & 1) == 0) {
      pUVar10 = *(Use **)pUVar10;
    }
    pNVar9 = *(Node **)(pUVar12 + uVar11 * 8 + lVar1);
    if (*(short *)(*(long *)pUVar10 + 0x10) == 7) {
      if (pNVar9 != param_5) {
        if (pNVar9 != (Node *)0x0) {
          Node::RemoveUse(pNVar9,pUVar4);
        }
        *(Node **)(pUVar12 + uVar11 * 8 + lVar1) = param_5;
        pNVar9 = param_5;
        goto joined_r0x01798834;
      }
      goto joined_r0x01798704;
    }
  }
  if (pNVar9 != param_4) {
    if (pNVar9 != (Node *)0x0) {
      Node::RemoveUse(pNVar9,pUVar4);
    }
    *(Node **)(pUVar12 + uVar11 * 8 + lVar1) = param_4;
    pNVar9 = param_4;
    goto joined_r0x01798834;
  }
  goto joined_r0x01798704;
}

