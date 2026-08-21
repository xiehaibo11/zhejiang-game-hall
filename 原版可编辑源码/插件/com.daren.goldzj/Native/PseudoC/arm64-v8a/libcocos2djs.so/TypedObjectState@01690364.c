
/* v8::internal::compiler::CommonOperatorBuilder::TypedObjectState(unsigned int,
   v8::internal::ZoneVector<v8::internal::MachineType> const*) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::TypedObjectState
          (CommonOperatorBuilder *this,uint param_1,ZoneVector *param_2)

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
  Operator::Operator(pOVar1,0x30,0x7c,"TypedObjectState",
                     (*(long *)(param_2 + 8) - *(long *)param_2) * 0x80000000 >> 0x20,0,0,1,0,0);
  *(ulong *)(pOVar1 + 0x30) = (ulong)param_1;
  *(ZoneVector **)(pOVar1 + 0x38) = param_2;
  *(undefined ***)pOVar1 = &PTR__Operator_01cccba8;
  return pOVar1;
}

