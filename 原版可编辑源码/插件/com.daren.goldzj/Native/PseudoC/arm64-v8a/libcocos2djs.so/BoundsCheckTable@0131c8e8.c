
/* v8::internal::compiler::WasmGraphBuilder::BoundsCheckTable(unsigned int,
   v8::internal::compiler::Node*, int, v8::internal::wasm::TrapReason,
   v8::internal::compiler::Node**) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BoundsCheckTable
          (WasmGraphBuilder *this,int param_1,Node *param_2,undefined4 param_3,undefined4 param_5,
          undefined8 *param_6)

{
  Operator *pOVar1;
  Node *pNVar2;
  undefined8 uVar3;
  Graph *pGVar4;
  Node *pNVar5;
  Node *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x707);
  pNVar5 = *(Node **)(this + 0x30);
  uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x8f);
  uStack_68 = **(undefined8 **)(this + 0x18);
  local_70 = **(undefined8 **)(this + 0x20);
  local_80 = pNVar5;
  pNVar5 = (Node *)Graph::NewNode(pGVar4,pOVar1,4,&local_80,false);
  **(undefined8 **)(this + 0x20) = pNVar5;
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x708);
  uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),param_1 * 4 + 7);
  uStack_68 = **(undefined8 **)(this + 0x18);
  local_70 = **(undefined8 **)(this + 0x20);
  local_80 = pNVar5;
  pNVar5 = (Node *)Graph::NewNode(pGVar4,pOVar1,4,&local_80,false);
  **(undefined8 **)(this + 0x20) = pNVar5;
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x206);
  uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0xf);
  uStack_68 = **(undefined8 **)(this + 0x18);
  local_70 = **(undefined8 **)(this + 0x20);
  local_80 = pNVar5;
  pNVar2 = (Node *)Graph::NewNode(pGVar4,pOVar1,4,&local_80,false);
  **(undefined8 **)(this + 0x20) = pNVar2;
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::TruncateInt64ToInt32
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  local_80 = pNVar2;
  pNVar2 = (Node *)Graph::NewNode(pGVar4,pOVar1,1,&local_80,false);
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32Sar
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),1);
  local_80 = pNVar2;
  uVar3 = Graph::NewNode(pGVar4,pOVar1,2,&local_80,false);
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Uint32LessThan
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  local_80 = param_2;
  uStack_78 = uVar3;
  uVar3 = Graph::NewNode(pGVar4,pOVar1,2,&local_80,false);
  TrapIfFalse(this,param_5,uVar3,param_3);
  if (param_6 != (undefined8 *)0x0) {
    pGVar4 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x707);
    uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0xb);
    uStack_68 = **(undefined8 **)(this + 0x18);
    local_70 = **(undefined8 **)(this + 0x20);
    local_80 = pNVar5;
    uVar3 = Graph::NewNode(pGVar4,pOVar1,4,&local_80,false);
    **(undefined8 **)(this + 0x20) = uVar3;
    *param_6 = uVar3;
  }
  return;
}

