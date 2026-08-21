
/* v8::internal::JsonParser<unsigned short>::JsonContinuation::type() const */

byte __thiscall
v8::internal::JsonParser<unsigned_short>::JsonContinuation::type(JsonContinuation *this)

{
  return (byte)this[0x18] & 3;
}

