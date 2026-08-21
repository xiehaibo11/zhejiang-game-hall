
/* v8::internal::wasm::WasmFunctionBuilder::EmitI32V(int) */

void __thiscall
v8::internal::wasm::WasmFunctionBuilder::EmitI32V(WasmFunctionBuilder *this,int param_1)

{
  ZoneBuffer::write_i32v((ZoneBuffer *)(this + 0x40),param_1);
  return;
}

