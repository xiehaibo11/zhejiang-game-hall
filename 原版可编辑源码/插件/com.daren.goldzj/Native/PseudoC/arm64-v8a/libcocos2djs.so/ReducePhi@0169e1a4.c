
/* v8::internal::compiler::DeadCodeElimination::ReducePhi(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::DeadCodeElimination::ReducePhi(DeadCodeElimination *this,Node *param_1)

{
  Graph *pGVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  Node *pNVar5;
  long lVar6;
  Operator *pOVar7;
  int iVar8;
  Node *local_58;
  
  pNVar5 = (Node *)NodeProperties::GetControlInput(param_1,0);
  if ((pNVar5 == (Node *)0x0) || (*(short *)(*(long *)pNVar5 + 0x10) != 0x3d)) {
    uVar3 = PhiRepresentationOf(*(Operator **)param_1);
    if (((uVar3 & 0xff) == 0) || (lVar6 = NodeProperties::GetTypeOrAny(param_1), lVar6 == 1)) {
      if (*(short *)(*(Operator **)param_1 + 0x10) == 0x3c) {
        uVar4 = DeadValueRepresentationOf(*(Operator **)param_1);
        if ((uVar4 & 0xff) == (uVar3 & 0xff)) {
          return param_1;
        }
        param_1 = (Node *)NodeProperties::GetValueInput(param_1,0);
      }
      pGVar1 = *(Graph **)(this + 0x10);
      pOVar7 = (Operator *)
               CommonOperatorBuilder::DeadValue(*(CommonOperatorBuilder **)(this + 0x18),uVar3);
      local_58 = param_1;
      pNVar5 = (Node *)Graph::NewNode(pGVar1,pOVar7,1,&local_58,false);
      *(long *)(pNVar5 + 8) = 1;
    }
    else {
      iVar2 = *(int *)(*(long *)param_1 + 0x14);
      if (0 < iVar2) {
        iVar8 = 0;
        do {
          pNVar5 = (Node *)NodeProperties::GetValueInput(param_1,iVar8);
          if ((*(short *)(*(Operator **)pNVar5 + 0x10) == 0x3c) &&
             (uVar4 = DeadValueRepresentationOf(*(Operator **)pNVar5),
             (uVar4 & 0xff) != (uVar3 & 0xff))) {
            if (*(short *)(*(Operator **)pNVar5 + 0x10) == 0x3c) {
              uVar4 = DeadValueRepresentationOf(*(Operator **)pNVar5);
              if ((uVar4 & 0xff) != (uVar3 & 0xff)) {
                pNVar5 = (Node *)NodeProperties::GetValueInput(pNVar5,0);
                goto LAB_0169e28c;
              }
            }
            else {
LAB_0169e28c:
              pGVar1 = *(Graph **)(this + 0x10);
              pOVar7 = (Operator *)
                       CommonOperatorBuilder::DeadValue
                                 (*(CommonOperatorBuilder **)(this + 0x18),uVar3);
              local_58 = pNVar5;
              pNVar5 = (Node *)Graph::NewNode(pGVar1,pOVar7,1,&local_58,false);
              *(undefined8 *)(pNVar5 + 8) = 1;
            }
            NodeProperties::ReplaceValueInput(param_1,pNVar5,iVar8);
          }
          iVar8 = iVar8 + 1;
        } while (iVar2 != iVar8);
      }
      pNVar5 = (Node *)0x0;
    }
  }
  return pNVar5;
}

