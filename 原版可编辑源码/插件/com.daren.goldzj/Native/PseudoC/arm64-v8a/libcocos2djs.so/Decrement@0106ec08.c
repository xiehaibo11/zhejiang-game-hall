
/* v8::internal::BigInt::Decrement(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigInt>) */

long * v8::internal::BigInt::Decrement(Factory *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if ((*(uint *)(lVar2 + 3) & 1) == 0) {
    if ((*(uint *)(lVar2 + 3) & 0x7ffffffe) == 0) {
      plVar1 = (long *)Factory::NewBigInt(param_1,1,0);
      *(undefined4 *)(*plVar1 + 3) = 3;
      *(undefined8 *)(*plVar1 + 7) = 1;
      lVar2 = *plVar1;
      goto LAB_0106ec9c;
    }
    plVar1 = (long *)MutableBigInt::AbsoluteSubOne
                               (param_1,param_2,*(uint *)(lVar2 + 3) >> 1 & 0x3fffffff);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
  }
  else {
    plVar1 = (long *)MutableBigInt::AbsoluteAddOne(param_1,param_2,1,0);
    if (plVar1 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  lVar2 = *plVar1;
LAB_0106ec9c:
  MutableBigInt::Canonicalize(lVar2);
  return plVar1;
}

