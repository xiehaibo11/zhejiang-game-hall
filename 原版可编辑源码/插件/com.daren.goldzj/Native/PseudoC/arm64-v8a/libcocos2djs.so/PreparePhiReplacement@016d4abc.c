
/* v8::internal::compiler::Int64Lowering::PreparePhiReplacement(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::Int64Lowering::PreparePhiReplacement(Int64Lowering *this,Node *param_1)

{
  uint uVar1;
  Int64Lowering *pIVar2;
  uint uVar3;
  Node *pNVar4;
  char cVar5;
  Zone *pZVar6;
  undefined8 uVar7;
  Operator *pOVar8;
  undefined8 uVar9;
  Int64Lowering *pIVar10;
  Int64Lowering *pIVar11;
  long lVar12;
  Int64Lowering *pIVar13;
  Int64Lowering *pIVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  Graph *pGVar18;
  
  cVar5 = PhiRepresentationOf(*(Operator **)param_1);
  if (cVar5 != '\x05') {
    return;
  }
  pZVar6 = *(Zone **)this;
  uVar3 = *(uint *)(*(long *)param_1 + 0x14);
  uVar16 = (ulong)uVar3;
  pIVar10 = *(Int64Lowering **)(pZVar6 + 0x10);
  uVar1 = uVar3 + 1;
  uVar17 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)pIVar10) < uVar17) {
    pIVar10 = (Int64Lowering *)Zone::NewExpand(pZVar6,uVar17);
  }
  else {
    *(Int64Lowering **)(pZVar6 + 0x10) = pIVar10 + uVar17;
  }
  pZVar6 = *(Zone **)this;
  pIVar11 = *(Int64Lowering **)(pZVar6 + 0x10);
  if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)pIVar11) < uVar17) {
    pIVar11 = (Int64Lowering *)Zone::NewExpand(pZVar6,uVar17);
  }
  else {
    *(Int64Lowering **)(pZVar6 + 0x10) = pIVar11 + uVar17;
  }
  if (0 < (int)uVar3) {
    pIVar2 = this + 0x88;
    uVar17 = 0;
    if (3 < uVar3) {
      if (((pIVar11 + uVar16 * 8 <= pIVar10 || pIVar10 + uVar16 * 8 <= pIVar11) &&
          (this + 0x89 <= pIVar10 || pIVar10 + uVar16 * 8 <= pIVar2)) &&
         (this + 0x89 <= pIVar11 || pIVar11 + uVar16 * 8 <= pIVar2)) {
        pNVar4 = *(Node **)pIVar2;
        uVar17 = uVar16 & 0xfffffffc;
        pIVar13 = pIVar10 + 0x10;
        pIVar14 = pIVar11 + 0x10;
        uVar15 = uVar17;
        do {
          *(Node **)(pIVar13 + -8) = pNVar4;
          *(Node **)(pIVar13 + -0x10) = pNVar4;
          *(Node **)(pIVar13 + 8) = pNVar4;
          *(Node **)pIVar13 = pNVar4;
          *(Node **)(pIVar14 + -8) = pNVar4;
          *(Node **)(pIVar14 + -0x10) = pNVar4;
          *(Node **)(pIVar14 + 8) = pNVar4;
          *(Node **)pIVar14 = pNVar4;
          pIVar13 = pIVar13 + 0x20;
          uVar15 = uVar15 - 4;
          pIVar14 = pIVar14 + 0x20;
        } while (uVar15 != 0);
        if (uVar17 == uVar16) goto LAB_016d4b80;
      }
    }
    lVar12 = uVar16 - uVar17;
    pIVar13 = pIVar11 + uVar17 * 8;
    pIVar14 = pIVar10 + uVar17 * 8;
    do {
      lVar12 = lVar12 + -1;
      *(Node **)pIVar14 = *(Node **)pIVar2;
      *(Node **)pIVar13 = *(Node **)pIVar2;
      pIVar13 = pIVar13 + 8;
      pIVar14 = pIVar14 + 8;
    } while (lVar12 != 0);
  }
LAB_016d4b80:
  uVar7 = NodeProperties::GetControlInput(param_1,0);
  *(undefined8 *)(pIVar10 + (long)(int)uVar3 * 8) = uVar7;
  uVar7 = NodeProperties::GetControlInput(param_1,0);
  *(undefined8 *)(pIVar11 + (long)(int)uVar3 * 8) = uVar7;
  pGVar18 = *(Graph **)(this + 8);
  pOVar8 = (Operator *)CommonOperatorBuilder::Phi(*(CommonOperatorBuilder **)(this + 0x18),4,uVar16)
  ;
  uVar7 = Graph::NewNode(pGVar18,pOVar8,uVar1,(Node **)pIVar10,false);
  pGVar18 = *(Graph **)(this + 8);
  pOVar8 = (Operator *)CommonOperatorBuilder::Phi(*(CommonOperatorBuilder **)(this + 0x18),4,uVar3);
  uVar9 = Graph::NewNode(pGVar18,pOVar8,uVar1,(Node **)pIVar11,false);
  *(undefined8 *)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
       uVar7;
  *(undefined8 *)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 8)
       = uVar9;
  return;
}

