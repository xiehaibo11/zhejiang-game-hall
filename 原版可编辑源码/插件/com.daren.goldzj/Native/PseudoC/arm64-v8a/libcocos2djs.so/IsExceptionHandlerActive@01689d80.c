
/* v8::internal::compiler::CodeAssembler::IsExceptionHandlerActive() const */

bool __thiscall v8::internal::compiler::CodeAssembler::IsExceptionHandlerActive(CodeAssembler *this)

{
  return *(long *)(*(long *)this + 0xa8) != *(long *)(*(long *)this + 0xa0);
}

