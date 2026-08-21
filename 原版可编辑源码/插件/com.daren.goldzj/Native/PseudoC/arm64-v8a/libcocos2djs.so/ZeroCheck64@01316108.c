
/* v8::internal::compiler::WasmGraphBuilder::ZeroCheck64(v8::internal::wasm::TrapReason,
   v8::internal::compiler::Node*, int) */

void v8::internal::compiler::WasmGraphBuilder::ZeroCheck64(void)

{
  TrapIfEq64();
  return;
}

