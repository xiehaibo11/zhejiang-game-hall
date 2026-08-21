
/* v8::internal::compiler::SimplifiedOperatorBuilder::TransitionAndStoreNonNumberElement(v8::internal::Handle<v8::internal::Map>,
   v8::internal::compiler::Type) */

Operator * __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::TransitionAndStoreNonNumberElement
          (SimplifiedOperatorBuilder *this,undefined8 param_2,undefined8 param_3)

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
  Operator::Operator(pOVar1,0xfa,0x60,"TransitionAndStoreNonNumberElement",3,1,1,0,1,0);
  *(undefined ***)pOVar1 = &PTR__Operator_01cc3a10;
  *(undefined8 *)(pOVar1 + 0x30) = param_2;
  *(undefined8 *)(pOVar1 + 0x38) = param_3;
  return pOVar1;
}

