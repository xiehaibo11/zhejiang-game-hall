
/* v8::BigInt::Uint64Value(bool*) const */

void __thiscall v8::BigInt::Uint64Value(BigInt *this,bool *param_1)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)this;
  internal::BigInt::AsUint64((BigInt *)&local_18,param_1);
  return;
}

