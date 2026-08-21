
/* v8::internal::compiler::JSCallReducer::ReduceObjectConstructor(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceObjectConstructor(JSCallReducer *this,Node *param_1)

{
  uint *puVar1;
  Node *pNVar2;
  Node *pNVar3;
  ulong uVar4;
  Operator *pOVar5;
  
  puVar1 = (uint *)CallParametersOf(*(Operator **)param_1);
  if (2 < (*puVar1 & 0x7ffffff)) {
    pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,2);
    pNVar3 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    uVar4 = NodeProperties::CanBePrimitive(*(JSHeapBroker **)(this + 0x18),pNVar2,pNVar3);
    if ((uVar4 & 1) == 0) {
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar2,0,0);
      return pNVar2;
    }
    uVar4 = NodeProperties::CanBeNullOrUndefined(*(JSHeapBroker **)(this + 0x18),pNVar2,pNVar3);
    if ((uVar4 & 1) == 0) {
      NodeProperties::ReplaceValueInputs(param_1,pNVar2);
      pOVar5 = (Operator *)
               JSOperatorBuilder::ToObject(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
      NodeProperties::ChangeOp(param_1,pOVar5);
      return param_1;
    }
  }
  return (Node *)0x0;
}

