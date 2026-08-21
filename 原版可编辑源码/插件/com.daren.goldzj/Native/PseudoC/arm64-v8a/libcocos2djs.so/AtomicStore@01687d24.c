
/* v8::internal::compiler::RawMachineAssembler::AtomicStore(v8::internal::MachineRepresentation,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::AtomicStore
          (RawMachineAssembler *this,char param_2,Node *param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  Operator *pOVar1;
  int iVar2;
  Node *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_2 == '\x05') {
    if (this[0x30] != (RawMachineAssembler)0x5) {
      pOVar1 = (Operator *)
               MachineOperatorBuilder::Word32AtomicPairStore
                         ((MachineOperatorBuilder *)(this + 0x20));
      iVar2 = 4;
      uStack_48 = param_6;
      goto LAB_01687dac;
    }
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Word64AtomicStore((MachineOperatorBuilder *)(this + 0x20),5);
  }
  else {
    pOVar1 = (Operator *)MachineOperatorBuilder::Word32AtomicStore();
  }
  iVar2 = 3;
LAB_01687dac:
  local_60 = param_3;
  uStack_58 = param_4;
  local_50 = param_5;
  AddNode(this,pOVar1,iVar2,&local_60);
  return;
}

