
/* v8::internal::compiler::CodeAssembler::Word32BinaryNot(v8::internal::SloppyTNode<v8::internal::Word32T>)
    */

void __thiscall
v8::internal::compiler::CodeAssembler::Word32BinaryNot(CodeAssembler *this,Node *param_2)

{
  Operator *pOVar1;
  undefined8 uVar2;
  RawMachineAssembler *this_00;
  Node *local_40;
  undefined8 uStack_38;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Int32Constant((CommonOperatorBuilder *)(this_00 + 0x48),0);
  uVar2 = RawMachineAssembler::AddNode(this_00,pOVar1,0,(Node **)0x0);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32Equal((MachineOperatorBuilder *)(this_00 + 0x20));
  local_40 = param_2;
  uStack_38 = uVar2;
  RawMachineAssembler::AddNode(this_00,pOVar1,2,&local_40);
  return;
}

