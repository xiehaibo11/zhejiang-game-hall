
/* v8::internal::wasm::GetWasmCodeKindAsString(v8::internal::wasm::WasmCode::Kind) */

char * v8::internal::wasm::GetWasmCodeKindAsString(uint param_1)

{
  if (param_1 < 5) {
    return *(char **)(&DAT_01cbc370 + (long)(int)param_1 * 8);
  }
  return "unknown kind";
}

