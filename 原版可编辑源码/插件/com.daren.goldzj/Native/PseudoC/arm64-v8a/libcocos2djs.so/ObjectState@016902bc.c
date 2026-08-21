
/* v8::internal::compiler::CommonOperatorBuilder::ObjectState(unsigned int, int) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::ObjectState
          (CommonOperatorBuilder *this,uint param_1,int param_2)

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
  Operator::Operator(pOVar1,0x2e,0x7c,"ObjectState",(long)param_2,0,0,1,0,0);
  *(ulong *)(pOVar1 + 0x2c) = CONCAT44(param_2,param_1);
  *(undefined ***)pOVar1 = &PTR__Operator_01cccb68;
  return pOVar1;
}

