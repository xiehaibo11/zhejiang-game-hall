
/* v8::internal::Expression::IsTheHoleLiteral() const */

bool __thiscall v8::internal::Expression::IsTheHoleLiteral(Expression *this)

{
  return (*(uint *)(this + 4) & 0x7bf) == 0x429;
}

