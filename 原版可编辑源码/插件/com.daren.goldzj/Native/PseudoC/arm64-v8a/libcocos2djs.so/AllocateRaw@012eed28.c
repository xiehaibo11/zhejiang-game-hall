
/* v8::internal::compiler::SimplifiedOperatorBuilder::AllocateRaw(v8::internal::compiler::Type,
   v8::internal::AllocationType, v8::internal::AllowLargeObjects) */

Operator * __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::AllocateRaw
          (SimplifiedOperatorBuilder *this,undefined8 param_2,ulong param_3,long param_4)

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
  Operator::Operator(pOVar1,0xe8,0x70,"AllocateRaw",1,1,1,1,1,1);
  *(undefined8 *)(pOVar1 + 0x30) = param_2;
  *(ulong *)(pOVar1 + 0x38) = param_3 & 0xff | param_4 << 0x20;
  *(undefined ***)pOVar1 = &PTR__Operator_01cc3850;
  return pOVar1;
}

