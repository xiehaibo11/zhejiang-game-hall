
/* v8::internal::CountLeadingSignBits(long, int) */

int v8::internal::CountLeadingSignBits(long param_1,int param_2)

{
  if (param_1 >> 0x3f != param_1) {
    param_2 = (int)LZCOUNT((param_1 >> 0x3f ^ param_1) << ((ulong)(uint)-param_2 & 0x3f));
  }
  return param_2 + -1;
}

