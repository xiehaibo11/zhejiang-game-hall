
/* v8::internal::BigInt::SerializeDigits(unsigned char*) */

void __thiscall v8::internal::BigInt::SerializeDigits(BigInt *this,uchar *param_1)

{
  memcpy(param_1,(void *)(*(long *)this + 7),
         (long)(int)((*(uint *)(*(long *)this + 3) & 0x3ffffffe) << 2));
  return;
}

