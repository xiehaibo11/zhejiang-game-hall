
/* v8::internal::FunctionLiteral::language_mode() const */

ushort __thiscall v8::internal::FunctionLiteral::language_mode(FunctionLiteral *this)

{
  return *(ushort *)(*(long *)(this + 0x28) + 0x81) & 1;
}

