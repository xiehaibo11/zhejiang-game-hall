
/* v8::internal::compiler::JSOperatorBuilder::CreateBlockContext(v8::internal::Handle<v8::internal::ScopeInfo>
   const&) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::CreateBlockContext
          (JSOperatorBuilder *this,Handle *param_1)

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
  Operator::Operator(pOVar1,0x2fb,0,"JSCreateBlockContext",0,1,1,1,1,2);
  *(undefined8 *)(pOVar1 + 0x30) = uVar2;
  *(undefined ***)pOVar1 = &PTR__Operator_01ccffd8;
  return pOVar1;
}

