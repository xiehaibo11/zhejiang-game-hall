
/* v8::internal::compiler::CommonOperatorBuilder::DelayedStringConstant(v8::internal::StringConstantBase
   const*) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::DelayedStringConstant
          (CommonOperatorBuilder *this,StringConstantBase *param_1)

{
  Zone *this_00;
  Operator *pOVar1;
  
  this_00 = *(Zone **)(this + 8);
  pOVar1 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x40) {
    pOVar1 = (Operator *)Zone::NewExpand(this_00,0x40);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar1 + 0x40;
  }
  Operator::Operator(pOVar1,0x119,0x7c,"DelayedStringConstant",0,0,0,1,0,0);
  *(StringConstantBase **)(pOVar1 + 0x30) = param_1;
  *(undefined ***)pOVar1 = &PTR__Operator_01ccc828;
  return pOVar1;
}

