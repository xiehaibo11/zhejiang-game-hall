
/* v8::internal::compiler::TypedOptimization::ReduceReferenceEqual(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::TypedOptimization::ReduceReferenceEqual
          (TypedOptimization *this,Node *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long local_38;
  undefined8 local_18;
  
  lVar1 = NodeProperties::GetValueInput(param_1,0);
  lVar2 = NodeProperties::GetValueInput(param_1,1);
  local_18 = *(undefined8 *)(lVar1 + 8);
  uVar3 = Type::Maybe((Type *)&local_18,*(undefined8 *)(lVar2 + 8));
  if ((uVar3 & 1) == 0) {
    lVar1 = JSGraph::FalseConstant(*(JSGraph **)(this + 0x18));
    local_38 = *(long *)(lVar1 + 8);
    if ((local_38 == *(long *)(param_1 + 8)) ||
       (uVar3 = Type::SlowIs((Type *)&local_38), (uVar3 & 1) != 0)) {
      uVar4 = JSGraph::FalseConstant(*(JSGraph **)(this + 0x18));
      return uVar4;
    }
  }
  return 0;
}

