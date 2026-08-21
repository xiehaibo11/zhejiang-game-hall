
/* v8::internal::compiler::JSIntrinsicLowering::ReduceIsBeingInterpreted(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSIntrinsicLowering::ReduceIsBeingInterpreted
          (JSIntrinsicLowering *this,Node *param_1)

{
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,0,0);
  JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
  return;
}

