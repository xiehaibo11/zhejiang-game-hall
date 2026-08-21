
/* v8::internal::AsmJsScanner::IsNumberStart(int) */

bool __thiscall v8::internal::AsmJsScanner::IsNumberStart(AsmJsScanner *this,int param_1)

{
  return param_1 == 0x2e || param_1 - 0x30U < 10;
}

