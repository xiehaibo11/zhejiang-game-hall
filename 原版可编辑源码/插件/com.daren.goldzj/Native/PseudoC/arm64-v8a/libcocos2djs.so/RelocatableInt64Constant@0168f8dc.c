
/* v8::internal::compiler::CommonOperatorBuilder::RelocatableInt64Constant(long,
   v8::internal::RelocInfo::Mode) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::RelocatableInt64Constant
          (CommonOperatorBuilder *this,undefined8 param_1,ulong param_3)

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
  Operator::Operator(pOVar1,0x21,0x7c,"RelocatableInt64Constant",0,0,0,1,0,0);
  *(undefined8 *)(pOVar1 + 0x30) = param_1;
  *(ulong *)(pOVar1 + 0x38) = param_3 & 0xff | 0x100000000;
  *(undefined ***)pOVar1 = &PTR__Operator_01ccca28;
  return pOVar1;
}

