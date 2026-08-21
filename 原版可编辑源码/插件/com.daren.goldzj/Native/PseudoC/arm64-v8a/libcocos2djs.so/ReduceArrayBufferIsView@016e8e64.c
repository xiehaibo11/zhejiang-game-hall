
/* v8::internal::compiler::JSCallReducer::ReduceArrayBufferIsView(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceArrayBufferIsView(JSCallReducer *this,Node *param_1)

{
  Node *pNVar1;
  Node *this_00;
  Node *this_01;
  Operator *pOVar2;
  Use *pUVar3;
  Node *pNVar4;
  
  if (*(int *)(*(long *)param_1 + 0x14) < 3) {
    this_00 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  }
  else {
    this_00 = (Node *)NodeProperties::GetValueInput(param_1,2);
  }
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,0,0);
  pNVar1 = param_1 + 0x20;
  pNVar4 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar4 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this_01 = *(Node **)pNVar4;
  if (this_01 != this_00) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar3 = (Use *)(*(long *)pNVar1 + -0x18);
    }
    else {
      pUVar3 = (Use *)(param_1 + -0x18);
    }
    if (this_01 != (Node *)0x0) {
      Node::RemoveUse(this_01,pUVar3);
    }
    *(Node **)pNVar4 = this_00;
    if (this_00 != (Node *)0x0) {
      Node::AppendUse(this_00,pUVar3);
    }
  }
  Node::TrimInputCount(param_1,1);
  pOVar2 = (Operator *)
           SimplifiedOperatorBuilder::ObjectIsArrayBufferView
                     (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
  NodeProperties::ChangeOp(param_1,pOVar2);
  return param_1;
}

