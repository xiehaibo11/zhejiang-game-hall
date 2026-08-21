
/* v8::internal::compiler::MachineOperatorReducer::Word32Shr(v8::internal::compiler::Node*, unsigned
   int) */

Node * __thiscall
v8::internal::compiler::MachineOperatorReducer::Word32Shr
          (MachineOperatorReducer *this,Node *param_1,uint param_2)

{
  Operator *pOVar1;
  Graph *this_00;
  Node *local_40;
  undefined8 uStack_38;
  
  if (param_2 != 0) {
    this_00 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word32Shr
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
    uStack_38 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),param_2);
    local_40 = param_1;
    param_1 = (Node *)Graph::NewNode(this_00,pOVar1,2,&local_40,false);
  }
  return param_1;
}

