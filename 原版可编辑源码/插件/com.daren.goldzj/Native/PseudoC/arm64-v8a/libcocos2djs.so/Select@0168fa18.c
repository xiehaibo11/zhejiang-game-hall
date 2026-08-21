
/* v8::internal::compiler::CommonOperatorBuilder::Select(v8::internal::MachineRepresentation,
   v8::internal::compiler::BranchHint) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::Select
          (CommonOperatorBuilder *this,ushort param_2,short param_3)

{
  Zone *this_00;
  Operator *pOVar1;
  
  this_00 = *(Zone **)(this + 8);
  pOVar1 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x30) {
    pOVar1 = (Operator *)Zone::NewExpand(this_00,0x30);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar1 + 0x30;
  }
  Operator::Operator(pOVar1,0x22,0x7c,"Select",3,0,0,1,0,0);
  *(ushort *)(pOVar1 + 0x2c) = param_2 & 0xff | param_3 << 8;
  *(undefined ***)pOVar1 = &PTR__Operator_01cccaa8;
  return pOVar1;
}

