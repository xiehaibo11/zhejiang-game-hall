
/* v8::internal::JsonParser<unsigned short>::position() const */

ulong __thiscall
v8::internal::JsonParser<unsigned_short>::position(JsonParser<unsigned_short> *this)

{
  return (ulong)(*(long *)(this + 0x30) - *(long *)(this + 0x40)) >> 1;
}

