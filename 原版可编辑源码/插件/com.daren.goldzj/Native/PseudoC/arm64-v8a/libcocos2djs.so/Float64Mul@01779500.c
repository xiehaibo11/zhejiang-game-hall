
/* v8::internal::compiler::MachineOperatorReducer::Float64Mul(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::MachineOperatorReducer::Float64Mul
          (MachineOperatorReducer *this,Node *param_1,Node *param_2)

{
  Operator *pOVar1;
  Graph *this_00;
  Node *local_40;
  Node *pNStack_38;
  
  this_00 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Float64Mul
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
  local_40 = param_1;
  pNStack_38 = param_2;
  Graph::NewNode(this_00,pOVar1,2,&local_40,false);
  return;
}

