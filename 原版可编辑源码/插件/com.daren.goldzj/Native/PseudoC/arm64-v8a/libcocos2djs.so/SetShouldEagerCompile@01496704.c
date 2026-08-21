
/* v8::internal::FunctionLiteral::SetShouldEagerCompile() */

void __thiscall v8::internal::FunctionLiteral::SetShouldEagerCompile(FunctionLiteral *this)

{
  DeclarationScope::set_should_eager_compile(*(DeclarationScope **)(this + 0x28));
  return;
}

