
/* v8::internal::compiler::WasmGraphBuilder::LoadExceptionTagFromTable(unsigned int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::LoadExceptionTagFromTable
          (WasmGraphBuilder *this,uint param_1)

{
  Operator *pOVar1;
  undefined8 uVar2;
  Graph *pGVar3;
  Node *pNVar4;
  Node *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pGVar3 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x707);
  pNVar4 = *(Node **)(this + 0x30);
  uStack_58 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x9b);
  uStack_48 = **(undefined8 **)(this + 0x18);
  local_50 = **(undefined8 **)(this + 0x20);
  local_60 = pNVar4;
  pNVar4 = (Node *)Graph::NewNode(pGVar3,pOVar1,4,&local_60,false);
  **(undefined8 **)(this + 0x20) = pNVar4;
  pGVar3 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x707);
  uStack_58 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),param_1 * 4 + 7);
  uStack_48 = **(undefined8 **)(this + 0x18);
  local_50 = **(undefined8 **)(this + 0x20);
  local_60 = pNVar4;
  uVar2 = Graph::NewNode(pGVar3,pOVar1,4,&local_60,false);
  **(undefined8 **)(this + 0x20) = uVar2;
  return;
}

