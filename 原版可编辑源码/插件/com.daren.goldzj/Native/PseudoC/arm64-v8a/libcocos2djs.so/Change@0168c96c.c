
/* v8::internal::compiler::CommonOperatorReducer::Change(v8::internal::compiler::Node*,
   v8::internal::compiler::Operator const*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::CommonOperatorReducer::Change
          (CommonOperatorReducer *this,Node *param_1,Operator *param_2,Node *param_3,Node *param_4)

{
  Node *pNVar1;
  Node *pNVar2;
  Use *pUVar3;
  Node *pNVar4;
  
  pNVar1 = param_1 + 0x20;
  pNVar4 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar4 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar2 = *(Node **)pNVar4;
  if (pNVar2 != param_3) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar3 = (Use *)(*(long *)pNVar1 + -0x18);
    }
    else {
      pUVar3 = (Use *)(param_1 + -0x18);
    }
    if (pNVar2 != (Node *)0x0) {
      Node::RemoveUse(pNVar2,pUVar3);
    }
    *(Node **)pNVar4 = param_3;
    if (param_3 != (Node *)0x0) {
      Node::AppendUse(param_3,pUVar3);
    }
  }
  pNVar4 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar4 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar2 = *(Node **)(pNVar4 + 8);
  if (pNVar2 != param_4) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar3 = (Use *)(*(long *)pNVar1 + -0x30);
    }
    else {
      pUVar3 = (Use *)(param_1 + -0x30);
    }
    if (pNVar2 != (Node *)0x0) {
      Node::RemoveUse(pNVar2,pUVar3);
    }
    *(Node **)(pNVar4 + 8) = param_4;
    if (param_4 != (Node *)0x0) {
      Node::AppendUse(param_4,pUVar3);
    }
  }
  Node::TrimInputCount(param_1,2);
  NodeProperties::ChangeOp(param_1,param_2);
  return param_1;
}

