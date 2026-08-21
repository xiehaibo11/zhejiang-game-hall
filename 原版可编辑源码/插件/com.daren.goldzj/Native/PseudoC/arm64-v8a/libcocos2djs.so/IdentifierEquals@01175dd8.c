
/* v8::internal::PreParser::IdentifierEquals(v8::internal::PreParserIdentifier const&,
   v8::internal::AstRawString const*) */

bool __thiscall
v8::internal::PreParser::IdentifierEquals
          (PreParser *this,PreParserIdentifier *param_1,AstRawString *param_2)

{
  return *(AstRawString **)param_1 == param_2;
}

