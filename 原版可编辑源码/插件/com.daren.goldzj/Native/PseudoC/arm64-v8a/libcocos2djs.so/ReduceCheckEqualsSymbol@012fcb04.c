
/* v8::internal::compiler::TypedOptimization::ReduceCheckEqualsSymbol(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::TypedOptimization::ReduceCheckEqualsSymbol
          (TypedOptimization *this,Node *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long local_18;
  
  lVar1 = NodeProperties::GetValueInput(param_1,0);
  lVar4 = *(long *)(lVar1 + 8);
  lVar1 = NodeProperties::GetValueInput(param_1,1);
  lVar1 = *(long *)(lVar1 + 8);
  local_18 = lVar1;
  uVar2 = NodeProperties::GetEffectInput(param_1,0);
  if ((lVar1 != lVar4) && (uVar3 = Type::SlowIs((Type *)&local_18,lVar4), (uVar3 & 1) == 0)) {
    uVar2 = 0;
  }
  return uVar2;
}

