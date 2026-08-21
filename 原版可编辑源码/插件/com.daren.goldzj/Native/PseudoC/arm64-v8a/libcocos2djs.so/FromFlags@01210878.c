
/* v8::internal::wasm::WasmFeatures::FromFlags() */

uint v8::internal::wasm::WasmFeatures::FromFlags(void)

{
  uint uVar1;
  
  uVar1 = (uint)FLAG_experimental_wasm_eh;
  if (FLAG_experimental_wasm_threads != '\0') {
    uVar1 = FLAG_experimental_wasm_eh | 2;
  }
  if (FLAG_experimental_wasm_simd != '\0') {
    uVar1 = uVar1 | 4;
  }
  if (FLAG_experimental_wasm_return_call != '\0') {
    uVar1 = uVar1 | 8;
  }
  if (FLAG_experimental_wasm_compilation_hints != '\0') {
    uVar1 = uVar1 | 0x10;
  }
  if (FLAG_experimental_wasm_anyref != '\0') {
    uVar1 = uVar1 | 0x20;
  }
  if (FLAG_experimental_wasm_bigint != '\0') {
    uVar1 = uVar1 | 0x40;
  }
  if (FLAG_experimental_wasm_mv != '\0') {
    uVar1 = uVar1 | 0x80;
  }
  if (FLAG_experimental_wasm_type_reflection != '\0') {
    uVar1 = uVar1 | 0x100;
  }
  if (FLAG_experimental_wasm_bulk_memory != '\0') {
    uVar1 = uVar1 | 0x200;
  }
  if (FLAG_experimental_wasm_sat_f2i_conversions != '\0') {
    uVar1 = uVar1 | 0x400;
  }
  if (FLAG_experimental_wasm_se != '\0') {
    uVar1 = uVar1 | 0x800;
  }
  return uVar1;
}

