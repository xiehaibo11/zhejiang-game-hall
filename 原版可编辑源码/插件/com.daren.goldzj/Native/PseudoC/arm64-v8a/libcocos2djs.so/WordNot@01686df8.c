
/* v8::internal::compiler::RawMachineAssembler::WordNot(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::WordNot(RawMachineAssembler *this,Node *param_1)

{
  Operator *pOVar1;
  undefined8 uVar2;
  Node *local_40;
  undefined8 uStack_38;
  
  if (this[0x30] == (RawMachineAssembler)0x4) {
    pOVar1 = (Operator *)
             CommonOperatorBuilder::Int32Constant((CommonOperatorBuilder *)(this + 0x48),-1);
    uVar2 = AddNode(this,pOVar1,0,(Node **)0x0);
    pOVar1 = (Operator *)MachineOperatorBuilder::Word32Xor((MachineOperatorBuilder *)(this + 0x20));
  }
  else {
    pOVar1 = (Operator *)
             CommonOperatorBuilder::Int64Constant((CommonOperatorBuilder *)(this + 0x48),-1);
    uVar2 = AddNode(this,pOVar1,0,(Node **)0x0);
    pOVar1 = (Operator *)MachineOperatorBuilder::Word64Xor((MachineOperatorBuilder *)(this + 0x20));
  }
  local_40 = param_1;
  uStack_38 = uVar2;
  AddNode(this,pOVar1,2,&local_40);
  return;
}

