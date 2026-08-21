
/* v8::internal::compiler::WasmGraphBuilder::ExceptionTagEqual(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::ExceptionTagEqual
          (WasmGraphBuilder *this,Node *param_1,Node *param_2)

{
  MachineOperatorBuilder *this_00;
  Operator *pOVar1;
  Graph *this_01;
  Node *local_40;
  Node *pNStack_38;
  
  this_00 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
  this_01 = (Graph *)**(undefined8 **)(this + 8);
  if (this_00[0x10] == (MachineOperatorBuilder)0x4) {
    pOVar1 = (Operator *)MachineOperatorBuilder::Word32Equal(this_00);
  }
  else {
    pOVar1 = (Operator *)MachineOperatorBuilder::Word64Equal(this_00);
  }
  local_40 = param_1;
  pNStack_38 = param_2;
  Graph::NewNode(this_01,pOVar1,2,&local_40,false);
  return;
}

