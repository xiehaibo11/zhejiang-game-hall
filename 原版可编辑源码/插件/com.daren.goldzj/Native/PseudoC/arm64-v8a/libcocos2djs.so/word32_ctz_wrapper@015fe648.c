
/* v8::internal::wasm::word32_ctz_wrapper(unsigned long) */

long v8::internal::wasm::word32_ctz_wrapper(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (*(uint *)param_1 & 0xaaaaaaaa) >> 1 | (*(uint *)param_1 & 0x55555555) << 1;
  uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  return LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
}

