
/* v8::internal::compiler::CommonOperatorBuilder::ArgumentsElementsState(v8::internal::CreateArgumentsType)
    */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::ArgumentsElementsState
          (CommonOperatorBuilder *this,Operator param_2)

{
  Zone *this_00;
  Operator *pOVar1;
  
  this_00 = *(Zone **)(this + 8);
  pOVar1 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x30) {
    pOVar1 = (Operator *)Zone::NewExpand(this_00,0x30);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar1 + 0x30;
  }
  Operator::Operator(pOVar1,0x2c,0x7c,"ArgumentsElementsState",0,0,0,1,0,0);
  pOVar1[0x2c] = param_2;
  *(undefined ***)pOVar1 = &PTR__Operator_01cccb28;
  return pOVar1;
}

