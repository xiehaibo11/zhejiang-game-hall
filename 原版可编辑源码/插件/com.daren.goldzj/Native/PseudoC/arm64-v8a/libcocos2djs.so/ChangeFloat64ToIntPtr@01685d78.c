
/* v8::internal::compiler::CodeAssembler::ChangeFloat64ToIntPtr(v8::internal::TNode<v8::internal::Float64T>)
    */

void __thiscall
v8::internal::compiler::CodeAssembler::ChangeFloat64ToIntPtr(CodeAssembler *this,Node *param_2)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  Node *local_28;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  if (this_00[0x30] == (RawMachineAssembler)0x5) {
    pOVar1 = (Operator *)
             MachineOperatorBuilder::ChangeFloat64ToInt64
                       ((MachineOperatorBuilder *)(this_00 + 0x20));
  }
  else {
    pOVar1 = (Operator *)
             MachineOperatorBuilder::ChangeFloat64ToInt32
                       ((MachineOperatorBuilder *)(this_00 + 0x20));
  }
  local_28 = param_2;
  RawMachineAssembler::AddNode(this_00,pOVar1,1,&local_28);
  return;
}

