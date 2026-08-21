
/* v8::internal::compiler::CodeAssembler::LoadFramePointer() */

void __thiscall v8::internal::compiler::CodeAssembler::LoadFramePointer(CodeAssembler *this)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::LoadFramePointer((MachineOperatorBuilder *)(this_00 + 0x20));
  RawMachineAssembler::AddNode(this_00,pOVar1,0,(Node **)0x0);
  return;
}

