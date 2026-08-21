
/* v8::internal::compiler::CodeAssembler::Is64() const */

bool __thiscall v8::internal::compiler::CodeAssembler::Is64(CodeAssembler *this)

{
  return *(char *)(**(long **)this + 0x30) == '\x05';
}

