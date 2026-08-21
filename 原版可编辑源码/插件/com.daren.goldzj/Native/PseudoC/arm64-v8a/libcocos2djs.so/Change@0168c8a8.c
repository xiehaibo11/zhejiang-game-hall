
/* v8::internal::compiler::CommonOperatorReducer::Change(v8::internal::compiler::Node*,
   v8::internal::compiler::Operator const*, v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::CommonOperatorReducer::Change
          (CommonOperatorReducer *this,Node *param_1,Operator *param_2,Node *param_3)

{
  Node *pNVar1;
  Node *this_00;
  Use *pUVar2;
  Node *pNVar3;
  
  pNVar1 = param_1 + 0x20;
  pNVar3 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar3 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this_00 = *(Node **)pNVar3;
  if (this_00 != param_3) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar2 = (Use *)(*(long *)pNVar1 + -0x18);
    }
    else {
      pUVar2 = (Use *)(param_1 + -0x18);
    }
    if (this_00 != (Node *)0x0) {
      Node::RemoveUse(this_00,pUVar2);
    }
    *(Node **)pNVar3 = param_3;
    if (param_3 != (Node *)0x0) {
      Node::AppendUse(param_3,pUVar2);
    }
  }
  Node::TrimInputCount(param_1,1);
  NodeProperties::ChangeOp(param_1,param_2);
  return param_1;
}

