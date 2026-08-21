
/* v8::internal::compiler::WasmGraphBuilder::Uint32ToUintptr(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::WasmGraphBuilder::Uint32ToUintptr(WasmGraphBuilder *this,Node *param_1)

{
  MachineGraph *this_00;
  Node *pNVar1;
  Operator *pOVar2;
  Graph *this_01;
  Node *local_28;
  
  this_00 = *(MachineGraph **)(this + 8);
  if ((*(MachineOperatorBuilder **)(this_00 + 0x10))[0x10] != (MachineOperatorBuilder)0x4) {
    if (*(short *)(*(long *)param_1 + 0x10) == 0x17) {
      pNVar1 = (Node *)MachineGraph::IntPtrConstant
                                 (this_00,(ulong)*(uint *)(*(long *)param_1 + 0x2c));
      return pNVar1;
    }
    this_01 = *(Graph **)this_00;
    pOVar2 = (Operator *)
             MachineOperatorBuilder::ChangeUint32ToUint64
                       (*(MachineOperatorBuilder **)(this_00 + 0x10));
    local_28 = param_1;
    param_1 = (Node *)Graph::NewNode(this_01,pOVar2,1,&local_28,false);
  }
  return param_1;
}

