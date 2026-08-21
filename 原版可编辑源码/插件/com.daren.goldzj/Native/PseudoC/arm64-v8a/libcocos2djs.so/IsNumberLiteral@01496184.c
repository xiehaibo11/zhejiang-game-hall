
/* v8::internal::Expression::IsNumberLiteral() const */

bool __thiscall v8::internal::Expression::IsNumberLiteral(Expression *this)

{
  return (*(uint *)(this + 4) & 0x73f) == 0x29;
}

