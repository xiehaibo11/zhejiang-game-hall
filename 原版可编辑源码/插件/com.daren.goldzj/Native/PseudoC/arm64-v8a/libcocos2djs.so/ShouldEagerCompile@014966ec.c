
/* v8::internal::FunctionLiteral::ShouldEagerCompile() const */

bool __thiscall v8::internal::FunctionLiteral::ShouldEagerCompile(FunctionLiteral *this)

{
  return (*(byte *)(*(long *)(this + 0x28) + 0x83) & 0x44) != 0;
}

