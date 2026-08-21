
/* v8::internal::ObjectStats::HistogramIndexFromSize(unsigned long) */

uint __thiscall v8::internal::ObjectStats::HistogramIndexFromSize(ObjectStats *this,ulong param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0x3b - (int)LZCOUNT(param_1);
    uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    if (0xe < (int)uVar1) {
      uVar1 = 0xf;
    }
    return uVar1;
  }
  return 0;
}

