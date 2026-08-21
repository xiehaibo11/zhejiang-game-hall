
/* v8::internal::compiler::JSCallReducer::ReduceNumberIsInteger(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceNumberIsInteger(JSCallReducer *this,Node *param_1)

{
  undefined8 uVar1;
  Node *pNVar2;
  Operator *pOVar3;
  Graph *this_00;
  Node *local_38;
  
  if (*(int *)(*(long *)param_1 + 0x14) < 3) {
    uVar1 = JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
  }
  else {
    pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,2);
    this_00 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::ObjectIsInteger
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_38 = pNVar2;
    uVar1 = Graph::NewNode(this_00,pOVar3,1,&local_38,false);
  }
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar1,0,0);
  return uVar1;
}

