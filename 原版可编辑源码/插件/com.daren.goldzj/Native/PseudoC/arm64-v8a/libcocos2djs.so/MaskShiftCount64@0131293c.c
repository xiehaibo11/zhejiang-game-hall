
/* v8::internal::compiler::WasmGraphBuilder::MaskShiftCount64(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::WasmGraphBuilder::MaskShiftCount64(WasmGraphBuilder *this,Node *param_1)

{
  MachineGraph *this_00;
  Node *pNVar1;
  Operator *pOVar2;
  ulong uVar3;
  long lVar4;
  Graph *this_01;
  Node *local_40;
  undefined8 uStack_38;
  
  this_00 = *(MachineGraph **)(this + 8);
  if (((byte)(*(MachineOperatorBuilder **)(this_00 + 0x10))[0x15] >> 3 & 1) == 0) {
    lVar4 = *(long *)param_1;
    if (*(short *)(lVar4 + 0x10) == 0x18) {
      uVar3 = *(ulong *)(lVar4 + 0x30);
    }
    else {
      if (*(short *)(lVar4 + 0x10) != 0x17) {
        this_01 = *(Graph **)this_00;
        pOVar2 = (Operator *)
                 MachineOperatorBuilder::Word64And(*(MachineOperatorBuilder **)(this_00 + 0x10));
        uStack_38 = MachineGraph::Int64Constant(*(MachineGraph **)(this + 8),0x3f);
        local_40 = param_1;
        pNVar1 = (Node *)Graph::NewNode(this_01,pOVar2,2,&local_40,false);
        return pNVar1;
      }
      uVar3 = (ulong)*(int *)(lVar4 + 0x2c);
    }
    if (0x3f < uVar3) {
      pNVar1 = (Node *)MachineGraph::Int64Constant(this_00,uVar3 & 0x3f);
      return pNVar1;
    }
  }
  return param_1;
}

