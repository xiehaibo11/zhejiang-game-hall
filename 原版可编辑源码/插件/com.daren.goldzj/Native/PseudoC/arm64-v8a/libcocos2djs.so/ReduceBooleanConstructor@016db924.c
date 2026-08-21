
/* v8::internal::compiler::JSCallReducer::ReduceBooleanConstructor(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceBooleanConstructor(JSCallReducer *this,Node *param_1)

{
  uint *puVar1;
  Node *pNVar2;
  Operator *pOVar3;
  undefined8 uVar4;
  Graph *this_00;
  Node *local_38;
  
  puVar1 = (uint *)CallParametersOf(*(Operator **)param_1);
  if ((*puVar1 & 0x7ffffff) == 2) {
    pNVar2 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  }
  else {
    pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,2);
  }
  this_00 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::ToBoolean
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
  local_38 = pNVar2;
  uVar4 = Graph::NewNode(this_00,pOVar3,1,&local_38,false);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar4,0,0);
  return uVar4;
}

