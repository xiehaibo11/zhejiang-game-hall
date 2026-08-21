
/* v8::base::bits::RoundUpToPowerOfTwo32(unsigned int) */

int v8::base::bits::RoundUpToPowerOfTwo32(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = param_1 - 1;
  }
  return 1 << (ulong)(-(int)LZCOUNT(iVar1) & 0x1f);
}

