
/* v8::internal::RegExpImpl::IrregexpByteCode(v8::internal::FixedArray, bool) */

ulong v8::internal::RegExpImpl::IrregexpByteCode(ulong param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = 0x1b;
  if ((param_2 & 1) == 0) {
    lVar1 = 0x1f;
  }
  return param_1 & 0xffffffff00000000 | (ulong)*(uint *)(lVar1 + param_1);
}

