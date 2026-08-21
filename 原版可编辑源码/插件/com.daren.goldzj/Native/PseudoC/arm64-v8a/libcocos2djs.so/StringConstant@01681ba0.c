
/* v8::internal::compiler::CodeAssembler::StringConstant(char const*) */

void __thiscall
v8::internal::compiler::CodeAssembler::StringConstant(CodeAssembler *this,char *param_1)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  Factory *this_01;
  char *local_40;
  size_t sStack_38;
  
  this_01 = *(Factory **)**(undefined8 **)this;
  sStack_38 = strlen(param_1);
  local_40 = param_1;
  local_40 = (char *)Factory::InternalizeString<unsigned_char>(this_01,(Vector *)&local_40,false);
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::HeapConstant
                     ((CommonOperatorBuilder *)(this_00 + 0x48),(Handle *)&local_40);
  RawMachineAssembler::AddNode(this_00,pOVar1,0,(Node **)0x0);
  return;
}

