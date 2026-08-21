
/* v8::internal::compiler::IsSafetyCheckOf(v8::internal::compiler::Operator const*) */

Operator v8::internal::compiler::IsSafetyCheckOf(Operator *param_1)

{
  long lVar1;
  
  lVar1 = 0x2d;
  if (*(short *)(param_1 + 0x10) != 2) {
    lVar1 = 0x48;
  }
  return param_1[lVar1];
}

