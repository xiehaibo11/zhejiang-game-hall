
/* v8::internal::ObjectLiteral::IsFastCloningSupported() const */

bool __thiscall v8::internal::ObjectLiteral::IsFastCloningSupported(ObjectLiteral *this)

{
  if ((((byte)this[5] >> 3 & 1) != 0) && ((*(uint *)(this + 8) & 0x7fffffff) == 1)) {
    return *(int *)(this + 0xc) < 0xaab;
  }
  return false;
}

