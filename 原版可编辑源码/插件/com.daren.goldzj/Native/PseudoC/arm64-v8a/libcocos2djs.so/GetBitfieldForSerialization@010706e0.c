
/* v8::internal::BigInt::GetBitfieldForSerialization() const */

uint __thiscall v8::internal::BigInt::GetBitfieldForSerialization(BigInt *this)

{
  return (*(uint *)(*(long *)this + 3) & 0x1ffffffe) << 3 | *(uint *)(*(long *)this + 3) & 1;
}

