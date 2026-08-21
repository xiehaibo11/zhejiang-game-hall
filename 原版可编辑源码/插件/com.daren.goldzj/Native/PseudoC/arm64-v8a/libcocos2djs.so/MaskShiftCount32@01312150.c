
/* v8::internal::compiler::WasmGraphBuilder::MaskShiftCount32(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::WasmGraphBuilder::MaskShiftCount32(WasmGraphBuilder *this,Node *param_1)

{
  uint uVar1;
  MachineGraph *this_00;
  Node *pNVar2;
  Operator *pOVar3;
  Graph *this_01;
  Node *local_40;
  undefined8 uStack_38;
  
  this_00 = *(MachineGraph **)(this + 8);
  if (((byte)(*(MachineOperatorBuilder **)(this_00 + 0x10))[0x15] >> 3 & 1) == 0) {
    if (*(short *)(*(long *)param_1 + 0x10) == 0x17) {
      uVar1 = *(uint *)(*(long *)param_1 + 0x2c);
      if (0x1f < uVar1) {
        pNVar2 = (Node *)MachineGraph::Int32Constant(this_00,uVar1 & 0x1f);
        return pNVar2;
      }
    }
    else {
      this_01 = *(Graph **)this_00;
      pOVar3 = (Operator *)
               MachineOperatorBuilder::Word32And(*(MachineOperatorBuilder **)(this_00 + 0x10));
      uStack_38 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x1f);
      local_40 = param_1;
      param_1 = (Node *)Graph::NewNode(this_01,pOVar3,2,&local_40,false);
    }
  }
  return param_1;
}

