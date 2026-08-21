
/* v8::internal::wasm::WasmCompilationUnit::GetDefaultExecutionTier(v8::internal::wasm::WasmModule
   const*) */

undefined4 v8::internal::wasm::WasmCompilationUnit::GetDefaultExecutionTier(WasmModule *param_1)

{
  undefined4 uVar1;
  
  if (param_1[0x178] != (WasmModule)0x0) {
    return 3;
  }
  if (FLAG_wasm_interpret_all != '\0') {
    return 1;
  }
  uVar1 = 2;
  if (FLAG_liftoff == '\0') {
    uVar1 = 3;
  }
  return uVar1;
}

