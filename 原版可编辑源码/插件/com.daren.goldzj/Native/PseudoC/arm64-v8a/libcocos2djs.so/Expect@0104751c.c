
/* v8::internal::JsonParser<unsigned short>::Expect(v8::internal::JsonToken) */

void __thiscall
v8::internal::JsonParser<unsigned_short>::Expect
          (JsonParser<unsigned_short> *this,JsonParser<unsigned_short> param_2)

{
  if (this[0x10] == param_2) {
    *(long *)(this + 0x30) = *(long *)(this + 0x30) + 2;
    return;
  }
  ReportUnexpectedToken(this,this[0x10]);
  return;
}

