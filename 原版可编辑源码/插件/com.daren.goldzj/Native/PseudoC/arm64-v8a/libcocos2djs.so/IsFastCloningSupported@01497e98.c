
/* v8::internal::ArrayLiteral::IsFastCloningSupported() const */

bool __thiscall v8::internal::ArrayLiteral::IsFastCloningSupported(ArrayLiteral *this)

{
  if (*(int *)(this + 8) * 2 < 4) {
    return *(int *)(this + 0x24) < 0x3ffd;
  }
  return false;
}

