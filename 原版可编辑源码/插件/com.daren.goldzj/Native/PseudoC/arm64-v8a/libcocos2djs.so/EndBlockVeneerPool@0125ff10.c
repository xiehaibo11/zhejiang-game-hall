
/* v8::internal::Assembler::EndBlockVeneerPool() */

void __thiscall v8::internal::Assembler::EndBlockVeneerPool(Assembler *this)

{
  *(int *)(this + 0xd0) = *(int *)(this + 0xd0) + -1;
  return;
}

