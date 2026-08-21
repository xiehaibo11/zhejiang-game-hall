
/* v8::internal::compiler::WasmGraphBuilder::GetBaseAndOffsetForImportedMutableAnyRefGlobal(v8::internal::wasm::WasmGlobal
   const&, v8::internal::compiler::Node**, v8::internal::compiler::Node**) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::GetBaseAndOffsetForImportedMutableAnyRefGlobal
          (WasmGraphBuilder *this,WasmGlobal *param_1,Node **param_2,Node **param_3)

{
  Operator *pOVar1;
  Operator *pOVar2;
  MachineOperatorBuilder *pMVar3;
  MachineGraph *this_00;
  Graph *pGVar4;
  Graph *pGVar5;
  Node *pNVar6;
  Node *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x707);
  pNVar6 = *(Node **)(this + 0x30);
  uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x87);
  uStack_58 = **(undefined8 **)(this + 0x18);
  local_60 = **(undefined8 **)(this + 0x20);
  local_70 = pNVar6;
  pNVar6 = (Node *)Graph::NewNode(pGVar4,pOVar1,4,&local_70,false);
  **(undefined8 **)(this + 0x20) = pNVar6;
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x708);
  uStack_68 = MachineGraph::Int32Constant
                        (*(MachineGraph **)(this + 8),*(int *)(param_1 + 0x18) * 4 + 7);
  uStack_58 = **(undefined8 **)(this + 0x18);
  local_60 = **(undefined8 **)(this + 0x20);
  local_70 = pNVar6;
  pNVar6 = (Node *)Graph::NewNode(pGVar4,pOVar1,4,&local_70,false);
  **(undefined8 **)(this + 0x20) = pNVar6;
  *param_2 = pNVar6;
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x505);
  pNVar6 = *(Node **)(this + 0x40);
  if (pNVar6 == (Node *)0x0) {
    pGVar5 = (Graph *)**(undefined8 **)(this + 8);
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x505);
    pNVar6 = *(Node **)(this + 0x30);
    uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x57);
    local_60 = *(undefined8 *)(**(long **)(this + 8) + 8);
    local_70 = pNVar6;
    uStack_58 = local_60;
    pNVar6 = (Node *)Graph::NewNode(pGVar5,pOVar2,4,&local_70,false);
    *(Node **)(this + 0x40) = pNVar6;
  }
  uStack_68 = MachineGraph::Int32Constant
                        (*(MachineGraph **)(this + 8),*(int *)(param_1 + 0x18) << 3);
  uStack_58 = **(undefined8 **)(this + 0x18);
  local_60 = **(undefined8 **)(this + 0x20);
  local_70 = pNVar6;
  pNVar6 = (Node *)Graph::NewNode(pGVar4,pOVar1,4,&local_70,false);
  **(undefined8 **)(this + 0x20) = pNVar6;
  pMVar3 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  if (pMVar3[0x10] == (MachineOperatorBuilder)0x4) {
    pOVar1 = (Operator *)MachineOperatorBuilder::Int32Mul(pMVar3);
  }
  else {
    pOVar1 = (Operator *)MachineOperatorBuilder::Int64Mul(pMVar3);
  }
  this_00 = *(MachineGraph **)(this + 8);
  if ((*(MachineOperatorBuilder **)(this_00 + 0x10))[0x10] != (MachineOperatorBuilder)0x4) {
    if (*(short *)(*(long *)pNVar6 + 0x10) == 0x17) {
      pNVar6 = (Node *)MachineGraph::IntPtrConstant
                                 (this_00,(ulong)*(uint *)(*(long *)pNVar6 + 0x2c));
    }
    else {
      pGVar5 = *(Graph **)this_00;
      pOVar2 = (Operator *)
               MachineOperatorBuilder::ChangeUint32ToUint64
                         (*(MachineOperatorBuilder **)(this_00 + 0x10));
      local_70 = pNVar6;
      pNVar6 = (Node *)Graph::NewNode(pGVar5,pOVar2,1,&local_70,false);
    }
  }
  uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),4);
  local_70 = pNVar6;
  pNVar6 = (Node *)Graph::NewNode(pGVar4,pOVar1,2,&local_70,false);
  pMVar3 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
  pGVar4 = (Graph *)**(undefined8 **)(this + 8);
  if (pMVar3[0x10] == (MachineOperatorBuilder)0x4) {
    pOVar1 = (Operator *)MachineOperatorBuilder::Int32Add(pMVar3);
  }
  else {
    pOVar1 = (Operator *)MachineOperatorBuilder::Int64Add(pMVar3);
  }
  uStack_68 = MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),7);
  local_70 = pNVar6;
  pNVar6 = (Node *)Graph::NewNode(pGVar4,pOVar1,2,&local_70,false);
  *param_3 = pNVar6;
  return;
}

