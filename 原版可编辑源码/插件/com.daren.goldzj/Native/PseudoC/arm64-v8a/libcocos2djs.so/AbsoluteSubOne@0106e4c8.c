
/* v8::internal::MutableBigInt::AbsoluteSubOne(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigIntBase>) */

void v8::internal::MutableBigInt::AbsoluteSubOne(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = AbsoluteSubOne(param_1,param_2,*(uint *)(*param_2 + 3) >> 1 & 0x3fffffff);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

