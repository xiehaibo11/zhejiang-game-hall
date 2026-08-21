
/* v8::internal::compiler::WasmGraphBuilder::BuildI32Rol(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildI32Rol
          (WasmGraphBuilder *this,Node *param_1,Node *param_2)

{
  Node *pNVar1;
  Operator *pOVar2;
  Node *local_40;
  Node *pNStack_38;
  
  if (*(short *)(*(long *)param_2 + 0x10) == 0x17) {
    pNVar1 = (Node *)MachineGraph::Int32Constant
                               (*(MachineGraph **)(this + 8),
                                0x20 - (*(uint *)(*(long *)param_2 + 0x2c) & 0x1f));
  }
  else {
    pNVar1 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x20);
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Int32Sub
                       (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    local_40 = pNVar1;
    pNStack_38 = param_2;
    pNVar1 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar2,2,&local_40,false);
  }
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Word32Ror
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  pNStack_38 = (Node *)MaskShiftCount32(this,pNVar1);
  local_40 = param_1;
  Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar2,2,&local_40,false);
  return;
}

