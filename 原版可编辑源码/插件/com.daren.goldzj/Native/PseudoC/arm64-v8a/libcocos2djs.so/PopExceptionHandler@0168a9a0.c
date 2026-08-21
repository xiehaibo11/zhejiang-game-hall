
/* v8::internal::compiler::CodeAssemblerState::PopExceptionHandler() */

void __thiscall
v8::internal::compiler::CodeAssemblerState::PopExceptionHandler(CodeAssemblerState *this)

{
  *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + -8;
  return;
}

