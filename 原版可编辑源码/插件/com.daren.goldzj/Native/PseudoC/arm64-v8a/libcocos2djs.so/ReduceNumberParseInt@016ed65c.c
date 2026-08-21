
/* v8::internal::compiler::JSCallReducer::ReduceNumberParseInt(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceNumberParseInt(JSCallReducer *this,Node *param_1)

{
  Node *pNVar1;
  int iVar2;
  Node *pNVar3;
  Node *this_00;
  Node *pNVar4;
  Node *pNVar5;
  Node *pNVar6;
  Node *pNVar7;
  Node *this_01;
  Node *pNVar8;
  Operator *pOVar9;
  Use *pUVar10;
  
  iVar2 = *(int *)(*(long *)param_1 + 0x14);
  if (iVar2 < 3) {
    pNVar3 = (Node *)JSGraph::NaNConstant(*(JSGraph **)(this + 0x10));
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar3,0,0);
    param_1 = pNVar3;
  }
  else {
    pNVar3 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    this_00 = (Node *)NodeProperties::GetControlInput(param_1,0);
    pNVar4 = (Node *)NodeProperties::GetContextInput(param_1);
    pNVar5 = (Node *)NodeProperties::GetFrameStateInput(param_1);
    pNVar6 = (Node *)NodeProperties::GetValueInput(param_1,2);
    if (iVar2 == 3) {
      pNVar7 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    }
    else {
      pNVar7 = (Node *)NodeProperties::GetValueInput(param_1,3);
    }
    pNVar1 = param_1 + 0x20;
    pNVar8 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar8 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    this_01 = *(Node **)pNVar8;
    if (this_01 != pNVar6) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar10 = (Use *)(*(long *)pNVar1 + -0x18);
      }
      else {
        pUVar10 = (Use *)(param_1 + -0x18);
      }
      if (this_01 != (Node *)0x0) {
        Node::RemoveUse(this_01,pUVar10);
      }
      *(Node **)pNVar8 = pNVar6;
      if (pNVar6 != (Node *)0x0) {
        Node::AppendUse(pNVar6,pUVar10);
      }
    }
    pNVar6 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar8 = *(Node **)(pNVar6 + 8);
    if (pNVar8 != pNVar7) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar10 = (Use *)(*(long *)pNVar1 + -0x30);
      }
      else {
        pUVar10 = (Use *)(param_1 + -0x30);
      }
      if (pNVar8 != (Node *)0x0) {
        Node::RemoveUse(pNVar8,pUVar10);
      }
      *(Node **)(pNVar6 + 8) = pNVar7;
      if (pNVar7 != (Node *)0x0) {
        Node::AppendUse(pNVar7,pUVar10);
      }
    }
    pNVar6 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar7 = *(Node **)(pNVar6 + 0x10);
    if (pNVar7 != pNVar4) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar10 = (Use *)(*(long *)pNVar1 + -0x48);
      }
      else {
        pUVar10 = (Use *)(param_1 + -0x48);
      }
      if (pNVar7 != (Node *)0x0) {
        Node::RemoveUse(pNVar7,pUVar10);
      }
      *(Node **)(pNVar6 + 0x10) = pNVar4;
      if (pNVar4 != (Node *)0x0) {
        Node::AppendUse(pNVar4,pUVar10);
      }
    }
    pNVar4 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar4 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar6 = *(Node **)(pNVar4 + 0x18);
    if (pNVar6 != pNVar5) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar10 = (Use *)(*(long *)pNVar1 + -0x60);
      }
      else {
        pUVar10 = (Use *)(param_1 + -0x60);
      }
      if (pNVar6 != (Node *)0x0) {
        Node::RemoveUse(pNVar6,pUVar10);
      }
      *(Node **)(pNVar4 + 0x18) = pNVar5;
      if (pNVar5 != (Node *)0x0) {
        Node::AppendUse(pNVar5,pUVar10);
      }
    }
    pNVar4 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar4 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar5 = *(Node **)(pNVar4 + 0x20);
    if (pNVar5 != pNVar3) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar10 = (Use *)(*(long *)pNVar1 + -0x78);
      }
      else {
        pUVar10 = (Use *)(param_1 + -0x78);
      }
      if (pNVar5 != (Node *)0x0) {
        Node::RemoveUse(pNVar5,pUVar10);
      }
      *(Node **)(pNVar4 + 0x20) = pNVar3;
      if (pNVar3 != (Node *)0x0) {
        Node::AppendUse(pNVar3,pUVar10);
      }
    }
    pNVar3 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar3 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar4 = *(Node **)(pNVar3 + 0x28);
    if (pNVar4 != this_00) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar10 = (Use *)(*(long *)pNVar1 + -0x90);
      }
      else {
        pUVar10 = (Use *)(param_1 + -0x90);
      }
      if (pNVar4 != (Node *)0x0) {
        Node::RemoveUse(pNVar4,pUVar10);
      }
      *(Node **)(pNVar3 + 0x28) = this_00;
      if (this_00 != (Node *)0x0) {
        Node::AppendUse(this_00,pUVar10);
      }
    }
    Node::TrimInputCount(param_1,6);
    pOVar9 = (Operator *)
             JSOperatorBuilder::ParseInt(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    NodeProperties::ChangeOp(param_1,pOVar9);
  }
  return param_1;
}

