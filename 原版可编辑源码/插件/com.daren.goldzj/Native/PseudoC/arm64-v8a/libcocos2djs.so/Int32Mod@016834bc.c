
/* v8::internal::compiler::CodeAssembler::Int32Mod(v8::internal::SloppyTNode<v8::internal::Int32T>,
   v8::internal::SloppyTNode<v8::internal::Int32T>) */

void __thiscall
v8::internal::compiler::CodeAssembler::Int32Mod
          (CodeAssembler *this,Node *param_2,undefined8 param_3)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  Node *local_40;
  undefined8 uStack_38;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)MachineOperatorBuilder::Int32Mod((MachineOperatorBuilder *)(this_00 + 0x20));
  local_40 = param_2;
  uStack_38 = param_3;
  RawMachineAssembler::AddNode(this_00,pOVar1,2,&local_40);
  return;
}

