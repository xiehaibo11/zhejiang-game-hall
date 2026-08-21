
/* v8::internal::compiler::WasmGraphBuilder::BuildImportCall(v8::internal::Signature<v8::internal::wasm::ValueType>*,
   v8::internal::Vector<v8::internal::compiler::Node*>,
   v8::internal::Vector<v8::internal::compiler::Node*>, int, int,
   v8::internal::compiler::WasmGraphBuilder::IsReturnCall) */

void v8::internal::compiler::WasmGraphBuilder::BuildImportCall
               (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7,int param_8,byte param_9)

{
  bool bVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Node *pNVar5;
  Graph *pGVar6;
  Node *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pGVar6 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],0x707);
  pNVar5 = *(Node **)(param_1 + 0x30);
  uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(param_1 + 8),0x2b);
  uStack_68 = **(undefined8 **)(param_1 + 0x18);
  local_70 = **(undefined8 **)(param_1 + 0x20);
  local_80 = pNVar5;
  pNVar5 = (Node *)Graph::NewNode(pGVar6,pOVar2,4,&local_80,false);
  **(undefined8 **)(param_1 + 0x20) = pNVar5;
  pGVar6 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],0x707);
  uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(param_1 + 8),param_8 * 4 + 7);
  uStack_68 = **(undefined8 **)(param_1 + 0x18);
  local_70 = **(undefined8 **)(param_1 + 0x20);
  local_80 = pNVar5;
  uVar3 = Graph::NewNode(pGVar6,pOVar2,4,&local_80,false);
  **(undefined8 **)(param_1 + 0x20) = uVar3;
  pGVar6 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],5);
  pNVar5 = *(Node **)(param_1 + 0x30);
  uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(param_1 + 8),0x2f);
  uStack_68 = **(undefined8 **)(param_1 + 0x18);
  local_70 = **(undefined8 **)(param_1 + 0x20);
  local_80 = pNVar5;
  pNVar5 = (Node *)Graph::NewNode(pGVar6,pOVar2,4,&local_80,false);
  **(undefined8 **)(param_1 + 0x20) = pNVar5;
  pGVar6 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],5);
  uStack_78 = MachineGraph::Int32Constant(*(MachineGraph **)(param_1 + 8),param_8 << 3);
  uStack_68 = **(undefined8 **)(param_1 + 0x18);
  local_70 = **(undefined8 **)(param_1 + 0x20);
  local_80 = pNVar5;
  uVar4 = Graph::NewNode(pGVar6,pOVar2,4,&local_80,false);
  **(undefined8 **)(param_1 + 0x20) = uVar4;
  *param_3 = uVar4;
  bVar1 = *(char *)(param_1 + 0x62) != '\0';
  if ((param_9 & 1) == 0) {
    BuildWasmCall(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,bVar1);
  }
  else {
    BuildWasmReturnCall(param_1,param_2,param_3,param_4,param_7,uVar3,bVar1);
  }
  return;
}

