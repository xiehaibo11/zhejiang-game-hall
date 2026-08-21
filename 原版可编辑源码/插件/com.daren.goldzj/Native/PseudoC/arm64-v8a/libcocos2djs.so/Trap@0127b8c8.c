
/* v8::internal::TurboAssembler::Trap() */

void __thiscall v8::internal::TurboAssembler::Trap(TurboAssembler *this)

{
  Assembler::brk((int)this);
  return;
}

