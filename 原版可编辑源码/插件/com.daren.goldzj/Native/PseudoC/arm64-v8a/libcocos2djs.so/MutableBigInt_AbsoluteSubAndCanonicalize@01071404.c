
/* v8::internal::MutableBigInt_AbsoluteSubAndCanonicalize(unsigned long, unsigned long, unsigned
   long) */

void v8::internal::MutableBigInt_AbsoluteSubAndCanonicalize
               (ulong param_1,ulong param_2,ulong param_3)

{
  MutableBigInt::AbsoluteSub();
  MutableBigInt::Canonicalize(param_1);
  return;
}

