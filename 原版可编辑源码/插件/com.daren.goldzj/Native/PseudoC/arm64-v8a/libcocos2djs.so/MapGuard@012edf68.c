
/* v8::internal::compiler::SimplifiedOperatorBuilder::MapGuard(v8::internal::ZoneHandleSet<v8::internal::Map>)
    */

Operator * __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::MapGuard
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
  Operator::Operator(pOVar1,0x39,0x70,"MapGuard",1,1,1,0,1,0);
  *(undefined8 *)(pOVar1 + 0x30) = param_2;
  *(undefined ***)pOVar1 = &PTR__Operator_01cc3710;
  return pOVar1;
}

