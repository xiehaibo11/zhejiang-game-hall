
/* v8::internal::MutableBigInt::MakeImmutable(v8::internal::MaybeHandle<v8::internal::MutableBigInt>)
    */

undefined8 * v8::internal::MutableBigInt::MakeImmutable(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    Canonicalize(*param_1);
  }
  return param_1;
}

