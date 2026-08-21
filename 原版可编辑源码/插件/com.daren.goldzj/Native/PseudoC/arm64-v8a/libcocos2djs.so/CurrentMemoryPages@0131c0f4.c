
/* v8::internal::compiler::WasmGraphBuilder::CurrentMemoryPages() */

Node * __thiscall
v8::internal::compiler::WasmGraphBuilder::CurrentMemoryPages(WasmGraphBuilder *this)

{
  MachineOperatorBuilder *pMVar1;
  Operator *pOVar2;
  Graph *pGVar3;
  Node *pNVar4;
  Node *local_40;
  undefined8 uStack_38;
  
  pMVar1 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
  pGVar3 = (Graph *)**(undefined8 **)(this + 8);
  pNVar4 = *(Node **)(*(long *)(this + 0x28) + 8);
  if (pMVar1[0x10] == (MachineOperatorBuilder)0x4) {
    pOVar2 = (Operator *)MachineOperatorBuilder::Word32Shr(pMVar1);
  }
  else {
    pOVar2 = (Operator *)MachineOperatorBuilder::Word64Shr(pMVar1);
  }
  uStack_38 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x10);
  local_40 = pNVar4;
  pNVar4 = (Node *)Graph::NewNode(pGVar3,pOVar2,2,&local_40,false);
  pMVar1 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
  if (pMVar1[0x10] == (MachineOperatorBuilder)0x5) {
    pGVar3 = (Graph *)**(undefined8 **)(this + 8);
    pOVar2 = (Operator *)MachineOperatorBuilder::TruncateInt64ToInt32(pMVar1);
    local_40 = pNVar4;
    pNVar4 = (Node *)Graph::NewNode(pGVar3,pOVar2,1,&local_40,false);
  }
  return pNVar4;
}

