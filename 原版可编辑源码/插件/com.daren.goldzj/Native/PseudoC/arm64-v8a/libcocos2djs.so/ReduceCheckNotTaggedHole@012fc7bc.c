
/* v8::internal::compiler::TypedOptimization::ReduceCheckNotTaggedHole(v8::internal::compiler::Node*)
    */

long __thiscall
v8::internal::compiler::TypedOptimization::ReduceCheckNotTaggedHole
          (TypedOptimization *this,Node *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_18;
  
  lVar1 = NodeProperties::GetValueInput(param_1,0);
  local_18 = *(undefined8 *)(lVar1 + 8);
  uVar2 = Type::Maybe((Type *)&local_18,0x800001);
  if ((uVar2 & 1) == 0) {
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,lVar1,0,0);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}

