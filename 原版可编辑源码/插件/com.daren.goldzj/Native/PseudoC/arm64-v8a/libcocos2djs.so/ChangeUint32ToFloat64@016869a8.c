
/* v8::internal::compiler::CodeAssembler::ChangeUint32ToFloat64(v8::internal::SloppyTNode<v8::internal::Word32T>)
    */

void __thiscall
v8::internal::compiler::CodeAssembler::ChangeUint32ToFloat64(CodeAssembler *this,Node *param_2)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  Node *local_28;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::ChangeUint32ToFloat64((MachineOperatorBuilder *)(this_00 + 0x20))
  ;
  local_28 = param_2;
  RawMachineAssembler::AddNode(this_00,pOVar1,1,&local_28);
  return;
}

