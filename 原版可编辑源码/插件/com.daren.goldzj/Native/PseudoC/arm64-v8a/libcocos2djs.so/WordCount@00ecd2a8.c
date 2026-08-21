
/* v8::BigInt::WordCount() const */

void __thiscall v8::BigInt::WordCount(BigInt *this)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)this;
  internal::BigInt::Words64Count((BigInt *)&local_18);
  return;
}

