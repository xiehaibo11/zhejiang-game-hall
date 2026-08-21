
/* v8::internal::Expression::IsSmiLiteral() const */

bool __thiscall v8::internal::Expression::IsSmiLiteral(Expression *this)

{
  return (*(uint *)(this + 4) & 0x7bf) == 0x29;
}

