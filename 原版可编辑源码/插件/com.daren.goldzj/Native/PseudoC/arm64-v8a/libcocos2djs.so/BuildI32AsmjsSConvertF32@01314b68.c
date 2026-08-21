
/* v8::internal::compiler::WasmGraphBuilder::BuildI32AsmjsSConvertF32(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildI32AsmjsSConvertF32
          (WasmGraphBuilder *this,Node *param_1)

{
  Operator *pOVar1;
  Node *pNVar2;
  MachineOperatorBuilder *this_00;
  Graph *pGVar3;
  Node *local_38;
  
  this_00 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
  pGVar3 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)MachineOperatorBuilder::ChangeFloat32ToFloat64(this_00);
  local_38 = param_1;
  pNVar2 = (Node *)Graph::NewNode(pGVar3,pOVar1,1,&local_38,false);
  pGVar3 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)MachineOperatorBuilder::TruncateFloat64ToWord32(this_00);
  local_38 = pNVar2;
  Graph::NewNode(pGVar3,pOVar1,1,&local_38,false);
  return;
}

