
/* v8::internal::compiler::CodeAssembler::StoreEphemeronKey(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::CodeAssembler::StoreEphemeronKey
          (CodeAssembler *this,Node *param_1,Node *param_2,Node *param_3)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  Node *local_48;
  Node *pNStack_40;
  Node *local_38;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Store((MachineOperatorBuilder *)(this_00 + 0x20),0x408);
  local_48 = param_1;
  pNStack_40 = param_2;
  local_38 = param_3;
  RawMachineAssembler::AddNode(this_00,pOVar1,3,&local_48);
  return;
}

