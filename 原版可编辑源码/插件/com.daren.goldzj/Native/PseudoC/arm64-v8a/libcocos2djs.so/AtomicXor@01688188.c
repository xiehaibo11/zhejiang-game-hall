
/* v8::internal::compiler::RawMachineAssembler::AtomicXor(v8::internal::MachineType,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::AtomicXor
          (RawMachineAssembler *this,ushort param_2,Node *param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  MachineOperatorBuilder *this_00;
  Operator *pOVar1;
  int iVar2;
  Node *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  this_00 = (MachineOperatorBuilder *)(this + 0x20);
  if ((param_2 & 0xff) == 5) {
    if (this[0x30] != (RawMachineAssembler)0x5) {
      pOVar1 = (Operator *)MachineOperatorBuilder::Word32AtomicPairXor(this_00);
      iVar2 = 4;
      uStack_48 = param_6;
      goto LAB_01688214;
    }
    pOVar1 = (Operator *)MachineOperatorBuilder::Word64AtomicXor(this_00,param_2);
  }
  else {
    pOVar1 = (Operator *)MachineOperatorBuilder::Word32AtomicXor(this_00,param_2);
  }
  iVar2 = 3;
LAB_01688214:
  local_60 = param_3;
  uStack_58 = param_4;
  local_50 = param_5;
  AddNode(this,pOVar1,iVar2,&local_60);
  return;
}

