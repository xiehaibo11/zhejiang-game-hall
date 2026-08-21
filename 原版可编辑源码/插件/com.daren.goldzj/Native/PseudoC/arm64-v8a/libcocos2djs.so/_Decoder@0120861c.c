
/* v8::internal::wasm::Decoder::~Decoder() */

void __thiscall v8::internal::wasm::Decoder::~Decoder(Decoder *this)

{
  *(undefined ***)this = &PTR__Decoder_01cbc3a8;
  if (((byte)this[0x30] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x40));
  return;
}

