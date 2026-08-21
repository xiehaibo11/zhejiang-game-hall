
/* v8::internal::compiler::CodeAssembler::BooleanConstant(bool) */

void __thiscall
v8::internal::compiler::CodeAssembler::BooleanConstant(CodeAssembler *this,bool param_1)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  undefined8 local_8;
  
  local_8 = Factory::ToBoolean(*(Factory **)**(undefined8 **)this,param_1);
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::HeapConstant
                     ((CommonOperatorBuilder *)(this_00 + 0x48),(Handle *)&local_8);
  RawMachineAssembler::AddNode(this_00,pOVar1,0,(Node **)0x0);
  return;
}

