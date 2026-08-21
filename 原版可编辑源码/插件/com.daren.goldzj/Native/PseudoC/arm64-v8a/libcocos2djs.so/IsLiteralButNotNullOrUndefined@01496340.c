
/* v8::internal::Expression::IsLiteralButNotNullOrUndefined() const */

bool __thiscall v8::internal::Expression::IsLiteralButNotNullOrUndefined(Expression *this)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(this + 4);
  bVar2 = false;
  if (((uVar1 & 0x3f) == 0x29) && ((uVar1 & 0x7bf) != 0x3a9)) {
    bVar2 = (uVar1 & 0x780) != 0x300;
  }
  return bVar2;
}

