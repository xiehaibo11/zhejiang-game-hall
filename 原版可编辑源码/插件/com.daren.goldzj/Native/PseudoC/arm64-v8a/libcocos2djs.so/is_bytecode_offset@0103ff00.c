
/* v8::internal::interpreter::Register::is_bytecode_offset() const */

bool __thiscall v8::internal::interpreter::Register::is_bytecode_offset(Register *this)

{
  return *(int *)this == -1;
}

