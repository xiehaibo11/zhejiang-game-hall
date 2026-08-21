
/* v8::internal::compiler::WasmGraphBuilder::BuildChangeSmiToInt32(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildChangeSmiToInt32
          (WasmGraphBuilder *this,Node *param_1)

{
  Operator *pOVar1;
  Node *pNVar2;
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
  Graph::NewNode(pGVar3,pOVar1,2,&local_40,false);
  return;
}

