
/* v8::internal::wasm::word64_ror_wrapper(unsigned long) */

void v8::internal::wasm::word64_ror_wrapper(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8) & 0x3f;
  *(ulong *)param_1 = *(ulong *)param_1 >> uVar1 | *(ulong *)param_1 << 0x40 - uVar1;
  return;
}

