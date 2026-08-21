
/* v8::internal::wasm::WasmFunctionBuilder::EmitCode(unsigned char const*, unsigned int) */

void __thiscall
v8::internal::wasm::WasmFunctionBuilder::EmitCode
          (WasmFunctionBuilder *this,uchar *param_1,uint param_2)

{
  ZoneBuffer::write((ZoneBuffer *)(this + 0x40),param_1,(ulong)param_2);
  return;
}

