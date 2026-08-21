
/* v8::internal::compiler::MachineOperatorBuilder::Comment(char const*) */

Operator * __thiscall
v8::internal::compiler::MachineOperatorBuilder::Comment(MachineOperatorBuilder *this,char *param_1)

{
  Zone *this_00;
  Operator *pOVar1;
  
  this_00 = *(Zone **)this;
  pOVar1 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x40) {
    pOVar1 = (Operator *)Zone::NewExpand(this_00,0x40);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar1 + 0x40;
  }
  Operator::Operator(pOVar1,0x1a9,0x20,"Comment",0,1,1,0,1,0);
  *(char **)(pOVar1 + 0x30) = param_1;
  *(undefined ***)pOVar1 = &PTR__Operator_01cd9420;
  return pOVar1;
}

