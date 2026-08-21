
/* v8::internal::InstructionSequence::InlineData() const */

uint __thiscall v8::internal::InstructionSequence::InlineData(InstructionSequence *this)

{
  return *(uint *)this >> 5 & 0xffff;
}

