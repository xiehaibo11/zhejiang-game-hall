
/* disasm::BufferDisassembler::~BufferDisassembler() */

void __thiscall disasm::BufferDisassembler::~BufferDisassembler(BufferDisassembler *this)

{
  *(undefined ***)this = &PTR__DisassemblingDecoder_01cbd588;
  if (this[0x18] != (BufferDisassembler)0x0) {
    free(*(void **)(this + 8));
  }
  operator_delete(this);
  return;
}

