
/* v8::internal::BigInt::UnaryMinus(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigInt>) */

long * v8::internal::BigInt::UnaryMinus(undefined8 param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_2;
  if ((*(uint *)(*param_2 + 3) & 0x7ffffffe) != 0) {
    plVar1 = (long *)MutableBigInt::Copy(param_1,param_2);
    *(uint *)(*plVar1 + 3) = (*(uint *)(*plVar1 + 3) & 0xfffffffe | *(uint *)(*param_2 + 3) & 1) ^ 1
    ;
    MutableBigInt::Canonicalize(*plVar1);
  }
  return plVar1;
}

