
/* v8::internal::compiler::WasmGraphBuilder::BuildChangeSmiToIntPtr(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildChangeSmiToIntPtr
          (WasmGraphBuilder *this,Node *param_1)

{
  Operator *pOVar1;
  Node *pNVar2;
  MachineOperatorBuilder *this_00;
  Graph *pGVar3;
  Node *local_40;
  undefined8 uStack_38;
  
  pGVar3 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::TruncateInt64ToInt32
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  local_40 = param_1;
  pNVar2 = (Node *)Graph::NewNode(pGVar3,pOVar1,1,&local_40,false);
  pGVar3 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32Sar
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  uStack_38 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),1);
  local_40 = pNVar2;
  pNVar2 = (Node *)Graph::NewNode(pGVar3,pOVar1,2,&local_40,false);
  this_00 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
  if (this_00[0x10] == (MachineOperatorBuilder)0x5) {
    pGVar3 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)MachineOperatorBuilder::ChangeInt32ToInt64(this_00);
    local_40 = pNVar2;
    pNVar2 = (Node *)Graph::NewNode(pGVar3,pOVar1,1,&local_40,false);
  }
  return pNVar2;
}

