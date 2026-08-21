
/* v8::internal::compiler::CodeAssembler::Uint32GreaterThan(v8::internal::SloppyTNode<v8::internal::Word32T>,
   v8::internal::SloppyTNode<v8::internal::Word32T>) */

void __thiscall
v8::internal::compiler::CodeAssembler::Uint32GreaterThan
          (CodeAssembler *this,undefined8 param_2,Node *param_3)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  Node *local_40;
  undefined8 uStack_38;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Uint32LessThan((MachineOperatorBuilder *)(this_00 + 0x20));
  local_40 = param_3;
  uStack_38 = param_2;
  RawMachineAssembler::AddNode(this_00,pOVar1,2,&local_40);
  return;
}

