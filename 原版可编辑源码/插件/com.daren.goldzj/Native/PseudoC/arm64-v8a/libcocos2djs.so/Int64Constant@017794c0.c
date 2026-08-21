
/* v8::internal::compiler::MachineOperatorReducer::Int64Constant(long) */

void __thiscall
v8::internal::compiler::MachineOperatorReducer::Int64Constant
          (MachineOperatorReducer *this,long param_1)

{
  Graph *this_00;
  Operator *pOVar1;
  Node *local_8;
  
  this_00 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Int64Constant
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],param_1);
  local_8 = (Node *)0x0;
  Graph::NewNode(this_00,pOVar1,0,&local_8,false);
  return;
}

