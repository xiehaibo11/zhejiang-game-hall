
/* v8::internal::BigInt::Increment(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigInt>) */

long * v8::internal::BigInt::Increment(undefined8 param_1,long *param_2)

{
  long *plVar1;
  
  if ((*(uint *)(*param_2 + 3) & 1) == 0) {
    plVar1 = (long *)MutableBigInt::AbsoluteAddOne(param_1,param_2,0,0);
    if (plVar1 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  else {
    plVar1 = (long *)MutableBigInt::AbsoluteSubOne
                               (param_1,param_2,*(uint *)(*param_2 + 3) >> 1 & 0x3fffffff);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    *(uint *)(*plVar1 + 3) = *(uint *)(*plVar1 + 3) | 1;
  }
  MutableBigInt::Canonicalize(*plVar1);
  return plVar1;
}

