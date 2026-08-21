
/* v8::internal::compiler::CodeAssembler::Is32() const */

bool __thiscall v8::internal::compiler::CodeAssembler::Is32(CodeAssembler *this)

{
  return *(char *)(**(long **)this + 0x30) == '\x04';
}

