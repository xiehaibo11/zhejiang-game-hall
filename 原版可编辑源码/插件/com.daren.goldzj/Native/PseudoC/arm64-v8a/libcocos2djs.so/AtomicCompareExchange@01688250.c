
/* v8::internal::compiler::RawMachineAssembler::AtomicCompareExchange(v8::internal::MachineType,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::AtomicCompareExchange
          (RawMachineAssembler *this,ushort param_2,Node *param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  MachineOperatorBuilder *this_00;
  Operator *pOVar1;
  int iVar2;
  Node *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  this_00 = (MachineOperatorBuilder *)(this + 0x20);
  if ((param_2 & 0xff) == 5) {
    if (this[0x30] != (RawMachineAssembler)0x5) {
      pOVar1 = (Operator *)MachineOperatorBuilder::Word32AtomicPairCompareExchange(this_00);
      iVar2 = 6;
      uStack_68 = param_6;
      local_60 = param_7;
      uStack_58 = param_8;
      goto LAB_016882ec;
    }
    pOVar1 = (Operator *)MachineOperatorBuilder::Word64AtomicCompareExchange(this_00,param_2);
  }
  else {
    pOVar1 = (Operator *)MachineOperatorBuilder::Word32AtomicCompareExchange(this_00,param_2);
  }
  iVar2 = 4;
  uStack_68 = param_7;
LAB_016882ec:
  local_80 = param_3;
  uStack_78 = param_4;
  local_70 = param_5;
  AddNode(this,pOVar1,iVar2,&local_80);
  return;
}

