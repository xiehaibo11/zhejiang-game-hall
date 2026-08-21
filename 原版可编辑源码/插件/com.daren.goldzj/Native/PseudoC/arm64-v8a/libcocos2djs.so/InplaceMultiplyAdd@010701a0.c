
/* v8::internal::BigInt::InplaceMultiplyAdd(v8::internal::Handle<v8::internal::FreshlyAllocatedBigInt>,
   unsigned long, unsigned long) */

void v8::internal::BigInt::InplaceMultiplyAdd(void)

{
  MutableBigInt::InternalMultiplyAdd();
  return;
}

