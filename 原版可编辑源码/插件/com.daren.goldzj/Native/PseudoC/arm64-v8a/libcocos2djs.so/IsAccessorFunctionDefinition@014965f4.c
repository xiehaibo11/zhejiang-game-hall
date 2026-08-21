
/* v8::internal::Expression::IsAccessorFunctionDefinition() const */

bool __thiscall v8::internal::Expression::IsAccessorFunctionDefinition(Expression *this)

{
  if ((*(uint *)(this + 4) & 0x3f) == 0x26) {
    return *(byte *)(*(long *)(this + 0x28) + 0x85) - 7 < 2;
  }
  return false;
}

