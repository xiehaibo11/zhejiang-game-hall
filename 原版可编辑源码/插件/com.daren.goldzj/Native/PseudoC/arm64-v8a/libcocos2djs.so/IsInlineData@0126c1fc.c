
/* v8::internal::InstructionSequence::IsInlineData() const */

bool __thiscall v8::internal::InstructionSequence::IsInlineData(InstructionSequence *this)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)this;
  bVar2 = false;
  if (((int)uVar1 < 0) && ((uVar1 & 0x7f800000 | 0x80000000) == 0xd2800000)) {
    bVar2 = ((uVar1 ^ 0xffffffff) & 0x1f) == 0;
  }
  return bVar2;
}

