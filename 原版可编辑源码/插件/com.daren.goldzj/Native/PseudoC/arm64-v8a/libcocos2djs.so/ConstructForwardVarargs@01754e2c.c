
/* v8::internal::compiler::JSOperatorBuilder::ConstructForwardVarargs(unsigned long, unsigned int)
    */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::ConstructForwardVarargs
          (JSOperatorBuilder *this,ulong param_1,uint param_2)

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
  Operator::Operator(pOVar1,0x300,0,"JSConstructForwardVarargs",param_1 & 0xffff,1,1,1,1,2);
  *(uint *)(pOVar1 + 0x2c) = (uint)param_1 | param_2 << 0x10;
  *(undefined ***)pOVar1 = &PTR__Operator_01ccfa98;
  return pOVar1;
}

