
/* v8::internal::compiler::CodeAssembler::WordRor(v8::internal::SloppyTNode<v8::internal::WordT>,
   v8::internal::SloppyTNode<v8::internal::IntegralT>) */

void __thiscall
v8::internal::compiler::CodeAssembler::WordRor(CodeAssembler *this,Node *param_2,undefined8 param_3)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  Node *local_40;
  undefined8 uStack_38;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  if (this_00[0x30] == (RawMachineAssembler)0x4) {
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word32Ror((MachineOperatorBuilder *)(this_00 + 0x20));
  }
  else {
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word64Ror((MachineOperatorBuilder *)(this_00 + 0x20));
  }
  local_40 = param_2;
  uStack_38 = param_3;
  RawMachineAssembler::AddNode(this_00,pOVar1,2,&local_40);
  return;
}

