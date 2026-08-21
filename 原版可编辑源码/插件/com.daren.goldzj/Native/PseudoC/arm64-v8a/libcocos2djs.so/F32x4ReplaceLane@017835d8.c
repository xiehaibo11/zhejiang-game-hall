
/* v8::internal::compiler::MachineOperatorBuilder::F32x4ReplaceLane(int) */

Operator * __thiscall
v8::internal::compiler::MachineOperatorBuilder::F32x4ReplaceLane
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
  Operator::Operator(pOVar1,0x20f,0x7c,"Replace lane",2,0,0,1,0,0);
  *(int *)(pOVar1 + 0x2c) = param_1;
  *(undefined ***)pOVar1 = &PTR__Operator_01cc3650;
  return pOVar1;
}

