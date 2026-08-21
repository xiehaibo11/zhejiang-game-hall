
/* v8::internal::BigInt::BitwiseNot(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigInt>) */

undefined8 * v8::internal::BigInt::BitwiseNot(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  
  if ((*(uint *)(*param_2 + 3) & 1) == 0) {
    puVar1 = (undefined8 *)MutableBigInt::AbsoluteAddOne(param_1,param_2,1,0);
  }
  else {
    puVar1 = (undefined8 *)
             MutableBigInt::AbsoluteSubOne
                       (param_1,param_2,*(uint *)(*param_2 + 3) >> 1 & 0x3fffffff);
  }
  if (puVar1 != (undefined8 *)0x0) {
    MutableBigInt::Canonicalize(*puVar1);
  }
  return puVar1;
}

