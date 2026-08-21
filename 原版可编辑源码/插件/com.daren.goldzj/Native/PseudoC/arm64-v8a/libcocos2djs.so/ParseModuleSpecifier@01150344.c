
/* v8::internal::Parser::ParseModuleSpecifier() */

void __thiscall v8::internal::Parser::ParseModuleSpecifier(Parser *this)

{
  uint uVar1;
  
  uVar1 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar1 & 0xff) != 0x5a) {
    ParserBase<v8::internal::Parser>::ReportUnexpectedToken
              ((ParserBase<v8::internal::Parser> *)this,uVar1);
  }
  Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
  return;
}

