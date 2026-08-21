
/* v8::BigInt::ToWordsArray(int*, int*, unsigned long*) const */

void __thiscall v8::BigInt::ToWordsArray(BigInt *this,int *param_1,int *param_2,ulong *param_3)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)this;
  internal::BigInt::ToWordsArray64((BigInt *)&local_18,param_1,param_2,param_3);
  return;
}

