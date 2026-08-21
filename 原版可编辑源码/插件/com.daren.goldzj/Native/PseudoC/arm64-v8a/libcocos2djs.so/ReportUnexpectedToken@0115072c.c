
/* v8::internal::ParserBase<v8::internal::Parser>::ReportUnexpectedToken(v8::internal::Token::Value)
    */

void __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ReportUnexpectedToken
          (ParserBase<v8::internal::Parser> *this,undefined4 param_2)

{
  Parser::ReportUnexpectedTokenAt
            ((Parser *)this,*(undefined8 *)**(undefined8 **)(this + 0xf8),param_2,0x140);
  return;
}

