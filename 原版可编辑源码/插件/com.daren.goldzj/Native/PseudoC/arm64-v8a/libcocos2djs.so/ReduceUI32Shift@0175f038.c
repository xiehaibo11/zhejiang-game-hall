
/* v8::internal::compiler::JSTypedLowering::ReduceUI32Shift(v8::internal::compiler::Node*,
   v8::internal::compiler::Signedness) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceUI32Shift
          (JSTypedLowering *this,Node *param_1,int param_3)

{
  ulong uVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  Node *pNVar4;
  uint uVar5;
  Node *pNVar6;
  JSTypedLowering *local_38;
  Node *local_30;
  long local_28;
  
  uVar5 = *(uint *)(param_1 + 0x14);
  pNVar4 = param_1 + 0x20;
  pNVar6 = pNVar4;
  if ((~uVar5 & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  local_28 = *(long *)(*(long *)pNVar6 + 8);
  local_38 = this;
  local_30 = param_1;
  if (local_28 != 0x5fff) {
    uVar1 = Type::SlowIs((Type *)&local_28,0x5fff);
    if ((uVar1 & 1) == 0) {
      return (Node *)0x0;
    }
    uVar5 = *(uint *)(local_30 + 0x14);
    pNVar4 = local_30 + 0x20;
  }
  if ((~uVar5 & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  local_28 = *(long *)(*(long *)(pNVar4 + 8) + 8);
  if ((local_28 != 0x5fff) && (uVar1 = Type::SlowIs((Type *)&local_28,0x5fff), (uVar1 & 1) == 0)) {
    return (Node *)0x0;
  }
  JSBinopReduction::ConvertInputsToNumber((JSBinopReduction *)&local_38);
  JSBinopReduction::ConvertInputsToUI32((JSBinopReduction *)&local_38,param_3,1);
  pOVar2 = (Operator *)JSBinopReduction::NumberOp((JSBinopReduction *)&local_38);
  uVar3 = 0x407;
  if (param_3 != 1) {
    uVar3 = 1099;
  }
  if (0 < *(int *)(*(long *)local_30 + 0x18)) {
    (**(code **)(**(long **)(local_38 + 8) + 0x20))(*(long **)(local_38 + 8),local_30,local_30,0,0);
  }
  NodeProperties::RemoveNonValueInputs(local_30);
  NodeProperties::ChangeOp(local_30,pOVar2);
  pNVar6 = local_30;
  uVar3 = Type::Intersect(*(undefined8 *)(local_30 + 8),uVar3,
                          *(undefined8 *)**(undefined8 **)(local_38 + 0x10));
  *(undefined8 *)(pNVar6 + 8) = uVar3;
  return local_30;
}

