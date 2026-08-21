
/* v8::internal::compiler::JSCallReducer::ReduceObjectCreate(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceObjectCreate(JSCallReducer *this,Node *param_1)

{
  Node *pNVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  Node *pNVar5;
  Node *this_00;
  Node *pNVar6;
  Node *pNVar7;
  Node *pNVar8;
  Node *this_01;
  Node *pNVar9;
  Operator *pOVar10;
  Use *pUVar11;
  
  iVar2 = *(int *)(*(long *)param_1 + 0x14);
  if (iVar2 < 4) {
    lVar3 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  }
  else {
    lVar3 = NodeProperties::GetValueInput(param_1,3);
  }
  lVar4 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  if (lVar3 == lVar4) {
    pNVar5 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    this_00 = (Node *)NodeProperties::GetControlInput(param_1,0);
    pNVar6 = (Node *)NodeProperties::GetContextInput(param_1);
    pNVar7 = (Node *)NodeProperties::GetFrameStateInput(param_1);
    if (iVar2 < 3) {
      pNVar8 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    }
    else {
      pNVar8 = (Node *)NodeProperties::GetValueInput(param_1,2);
    }
    pNVar1 = param_1 + 0x20;
    pNVar9 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar9 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    this_01 = *(Node **)pNVar9;
    if (this_01 != pNVar8) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar11 = (Use *)(*(long *)pNVar1 + -0x18);
      }
      else {
        pUVar11 = (Use *)(param_1 + -0x18);
      }
      if (this_01 != (Node *)0x0) {
        Node::RemoveUse(this_01,pUVar11);
      }
      *(Node **)pNVar9 = pNVar8;
      if (pNVar8 != (Node *)0x0) {
        Node::AppendUse(pNVar8,pUVar11);
      }
    }
    pNVar8 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar8 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar9 = *(Node **)(pNVar8 + 8);
    if (pNVar9 != pNVar6) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar11 = (Use *)(*(long *)pNVar1 + -0x30);
      }
      else {
        pUVar11 = (Use *)(param_1 + -0x30);
      }
      if (pNVar9 != (Node *)0x0) {
        Node::RemoveUse(pNVar9,pUVar11);
      }
      *(Node **)(pNVar8 + 8) = pNVar6;
      if (pNVar6 != (Node *)0x0) {
        Node::AppendUse(pNVar6,pUVar11);
      }
    }
    pNVar6 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar8 = *(Node **)(pNVar6 + 0x10);
    if (pNVar8 != pNVar7) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar11 = (Use *)(*(long *)pNVar1 + -0x48);
      }
      else {
        pUVar11 = (Use *)(param_1 + -0x48);
      }
      if (pNVar8 != (Node *)0x0) {
        Node::RemoveUse(pNVar8,pUVar11);
      }
      *(Node **)(pNVar6 + 0x10) = pNVar7;
      if (pNVar7 != (Node *)0x0) {
        Node::AppendUse(pNVar7,pUVar11);
      }
    }
    pNVar6 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar7 = *(Node **)(pNVar6 + 0x18);
    if (pNVar7 != pNVar5) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar11 = (Use *)(*(long *)pNVar1 + -0x60);
      }
      else {
        pUVar11 = (Use *)(param_1 + -0x60);
      }
      if (pNVar7 != (Node *)0x0) {
        Node::RemoveUse(pNVar7,pUVar11);
      }
      *(Node **)(pNVar6 + 0x18) = pNVar5;
      if (pNVar5 != (Node *)0x0) {
        Node::AppendUse(pNVar5,pUVar11);
      }
    }
    pNVar5 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar5 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar6 = *(Node **)(pNVar5 + 0x20);
    if (pNVar6 != this_00) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar11 = (Use *)(*(long *)pNVar1 + -0x78);
      }
      else {
        pUVar11 = (Use *)(param_1 + -0x78);
      }
      if (pNVar6 != (Node *)0x0) {
        Node::RemoveUse(pNVar6,pUVar11);
      }
      *(Node **)(pNVar5 + 0x20) = this_00;
      if (this_00 != (Node *)0x0) {
        Node::AppendUse(this_00,pUVar11);
      }
    }
    Node::TrimInputCount(param_1,5);
    pOVar10 = (Operator *)
              JSOperatorBuilder::CreateObject
                        (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    NodeProperties::ChangeOp(param_1,pOVar10);
  }
  else {
    param_1 = (Node *)0x0;
  }
  return param_1;
}

