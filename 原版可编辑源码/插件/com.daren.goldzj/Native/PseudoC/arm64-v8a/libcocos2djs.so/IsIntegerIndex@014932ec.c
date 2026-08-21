
/* v8::internal::AstRawString::IsIntegerIndex() const */

bool __thiscall v8::internal::AstRawString::IsIntegerIndex(AstRawString *this)

{
  return ((byte)this[0x18] & 4) == 0;
}

