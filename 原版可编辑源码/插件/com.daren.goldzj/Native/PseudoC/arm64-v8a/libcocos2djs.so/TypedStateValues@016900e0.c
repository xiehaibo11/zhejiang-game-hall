
/* v8::internal::compiler::CommonOperatorBuilder::TypedStateValues(v8::internal::ZoneVector<v8::internal::MachineType>
   const*, v8::internal::compiler::SparseInputMask) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::TypedStateValues
          (CommonOperatorBuilder *this,long *param_1,ulong param_3)

{
  Zone *this_00;
  Operator *pOVar1;
  
  this_00 = *(Zone **)(this + 8);
  pOVar1 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x48) {
    pOVar1 = (Operator *)Zone::NewExpand(this_00,0x48);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar1 + 0x48;
  }
  Operator::Operator(pOVar1,0x2b,0x7c,"TypedStateValues",
                     (param_1[1] - *param_1) * 0x80000000 >> 0x20,0,0,1,0,0);
  *(long **)(pOVar1 + 0x30) = param_1;
  *(ulong *)(pOVar1 + 0x38) = param_3 & 0xffffffff;
  *(undefined ***)pOVar1 = &PTR__Operator_01cccae8;
  return pOVar1;
}

