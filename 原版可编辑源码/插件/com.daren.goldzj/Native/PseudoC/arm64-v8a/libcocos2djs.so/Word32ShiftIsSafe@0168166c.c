
/* v8::internal::compiler::CodeAssembler::Word32ShiftIsSafe() const */

byte __thiscall v8::internal::compiler::CodeAssembler::Word32ShiftIsSafe(CodeAssembler *this)

{
  return *(byte *)(**(long **)this + 0x35) >> 3 & 1;
}

