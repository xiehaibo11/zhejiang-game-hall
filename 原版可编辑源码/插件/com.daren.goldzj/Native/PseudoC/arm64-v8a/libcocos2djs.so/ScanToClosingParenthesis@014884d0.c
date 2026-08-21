
/* v8::internal::wasm::AsmJsParser::ScanToClosingParenthesis() */

void __thiscall v8::internal::wasm::AsmJsParser::ScanToClosingParenthesis(AsmJsParser *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = *(int *)(this + 0x10);
    if (iVar2 == 0x28) {
      iVar3 = iVar3 + 1;
    }
    else if (iVar2 == 0x29) {
      bVar1 = iVar3 < 1;
      iVar3 = iVar3 + -1;
      if (bVar1) {
        return;
      }
    }
    else if (iVar2 == -1) {
      return;
    }
    AsmJsScanner::Next((AsmJsScanner *)(this + 8));
  } while( true );
}

