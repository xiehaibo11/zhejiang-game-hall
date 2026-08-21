
/* v8::internal::BigInt::LeftShift(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigInt>, v8::internal::Handle<v8::internal::BigInt>) */

long * v8::internal::BigInt::LeftShift(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  
  if (((*(uint *)(*param_3 + 3) & 0x7ffffffe) != 0) && ((*(uint *)(*param_2 + 3) & 0x7ffffffe) != 0)
     ) {
    if ((*(uint *)(*param_3 + 3) & 1) == 0) {
      plVar1 = (long *)MutableBigInt::LeftShiftByAbsolute();
      return plVar1;
    }
    plVar1 = (long *)MutableBigInt::RightShiftByAbsolute();
    return plVar1;
  }
  return param_2;
}

