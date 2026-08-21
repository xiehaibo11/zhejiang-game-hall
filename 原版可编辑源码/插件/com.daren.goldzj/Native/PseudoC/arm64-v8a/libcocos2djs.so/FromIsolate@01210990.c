
/* v8::internal::wasm::WasmFeatures::FromIsolate(v8::internal::Isolate*) */

uint v8::internal::wasm::WasmFeatures::FromIsolate(Isolate *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  
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
  uVar4 = *(ulong *)(param_1 + 0x2bc8);
  if (FLAG_experimental_wasm_sat_f2i_conversions != '\0') {
    uVar1 = uVar1 | 0x400;
  }
  if (FLAG_experimental_wasm_se != '\0') {
    uVar1 = uVar1 | 0x800;
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(param_1 + 0x95a0);
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar4;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
  }
  uVar4 = Isolate::AreWasmThreadsEnabled(param_1,puVar3);
  uVar2 = uVar1 | 2;
  if ((uVar4 & 1) == 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}

