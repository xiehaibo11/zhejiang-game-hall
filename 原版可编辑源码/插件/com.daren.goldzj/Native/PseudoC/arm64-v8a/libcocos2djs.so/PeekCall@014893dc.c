
/* v8::internal::wasm::AsmJsParser::PeekCall() */

undefined8 __thiscall v8::internal::wasm::AsmJsParser::PeekCall(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  long lVar1;
  
  if (0xff < *(int *)(this + 0x10)) {
    lVar1 = GetVarInfo(this,*(int *)(this + 0x10));
    if ((*(int *)(lVar1 + 0x20) == 4) ||
       (lVar1 = GetVarInfo(this,*(int *)(this + 0x10)), 5 < *(int *)(lVar1 + 0x20))) {
      return 1;
    }
    lVar1 = GetVarInfo(this,*(int *)(this + 0x10));
    if ((*(int *)(lVar1 + 0x20) == 0) ||
       (lVar1 = GetVarInfo(this,*(int *)(this + 0x10)), *(int *)(lVar1 + 0x20) == 5)) {
      this_00 = (AsmJsScanner *)(this + 8);
      AsmJsScanner::Next(this_00);
      if ((*(int *)(this + 0x10) == 0x5b) || (*(int *)(this + 0x10) == 0x28)) {
        AsmJsScanner::Rewind(this_00);
        return 1;
      }
      AsmJsScanner::Rewind(this_00);
    }
  }
  return 0;
}

