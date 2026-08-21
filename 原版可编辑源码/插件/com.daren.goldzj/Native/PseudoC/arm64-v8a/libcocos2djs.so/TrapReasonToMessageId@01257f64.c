
/* v8::internal::wasm::WasmOpcodes::TrapReasonToMessageId(v8::internal::wasm::TrapReason) */

undefined4 v8::internal::wasm::WasmOpcodes::TrapReasonToMessageId(uint param_1)

{
  if (param_1 < 0xc) {
    return *(undefined4 *)(&DAT_019f2f40 + (long)(int)param_1 * 4);
  }
  return 0;
}

