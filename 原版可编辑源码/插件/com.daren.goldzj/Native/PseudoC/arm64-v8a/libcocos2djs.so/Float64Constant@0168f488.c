
/* v8::internal::compiler::CommonOperatorBuilder::Float64Constant(double) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::Float64Constant
          (CommonOperatorBuilder *this,double param_1)

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
  Operator::Operator(pOVar1,0x1a,0x7c,"Float64Constant",0,0,0,1,0,0);
  *(double *)(pOVar1 + 0x30) = param_1;
  *(undefined ***)pOVar1 = &PTR__Operator_01ccc968;
  return pOVar1;
}

