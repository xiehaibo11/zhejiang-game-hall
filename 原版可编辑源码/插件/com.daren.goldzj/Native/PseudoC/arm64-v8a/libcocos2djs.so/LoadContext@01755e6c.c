
/* v8::internal::compiler::JSOperatorBuilder::LoadContext(unsigned long, unsigned long, bool) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::LoadContext
          (JSOperatorBuilder *this,ulong param_1,ulong param_2,bool param_3)

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
  Operator::Operator(pOVar1,0x2f6,0x30,"JSLoadContext",0,1,0,1,1,0);
  *(ulong *)(pOVar1 + 0x2c) = (ulong)(uint)((int)param_1 << 0x10) | param_2 << 0x20 | (ulong)param_3
  ;
  *(undefined ***)pOVar1 = &PTR__Operator_01ccfd18;
  return pOVar1;
}

