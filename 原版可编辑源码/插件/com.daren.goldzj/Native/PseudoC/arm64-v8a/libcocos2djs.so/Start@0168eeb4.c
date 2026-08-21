
/* v8::internal::compiler::CommonOperatorBuilder::Start(int) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::Start(CommonOperatorBuilder *this,int param_1)

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
  Operator::Operator(pOVar1,0,0x38,"Start",0,0,0,(long)param_1,1,1);
  return pOVar1;
}

