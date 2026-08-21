
/* v8::internal::Bignum::IsClamped() const */

bool __thiscall v8::internal::Bignum::IsClamped(Bignum *this)

{
  if (*(int *)(this + 0x210) != 0) {
    return *(int *)(*(long *)(this + 0x200) + (long)(*(int *)(this + 0x210) + -1) * 4) != 0;
  }
  return true;
}

