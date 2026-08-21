
/* v8::internal::compiler::SimplifiedOperatorBuilder::LoadFromObject(v8::internal::compiler::ObjectAccess
   const&) */

Operator * __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::LoadFromObject
          (SimplifiedOperatorBuilder *this,ObjectAccess *param_1)

{
  ObjectAccess OVar1;
  undefined2 uVar2;
  Zone *this_00;
  Operator *pOVar3;
  
  this_00 = *(Zone **)(this + 8);
  pOVar3 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar3) < 0x38) {
    pOVar3 = (Operator *)Zone::NewExpand(this_00,0x38);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar3 + 0x38;
  }
  uVar2 = *(undefined2 *)param_1;
  OVar1 = param_1[2];
  Operator::Operator(pOVar3,0xee,0x70,"LoadFromObject",2,1,1,1,1,0);
  *(ObjectAccess *)(pOVar3 + 0x2e) = OVar1;
  *(undefined2 *)(pOVar3 + 0x2c) = uVar2;
  *(undefined ***)pOVar3 = &PTR__Operator_01cc3950;
  return pOVar3;
}

