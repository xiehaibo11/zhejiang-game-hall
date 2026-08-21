
/* v8::internal::compiler::CommonOperatorBuilder::TypeGuard(v8::internal::compiler::Type) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::TypeGuard
          (CommonOperatorBuilder *this,undefined8 param_2)

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
  Operator::Operator(pOVar1,0x3a,0x7c,"TypeGuard",1,1,1,1,1,0);
  *(undefined8 *)(pOVar1 + 0x30) = param_2;
  *(undefined ***)pOVar1 = &PTR__Operator_01cc3690;
  return pOVar1;
}

