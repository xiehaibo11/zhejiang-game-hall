
/* v8::internal::compiler::JSTypedLowering::ReduceNumberBinop(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceNumberBinop(JSTypedLowering *this,Node *param_1)

{
  ulong uVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  Node *pNVar4;
  uint uVar5;
  Node *pNVar6;
  JSTypedLowering *local_30;
  Node *local_28;
  long local_8;
  
  uVar5 = *(uint *)(param_1 + 0x14);
  pNVar4 = param_1 + 0x20;
  pNVar6 = pNVar4;
  if ((~uVar5 & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  local_8 = *(long *)(*(long *)pNVar6 + 8);
  local_30 = this;
  local_28 = param_1;
  if (local_8 != 0x5fff) {
    uVar1 = Type::SlowIs((Type *)&local_8,0x5fff);
    if ((uVar1 & 1) == 0) {
      return (Node *)0x0;
    }
    uVar5 = *(uint *)(local_28 + 0x14);
    pNVar4 = local_28 + 0x20;
  }
  if ((~uVar5 & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  local_8 = *(long *)(*(long *)(pNVar4 + 8) + 8);
  if ((local_8 != 0x5fff) && (uVar1 = Type::SlowIs((Type *)&local_8,0x5fff), (uVar1 & 1) == 0)) {
    return (Node *)0x0;
  }
  JSBinopReduction::ConvertInputsToNumber((JSBinopReduction *)&local_30);
  pOVar2 = (Operator *)JSBinopReduction::NumberOp((JSBinopReduction *)&local_30);
  if (0 < *(int *)(*(long *)local_28 + 0x18)) {
    (**(code **)(**(long **)(local_30 + 8) + 0x20))(*(long **)(local_30 + 8),local_28,local_28,0,0);
  }
  NodeProperties::RemoveNonValueInputs(local_28);
  NodeProperties::ChangeOp(local_28,pOVar2);
  pNVar6 = local_28;
  uVar3 = Type::Intersect(*(undefined8 *)(local_28 + 8),0x1c5f,
                          *(undefined8 *)**(undefined8 **)(local_30 + 0x10));
  *(undefined8 *)(pNVar6 + 8) = uVar3;
  return local_28;
}

