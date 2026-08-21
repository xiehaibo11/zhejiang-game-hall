
/* v8::internal::wasm::int64_mod_wrapper(unsigned long) */

undefined8 v8::internal::wasm::int64_mod_wrapper(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    lVar3 = *(long *)param_1;
    if ((lVar2 == -1) && (lVar3 == -0x8000000000000000)) {
      lVar3 = 0;
    }
    else {
      lVar1 = 0;
      if (lVar2 != 0) {
        lVar1 = lVar3 / lVar2;
      }
      lVar3 = lVar3 - lVar1 * lVar2;
    }
    *(long *)param_1 = lVar3;
    return 1;
  }
  return 0;
}

