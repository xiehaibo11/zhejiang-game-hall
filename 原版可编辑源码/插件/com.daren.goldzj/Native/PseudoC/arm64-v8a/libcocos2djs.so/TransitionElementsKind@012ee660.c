
/* v8::internal::compiler::SimplifiedOperatorBuilder::TransitionElementsKind(v8::internal::compiler::ElementsTransition)
    */

Operator * __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::TransitionElementsKind
          (SimplifiedOperatorBuilder *this,undefined8 *param_2)

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
  uVar2 = param_2[2];
  uVar4 = param_2[1];
  uVar3 = *param_2;
  Operator::Operator(pOVar1,0x11c,0x20,"TransitionElementsKind",1,1,1,0,1,0);
  *(undefined ***)pOVar1 = &PTR__Operator_01cc3790;
  *(undefined8 *)(pOVar1 + 0x40) = uVar2;
  *(undefined8 *)(pOVar1 + 0x38) = uVar4;
  *(undefined8 *)(pOVar1 + 0x30) = uVar3;
  return pOVar1;
}

