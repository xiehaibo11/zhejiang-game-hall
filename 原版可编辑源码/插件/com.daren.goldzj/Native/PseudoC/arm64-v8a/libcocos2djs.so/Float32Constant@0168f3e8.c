
/* v8::internal::compiler::CommonOperatorBuilder::Float32Constant(float) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::Float32Constant
          (CommonOperatorBuilder *this,float param_1)

{
  Zone *this_00;
  Operator *pOVar1;
  
  this_00 = *(Zone **)(this + 8);
  pOVar1 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x38) {
    pOVar1 = (Operator *)Zone::NewExpand(this_00,0x38);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar1 + 0x38;
  }
  Operator::Operator(pOVar1,0x19,0x7c,"Float32Constant",0,0,0,1,0,0);
  *(float *)(pOVar1 + 0x2c) = param_1;
  *(undefined ***)pOVar1 = &PTR__Operator_01ccc928;
  return pOVar1;
}

