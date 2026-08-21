
/* v8::internal::compiler::TypedOptimization::ReduceCheckString(v8::internal::compiler::Node*) */

long __thiscall
v8::internal::compiler::TypedOptimization::ReduceCheckString(TypedOptimization *this,Node *param_1)

{
  long lVar1;
  ulong uVar2;
  long local_18;
  
  lVar1 = NodeProperties::GetValueInput(param_1,0);
  local_18 = *(long *)(lVar1 + 8);
  if ((local_18 == 0x4021) || (uVar2 = Type::SlowIs((Type *)&local_18,0x4021), (uVar2 & 1) != 0)) {
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,lVar1,0,0);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}

