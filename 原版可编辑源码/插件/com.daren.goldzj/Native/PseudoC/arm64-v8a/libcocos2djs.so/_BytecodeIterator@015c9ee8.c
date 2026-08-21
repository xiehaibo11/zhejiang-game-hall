
/* v8::internal::wasm::BytecodeIterator::~BytecodeIterator() */

void __thiscall v8::internal::wasm::BytecodeIterator::~BytecodeIterator(BytecodeIterator *this)

{
  *(undefined ***)this = &PTR__Decoder_01cbc3a8;
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  operator_delete(this);
  return;
}

