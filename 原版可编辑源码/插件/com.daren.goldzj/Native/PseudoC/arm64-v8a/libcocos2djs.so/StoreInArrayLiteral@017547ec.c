
/* v8::internal::compiler::JSOperatorBuilder::StoreInArrayLiteral(v8::internal::compiler::FeedbackSource
   const&) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::StoreInArrayLiteral
          (JSOperatorBuilder *this,FeedbackSource *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Zone *this_00;
  Operator *pOVar3;
  
  this_00 = *(Zone **)(this + 8);
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  pOVar3 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar3) < 0x48) {
    pOVar3 = (Operator *)Zone::NewExpand(this_00,0x48);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar3 + 0x48;
  }
  Operator::Operator(pOVar3,0x2f1,0x20,"JSStoreInArrayLiteral",3,1,1,0,1,1);
  *(undefined8 *)(pOVar3 + 0x30) = uVar1;
  *(undefined8 *)(pOVar3 + 0x38) = uVar2;
  *(undefined ***)pOVar3 = &PTR__Operator_01ccf998;
  return pOVar3;
}

