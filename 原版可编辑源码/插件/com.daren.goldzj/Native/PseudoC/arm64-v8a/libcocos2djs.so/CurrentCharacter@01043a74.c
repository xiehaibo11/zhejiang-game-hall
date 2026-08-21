
/* v8::internal::JsonParser<unsigned char>::CurrentCharacter() */

ulong __thiscall
v8::internal::JsonParser<unsigned_char>::CurrentCharacter(JsonParser<unsigned_char> *this)

{
  if (*(byte **)(this + 0x30) != *(byte **)(this + 0x38)) {
    return (ulong)**(byte **)(this + 0x30);
  }
  return 0xffffffff;
}

