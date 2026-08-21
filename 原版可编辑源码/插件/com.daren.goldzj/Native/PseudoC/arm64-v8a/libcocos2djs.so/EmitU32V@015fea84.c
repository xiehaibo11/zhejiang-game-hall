
/* v8::internal::wasm::WasmFunctionBuilder::EmitU32V(unsigned int) */

void __thiscall
v8::internal::wasm::WasmFunctionBuilder::EmitU32V(WasmFunctionBuilder *this,uint param_1)

{
  ZoneBuffer::write_u32v((ZoneBuffer *)(this + 0x40),param_1);
  return;
}

