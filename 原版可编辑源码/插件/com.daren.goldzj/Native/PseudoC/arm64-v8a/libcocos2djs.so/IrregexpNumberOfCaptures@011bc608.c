
/* v8::internal::RegExpImpl::IrregexpNumberOfCaptures(v8::internal::FixedArray) */

int v8::internal::RegExpImpl::IrregexpNumberOfCaptures(long param_1)

{
  return *(int *)(param_1 + 0x27) >> 1;
}

