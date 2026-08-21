
/* v8::internal::wasm::WasmFunctionBuilder::WriteSignature(v8::internal::wasm::ZoneBuffer*) const */

void __thiscall
v8::internal::wasm::WasmFunctionBuilder::WriteSignature
          (WasmFunctionBuilder *this,ZoneBuffer *param_1)

{
  ZoneBuffer::write_u32v(param_1,*(uint *)(this + 0x38));
  return;
}

