
/* v8::internal::compiler::JSOperatorBuilder::CreateArrayIterator(v8::internal::IterationKind) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::CreateArrayIterator
          (JSOperatorBuilder *this,undefined4 param_2)

{
  Zone *this_00;
  Operator *pOVar1;
  
  this_00 = *(Zone **)(this + 8);
  pOVar1 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x38) {
    pOVar1 = (Operator *)Zone::NewExpand(this_00,0x38);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar1 + 0x38;
  }
  Operator::Operator(pOVar1,0x2d7,0x70,"JSCreateArrayIterator",1,1,1,1,1,0);
  *(undefined4 *)(pOVar1 + 0x2c) = param_2;
  *(undefined ***)pOVar1 = &PTR__Operator_01ccfd98;
  return pOVar1;
}

