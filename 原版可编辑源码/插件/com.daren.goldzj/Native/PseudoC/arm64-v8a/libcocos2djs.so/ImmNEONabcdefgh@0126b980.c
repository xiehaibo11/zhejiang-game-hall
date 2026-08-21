
/* v8::internal::Instruction::ImmNEONabcdefgh() const */

uint __thiscall v8::internal::Instruction::ImmNEONabcdefgh(Instruction *this)

{
  return *(uint *)this >> 0xb & 0xe0 | *(uint *)this >> 5 & 0x1f;
}

