
/* v8::internal::compiler::AllocationTypeOf(v8::internal::compiler::Operator const*) */

Operator v8::internal::compiler::AllocationTypeOf(Operator *param_1)

{
  Operator *pOVar1;
  
  pOVar1 = param_1 + 0x2c;
  if (1 < *(ushort *)(param_1 + 0x10) - 0x115) {
    pOVar1 = param_1 + 0x38;
  }
  return *pOVar1;
}

