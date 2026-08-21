
/* v8::internal::compiler::TypedOptimization::ReduceCheckHeapObject(v8::internal::compiler::Node*)
    */

long __thiscall
v8::internal::compiler::TypedOptimization::ReduceCheckHeapObject
          (TypedOptimization *this,Node *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_18;
  
  lVar2 = NodeProperties::GetValueInput(param_1,0);
  local_18 = *(undefined8 *)(lVar2 + 8);
  uVar1 = BitsetType::SignedSmall();
  uVar3 = Type::Maybe((Type *)&local_18,uVar1 | 1);
  if ((uVar3 & 1) == 0) {
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,lVar2,0,0);
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}

