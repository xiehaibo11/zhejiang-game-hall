
/* v8::internal::compiler::JSIntrinsicLowering::ReduceAsyncFunctionResolve(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSIntrinsicLowering::ReduceAsyncFunctionResolve
          (JSIntrinsicLowering *this,Node *param_1)

{
  Operator *pOVar1;
  
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,param_1,0);
  pOVar1 = (Operator *)
           JSOperatorBuilder::AsyncFunctionResolve
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  NodeProperties::ChangeOp(param_1,pOVar1);
  return param_1;
}

