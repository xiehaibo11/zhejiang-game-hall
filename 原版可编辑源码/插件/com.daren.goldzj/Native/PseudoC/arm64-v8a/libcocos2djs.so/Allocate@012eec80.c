
/* v8::internal::compiler::SimplifiedOperatorBuilder::Allocate(v8::internal::compiler::Type,
   v8::internal::AllocationType) */

Operator * __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::Allocate
          (SimplifiedOperatorBuilder *this,undefined8 param_2,ulong param_3)

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
  Operator::Operator(pOVar1,0xe7,0x70,"Allocate",1,1,1,1,1,0);
  *(undefined8 *)(pOVar1 + 0x30) = param_2;
  *(ulong *)(pOVar1 + 0x38) = param_3 & 0xff;
  *(undefined ***)pOVar1 = &PTR__Operator_01cc3850;
  return pOVar1;
}

