
/* v8::internal::compiler::CodeAssembler::RoundIntPtrToFloat64(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::CodeAssembler::RoundIntPtrToFloat64(CodeAssembler *this,Node *param_1)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  Node *local_28;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  if (this_00[0x30] == (RawMachineAssembler)0x5) {
    pOVar1 = (Operator *)
             MachineOperatorBuilder::RoundInt64ToFloat64((MachineOperatorBuilder *)(this_00 + 0x20))
    ;
  }
  else {
    pOVar1 = (Operator *)
             MachineOperatorBuilder::ChangeInt32ToFloat64
                       ((MachineOperatorBuilder *)(this_00 + 0x20));
  }
  local_28 = param_1;
  RawMachineAssembler::AddNode(this_00,pOVar1,1,&local_28);
  return;
}

