
/* v8::internal::Expression::IsConciseMethodDefinition() const */

bool __thiscall v8::internal::Expression::IsConciseMethodDefinition(Expression *this)

{
  if ((*(uint *)(this + 4) & 0x3f) == 0x26) {
    return (*(byte *)(*(long *)(this + 0x28) + 0x85) & 0xfe) == 0xc ||
           *(byte *)(*(long *)(this + 0x28) + 0x85) - 0x10 < 3;
  }
  return false;
}

