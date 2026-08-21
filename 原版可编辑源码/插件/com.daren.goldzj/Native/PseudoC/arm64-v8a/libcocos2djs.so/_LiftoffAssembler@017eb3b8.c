
/* v8::internal::wasm::LiftoffAssembler::~LiftoffAssembler() */

void __thiscall v8::internal::wasm::LiftoffAssembler::~LiftoffAssembler(LiftoffAssembler *this)

{
  *(undefined ***)this = &PTR__LiftoffAssembler_01cdb1c8;
  if (8 < *(uint *)(this + 0x1b8)) {
    free(*(void **)(this + 0x1c0));
  }
  if (*(LiftoffAssembler **)(this + 0x1c8) != this + 0x1e0) {
    free(*(LiftoffAssembler **)(this + 0x1c8));
  }
  Assembler::~Assembler((Assembler *)this);
  return;
}

