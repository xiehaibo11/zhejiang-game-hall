
/* v8::internal::compiler::WasmGraphBuilder::BuildChangeInt32ToIntPtr(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildChangeInt32ToIntPtr
          (WasmGraphBuilder *this,Node *param_1)

{
  MachineOperatorBuilder *this_00;
  Operator *pOVar1;
  Graph *this_01;
  Node *local_28;
  
  this_00 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
  if (this_00[0x10] == (MachineOperatorBuilder)0x5) {
    this_01 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)MachineOperatorBuilder::ChangeInt32ToInt64(this_00);
    local_28 = param_1;
    param_1 = (Node *)Graph::NewNode(this_01,pOVar1,1,&local_28,false);
  }
  return param_1;
}

