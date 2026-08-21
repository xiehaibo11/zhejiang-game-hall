
/* v8::internal::Assembler::StartBlockVeneerPool() */

void __thiscall v8::internal::Assembler::StartBlockVeneerPool(Assembler *this)

{
  *(int *)(this + 0xd0) = *(int *)(this + 0xd0) + 1;
  return;
}

