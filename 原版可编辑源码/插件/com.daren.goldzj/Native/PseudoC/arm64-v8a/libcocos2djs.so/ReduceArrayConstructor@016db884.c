
/* v8::internal::compiler::JSCallReducer::ReduceArrayConstructor(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceArrayConstructor(JSCallReducer *this,Node *param_1)

{
  uint uVar1;
  Node *pNVar2;
  uint *puVar3;
  Operator *pOVar4;
  
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,0);
  puVar3 = (uint *)CallParametersOf(*(Operator **)param_1);
  uVar1 = *puVar3;
  NodeProperties::ReplaceValueInput(param_1,pNVar2,0);
  NodeProperties::ReplaceValueInput(param_1,pNVar2,1);
  pOVar4 = (Operator *)
           JSOperatorBuilder::CreateArray
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),
                      ((ulong)uVar1 & 0x7ffffff) - 2,0);
  NodeProperties::ChangeOp(param_1,pOVar4);
  return param_1;
}

