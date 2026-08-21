
/* v8::internal::MutableBigInt::InitializeDigits(int, unsigned char) */

void __thiscall
v8::internal::MutableBigInt::InitializeDigits(MutableBigInt *this,int param_1,uchar param_2)

{
  memset((void *)(*(long *)this + 7),(uint)param_2,(long)(param_1 << 3));
  return;
}

