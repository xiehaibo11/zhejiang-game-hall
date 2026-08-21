
/* v8::internal::compiler::WasmGraphBuilder::TableSize(unsigned int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::TableSize(WasmGraphBuilder *this,uint param_1)

{
  Operator *pOVar1;
  Graph *pGVar2;
  Node *pNVar3;
  Node *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pGVar2 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x707);
  pNVar3 = *(Node **)(this + 0x30);
  uStack_58 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x8f);
  uStack_48 = **(undefined8 **)(this + 0x18);
  local_50 = **(undefined8 **)(this + 0x20);
  local_60 = pNVar3;
  pNVar3 = (Node *)Graph::NewNode(pGVar2,pOVar1,4,&local_60,false);
  **(undefined8 **)(this + 0x20) = pNVar3;
  pGVar2 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x708);
  uStack_58 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),param_1 * 4 + 7);
  uStack_48 = **(undefined8 **)(this + 0x18);
  local_50 = **(undefined8 **)(this + 0x20);
  local_60 = pNVar3;
  pNVar3 = (Node *)Graph::NewNode(pGVar2,pOVar1,4,&local_60,false);
  **(undefined8 **)(this + 0x20) = pNVar3;
  pGVar2 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x206);
  uStack_58 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0xf);
  uStack_48 = **(undefined8 **)(this + 0x18);
  local_50 = **(undefined8 **)(this + 0x20);
  local_60 = pNVar3;
  pNVar3 = (Node *)Graph::NewNode(pGVar2,pOVar1,4,&local_60,false);
  **(undefined8 **)(this + 0x20) = pNVar3;
  pGVar2 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::TruncateInt64ToInt32
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  local_60 = pNVar3;
  pNVar3 = (Node *)Graph::NewNode(pGVar2,pOVar1,1,&local_60,false);
  pGVar2 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32Sar
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  uStack_58 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),1);
  local_60 = pNVar3;
  Graph::NewNode(pGVar2,pOVar1,2,&local_60,false);
  return;
}

