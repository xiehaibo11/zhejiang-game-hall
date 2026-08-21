
/* v8::internal::JsonParser<unsigned char>::Expect(v8::internal::JsonToken) */

void __thiscall
v8::internal::JsonParser<unsigned_char>::Expect
          (JsonParser<unsigned_char> *this,JsonParser<unsigned_char> param_2)

{
  if (this[0x10] == param_2) {
    *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
    return;
  }
  ReportUnexpectedToken(this,this[0x10]);
  return;
}

