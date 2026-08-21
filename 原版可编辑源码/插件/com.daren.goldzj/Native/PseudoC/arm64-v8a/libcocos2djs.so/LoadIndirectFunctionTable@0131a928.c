
/* v8::internal::compiler::WasmGraphBuilder::LoadIndirectFunctionTable(unsigned int,
   v8::internal::compiler::Node**, v8::internal::compiler::Node**, v8::internal::compiler::Node**,
   v8::internal::compiler::Node**) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::LoadIndirectFunctionTable
          (WasmGraphBuilder *this,uint param_1,Node **param_2,Node **param_3,Node **param_4,
          Node **param_5)

{
  MachineOperatorBuilder *pMVar1;
  Operator *pOVar2;
  Node *pNVar3;
  Graph *pGVar4;
  Node *pNVar5;
  WasmGraphBuilder *pWVar6;
  Node *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pMVar1 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
  if (param_1 == 0) {
    pOVar2 = (Operator *)MachineOperatorBuilder::Load(pMVar1,0x304);
    pNVar5 = *(Node **)(this + 0x30);
    uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x4b);
    pWVar6 = this + 0x20;
    local_70 = **(undefined8 **)pWVar6;
    uStack_68 = **(undefined8 **)(this + 0x18);
    local_80 = pNVar5;
    pNVar5 = (Node *)Graph::NewNode(pGVar4,pOVar2,4,&local_80,false);
    **(undefined8 **)pWVar6 = pNVar5;
    *param_2 = pNVar5;
    pGVar4 = (Graph *)**(undefined8 **)(this + 8);
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],5);
    pNVar5 = *(Node **)(this + 0x30);
    uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x43);
    uStack_68 = **(undefined8 **)(this + 0x18);
    local_70 = **(undefined8 **)(this + 0x20);
    local_80 = pNVar5;
    pNVar5 = (Node *)Graph::NewNode(pGVar4,pOVar2,4,&local_80,false);
    **(undefined8 **)pWVar6 = pNVar5;
    *param_3 = pNVar5;
    pGVar4 = (Graph *)**(undefined8 **)(this + 8);
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],5);
    pNVar5 = *(Node **)(this + 0x30);
    uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x3b);
    uStack_68 = **(undefined8 **)(this + 0x18);
    local_70 = **(undefined8 **)(this + 0x20);
    local_80 = pNVar5;
    pNVar5 = (Node *)Graph::NewNode(pGVar4,pOVar2,4,&local_80,false);
    **(undefined8 **)pWVar6 = pNVar5;
    *param_4 = pNVar5;
    pGVar4 = (Graph *)**(undefined8 **)(this + 8);
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x707);
    pNVar5 = *(Node **)(this + 0x30);
    uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x37);
    uStack_68 = **(undefined8 **)(this + 0x18);
    local_70 = **(undefined8 **)(this + 0x20);
    local_80 = pNVar5;
  }
  else {
    pOVar2 = (Operator *)MachineOperatorBuilder::Load(pMVar1,0x707);
    pNVar5 = *(Node **)(this + 0x30);
    uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x93);
    pWVar6 = this + 0x20;
    local_70 = **(undefined8 **)pWVar6;
    uStack_68 = **(undefined8 **)(this + 0x18);
    local_80 = pNVar5;
    pNVar5 = (Node *)Graph::NewNode(pGVar4,pOVar2,4,&local_80,false);
    **(undefined8 **)pWVar6 = pNVar5;
    pGVar4 = (Graph *)**(undefined8 **)(this + 8);
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x708);
    uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),param_1 * 4 + 7);
    uStack_68 = **(undefined8 **)(this + 0x18);
    local_70 = **(undefined8 **)(this + 0x20);
    local_80 = pNVar5;
    pNVar5 = (Node *)Graph::NewNode(pGVar4,pOVar2,4,&local_80,false);
    **(undefined8 **)pWVar6 = pNVar5;
    pGVar4 = (Graph *)**(undefined8 **)(this + 8);
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x204);
    uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),3);
    uStack_68 = **(undefined8 **)(this + 0x18);
    local_70 = **(undefined8 **)(this + 0x20);
    local_80 = pNVar5;
    pNVar3 = (Node *)Graph::NewNode(pGVar4,pOVar2,4,&local_80,false);
    **(undefined8 **)pWVar6 = pNVar3;
    *param_2 = pNVar3;
    pGVar4 = (Graph *)**(undefined8 **)(this + 8);
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],5);
    uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),7);
    uStack_68 = **(undefined8 **)(this + 0x18);
    local_70 = **(undefined8 **)(this + 0x20);
    local_80 = pNVar5;
    pNVar3 = (Node *)Graph::NewNode(pGVar4,pOVar2,4,&local_80,false);
    **(undefined8 **)pWVar6 = pNVar3;
    *param_3 = pNVar3;
    pGVar4 = (Graph *)**(undefined8 **)(this + 8);
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],5);
    uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0xf);
    uStack_68 = **(undefined8 **)(this + 0x18);
    local_70 = **(undefined8 **)(this + 0x20);
    local_80 = pNVar5;
    pNVar3 = (Node *)Graph::NewNode(pGVar4,pOVar2,4,&local_80,false);
    **(undefined8 **)pWVar6 = pNVar3;
    *param_4 = pNVar3;
    pGVar4 = (Graph *)**(undefined8 **)(this + 8);
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x707);
    uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x1b);
    uStack_68 = **(undefined8 **)(this + 0x18);
    local_70 = **(undefined8 **)(this + 0x20);
    local_80 = pNVar5;
  }
  pNVar5 = (Node *)Graph::NewNode(pGVar4,pOVar2,4,&local_80,false);
  **(undefined8 **)(this + 0x20) = pNVar5;
  *param_5 = pNVar5;
  return;
}

