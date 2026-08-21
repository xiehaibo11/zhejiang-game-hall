
/* v8::internal::wasm::AsmJsParser::SkipSemicolon() */

void __thiscall v8::internal::wasm::AsmJsParser::SkipSemicolon(AsmJsParser *this)

{
  if (*(int *)(this + 0x10) != 0x7d) {
    if (*(int *)(this + 0x10) == 0x3b) {
      AsmJsScanner::Next((AsmJsScanner *)(this + 8));
      return;
    }
    if (this[0xec] == (AsmJsParser)0x0) {
      this[0x1e4] = (AsmJsParser)0x1;
      *(char **)(this + 0x1e8) = "Expected ;";
      *(int *)(this + 0x1f0) = (int)*(undefined8 *)(this + 0x20);
      return;
    }
  }
  return;
}

