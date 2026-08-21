
/* v8::internal::compiler::TypedOptimization::ReduceConvertReceiver(v8::internal::compiler::Node*)
    */

long __thiscall
v8::internal::compiler::TypedOptimization::ReduceConvertReceiver
          (TypedOptimization *this,Node *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long local_28;
  
  lVar1 = NodeProperties::GetValueInput(param_1,0);
  lVar4 = *(long *)(lVar1 + 8);
  local_28 = lVar4;
  lVar2 = NodeProperties::GetValueInput(param_1,1);
  if ((lVar4 == 0x47f0001) || (uVar3 = Type::SlowIs((Type *)&local_28,0x47f0001), (uVar3 & 1) != 0))
  {
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,lVar1,0,0);
    lVar2 = lVar1;
  }
  else if ((local_28 == 0x181) || (uVar3 = Type::SlowIs((Type *)&local_28,0x181), (uVar3 & 1) != 0))
  {
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,lVar2,0,0);
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}

