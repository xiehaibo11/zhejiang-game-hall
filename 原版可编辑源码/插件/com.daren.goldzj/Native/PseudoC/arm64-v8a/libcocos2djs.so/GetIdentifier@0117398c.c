
/* v8::internal::PreParser::GetIdentifier() const */

void __thiscall v8::internal::PreParser::GetIdentifier(PreParser *this)

{
  Scanner::CurrentSymbol(*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
  return;
}

