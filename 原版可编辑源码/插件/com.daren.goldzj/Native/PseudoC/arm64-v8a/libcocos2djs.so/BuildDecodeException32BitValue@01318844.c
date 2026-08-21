
/* v8::internal::compiler::WasmGraphBuilder::BuildDecodeException32BitValue(v8::internal::compiler::Node*,
   unsigned int*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildDecodeException32BitValue
          (WasmGraphBuilder *this,Node *param_1,uint *param_2)

{
  Operator *pOVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  MachineOperatorBuilder *this_00;
  Graph *pGVar5;
  Node *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  this_00 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
  pGVar5 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)MachineOperatorBuilder::Load(this_00,0x206);
  uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),*param_2 * 4 + 7);
  uStack_58 = **(undefined8 **)(this + 0x18);
  local_60 = **(undefined8 **)(this + 0x20);
  local_70 = param_1;
  pNVar2 = (Node *)Graph::NewNode(pGVar5,pOVar1,4,&local_70,false);
  **(undefined8 **)(this + 0x20) = pNVar2;
  pGVar5 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::TruncateInt64ToInt32
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  local_70 = pNVar2;
  pNVar2 = (Node *)Graph::NewNode(pGVar5,pOVar1,1,&local_70,false);
  pGVar5 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32Sar
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),1);
  local_70 = pNVar2;
  pNVar2 = (Node *)Graph::NewNode(pGVar5,pOVar1,2,&local_70,false);
  *param_2 = *param_2 + 1;
  pGVar5 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)MachineOperatorBuilder::Word32Shl(this_00);
  uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x10);
  local_70 = pNVar2;
  pNVar2 = (Node *)Graph::NewNode(pGVar5,pOVar1,2,&local_70,false);
  pGVar5 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x206);
  uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),*param_2 * 4 + 7);
  uStack_58 = **(undefined8 **)(this + 0x18);
  local_60 = **(undefined8 **)(this + 0x20);
  local_70 = param_1;
  pNVar3 = (Node *)Graph::NewNode(pGVar5,pOVar1,4,&local_70,false);
  **(undefined8 **)(this + 0x20) = pNVar3;
  pGVar5 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::TruncateInt64ToInt32
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  local_70 = pNVar3;
  pNVar3 = (Node *)Graph::NewNode(pGVar5,pOVar1,1,&local_70,false);
  pGVar5 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32Sar
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),1);
  local_70 = pNVar3;
  uVar4 = Graph::NewNode(pGVar5,pOVar1,2,&local_70,false);
  *param_2 = *param_2 + 1;
  pGVar5 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)MachineOperatorBuilder::Word32Or(this_00);
  local_70 = pNVar2;
  uStack_68 = uVar4;
  Graph::NewNode(pGVar5,pOVar1,2,&local_70,false);
  return;
}

