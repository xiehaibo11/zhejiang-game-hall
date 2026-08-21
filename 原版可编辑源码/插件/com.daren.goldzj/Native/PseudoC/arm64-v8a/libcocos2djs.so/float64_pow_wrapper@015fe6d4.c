
/* v8::internal::wasm::float64_pow_wrapper(unsigned long) */

void v8::internal::wasm::float64_pow_wrapper(ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = base::ieee754::pow(*(double *)param_1,*(double *)(param_1 + 8));
  *(undefined8 *)param_1 = uVar1;
  return;
}

