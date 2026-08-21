
/* v8::internal::compiler::JSOperatorBuilder::CallRuntime(v8::internal::Runtime::Function const*,
   unsigned long) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::CallRuntime
          (JSOperatorBuilder *this,Function *param_1,ulong param_2)

{
  uint uVar1;
  Zone *this_00;
  Operator *pOVar2;
  
  this_00 = *(Zone **)(this + 8);
  uVar1 = *(uint *)param_1;
  pOVar2 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar2) < 0x48) {
    pOVar2 = (Operator *)Zone::NewExpand(this_00,0x48);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar2 + 0x48;
  }
  Operator::Operator(pOVar2,0x307,0,"JSCallRuntime",param_2,1,1,(long)(char)param_1[0x19],1,2);
  *(ulong *)(pOVar2 + 0x30) = (ulong)uVar1;
  *(ulong *)(pOVar2 + 0x38) = param_2;
  *(undefined ***)pOVar2 = &PTR__Operator_01ccfa58;
  return pOVar2;
}

