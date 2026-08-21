
/* v8::internal::compiler::JSIntrinsicLowering::ReduceAsyncFunctionReject(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSIntrinsicLowering::ReduceAsyncFunctionReject
          (JSIntrinsicLowering *this,Node *param_1)

{
  Operator *pOVar1;
  
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,param_1,0);
  pOVar1 = (Operator *)
           JSOperatorBuilder::AsyncFunctionReject
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  NodeProperties::ChangeOp(param_1,pOVar1);
  return param_1;
}

