
/* v8::internal::compiler::SimplifiedOperatorBuilder::LoadDataViewElement(v8::internal::ExternalArrayType
   const&) */

Operator * __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::LoadDataViewElement
          (SimplifiedOperatorBuilder *this,ExternalArrayType *param_1)

{
  undefined4 uVar1;
  Zone *this_00;
  Operator *pOVar2;
  
  this_00 = *(Zone **)(this + 8);
  pOVar2 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar2) < 0x38) {
    pOVar2 = (Operator *)Zone::NewExpand(this_00,0x38);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar2 + 0x38;
  }
  uVar1 = *(undefined4 *)param_1;
  Operator::Operator(pOVar2,0xef,0x70,"LoadDataViewElement",4,1,1,1,1,0);
  *(undefined4 *)(pOVar2 + 0x2c) = uVar1;
  *(undefined ***)pOVar2 = &PTR__Operator_01cc3910;
  return pOVar2;
}

