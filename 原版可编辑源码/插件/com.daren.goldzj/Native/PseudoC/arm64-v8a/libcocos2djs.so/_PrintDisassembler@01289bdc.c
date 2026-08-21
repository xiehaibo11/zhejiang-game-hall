
/* v8::internal::PrintDisassembler::~PrintDisassembler() */

void __thiscall v8::internal::PrintDisassembler::~PrintDisassembler(PrintDisassembler *this)

{
  *(undefined ***)this = &PTR__DisassemblingDecoder_01cbd588;
  if (this[0x18] != (PrintDisassembler)0x0) {
    free(*(void **)(this + 8));
  }
  operator_delete(this);
  return;
}

