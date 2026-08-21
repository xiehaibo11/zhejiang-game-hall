
/* v8::internal::compiler::SimplifiedOperatorBuilder::CheckedUint32Bounds(v8::internal::compiler::FeedbackSource
   const&, v8::internal::compiler::CheckBoundsParameters::Mode) */

Operator * __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::CheckedUint32Bounds
          (SimplifiedOperatorBuilder *this,long *param_1,int param_3)

{
  Zone *this_00;
  Operator *pOVar1;
  long lVar2;
  long lVar3;
  
  if ((*param_1 == 0) || ((int)param_1[1] == -1)) {
    if (param_3 == 0) {
      lVar2 = *(long *)this;
      lVar3 = 0x1fe8;
    }
    else {
      if (param_3 != 1) goto LAB_012ed0e8;
      lVar2 = *(long *)this;
      lVar3 = 0x1f98;
    }
    pOVar1 = (Operator *)(lVar2 + lVar3);
  }
  else {
LAB_012ed0e8:
    this_00 = *(Zone **)(this + 8);
    pOVar1 = *(Operator **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x50) {
      pOVar1 = (Operator *)Zone::NewExpand(this_00,0x50);
    }
    else {
      *(Operator **)(this_00 + 0x10) = pOVar1 + 0x50;
    }
    lVar2 = *param_1;
    lVar3 = param_1[1];
    Operator::Operator(pOVar1,0x5f,0x38,"CheckedUint32Bounds",2,1,1,1,1,0);
    *(long *)(pOVar1 + 0x30) = lVar2;
    *(long *)(pOVar1 + 0x38) = lVar3;
    *(int *)(pOVar1 + 0x40) = param_3;
    *(undefined ***)pOVar1 = &PTR__Operator_01cc3610;
  }
  return pOVar1;
}

