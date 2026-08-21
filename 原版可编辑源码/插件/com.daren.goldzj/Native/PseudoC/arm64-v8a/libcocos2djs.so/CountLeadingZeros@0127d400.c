
/* v8::internal::CountLeadingZeros(unsigned long, int) */

int v8::internal::CountLeadingZeros(ulong param_1,int param_2)

{
  if (param_1 != 0) {
    param_2 = (int)LZCOUNT(param_1 << ((ulong)(uint)-param_2 & 0x3f));
  }
  return param_2;
}

