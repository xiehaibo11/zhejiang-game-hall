
/* v8::internal::compiler::WasmGraphBuilder::BuildI64DivU(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildI64DivU
          (WasmGraphBuilder *this,Node *param_1,Node *param_2,int param_3)

{
  MachineOperatorBuilder *this_00;
  undefined8 uVar1;
  Operator *pOVar2;
  Graph *this_01;
  Node *local_58;
  Node *pNStack_50;
  undefined8 local_48;
  
  this_00 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2];
  if (this_00[0x10] == (MachineOperatorBuilder)0x4) {
    uVar1 = ExternalReference::wasm_uint64_div();
    BuildDiv64Call(this,param_1,param_2,uVar1,0x405,3,param_3);
    return;
  }
  this_01 = (Graph *)**(undefined8 **)(this + 8);
  pOVar2 = (Operator *)MachineOperatorBuilder::Uint64Div(this_00);
  local_48 = TrapIfEq64(this,3,param_2,0,param_3);
  local_58 = param_1;
  pNStack_50 = param_2;
  Graph::NewNode(this_01,pOVar2,3,&local_58,false);
  return;
}

