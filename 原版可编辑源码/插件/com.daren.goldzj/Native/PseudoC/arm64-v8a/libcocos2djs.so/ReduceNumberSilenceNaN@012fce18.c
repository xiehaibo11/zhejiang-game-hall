
/* v8::internal::compiler::TypedOptimization::ReduceNumberSilenceNaN(v8::internal::compiler::Node*)
    */

long __thiscall
v8::internal::compiler::TypedOptimization::ReduceNumberSilenceNaN
          (TypedOptimization *this,Node *param_1)

{
  long lVar1;
  ulong uVar2;
  long local_8;
  
  lVar1 = NodeProperties::GetValueInput(param_1,0);
  local_8 = *(long *)(lVar1 + 8);
  if ((local_8 != 0xc5f) && (uVar2 = Type::SlowIs((Type *)&local_8,0xc5f), (uVar2 & 1) == 0)) {
    lVar1 = 0;
  }
  return lVar1;
}

