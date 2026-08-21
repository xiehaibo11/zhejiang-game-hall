
/* v8::internal::compiler::CodeAssembler::Store(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::CodeAssembler::Store(CodeAssembler *this,Node *param_1,Node *param_2)

{
  Operator *pOVar1;
  undefined8 uVar2;
  RawMachineAssembler *this_00;
  Node *local_48;
  undefined8 uStack_40;
  Node *local_38;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Int64Constant((CommonOperatorBuilder *)(this_00 + 0x48),0);
  uVar2 = RawMachineAssembler::AddNode(this_00,pOVar1,0,(Node **)0x0);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Store((MachineOperatorBuilder *)(this_00 + 0x20),0x508);
  local_48 = param_1;
  uStack_40 = uVar2;
  local_38 = param_2;
  RawMachineAssembler::AddNode(this_00,pOVar1,3,&local_48);
  return;
}

