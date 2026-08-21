
/* v8::internal::compiler::CodeAssembler::Int64AbsWithOverflow(v8::internal::SloppyTNode<v8::internal::Int64T>)
    */

void __thiscall
v8::internal::compiler::CodeAssembler::Int64AbsWithOverflow(CodeAssembler *this,Node *param_2)

{
  Operator *extraout_x1;
  RawMachineAssembler *this_00;
  Node *local_28;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  MachineOperatorBuilder::Int64AbsWithOverflow((MachineOperatorBuilder *)(this_00 + 0x20));
  local_28 = param_2;
  RawMachineAssembler::AddNode(this_00,extraout_x1,1,&local_28);
  return;
}

