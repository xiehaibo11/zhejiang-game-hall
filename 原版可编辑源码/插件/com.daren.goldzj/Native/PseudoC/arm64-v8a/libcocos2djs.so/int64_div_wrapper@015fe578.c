
/* v8::internal::wasm::int64_div_wrapper(unsigned long) */

undefined8 v8::internal::wasm::int64_div_wrapper(ulong param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return 0;
  }
  if ((lVar2 == -1) && (*(long *)param_1 == -0x8000000000000000)) {
    return 0xffffffff;
  }
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = *(long *)param_1 / lVar2;
  }
  *(long *)param_1 = lVar1;
  return 1;
}

