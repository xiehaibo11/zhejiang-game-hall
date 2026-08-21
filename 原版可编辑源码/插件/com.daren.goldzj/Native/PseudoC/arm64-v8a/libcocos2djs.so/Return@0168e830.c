
/* v8::internal::compiler::CommonOperatorBuilder::Return(int) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::Return(CommonOperatorBuilder *this,int param_1)

{
  Zone *this_00;
  Operator *pOVar1;
  
  switch(param_1) {
  case 1:
    pOVar1 = (Operator *)(*(long *)this + 0x4b0);
    break;
  case 2:
    pOVar1 = (Operator *)(*(long *)this + 0x4e0);
    break;
  case 3:
    pOVar1 = (Operator *)(*(long *)this + 0x510);
    break;
  case 4:
    pOVar1 = (Operator *)(*(long *)this + 0x540);
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
    Operator::Operator(pOVar1,0x10,0x20,"Return",(long)(param_1 + 1),1,1,0,0,1);
  }
  return pOVar1;
}

