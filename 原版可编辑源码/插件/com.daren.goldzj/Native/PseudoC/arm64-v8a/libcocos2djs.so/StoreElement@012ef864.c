
/* v8::internal::compiler::SimplifiedOperatorBuilder::StoreElement(v8::internal::compiler::ElementAccess
   const&) */

Operator * __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::StoreElement
          (SimplifiedOperatorBuilder *this,ElementAccess *param_1)

{
  Zone *this_00;
  Operator *pOVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  this_00 = *(Zone **)(this + 8);
  pOVar1 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar1) < 0x50) {
    pOVar1 = (Operator *)Zone::NewExpand(this_00,0x50);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar1 + 0x50;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)param_1;
  Operator::Operator(pOVar1,0xf2,0x68,"StoreElement",3,1,1,0,1,0);
  *(undefined ***)pOVar1 = &PTR__Operator_01cc38d0;
  *(undefined8 *)(pOVar1 + 0x40) = uVar2;
  *(undefined8 *)(pOVar1 + 0x38) = uVar4;
  *(undefined8 *)(pOVar1 + 0x30) = uVar3;
  return pOVar1;
}

