
/* v8::internal::Expression::IsValidReferenceExpression() const */

bool __thiscall v8::internal::Expression::IsValidReferenceExpression(Expression *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 4) & 0x3f;
  if (uVar1 == 0x2c) {
    return true;
  }
  if (uVar1 == 0x35) {
    return (*(uint *)(this + 4) & 0x400) == 0;
  }
  return false;
}

