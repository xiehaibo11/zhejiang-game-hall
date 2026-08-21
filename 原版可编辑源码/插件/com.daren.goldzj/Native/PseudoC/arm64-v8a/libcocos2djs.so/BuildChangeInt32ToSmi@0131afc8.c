
/* v8::internal::compiler::WasmGraphBuilder::BuildChangeInt32ToSmi(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildChangeInt32ToSmi
          (WasmGraphBuilder *this,Node *param_1)

{
  Operator *pOVar1;
  Graph *this_00;
  Node *local_40;
  undefined8 uStack_38;
  
  this_00 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32Shl
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  uStack_38 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),1);
  local_40 = param_1;
  Graph::NewNode(this_00,pOVar1,2,&local_40,false);
  return;
}

