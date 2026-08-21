
/* v8::internal::DisassemblingDecoder::~DisassemblingDecoder() */

void __thiscall
v8::internal::DisassemblingDecoder::~DisassemblingDecoder(DisassemblingDecoder *this)

{
  *(undefined ***)this = &PTR__DisassemblingDecoder_01cbd588;
  if (this[0x18] != (DisassemblingDecoder)0x0) {
    free(*(void **)(this + 8));
    return;
  }
  return;
}

