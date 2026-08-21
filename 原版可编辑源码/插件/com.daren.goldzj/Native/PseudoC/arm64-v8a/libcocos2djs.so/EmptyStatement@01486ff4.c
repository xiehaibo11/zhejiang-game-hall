
/* v8::internal::wasm::AsmJsParser::EmptyStatement() */

void __thiscall v8::internal::wasm::AsmJsParser::EmptyStatement(AsmJsParser *this)

{
  if (*(int *)(this + 0x10) == 0x3b) {
    AsmJsScanner::Next((AsmJsScanner *)(this + 8));
    return;
  }
  this[0x1e4] = (AsmJsParser)0x1;
  *(char **)(this + 0x1e8) = "Unexpected token";
  *(int *)(this + 0x1f0) = (int)*(undefined8 *)(this + 0x20);
  return;
}

