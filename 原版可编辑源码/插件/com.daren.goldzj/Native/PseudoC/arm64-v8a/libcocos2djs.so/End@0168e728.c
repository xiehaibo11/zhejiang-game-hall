
/* v8::internal::compiler::CommonOperatorBuilder::End(unsigned long) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::End(CommonOperatorBuilder *this,ulong param_1)

{
  Zone *this_00;
  Operator *pOVar1;
  
  switch(param_1) {
  case 1:
    pOVar1 = (Operator *)(*(long *)this + 0x330);
    break;
  case 2:
    pOVar1 = (Operator *)(*(long *)this + 0x360);
    break;
  case 3:
    pOVar1 = (Operator *)(*(long *)this + 0x390);
    break;
  case 4:
    pOVar1 = (Operator *)(*(long *)this + 0x3c0);
    break;
  case 5:
    pOVar1 = (Operator *)(*(long *)this + 0x3f0);
    break;
  case 6:
    pOVar1 = (Operator *)(*(long *)this + 0x420);
    break;
  case 7:
    pOVar1 = (Operator *)(*(long *)this + 0x450);
    break;
  case 8:
    pOVar1 = (Operator *)(*(long *)this + 0x480);
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
    Operator::Operator(pOVar1,0x16,0x78,"End",0,0,param_1,0,0,0);
  }
  return pOVar1;
}

