
/* v8::internal::wasm::AsmCallableType::IsA(v8::internal::wasm::AsmType*) */

bool __thiscall v8::internal::wasm::AsmCallableType::IsA(AsmCallableType *this,AsmType *param_1)

{
  if (((ulong)param_1 & 1) != 0) {
    param_1 = (AsmType *)0x0;
  }
  return param_1 == (AsmType *)this;
}

