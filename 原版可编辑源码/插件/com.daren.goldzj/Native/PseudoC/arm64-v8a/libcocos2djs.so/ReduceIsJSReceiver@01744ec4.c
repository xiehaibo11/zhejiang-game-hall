
/* v8::internal::compiler::JSIntrinsicLowering::ReduceIsJSReceiver(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSIntrinsicLowering::ReduceIsJSReceiver
          (JSIntrinsicLowering *this,Node *param_1)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           SimplifiedOperatorBuilder::ObjectIsReceiver
                     (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,0,0);
  NodeProperties::RemoveNonValueInputs(param_1);
  NodeProperties::ChangeOp(param_1,pOVar1);
  return param_1;
}

