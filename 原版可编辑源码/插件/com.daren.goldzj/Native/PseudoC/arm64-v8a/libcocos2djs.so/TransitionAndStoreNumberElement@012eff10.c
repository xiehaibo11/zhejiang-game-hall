
/* v8::internal::compiler::SimplifiedOperatorBuilder::TransitionAndStoreNumberElement(v8::internal::Handle<v8::internal::Map>)
    */

Operator * __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::TransitionAndStoreNumberElement
          (SimplifiedOperatorBuilder *this,undefined8 param_2)

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
  Operator::Operator(pOVar1,0xf9,0x60,"TransitionAndStoreNumberElement",3,1,1,0,1,0);
  *(undefined ***)pOVar1 = &PTR__Operator_01cc39d0;
  *(undefined8 *)(pOVar1 + 0x30) = param_2;
  return pOVar1;
}

