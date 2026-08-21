
/* v8::internal::compiler::CommonOperatorBuilder::RelocatableInt32Constant(int,
   v8::internal::RelocInfo::Mode) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::RelocatableInt32Constant
          (CommonOperatorBuilder *this,int param_1,ulong param_3)

{
  Zone *this_00;
  Operator *pOVar1;
  
  this_00 = *(Zone **)(this + 8);
  pOVar1 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x48) {
    pOVar1 = (Operator *)Zone::NewExpand(this_00,0x48);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar1 + 0x48;
  }
  Operator::Operator(pOVar1,0x20,0x7c,"RelocatableInt32Constant",0,0,0,1,0,0);
  *(long *)(pOVar1 + 0x30) = (long)param_1;
  *(ulong *)(pOVar1 + 0x38) = param_3 & 0xff;
  *(undefined ***)pOVar1 = &PTR__Operator_01ccca28;
  return pOVar1;
}

