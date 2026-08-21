
/* v8::internal::wasm::AsmType::AsCallableType() */

AsmType * __thiscall v8::internal::wasm::AsmType::AsCallableType(AsmType *this)

{
  if (((ulong)this & 1) != 0) {
    this = (AsmType *)0x0;
  }
  return this;
}

