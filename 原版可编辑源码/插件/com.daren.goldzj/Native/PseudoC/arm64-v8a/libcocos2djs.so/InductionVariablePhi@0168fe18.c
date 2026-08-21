
/* v8::internal::compiler::CommonOperatorBuilder::InductionVariablePhi(int) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::InductionVariablePhi
          (CommonOperatorBuilder *this,int param_1)

{
  Zone *this_00;
  Operator *pOVar1;
  long lVar2;
  long lVar3;
  
  switch(param_1) {
  case 4:
    lVar2 = *(long *)this;
    lVar3 = 0x1648;
    break;
  case 5:
    lVar2 = *(long *)this;
    lVar3 = 0x1678;
    break;
  case 6:
    lVar2 = *(long *)this;
    lVar3 = 0x16a8;
    break;
  case 7:
    lVar2 = *(long *)this;
    lVar3 = 0x16d8;
    break;
  default:
    this_00 = *(Zone **)(this + 8);
    pOVar1 = *(Operator **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x30) {
      pOVar1 = (Operator *)Zone::NewExpand(this_00,0x30);
    }
    else {
      *(Operator **)(this_00 + 0x10) = pOVar1 + 0x30;
    }
    Operator::Operator(pOVar1,0x25,0x7c,"InductionVariablePhi",(long)param_1,0,1,1,0,0);
    return pOVar1;
  }
  return (Operator *)(lVar2 + lVar3);
}

