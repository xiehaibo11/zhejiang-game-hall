
/* v8::internal::compiler::CodeAssembler::ExternalConstant(v8::internal::ExternalReference) */

void __thiscall
v8::internal::compiler::CodeAssembler::ExternalConstant(CodeAssembler *this,undefined8 param_2)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  undefined8 local_8;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  local_8 = param_2;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::ExternalConstant
                     ((CommonOperatorBuilder *)(this_00 + 0x48),(ExternalReference *)&local_8);
  RawMachineAssembler::AddNode(this_00,pOVar1,0,(Node **)0x0);
  return;
}

