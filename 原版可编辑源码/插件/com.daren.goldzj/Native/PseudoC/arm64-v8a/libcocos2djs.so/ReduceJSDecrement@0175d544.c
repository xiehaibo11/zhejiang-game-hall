
/* v8::internal::compiler::JSTypedLowering::ReduceJSDecrement(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSDecrement(JSTypedLowering *this,Node *param_1)

{
  long lVar1;
  ulong uVar2;
  Node *pNVar3;
  Operator *pOVar4;
  undefined8 uVar5;
  Zone *pZVar6;
  JSTypedLowering *local_40;
  Node *local_38;
  long local_18;
  
  lVar1 = NodeProperties::GetValueInput(param_1,0);
  local_18 = *(long *)(lVar1 + 8);
  if ((local_18 == 0x5fff) || (uVar2 = Type::SlowIs((Type *)&local_18,0x5fff), (uVar2 & 1) != 0)) {
    pZVar6 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
    pNVar3 = (Node *)JSGraph::OneConstant(*(JSGraph **)(this + 0x10));
    Node::InsertInput(param_1,pZVar6,1,pNVar3);
    pOVar4 = (Operator *)
             JSOperatorBuilder::Subtract(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    NodeProperties::ChangeOp(param_1,pOVar4);
    local_40 = this;
    local_38 = param_1;
    JSBinopReduction::ConvertInputsToNumber((JSBinopReduction *)&local_40);
    pOVar4 = (Operator *)JSBinopReduction::NumberOp((JSBinopReduction *)&local_40);
    if (0 < *(int *)(*(long *)local_38 + 0x18)) {
      (**(code **)(**(long **)(local_40 + 8) + 0x20))
                (*(long **)(local_40 + 8),local_38,local_38,0,0);
    }
    NodeProperties::RemoveNonValueInputs(local_38);
    NodeProperties::ChangeOp(local_38,pOVar4);
    pNVar3 = local_38;
    uVar5 = Type::Intersect(*(undefined8 *)(local_38 + 8),0x1c5f,
                            *(undefined8 *)**(undefined8 **)(local_40 + 0x10));
    *(undefined8 *)(pNVar3 + 8) = uVar5;
  }
  else {
    local_38 = (Node *)0x0;
  }
  return local_38;
}

