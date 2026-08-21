
/* v8::internal::compiler::WasmGraphBuilder::MemBuffer(unsigned int) */

Node * __thiscall
v8::internal::compiler::WasmGraphBuilder::MemBuffer(WasmGraphBuilder *this,uint param_1)

{
  MachineOperatorBuilder *this_00;
  Operator *pOVar1;
  Node *pNVar2;
  Graph *this_01;
  Node *local_50;
  undefined8 uStack_48;
  
  pNVar2 = (Node *)**(undefined8 **)(this + 0x28);
  if (param_1 != 0) {
    this_00 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
    this_01 = (Graph *)**(undefined8 **)(this + 8);
    if (this_00[0x10] == (MachineOperatorBuilder)0x4) {
      pOVar1 = (Operator *)MachineOperatorBuilder::Int32Add(this_00);
    }
    else {
      pOVar1 = (Operator *)MachineOperatorBuilder::Int64Add(this_00);
    }
    uStack_48 = MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),(ulong)param_1);
    local_50 = pNVar2;
    pNVar2 = (Node *)Graph::NewNode(this_01,pOVar1,2,&local_50,false);
  }
  return pNVar2;
}

