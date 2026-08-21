
/* v8::internal::wasm::AsmJsParser::TempVariable(int) */

int __thiscall v8::internal::wasm::AsmJsParser::TempVariable(AsmJsParser *this,int param_1)

{
  if (*(int *)(this + 0x1dc) <= param_1) {
    *(int *)(this + 0x1dc) = param_1 + 1;
  }
  return *(int *)(this + 0x1d8) + param_1;
}

