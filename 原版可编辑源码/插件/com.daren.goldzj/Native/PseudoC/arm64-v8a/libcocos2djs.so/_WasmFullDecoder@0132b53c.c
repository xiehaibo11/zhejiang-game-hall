
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::~WasmFullDecoder() */

void __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
~WasmFullDecoder(WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
                 *this)

{
  *(undefined ***)this = &PTR__WasmFullDecoder_01cc3be8;
  if (*(long *)(this + 0xc0) != 0) {
    *(long *)(this + 200) = *(long *)(this + 0xc0);
  }
  if (*(long *)(this + 0xa0) != 0) {
    *(long *)(this + 0xa8) = *(long *)(this + 0xa0);
  }
  if (*(long *)(this + 0x80) != 0) {
    *(long *)(this + 0x88) = *(long *)(this + 0x80);
  }
  *(undefined ***)this = &PTR__Decoder_01cbc3a8;
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  operator_delete(this);
  return;
}

