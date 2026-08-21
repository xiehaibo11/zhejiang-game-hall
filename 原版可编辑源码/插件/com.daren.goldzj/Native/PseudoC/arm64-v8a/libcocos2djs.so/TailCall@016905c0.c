
/* v8::internal::compiler::CommonOperatorBuilder::TailCall(v8::internal::compiler::CallDescriptor
   const*) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::TailCall
          (CommonOperatorBuilder *this,CallDescriptor *param_1)

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
  Operator::Operator(pOVar1,0x11,(byte)param_1[0x28] | 0x20,"TailCall",
                     *(long *)(*(long *)(param_1 + 0x10) + 8) +
                     ((ulong)*(uint *)(param_1 + 0x48) & 1) + 1,1,1,0,0,1);
  *(CallDescriptor **)(pOVar1 + 0x30) = param_1;
  *(undefined ***)pOVar1 = &PTR__Operator_01ccc7e8;
  return pOVar1;
}

