
/* v8::internal::interpreter::BytecodeRegisterOptimizer::GetMaterializedEquivalent(v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*)
    */

RegisterInfo * __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::GetMaterializedEquivalent
          (BytecodeRegisterOptimizer *this,RegisterInfo *param_1)

{
  RegisterInfo *pRVar1;
  
  pRVar1 = param_1;
  if (param_1[8] != (RegisterInfo)0x0) {
    return param_1;
  }
  do {
    pRVar1 = *(RegisterInfo **)(pRVar1 + 0x10);
    if (pRVar1 == param_1) {
      return (RegisterInfo *)0x0;
    }
  } while (pRVar1[8] == (RegisterInfo)0x0);
  return pRVar1;
}

