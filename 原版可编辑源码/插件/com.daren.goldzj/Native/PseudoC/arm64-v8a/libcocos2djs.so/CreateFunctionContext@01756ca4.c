
/* v8::internal::compiler::JSOperatorBuilder::CreateFunctionContext(v8::internal::Handle<v8::internal::ScopeInfo>,
   int, v8::internal::ScopeType) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::CreateFunctionContext
          (JSOperatorBuilder *this,undefined8 param_2,ulong param_3,uint param_4)

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
  Operator::Operator(pOVar1,0x2f8,0,"JSCreateFunctionContext",0,1,1,1,1,2);
  *(undefined8 *)(pOVar1 + 0x30) = param_2;
  *(ulong *)(pOVar1 + 0x38) = param_3 & 0xffffffff | (ulong)(param_4 & 0xff) << 0x20;
  *(undefined ***)pOVar1 = &PTR__Operator_01ccff98;
  return pOVar1;
}

