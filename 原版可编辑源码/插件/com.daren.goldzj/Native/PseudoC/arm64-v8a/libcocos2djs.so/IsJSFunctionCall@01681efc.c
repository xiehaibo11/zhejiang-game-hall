
/* v8::internal::compiler::CodeAssembler::IsJSFunctionCall() const */

bool __thiscall v8::internal::compiler::CodeAssembler::IsJSFunctionCall(CodeAssembler *this)

{
  return **(int **)(**(long **)this + 0x68) == 1;
}

