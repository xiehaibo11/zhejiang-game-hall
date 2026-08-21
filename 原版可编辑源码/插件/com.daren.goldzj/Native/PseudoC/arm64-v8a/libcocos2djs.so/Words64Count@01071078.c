
/* v8::internal::BigInt::Words64Count() */

uint __thiscall v8::internal::BigInt::Words64Count(BigInt *this)

{
  return *(uint *)(*(long *)this + 3) >> 1 & 0x3fffffff;
}

