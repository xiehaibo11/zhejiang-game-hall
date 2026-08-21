
/* v8::internal::wasm::AsmJsParser::IterationStatement() */

undefined8 __thiscall v8::internal::wasm::AsmJsParser::IterationStatement(AsmJsParser *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x10);
  if (iVar1 == -0x26e3) {
    DoStatement(this);
  }
  else if (iVar1 == -0x26e0) {
    ForStatement(this);
  }
  else {
    if (iVar1 != -0x26d9) {
      return 0;
    }
    WhileStatement(this);
  }
  return 1;
}

