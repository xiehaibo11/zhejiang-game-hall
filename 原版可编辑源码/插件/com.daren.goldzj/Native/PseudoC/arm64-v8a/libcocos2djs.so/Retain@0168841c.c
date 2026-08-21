
/* v8::internal::compiler::CodeAssembler::Retain(v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::CodeAssembler::Retain(CodeAssembler *this,Node *param_1)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  Node *local_28;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)CommonOperatorBuilder::Retain((CommonOperatorBuilder *)(this_00 + 0x48));
  local_28 = param_1;
  RawMachineAssembler::AddNode(this_00,pOVar1,1,&local_28);
  return;
}

