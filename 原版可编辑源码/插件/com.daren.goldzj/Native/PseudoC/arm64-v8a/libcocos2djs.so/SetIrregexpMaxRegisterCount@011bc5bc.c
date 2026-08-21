
/* v8::internal::RegExpImpl::SetIrregexpMaxRegisterCount(v8::internal::FixedArray, int) */

void v8::internal::RegExpImpl::SetIrregexpMaxRegisterCount(long param_1,int param_2)

{
  *(int *)(param_1 + 0x23) = param_2 << 1;
  return;
}

