
/* v8::internal::wasm::AsmType::IsExactly(v8::internal::wasm::AsmType*,
   v8::internal::wasm::AsmType*) */

bool v8::internal::wasm::AsmType::IsExactly(AsmType *param_1,AsmType *param_2)

{
  if (param_1 == (AsmType *)0x0) {
    return param_2 == (AsmType *)0x0;
  }
  if (((ulong)param_1 & 1) == 0) {
    return param_1 == param_2;
  }
  if (((ulong)param_2 & 1) == 0) {
    return false;
  }
  return ((uint)param_1 ^ (uint)param_2) < 2;
}

