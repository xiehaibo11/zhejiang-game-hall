
/* v8::internal::compiler::CommonOperatorBuilder::ExternalConstant(v8::internal::ExternalReference
   const&) */

Operator * __thiscall
v8::internal::compiler::CommonOperatorBuilder::ExternalConstant
          (CommonOperatorBuilder *this,ExternalReference *param_1)

{
  Zone *this_00;
  Operator *pOVar1;
  undefined8 uVar2;
  
  this_00 = *(Zone **)(this + 8);
  pOVar1 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x40) {
    pOVar1 = (Operator *)Zone::NewExpand(this_00,0x40);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar1 + 0x40;
  }
  uVar2 = *(undefined8 *)param_1;
  Operator::Operator(pOVar1,0x1b,0x7c,"ExternalConstant",0,0,0,1,0,0);
  *(undefined8 *)(pOVar1 + 0x30) = uVar2;
  *(undefined ***)pOVar1 = &PTR__Operator_01ccc9a8;
  return pOVar1;
}

