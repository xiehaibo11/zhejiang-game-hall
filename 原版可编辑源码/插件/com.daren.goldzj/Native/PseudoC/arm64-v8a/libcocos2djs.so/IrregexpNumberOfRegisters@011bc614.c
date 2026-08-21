
/* v8::internal::RegExpImpl::IrregexpNumberOfRegisters(v8::internal::FixedArray) */

int v8::internal::RegExpImpl::IrregexpNumberOfRegisters(long param_1)

{
  return *(int *)(param_1 + 0x23) >> 1;
}

