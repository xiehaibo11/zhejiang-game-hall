
/* v8::internal::compiler::JSCallReducer::ReduceStringPrototypeIndexOf(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceStringPrototypeIndexOf
          (JSCallReducer *this,Node *param_1)

{
  FeedbackSource *pFVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Node *pNVar5;
  Operator *pOVar6;
  Node *pNVar7;
  Node *pNVar8;
  Node *this_00;
  Node *this_01;
  Node *pNVar9;
  Use *pUVar10;
  Graph *pGVar11;
  Node *local_68;
  Node *pNStack_60;
  undefined8 local_58;
  
  lVar2 = CallParametersOf(*(Operator **)param_1);
  if ((*(byte *)(lVar2 + 3) >> 4 & 1) == 0) {
    uVar3 = NodeProperties::GetEffectInput(param_1,0);
    uVar4 = NodeProperties::GetControlInput(param_1,0);
    if (2 < *(int *)(*(long *)param_1 + 0x14)) {
      pNVar5 = (Node *)NodeProperties::GetValueInput(param_1,1);
      pFVar1 = (FeedbackSource *)(lVar2 + 8);
      pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar6 = (Operator *)
               SimplifiedOperatorBuilder::CheckString
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],pFVar1)
      ;
      local_68 = pNVar5;
      pNStack_60 = (Node *)uVar3;
      local_58 = uVar4;
      pNVar7 = (Node *)Graph::NewNode(pGVar11,pOVar6,3,&local_68,false);
      pNVar5 = (Node *)NodeProperties::GetValueInput(param_1,2);
      pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar6 = (Operator *)
               SimplifiedOperatorBuilder::CheckString
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],pFVar1)
      ;
      local_68 = pNVar5;
      pNStack_60 = pNVar7;
      local_58 = uVar4;
      pNVar8 = (Node *)Graph::NewNode(pGVar11,pOVar6,3,&local_68,false);
      this_00 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
      pNVar5 = pNVar8;
      if (3 < *(int *)(*(long *)param_1 + 0x14)) {
        pNVar5 = (Node *)NodeProperties::GetValueInput(param_1,3);
        pGVar11 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar6 = (Operator *)
                 SimplifiedOperatorBuilder::CheckSmi
                           ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                            pFVar1);
        local_68 = pNVar5;
        pNStack_60 = pNVar8;
        local_58 = uVar4;
        this_00 = (Node *)Graph::NewNode(pGVar11,pOVar6,3,&local_68,false);
        pNVar5 = this_00;
      }
      NodeProperties::ReplaceEffectInput(param_1,pNVar5,0);
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,0,0);
      pNVar5 = param_1 + 0x20;
      pNVar9 = pNVar5;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar9 = (Node *)(*(long *)pNVar5 + 0x10);
      }
      this_01 = *(Node **)pNVar9;
      if (this_01 != pNVar7) {
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pUVar10 = (Use *)(*(long *)pNVar5 + -0x18);
        }
        else {
          pUVar10 = (Use *)(param_1 + -0x18);
        }
        if (this_01 != (Node *)0x0) {
          Node::RemoveUse(this_01,pUVar10);
        }
        *(Node **)pNVar9 = pNVar7;
        if (pNVar7 != (Node *)0x0) {
          Node::AppendUse(pNVar7,pUVar10);
        }
      }
      pNVar7 = pNVar5;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar7 = (Node *)(*(long *)pNVar5 + 0x10);
      }
      pNVar9 = *(Node **)(pNVar7 + 8);
      if (pNVar9 != pNVar8) {
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pUVar10 = (Use *)(*(long *)pNVar5 + -0x30);
        }
        else {
          pUVar10 = (Use *)(param_1 + -0x30);
        }
        if (pNVar9 != (Node *)0x0) {
          Node::RemoveUse(pNVar9,pUVar10);
        }
        *(Node **)(pNVar7 + 8) = pNVar8;
        if (pNVar8 != (Node *)0x0) {
          Node::AppendUse(pNVar8,pUVar10);
        }
      }
      pNVar7 = pNVar5;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar7 = (Node *)(*(long *)pNVar5 + 0x10);
      }
      pNVar8 = *(Node **)(pNVar7 + 0x10);
      if (pNVar8 != this_00) {
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pUVar10 = (Use *)(*(long *)pNVar5 + -0x48);
        }
        else {
          pUVar10 = (Use *)(param_1 + -0x48);
        }
        if (pNVar8 != (Node *)0x0) {
          Node::RemoveUse(pNVar8,pUVar10);
        }
        *(Node **)(pNVar7 + 0x10) = this_00;
        if (this_00 != (Node *)0x0) {
          Node::AppendUse(this_00,pUVar10);
        }
      }
      Node::TrimInputCount(param_1,3);
      pOVar6 = (Operator *)
               SimplifiedOperatorBuilder::StringIndexOf
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
      NodeProperties::ChangeOp(param_1,pOVar6);
      return param_1;
    }
  }
  return (Node *)0x0;
}

