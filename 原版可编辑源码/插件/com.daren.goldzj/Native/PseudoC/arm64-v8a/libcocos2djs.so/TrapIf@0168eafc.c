
/* v8::internal::compiler::CommonOperatorBuilder::TrapIf(v8::internal::compiler::TrapId) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::TrapIf(CommonOperatorBuilder *this,int param_2)

{
  Zone *this_00;
  Operator *pOVar1;
  
  if (param_2 == 6) {
    pOVar1 = (Operator *)(*(long *)this + 0x12a0);
  }
  else if (param_2 == 4) {
    pOVar1 = (Operator *)(*(long *)this + 0x1268);
  }
  else {
    this_00 = *(Zone **)(this + 8);
    pOVar1 = *(Operator **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x38) {
      pOVar1 = (Operator *)Zone::NewExpand(this_00,0x38);
    }
    else {
      *(Operator **)(this_00 + 0x10) = pOVar1 + 0x38;
    }
    Operator::Operator(pOVar1,0xe,0x38,"TrapIf",1,1,1,0,0,1);
    *(int *)(pOVar1 + 0x2c) = param_2;
    *(undefined ***)pOVar1 = &PTR__Operator_01ccbb48;
  }
  return pOVar1;
}

