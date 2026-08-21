
/* v8::internal::compiler::JSOperatorBuilder::CallRuntime(v8::internal::Runtime::FunctionId,
   unsigned long) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::CallRuntime
          (JSOperatorBuilder *this,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  uint *puVar2;
  Operator *pOVar3;
  Zone *this_00;
  
  puVar2 = (uint *)Runtime::FunctionForId(param_2);
  this_00 = *(Zone **)(this + 8);
  uVar1 = *puVar2;
  pOVar3 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar3) < 0x48) {
    pOVar3 = (Operator *)Zone::NewExpand(this_00,0x48);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar3 + 0x48;
  }
  Operator::Operator(pOVar3,0x307,0,"JSCallRuntime",param_3,1,1,(long)*(char *)((long)puVar2 + 0x19)
                     ,1,2);
  *(ulong *)(pOVar3 + 0x30) = (ulong)uVar1;
  *(undefined8 *)(pOVar3 + 0x38) = param_3;
  *(undefined ***)pOVar3 = &PTR__Operator_01ccfa58;
  return pOVar3;
}

