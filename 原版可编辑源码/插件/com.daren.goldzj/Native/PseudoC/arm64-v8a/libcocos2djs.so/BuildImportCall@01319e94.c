
/* v8::internal::compiler::WasmGraphBuilder::BuildImportCall(v8::internal::Signature<v8::internal::wasm::ValueType>*,
   v8::internal::Vector<v8::internal::compiler::Node*>,
   v8::internal::Vector<v8::internal::compiler::Node*>, int, v8::internal::compiler::Node*,
   v8::internal::compiler::WasmGraphBuilder::IsReturnCall) */

void v8::internal::compiler::WasmGraphBuilder::BuildImportCall
               (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7,Node *param_8,byte param_9)

{
  bool bVar1;
  Operator *pOVar2;
  MachineOperatorBuilder *pMVar3;
  MachineGraph *this;
  Operator *pOVar4;
  Node *pNVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Node *pNVar8;
  Graph *pGVar9;
  Graph *this_00;
  Node *local_80;
  Node *pNStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pGVar9 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],0x707);
  pNVar8 = *(Node **)(param_1 + 0x30);
  pNStack_78 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(param_1 + 8),0x2b);
  uStack_68 = **(undefined8 **)(param_1 + 0x18);
  local_70 = **(undefined8 **)(param_1 + 0x20);
  local_80 = pNVar8;
  pNVar8 = (Node *)Graph::NewNode(pGVar9,pOVar2,4,&local_80,false);
  **(undefined8 **)(param_1 + 0x20) = pNVar8;
  pMVar3 = (MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2];
  pGVar9 = (Graph *)**(undefined8 **)(param_1 + 8);
  if (pMVar3[0x10] == (MachineOperatorBuilder)0x4) {
    pOVar2 = (Operator *)MachineOperatorBuilder::Int32Add(pMVar3);
  }
  else {
    pOVar2 = (Operator *)MachineOperatorBuilder::Int64Add(pMVar3);
  }
  pNStack_78 = (Node *)MachineGraph::IntPtrConstant(*(MachineGraph **)(param_1 + 8),7);
  local_80 = pNVar8;
  pNVar8 = (Node *)Graph::NewNode(pGVar9,pOVar2,2,&local_80,false);
  pMVar3 = (MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2];
  pGVar9 = (Graph *)**(undefined8 **)(param_1 + 8);
  if (pMVar3[0x10] == (MachineOperatorBuilder)0x4) {
    pOVar2 = (Operator *)MachineOperatorBuilder::Int32Mul(pMVar3);
  }
  else {
    pOVar2 = (Operator *)MachineOperatorBuilder::Int64Mul(pMVar3);
  }
  this = *(MachineGraph **)(param_1 + 8);
  if ((*(MachineOperatorBuilder **)(this + 0x10))[0x10] != (MachineOperatorBuilder)0x4) {
    if (*(short *)(*(long *)param_8 + 0x10) == 0x17) {
      param_8 = (Node *)MachineGraph::IntPtrConstant(this,(ulong)*(uint *)(*(long *)param_8 + 0x2c))
      ;
    }
    else {
      this_00 = *(Graph **)this;
      pOVar4 = (Operator *)
               MachineOperatorBuilder::ChangeUint32ToUint64
                         (*(MachineOperatorBuilder **)(this + 0x10));
      local_80 = param_8;
      param_8 = (Node *)Graph::NewNode(this_00,pOVar4,1,&local_80,false);
    }
  }
  pNStack_78 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(param_1 + 8),4);
  local_80 = param_8;
  pNVar5 = (Node *)Graph::NewNode(pGVar9,pOVar2,2,&local_80,false);
  pGVar9 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],0x707);
  uStack_68 = **(undefined8 **)(param_1 + 0x18);
  local_70 = **(undefined8 **)(param_1 + 0x20);
  local_80 = pNVar8;
  pNStack_78 = pNVar5;
  uVar6 = Graph::NewNode(pGVar9,pOVar2,4,&local_80,false);
  **(undefined8 **)(param_1 + 0x20) = uVar6;
  pGVar9 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Int32Add
                     ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2]);
  local_80 = pNVar5;
  pNStack_78 = pNVar5;
  uVar7 = Graph::NewNode(pGVar9,pOVar2,2,&local_80,false);
  pGVar9 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],5);
  pNVar8 = *(Node **)(param_1 + 0x30);
  pNStack_78 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(param_1 + 8),0x2f);
  uStack_68 = **(undefined8 **)(param_1 + 0x18);
  local_70 = **(undefined8 **)(param_1 + 0x20);
  local_80 = pNVar8;
  pNVar8 = (Node *)Graph::NewNode(pGVar9,pOVar2,4,&local_80,false);
  **(undefined8 **)(param_1 + 0x20) = pNVar8;
  pGVar9 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],5);
  uStack_68 = **(undefined8 **)(param_1 + 0x18);
  local_70 = **(undefined8 **)(param_1 + 0x20);
  local_80 = pNVar8;
  pNStack_78 = (Node *)uVar7;
  uVar7 = Graph::NewNode(pGVar9,pOVar2,4,&local_80,false);
  **(undefined8 **)(param_1 + 0x20) = uVar7;
  *param_3 = uVar7;
  bVar1 = *(char *)(param_1 + 0x62) != '\0';
  if ((param_9 & 1) == 0) {
    BuildWasmCall(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar6,bVar1);
  }
  else {
    BuildWasmReturnCall(param_1,param_2,param_3,param_4,param_7,uVar6,bVar1);
  }
  return;
}

