
/* v8::internal::compiler::CommonOperatorBuilder::EffectPhi(int) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::EffectPhi(CommonOperatorBuilder *this,int param_1)

{
  Zone *this_00;
  Operator *pOVar1;
  
  switch(param_1) {
  case 1:
    pOVar1 = (Operator *)(*(long *)this + 0x720);
    break;
  case 2:
    pOVar1 = (Operator *)(*(long *)this + 0x750);
    break;
  case 3:
    pOVar1 = (Operator *)(*(long *)this + 0x780);
    break;
  case 4:
    pOVar1 = (Operator *)(*(long *)this + 0x7b0);
    break;
  case 5:
    pOVar1 = (Operator *)(*(long *)this + 0x7e0);
    break;
  case 6:
    pOVar1 = (Operator *)(*(long *)this + 0x810);
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
    Operator::Operator(pOVar1,0x24,0x78,"EffectPhi",0,(long)param_1,1,0,1,0);
  }
  return pOVar1;
}

