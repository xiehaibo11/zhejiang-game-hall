
/* v8::internal::compiler::CommonOperatorBuilder::IfValue(int, int,
   v8::internal::compiler::BranchHint) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::IfValue
          (CommonOperatorBuilder *this,uint param_1,long param_3,uint param_4)

{
  Zone *this_00;
  Operator *pOVar1;
  
  this_00 = *(Zone **)(this + 8);
  pOVar1 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x40) {
    pOVar1 = (Operator *)Zone::NewExpand(this_00,0x40);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar1 + 0x40;
  }
  Operator::Operator(pOVar1,8,0x78,"IfValue",0,0,1,0,0,1);
  *(ulong *)(pOVar1 + 0x2c) = (ulong)param_1 | param_3 << 0x20;
  *(uint *)(pOVar1 + 0x34) = param_4 & 0xff;
  *(undefined ***)pOVar1 = &PTR__Operator_01ccc868;
  return pOVar1;
}

