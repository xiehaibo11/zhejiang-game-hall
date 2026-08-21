
/* v8::internal::compiler::WasmGraphBuilder::RefNull() */

void __thiscall v8::internal::compiler::WasmGraphBuilder::RefNull(WasmGraphBuilder *this)

{
  Operator *pOVar1;
  undefined8 uVar2;
  Node *pNVar3;
  Graph *pGVar4;
  Node *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  pNVar3 = *(Node **)(this + 0x50);
  if (pNVar3 == (Node *)0x0) {
    pGVar4 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],5);
    pNVar3 = *(Node **)(this + 0x30);
    uStack_48 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x5f);
    uStack_38 = **(undefined8 **)(this + 0x18);
    local_40 = **(undefined8 **)(this + 0x20);
    local_50 = pNVar3;
    pNVar3 = (Node *)Graph::NewNode(pGVar4,pOVar1,4,&local_50,false);
    **(long **)(this + 0x20) = (long)pNVar3;
  }
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x707);
  uStack_48 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0xb0);
  uStack_38 = **(undefined8 **)(this + 0x18);
  local_40 = **(undefined8 **)(this + 0x20);
  local_50 = pNVar3;
  uVar2 = Graph::NewNode(pGVar4,pOVar1,4,&local_50,false);
  **(undefined8 **)(this + 0x20) = uVar2;
  return;
}

