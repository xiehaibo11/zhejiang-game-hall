
/* v8::internal::compiler::JSTypedLowering::ReduceJSOrdinaryHasInstance(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSOrdinaryHasInstance
          (JSTypedLowering *this,Node *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_18;
  
  lVar1 = NodeProperties::GetValueInput(param_1,0);
  local_18 = *(undefined8 *)(lVar1 + 8);
  lVar1 = NodeProperties::GetValueInput(param_1,1);
  local_38 = *(undefined8 *)(lVar1 + 8);
  uVar2 = Type::Maybe((Type *)&local_18,0x6d0001);
  if (((uVar2 & 1) == 0) ||
     ((uVar2 = Type::Maybe((Type *)&local_38,0x47f0001), (uVar2 & 1) == 0 &&
      (uVar2 = Type::Maybe((Type *)&local_18,"S0_6HandleIS2_EENS5_INS0_6ObjectEEES8_"),
      (uVar2 & 1) == 0)))) {
    uVar3 = JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar3,0,0);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

