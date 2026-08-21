
/* v8::internal::compiler::MachineOperatorReducer::Int32Add(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::MachineOperatorReducer::Int32Add
          (MachineOperatorReducer *this,Node *param_1,Node *param_2)

{
  Operator *pOVar1;
  Node *pNVar2;
  Node *pNVar3;
  Graph *this_00;
  Node *local_40;
  Node *pNStack_38;
  
  this_00 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Int32Add
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
  local_40 = param_1;
  pNStack_38 = param_2;
  pNVar2 = (Node *)Graph::NewNode(this_00,pOVar1,2,&local_40,false);
  pNVar3 = (Node *)ReduceInt32Add(this,pNVar2);
  if (pNVar3 != (Node *)0x0) {
    pNVar2 = pNVar3;
  }
  return pNVar2;
}

