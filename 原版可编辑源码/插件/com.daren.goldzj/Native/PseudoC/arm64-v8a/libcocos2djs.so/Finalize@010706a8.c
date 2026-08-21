
/* v8::internal::BigInt::Finalize(v8::internal::Handle<v8::internal::FreshlyAllocatedBigInt>, bool)
    */

long * v8::internal::BigInt::Finalize(long *param_1,uint param_2)

{
  *(uint *)(*param_1 + 3) = *(uint *)(*param_1 + 3) & 0xfffffffe | param_2 & 1;
  MutableBigInt::Canonicalize(*param_1);
  return param_1;
}

