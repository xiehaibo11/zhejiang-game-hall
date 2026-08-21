
/* v8::internal::wasm::word32_rol_wrapper(unsigned long) */

uint v8::internal::wasm::word32_rol_wrapper(ulong param_1)

{
  uint uVar1;
  
  uVar1 = -*(int *)(param_1 + 4) & 0x1f;
  return *(uint *)param_1 >> uVar1 | *(uint *)param_1 << 0x20 - uVar1;
}

