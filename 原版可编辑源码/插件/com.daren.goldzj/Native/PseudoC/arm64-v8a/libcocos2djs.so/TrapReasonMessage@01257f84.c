
/* v8::internal::wasm::WasmOpcodes::TrapReasonMessage(v8::internal::wasm::TrapReason) */

void v8::internal::wasm::WasmOpcodes::TrapReasonMessage(uint param_1)

{
  if (param_1 < 0xc) {
    MessageFormatter::TemplateString(*(undefined4 *)(&DAT_019f2f40 + (long)(int)param_1 * 4));
    return;
  }
  MessageFormatter::TemplateString(0);
  return;
}

