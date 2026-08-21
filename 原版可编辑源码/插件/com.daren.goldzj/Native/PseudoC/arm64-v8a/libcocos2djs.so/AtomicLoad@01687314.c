
/* v8::internal::compiler::RawMachineAssembler::AtomicLoad(v8::internal::MachineType,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::AtomicLoad
          (RawMachineAssembler *this,ushort param_2,Node *param_3,undefined8 param_4)

{
  MachineOperatorBuilder *this_00;
  Operator *pOVar1;
  Node *local_40;
  undefined8 uStack_38;
  
  this_00 = (MachineOperatorBuilder *)(this + 0x20);
  if ((param_2 & 0xff) == 5) {
    if (this[0x30] == (RawMachineAssembler)0x5) {
      pOVar1 = (Operator *)MachineOperatorBuilder::Word64AtomicLoad(this_00,param_2);
    }
    else {
      pOVar1 = (Operator *)MachineOperatorBuilder::Word32AtomicPairLoad(this_00);
    }
  }
  else {
    pOVar1 = (Operator *)MachineOperatorBuilder::Word32AtomicLoad(this_00,param_2);
  }
  local_40 = param_3;
  uStack_38 = param_4;
  AddNode(this,pOVar1,2,&local_40);
  return;
}

