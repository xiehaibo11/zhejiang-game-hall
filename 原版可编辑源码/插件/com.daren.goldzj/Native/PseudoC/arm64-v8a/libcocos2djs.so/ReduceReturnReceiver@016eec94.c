
/* v8::internal::compiler::JSCallReducer::ReduceReturnReceiver(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceReturnReceiver(JSCallReducer *this,Node *param_1)

{
  undefined8 uVar1;
  
  uVar1 = NodeProperties::GetValueInput(param_1,1);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar1,0,0);
  return uVar1;
}

