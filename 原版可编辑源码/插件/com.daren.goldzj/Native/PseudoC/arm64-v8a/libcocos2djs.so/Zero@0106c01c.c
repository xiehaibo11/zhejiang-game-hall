
/* v8::internal::BigInt::Zero(v8::internal::Isolate*) */

long * v8::internal::BigInt::Zero(Isolate *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)Factory::NewBigInt((Factory *)param_1,0,0);
  *(undefined4 *)(*plVar1 + 3) = 0;
  if (plVar1 != (long *)0x0) {
    MutableBigInt::Canonicalize(*plVar1);
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

