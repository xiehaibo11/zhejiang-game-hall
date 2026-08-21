
/* v8::internal::wasm::uint64_div_wrapper(unsigned long) */

undefined8 v8::internal::wasm::uint64_div_wrapper(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if (uVar2 != 0) {
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = *(ulong *)param_1 / uVar2;
    }
    *(ulong *)param_1 = uVar1;
    return 1;
  }
  return 0;
}

