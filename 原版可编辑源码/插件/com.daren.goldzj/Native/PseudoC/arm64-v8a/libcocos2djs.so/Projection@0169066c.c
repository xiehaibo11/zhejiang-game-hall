
/* v8::internal::compiler::CommonOperatorBuilder::Projection(unsigned long) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::Projection(CommonOperatorBuilder *this,ulong param_1)

{
  Zone *this_00;
  Operator *pOVar1;
  
  if (param_1 == 1) {
    pOVar1 = (Operator *)(*(long *)this + 0x1940);
  }
  else if (param_1 == 0) {
    pOVar1 = (Operator *)(*(long *)this + 0x1900);
  }
  else {
    this_00 = *(Zone **)(this + 8);
    pOVar1 = *(Operator **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x40) {
      pOVar1 = (Operator *)Zone::NewExpand(this_00,0x40);
    }
    else {
      *(Operator **)(this_00 + 0x10) = pOVar1 + 0x40;
    }
    Operator::Operator(pOVar1,0x37,0x7c,"Projection",1,0,1,1,0,0);
    *(ulong *)(pOVar1 + 0x30) = param_1;
    *(undefined ***)pOVar1 = &PTR__Operator_01ccc368;
  }
  return pOVar1;
}

