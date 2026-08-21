
/* v8::internal::compiler::CommonOperatorBuilder::Phi(v8::internal::MachineRepresentation, int) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::Phi
          (CommonOperatorBuilder *this,Operator param_2,int param_3)

{
  Zone *this_00;
  Operator *pOVar1;
  
  if ((param_2 == (Operator)0x8) && (param_3 == 1)) {
    pOVar1 = (Operator *)(*(long *)this + 0x1498);
  }
  else if ((param_2 == (Operator)0x8) && (param_3 == 2)) {
    pOVar1 = (Operator *)(*(long *)this + 0x14c8);
  }
  else if ((param_2 == (Operator)0x8) && (param_3 == 3)) {
    pOVar1 = (Operator *)(*(long *)this + 0x14f8);
  }
  else if ((param_2 == (Operator)0x8) && (param_3 == 4)) {
    pOVar1 = (Operator *)(*(long *)this + 0x1528);
  }
  else if ((param_2 == (Operator)0x8) && (param_3 == 5)) {
    pOVar1 = (Operator *)(*(long *)this + 0x1558);
  }
  else if ((param_2 == (Operator)0x8) && (param_3 == 6)) {
    pOVar1 = (Operator *)(*(long *)this + 0x1588);
  }
  else if ((param_2 == (Operator)0x1) && (param_3 == 2)) {
    pOVar1 = (Operator *)(*(long *)this + 0x15b8);
  }
  else if ((param_2 == (Operator)0xc) && (param_3 == 2)) {
    pOVar1 = (Operator *)(*(long *)this + 0x15e8);
  }
  else if ((param_2 == (Operator)0x4) && (param_3 == 2)) {
    pOVar1 = (Operator *)(*(long *)this + 0x1618);
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
    Operator::Operator(pOVar1,0x23,0x7c,"Phi",(long)param_3,0,1,1,0,0);
    pOVar1[0x2c] = param_2;
    *(undefined ***)pOVar1 = &PTR__Operator_01ccbe08;
  }
  return pOVar1;
}

