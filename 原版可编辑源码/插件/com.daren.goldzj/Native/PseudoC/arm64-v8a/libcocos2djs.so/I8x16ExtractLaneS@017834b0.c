
/* v8::internal::compiler::MachineOperatorBuilder::I8x16ExtractLaneS(int) */

Operator * __thiscall
v8::internal::compiler::MachineOperatorBuilder::I8x16ExtractLaneS
          (MachineOperatorBuilder *this,int param_1)

{
  Zone *this_00;
  Operator *pOVar1;
  
  this_00 = *(Zone **)this;
  pOVar1 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x38) {
    pOVar1 = (Operator *)Zone::NewExpand(this_00,0x38);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar1 + 0x38;
  }
  Operator::Operator(pOVar1,0x281,0x7c,"Extract lane",1,0,0,1,0,0);
  *(int *)(pOVar1 + 0x2c) = param_1;
  *(undefined ***)pOVar1 = &PTR__Operator_01cc3650;
  return pOVar1;
}

