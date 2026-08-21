
/* v8::internal::compiler::JSOperatorBuilder::CallRuntime(v8::internal::Runtime::FunctionId) */

Operator * __thiscall
v8::internal::compiler::JSOperatorBuilder::CallRuntime(JSOperatorBuilder *this,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  Zone *this_00;
  Operator *pOVar4;
  
  puVar3 = (uint *)Runtime::FunctionForId(param_2);
  this_00 = *(Zone **)(this + 8);
  uVar2 = puVar3[6];
  uVar1 = *puVar3;
  pOVar4 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar4) < 0x48) {
    pOVar4 = (Operator *)Zone::NewExpand(this_00,0x48);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar4 + 0x48;
  }
  Operator::Operator(pOVar4,0x307,0,"JSCallRuntime",(long)(char)uVar2,1,1,
                     (long)*(char *)((long)puVar3 + 0x19),1,2);
  *(ulong *)(pOVar4 + 0x30) = (ulong)uVar1;
  *(long *)(pOVar4 + 0x38) = (long)(char)uVar2;
  *(undefined ***)pOVar4 = &PTR__Operator_01ccfa58;
  return pOVar4;
}

