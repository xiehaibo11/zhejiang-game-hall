
/* v8::internal::AsmJsScanner::IsIdentifierPart(int) */

bool __thiscall v8::internal::AsmJsScanner::IsIdentifierPart(AsmJsScanner *this,int param_1)

{
  return param_1 == 0x5f ||
         (param_1 == 0x24 || (param_1 - 0x30U < 10 || (param_1 | 0x20U) - 0x61 < 0x1a));
}

