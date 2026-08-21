
/* v8::internal::compiler::JSOperatorBuilder::CreateBoundFunction(unsigned long,
   v8::internal::Handle<v8::internal::Map>) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::CreateBoundFunction
          (JSOperatorBuilder *this,undefined8 param_1,undefined8 param_3)

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
  Operator::Operator(pOVar1,0x2d9,0x70,"JSCreateBoundFunction",(long)((int)param_1 + 2),1,1,1,1,0);
  *(undefined8 *)(pOVar1 + 0x30) = param_1;
  *(undefined8 *)(pOVar1 + 0x38) = param_3;
  *(undefined ***)pOVar1 = &PTR__Operator_01ccfe18;
  return pOVar1;
}

