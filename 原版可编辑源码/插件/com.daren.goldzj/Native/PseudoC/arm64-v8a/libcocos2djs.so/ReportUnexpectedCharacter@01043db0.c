
/* v8::internal::JsonParser<unsigned char>::ReportUnexpectedCharacter(int) */

void __thiscall
v8::internal::JsonParser<unsigned_char>::ReportUnexpectedCharacter
          (JsonParser<unsigned_char> *this,int param_1)

{
  if (param_1 == -1) {
    ReportUnexpectedToken(this,0xd);
    return;
  }
  if (param_1 < 0x100) {
    ReportUnexpectedToken(this,(&DAT_019cbf74)[param_1]);
    return;
  }
  ReportUnexpectedToken(this,0xc);
  return;
}

