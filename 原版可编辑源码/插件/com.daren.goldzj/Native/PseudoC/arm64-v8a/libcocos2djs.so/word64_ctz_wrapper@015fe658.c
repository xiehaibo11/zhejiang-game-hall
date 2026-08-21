
/* v8::internal::wasm::word64_ctz_wrapper(unsigned long) */

long v8::internal::wasm::word64_ctz_wrapper(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = (*(ulong *)param_1 & 0xaaaaaaaaaaaaaaaa) >> 1 |
          (*(ulong *)param_1 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20);
}

