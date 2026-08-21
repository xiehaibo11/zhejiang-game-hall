
/* v8::internal::MutableBigInt::MakeImmutable(v8::internal::Handle<v8::internal::MutableBigInt>) */

undefined8 * v8::internal::MutableBigInt::MakeImmutable(undefined8 *param_1)

{
  Canonicalize(*param_1);
  return param_1;
}

