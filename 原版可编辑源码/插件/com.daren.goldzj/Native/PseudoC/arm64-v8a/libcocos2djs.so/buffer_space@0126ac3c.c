
/* v8::internal::Assembler::buffer_space() const */

int __thiscall v8::internal::Assembler::buffer_space(Assembler *this)

{
  return *(int *)(this + 0xd8) - *(int *)(this + 0x20);
}

