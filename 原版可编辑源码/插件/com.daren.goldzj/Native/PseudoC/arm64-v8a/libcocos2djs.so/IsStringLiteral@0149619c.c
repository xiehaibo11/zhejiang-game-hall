
/* v8::internal::Expression::IsStringLiteral() const */

bool __thiscall v8::internal::Expression::IsStringLiteral(Expression *this)

{
  return (*(uint *)(this + 4) & 0x7bf) == 0x1a9;
}

