
/* v8::internal::MutableBigInt_AbsoluteAddAndCanonicalize(unsigned long, unsigned long, unsigned
   long) */

void v8::internal::MutableBigInt_AbsoluteAddAndCanonicalize
               (ulong param_1,ulong param_2,ulong param_3)

{
  MutableBigInt::AbsoluteAdd();
  MutableBigInt::Canonicalize(param_1);
  return;
}

