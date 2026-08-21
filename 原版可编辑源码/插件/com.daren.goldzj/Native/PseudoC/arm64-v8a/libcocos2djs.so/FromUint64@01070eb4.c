
/* v8::internal::BigInt::FromUint64(v8::internal::Isolate*, unsigned long) */

long * v8::internal::BigInt::FromUint64(Isolate *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 == 0) {
    plVar1 = (long *)Factory::NewBigInt((Factory *)param_1,0,0);
    *(undefined4 *)(*plVar1 + 3) = 0;
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
  }
  else {
    plVar1 = (long *)Factory::NewBigInt((Factory *)param_1,1,0);
    *(undefined4 *)(*plVar1 + 3) = 2;
    *(ulong *)(*plVar1 + 7) = param_2;
  }
  MutableBigInt::Canonicalize(*plVar1);
  return plVar1;
}

