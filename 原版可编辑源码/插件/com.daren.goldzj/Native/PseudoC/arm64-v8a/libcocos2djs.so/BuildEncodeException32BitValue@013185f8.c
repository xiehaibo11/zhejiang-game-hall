
/* v8::internal::compiler::WasmGraphBuilder::BuildEncodeException32BitValue(v8::internal::compiler::Node*,
   unsigned int*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildEncodeException32BitValue
          (WasmGraphBuilder *this,Node *param_1,uint *param_2,Node *param_3)

{
  Operator *pOVar1;
  Node *pNVar2;
  undefined8 uVar3;
  MachineOperatorBuilder *this_00;
  Graph *pGVar4;
  Node *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  this_00 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)MachineOperatorBuilder::Word32Shr(this_00);
  uStack_70 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x10);
  local_78 = param_3;
  pNVar2 = (Node *)Graph::NewNode(pGVar4,pOVar1,2,&local_78,false);
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32Shl
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  uStack_70 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),1);
  local_78 = pNVar2;
  uVar3 = Graph::NewNode(pGVar4,pOVar1,2,&local_78,false);
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Store
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],6);
  uStack_70 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),*param_2 * 4 + 7);
  uStack_60 = **(undefined8 **)(this + 0x20);
  local_58 = **(undefined8 **)(this + 0x18);
  local_78 = param_1;
  local_68 = uVar3;
  uVar3 = Graph::NewNode(pGVar4,pOVar1,5,&local_78,false);
  **(undefined8 **)(this + 0x20) = uVar3;
  *param_2 = *param_2 + 1;
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)MachineOperatorBuilder::Word32And(this_00);
  uStack_70 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0xffff);
  local_78 = param_3;
  pNVar2 = (Node *)Graph::NewNode(pGVar4,pOVar1,2,&local_78,false);
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32Shl
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  uStack_70 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),1);
  local_78 = pNVar2;
  uVar3 = Graph::NewNode(pGVar4,pOVar1,2,&local_78,false);
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Store
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],6);
  uStack_70 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),*param_2 * 4 + 7);
  uStack_60 = **(undefined8 **)(this + 0x20);
  local_58 = **(undefined8 **)(this + 0x18);
  local_78 = param_1;
  local_68 = uVar3;
  uVar3 = Graph::NewNode(pGVar4,pOVar1,5,&local_78,false);
  **(undefined8 **)(this + 0x20) = uVar3;
  *param_2 = *param_2 + 1;
  return;
}

