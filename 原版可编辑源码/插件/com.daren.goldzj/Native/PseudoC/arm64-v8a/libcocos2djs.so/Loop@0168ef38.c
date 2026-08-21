
/* v8::internal::compiler::CommonOperatorBuilder::Loop(int) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::Loop(CommonOperatorBuilder *this,int param_1)

{
  Zone *this_00;
  Operator *pOVar1;
  
  if (param_1 == 2) {
    pOVar1 = (Operator *)(*(long *)this + 0x8d0);
  }
  else if (param_1 == 1) {
    pOVar1 = (Operator *)(*(long *)this + 0x8a0);
  }
  else {
    this_00 = *(Zone **)(this + 8);
    pOVar1 = *(Operator **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x30) {
      pOVar1 = (Operator *)Zone::NewExpand(this_00,0x30);
    }
    else {
      *(Operator **)(this_00 + 0x10) = pOVar1 + 0x30;
    }
    Operator::Operator(pOVar1,1,0x78,"Loop",0,0,(long)param_1,0,0,1);
  }
  return pOVar1;
}

