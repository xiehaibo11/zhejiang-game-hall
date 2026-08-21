
/* v8::internal::compiler::JSCallReducer::ReduceArrayIsArray(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceArrayIsArray(JSCallReducer *this,Node *param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  Node *this_00;
  Node *pNVar3;
  Node *this_01;
  Node *pNVar4;
  Node *this_02;
  Operator *pOVar5;
  Node *pNVar6;
  Use *pUVar7;
  
  if (*(int *)(*(long *)param_1 + 0x14) < 3) {
    pNVar1 = (Node *)JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar1,0,0);
    param_1 = pNVar1;
  }
  else {
    pNVar2 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    this_00 = (Node *)NodeProperties::GetControlInput(param_1,0);
    pNVar3 = (Node *)NodeProperties::GetContextInput(param_1);
    this_01 = (Node *)NodeProperties::GetFrameStateInput(param_1);
    pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,2);
    pNVar1 = param_1 + 0x20;
    pNVar6 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    this_02 = *(Node **)pNVar6;
    if (this_02 != pNVar4) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar7 = (Use *)(*(long *)pNVar1 + -0x18);
      }
      else {
        pUVar7 = (Use *)(param_1 + -0x18);
      }
      if (this_02 != (Node *)0x0) {
        Node::RemoveUse(this_02,pUVar7);
      }
      *(Node **)pNVar6 = pNVar4;
      if (pNVar4 != (Node *)0x0) {
        Node::AppendUse(pNVar4,pUVar7);
      }
    }
    pNVar6 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar4 = *(Node **)(pNVar6 + 8);
    if (pNVar4 != pNVar3) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar7 = (Use *)(*(long *)pNVar1 + -0x30);
      }
      else {
        pUVar7 = (Use *)(param_1 + -0x30);
      }
      if (pNVar4 != (Node *)0x0) {
        Node::RemoveUse(pNVar4,pUVar7);
      }
      *(Node **)(pNVar6 + 8) = pNVar3;
      if (pNVar3 != (Node *)0x0) {
        Node::AppendUse(pNVar3,pUVar7);
      }
    }
    pNVar6 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar3 = *(Node **)(pNVar6 + 0x10);
    if (pNVar3 != this_01) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar7 = (Use *)(*(long *)pNVar1 + -0x48);
      }
      else {
        pUVar7 = (Use *)(param_1 + -0x48);
      }
      if (pNVar3 != (Node *)0x0) {
        Node::RemoveUse(pNVar3,pUVar7);
      }
      *(Node **)(pNVar6 + 0x10) = this_01;
      if (this_01 != (Node *)0x0) {
        Node::AppendUse(this_01,pUVar7);
      }
    }
    pNVar6 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar3 = *(Node **)(pNVar6 + 0x18);
    if (pNVar3 != pNVar2) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar7 = (Use *)(*(long *)pNVar1 + -0x60);
      }
      else {
        pUVar7 = (Use *)(param_1 + -0x60);
      }
      if (pNVar3 != (Node *)0x0) {
        Node::RemoveUse(pNVar3,pUVar7);
      }
      *(Node **)(pNVar6 + 0x18) = pNVar2;
      if (pNVar2 != (Node *)0x0) {
        Node::AppendUse(pNVar2,pUVar7);
      }
    }
    pNVar6 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar2 = *(Node **)(pNVar6 + 0x20);
    if (pNVar2 != this_00) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar7 = (Use *)(*(long *)pNVar1 + -0x78);
      }
      else {
        pUVar7 = (Use *)(param_1 + -0x78);
      }
      if (pNVar2 != (Node *)0x0) {
        Node::RemoveUse(pNVar2,pUVar7);
      }
      *(Node **)(pNVar6 + 0x20) = this_00;
      if (this_00 != (Node *)0x0) {
        Node::AppendUse(this_00,pUVar7);
      }
    }
    Node::TrimInputCount(param_1,5);
    pOVar5 = (Operator *)
             JSOperatorBuilder::ObjectIsArray
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    NodeProperties::ChangeOp(param_1,pOVar5);
  }
  return param_1;
}

