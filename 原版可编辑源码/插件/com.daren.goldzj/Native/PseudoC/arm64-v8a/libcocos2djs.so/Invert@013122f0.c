
/* v8::internal::compiler::WasmGraphBuilder::Invert(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::Invert(WasmGraphBuilder *this,Node *param_1)

{
  Operator *pOVar1;
  Graph *this_00;
  Node *local_40;
  undefined8 uStack_38;
  
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32Equal
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  this_00 = *(Graph **)*(MachineGraph **)(this + 8);
  uStack_38 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
  local_40 = param_1;
  Graph::NewNode(this_00,pOVar1,2,&local_40,false);
  return;
}

