
/* v8::internal::compiler::JSOperatorBuilder::StackCheck(v8::internal::compiler::StackCheckKind) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::StackCheck(JSOperatorBuilder *this,undefined4 param_2)

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
  Operator::Operator(pOVar1,0x31a,0x10,"JSStackCheck",0,1,1,0,1,2);
  *(undefined4 *)(pOVar1 + 0x2c) = param_2;
  *(undefined ***)pOVar1 = &PTR__Operator_01ccff58;
  return pOVar1;
}

