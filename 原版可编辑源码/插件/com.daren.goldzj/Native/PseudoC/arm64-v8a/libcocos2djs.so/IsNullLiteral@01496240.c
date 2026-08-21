
/* v8::internal::Expression::IsNullLiteral() const */

bool __thiscall v8::internal::Expression::IsNullLiteral(Expression *this)

{
  return (*(uint *)(this + 4) & 0x7bf) == 0x3a9;
}

