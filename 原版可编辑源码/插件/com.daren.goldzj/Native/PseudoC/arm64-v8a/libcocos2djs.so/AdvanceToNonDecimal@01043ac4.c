
/* v8::internal::JsonParser<unsigned char>::AdvanceToNonDecimal() */

void __thiscall
v8::internal::JsonParser<unsigned_char>::AdvanceToNonDecimal(JsonParser<unsigned_char> *this)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = *(byte **)(this + 0x30);
  pbVar2 = pbVar1;
  for (; (pbVar1 != *(byte **)(this + 0x38) && (pbVar2 = pbVar1, *pbVar1 - 0x30 < 10));
      pbVar1 = pbVar1 + 1) {
    pbVar2 = *(byte **)(this + 0x38);
  }
  *(byte **)(this + 0x30) = pbVar2;
  return;
}

