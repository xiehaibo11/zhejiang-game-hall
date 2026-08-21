
/* v8::internal::TurboAssemblerBase::RootRegisterOffsetForRootIndex(v8::internal::RootIndex) */

int v8::internal::TurboAssemblerBase::RootRegisterOffsetForRootIndex(uint param_1)

{
  return (param_1 & 0xffff) * 8 + 0x80;
}

