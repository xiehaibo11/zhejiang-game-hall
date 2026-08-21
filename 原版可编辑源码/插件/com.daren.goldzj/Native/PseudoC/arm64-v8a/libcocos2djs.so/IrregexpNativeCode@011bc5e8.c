
/* v8::internal::RegExpImpl::IrregexpNativeCode(v8::internal::FixedArray, bool) */

ulong v8::internal::RegExpImpl::IrregexpNativeCode(ulong param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = 0x13;
  if ((param_2 & 1) == 0) {
    lVar1 = 0x17;
  }
  return param_1 & 0xffffffff00000000 | (ulong)*(uint *)(lVar1 + param_1);
}

