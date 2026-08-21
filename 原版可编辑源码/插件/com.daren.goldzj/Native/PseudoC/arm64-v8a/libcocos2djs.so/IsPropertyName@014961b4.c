
/* v8::internal::Expression::IsPropertyName() const */

uint __thiscall v8::internal::Expression::IsPropertyName(Expression *this)

{
  uint uVar1;
  uint uStack_14;
  
  if ((*(uint *)(this + 4) & 0x7bf) == 0x1a9) {
    uVar1 = AstRawString::AsArrayIndex(*(AstRawString **)(this + 8),&uStack_14);
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}

