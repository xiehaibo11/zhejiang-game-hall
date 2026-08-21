
/* v8::internal::JsonParser<unsigned char>::JsonContinuation::type() const */

byte __thiscall
v8::internal::JsonParser<unsigned_char>::JsonContinuation::type(JsonContinuation *this)

{
  return (byte)this[0x18] & 3;
}

