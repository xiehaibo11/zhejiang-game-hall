
/* v8::internal::compiler::TypedOptimization::ReduceNumberRoundop(v8::internal::compiler::Node*) */

long __thiscall
v8::internal::compiler::TypedOptimization::ReduceNumberRoundop
          (TypedOptimization *this,Node *param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  lVar1 = NodeProperties::GetValueInput(param_1,0);
  local_28 = *(long *)(lVar1 + 8);
  if ((local_28 != *(long *)(*(long *)(this + 0x38) + 0x160)) &&
     (uVar2 = Type::SlowIs((Type *)&local_28), (uVar2 & 1) == 0)) {
    lVar1 = 0;
  }
  return lVar1;
}

