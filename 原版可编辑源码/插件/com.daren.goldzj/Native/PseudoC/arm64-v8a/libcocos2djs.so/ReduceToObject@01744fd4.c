
/* v8::internal::compiler::JSIntrinsicLowering::ReduceToObject(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSIntrinsicLowering::ReduceToObject(JSIntrinsicLowering *this,Node *param_1)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::ToObject(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  NodeProperties::ChangeOp(param_1,pOVar1);
  return param_1;
}

