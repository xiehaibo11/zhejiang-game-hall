
/* v8::internal::BigInt::FromInt64(v8::internal::Isolate*, long) */

long * v8::internal::BigInt::FromInt64(Isolate *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 == 0) {
    plVar2 = (long *)Factory::NewBigInt((Factory *)param_1,0,0);
    *(undefined4 *)(*plVar2 + 3) = 0;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
  }
  else {
    plVar2 = (long *)Factory::NewBigInt((Factory *)param_1,1,0);
    *(uint *)(*plVar2 + 3) = (uint)((ulong)param_2 >> 0x3f) | 2;
    lVar1 = -param_2;
    if (-1 < param_2) {
      lVar1 = param_2;
    }
    *(long *)(*plVar2 + 7) = lVar1;
  }
  MutableBigInt::Canonicalize(*plVar2);
  return plVar2;
}

