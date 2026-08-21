
/* v8::internal::compiler::WasmGraphBuilder::ElemDrop(unsigned int, int) */

void v8::internal::compiler::WasmGraphBuilder::ElemDrop(uint param_1,int param_2)

{
  ulong uVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  Graph *pGVar4;
  Node *pNVar5;
  Node *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar1 = (ulong)param_1;
  pGVar4 = (Graph *)**(undefined8 **)(uVar1 + 8);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(uVar1 + 8))[2],5);
  pNVar5 = *(Node **)(uVar1 + 0x30);
  uStack_60 = MachineGraph::Int32Constant(*(MachineGraph **)(uVar1 + 8),0xbb);
  uStack_50 = **(undefined8 **)(uVar1 + 0x18);
  local_58 = **(undefined8 **)(uVar1 + 0x20);
  local_68 = pNVar5;
  pNVar5 = (Node *)Graph::NewNode(pGVar4,pOVar2,4,&local_68,false);
  **(undefined8 **)(uVar1 + 0x20) = pNVar5;
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Store
                     (*(MachineOperatorBuilder **)(*(long *)(uVar1 + 8) + 0x10),2);
  pGVar4 = *(Graph **)*(MachineGraph **)(uVar1 + 8);
  uVar3 = MachineGraph::IntPtrConstant(*(MachineGraph **)(uVar1 + 8),(ulong)(uint)param_2);
  local_58 = MachineGraph::Int32Constant(*(MachineGraph **)(uVar1 + 8),1);
  uStack_50 = **(undefined8 **)(uVar1 + 0x20);
  local_48 = **(undefined8 **)(uVar1 + 0x18);
  local_68 = pNVar5;
  uStack_60 = uVar3;
  uVar3 = Graph::NewNode(pGVar4,pOVar2,5,&local_68,false);
  **(undefined8 **)(uVar1 + 0x20) = uVar3;
  return;
}

