
/* v8::internal::Expression::IsAnonymousFunctionDefinition() const */

uint __thiscall v8::internal::Expression::IsAnonymousFunctionDefinition(Expression *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 4);
  if ((uVar1 & 0x3f) == 0x1f) {
    return uVar1 >> 9 & 1;
  }
  if ((uVar1 & 0x3f) == 0x26) {
    return (uint)((uVar1 & 0x380) == 0);
  }
  return 0;
}

