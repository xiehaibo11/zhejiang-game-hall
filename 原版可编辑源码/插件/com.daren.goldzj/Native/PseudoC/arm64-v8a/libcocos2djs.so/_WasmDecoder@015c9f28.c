
/* v8::internal::wasm::WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)0>::~WasmDecoder() */

void __thiscall
v8::internal::wasm::WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)0>::~WasmDecoder
          (WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)0> *this)

{
  *(undefined ***)this = &PTR__Decoder_01cbc3a8;
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  operator_delete(this);
  return;
}

