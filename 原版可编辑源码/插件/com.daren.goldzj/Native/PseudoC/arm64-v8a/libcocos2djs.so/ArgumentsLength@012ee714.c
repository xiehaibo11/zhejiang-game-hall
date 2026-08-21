
/* v8::internal::compiler::SimplifiedOperatorBuilder::ArgumentsLength(int, bool) */

Operator * __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::ArgumentsLength
          (SimplifiedOperatorBuilder *this,int param_1,bool param_2)

{
  ulong uVar1;
  Zone *this_00;
  Operator *pOVar2;
  
  this_00 = *(Zone **)(this + 8);
  pOVar2 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar2) < 0x38) {
    pOVar2 = (Operator *)Zone::NewExpand(this_00,0x38);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar2 + 0x38;
  }
  uVar1 = 0x100000000;
  if (!param_2) {
    uVar1 = 0;
  }
  Operator::Operator(pOVar2,0x114,0x7c,"ArgumentsLength",1,0,0,1,0,0);
  *(undefined ***)pOVar2 = &PTR__Operator_01cc37d0;
  *(ulong *)(pOVar2 + 0x2c) = uVar1 | (uint)param_1;
  return pOVar2;
}

