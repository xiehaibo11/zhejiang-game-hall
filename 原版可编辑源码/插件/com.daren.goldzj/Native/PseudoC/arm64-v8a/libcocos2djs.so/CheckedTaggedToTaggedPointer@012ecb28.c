
/* v8::internal::compiler::SimplifiedOperatorBuilder::CheckedTaggedToTaggedPointer(v8::internal::compiler::FeedbackSource
   const&) */

Operator * __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::CheckedTaggedToTaggedPointer
          (SimplifiedOperatorBuilder *this,FeedbackSource *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Zone *this_00;
  Operator *pOVar3;
  
  if ((*(long *)param_1 == 0) || (*(int *)(param_1 + 8) == -1)) {
    pOVar3 = (Operator *)(*(long *)this + 0x1da0);
  }
  else {
    this_00 = *(Zone **)(this + 8);
    pOVar3 = *(Operator **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar3) < 0x48) {
      pOVar3 = (Operator *)Zone::NewExpand(this_00,0x48);
    }
    else {
      *(Operator **)(this_00 + 0x10) = pOVar3 + 0x48;
    }
    uVar1 = *(undefined8 *)param_1;
    uVar2 = *(undefined8 *)(param_1 + 8);
    Operator::Operator(pOVar3,0x6e,0x38,"CheckedTaggedToTaggedPointer",1,1,1,1,1,0);
    *(undefined8 *)(pOVar3 + 0x30) = uVar1;
    *(undefined8 *)(pOVar3 + 0x38) = uVar2;
    *(undefined ***)pOVar3 = &PTR__Operator_01cc09c0;
  }
  return pOVar3;
}

