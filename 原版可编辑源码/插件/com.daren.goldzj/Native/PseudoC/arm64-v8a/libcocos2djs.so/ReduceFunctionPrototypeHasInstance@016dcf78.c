
/* v8::internal::compiler::JSCallReducer::ReduceFunctionPrototypeHasInstance(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceFunctionPrototypeHasInstance
          (JSCallReducer *this,Node *param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  Node *pNVar3;
  Node *this_00;
  Node *this_01;
  Node *this_02;
  Node *this_03;
  Node *this_04;
  Node *pNVar4;
  Operator *pOVar5;
  Use *pUVar6;
  
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,1);
  if (*(int *)(*(long *)param_1 + 0x14) < 3) {
    pNVar3 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  }
  else {
    pNVar3 = (Node *)NodeProperties::GetValueInput(param_1,2);
  }
  this_00 = (Node *)NodeProperties::GetContextInput(param_1);
  this_01 = (Node *)NodeProperties::GetFrameStateInput(param_1);
  this_02 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  this_03 = (Node *)NodeProperties::GetControlInput(param_1,0);
  pNVar1 = param_1 + 0x20;
  pNVar4 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar4 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this_04 = *(Node **)pNVar4;
  if (this_04 != pNVar2) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar6 = (Use *)(*(long *)pNVar1 + -0x18);
    }
    else {
      pUVar6 = (Use *)(param_1 + -0x18);
    }
    if (this_04 != (Node *)0x0) {
      Node::RemoveUse(this_04,pUVar6);
    }
    *(Node **)pNVar4 = pNVar2;
    if (pNVar2 != (Node *)0x0) {
      Node::AppendUse(pNVar2,pUVar6);
    }
  }
  pNVar2 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar2 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar4 = *(Node **)(pNVar2 + 8);
  if (pNVar4 != pNVar3) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar6 = (Use *)(*(long *)pNVar1 + -0x30);
    }
    else {
      pUVar6 = (Use *)(param_1 + -0x30);
    }
    if (pNVar4 != (Node *)0x0) {
      Node::RemoveUse(pNVar4,pUVar6);
    }
    *(Node **)(pNVar2 + 8) = pNVar3;
    if (pNVar3 != (Node *)0x0) {
      Node::AppendUse(pNVar3,pUVar6);
    }
  }
  pNVar2 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar2 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar3 = *(Node **)(pNVar2 + 0x10);
  if (pNVar3 != this_00) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar6 = (Use *)(*(long *)pNVar1 + -0x48);
    }
    else {
      pUVar6 = (Use *)(param_1 + -0x48);
    }
    if (pNVar3 != (Node *)0x0) {
      Node::RemoveUse(pNVar3,pUVar6);
    }
    *(Node **)(pNVar2 + 0x10) = this_00;
    if (this_00 != (Node *)0x0) {
      Node::AppendUse(this_00,pUVar6);
    }
  }
  pNVar2 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar2 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar3 = *(Node **)(pNVar2 + 0x18);
  if (pNVar3 != this_01) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar6 = (Use *)(*(long *)pNVar1 + -0x60);
    }
    else {
      pUVar6 = (Use *)(param_1 + -0x60);
    }
    if (pNVar3 != (Node *)0x0) {
      Node::RemoveUse(pNVar3,pUVar6);
    }
    *(Node **)(pNVar2 + 0x18) = this_01;
    if (this_01 != (Node *)0x0) {
      Node::AppendUse(this_01,pUVar6);
    }
  }
  pNVar2 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar2 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar3 = *(Node **)(pNVar2 + 0x20);
  if (pNVar3 != this_02) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar6 = (Use *)(*(long *)pNVar1 + -0x78);
    }
    else {
      pUVar6 = (Use *)(param_1 + -0x78);
    }
    if (pNVar3 != (Node *)0x0) {
      Node::RemoveUse(pNVar3,pUVar6);
    }
    *(Node **)(pNVar2 + 0x20) = this_02;
    if (this_02 != (Node *)0x0) {
      Node::AppendUse(this_02,pUVar6);
    }
  }
  pNVar2 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar2 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar3 = *(Node **)(pNVar2 + 0x28);
  if (pNVar3 != this_03) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar6 = (Use *)(*(long *)pNVar1 + -0x90);
    }
    else {
      pUVar6 = (Use *)(param_1 + -0x90);
    }
    if (pNVar3 != (Node *)0x0) {
      Node::RemoveUse(pNVar3,pUVar6);
    }
    *(Node **)(pNVar2 + 0x28) = this_03;
    if (this_03 != (Node *)0x0) {
      Node::AppendUse(this_03,pUVar6);
    }
  }
  Node::TrimInputCount(param_1,6);
  pOVar5 = (Operator *)
           JSOperatorBuilder::OrdinaryHasInstance
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  NodeProperties::ChangeOp(param_1,pOVar5);
  return param_1;
}

