
/* v8::internal::Expression::IsUndefinedLiteral() const */

ulong __thiscall v8::internal::Expression::IsUndefinedLiteral(Expression *this)

{
  Expression *pEVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = *(uint *)(this + 4);
  if ((uVar2 & 0x3f) == 0x35) {
    lVar4 = *(long *)(this + 8);
    if ((lVar4 != 0) && ((*(ushort *)(lVar4 + 0x28) & 0x380) == 0)) {
      pEVar1 = this + 8;
      if ((uVar2 & 0x100) != 0) {
        pEVar1 = (Expression *)(lVar4 + 8);
      }
      uVar3 = AstRawString::IsOneByteEqualTo(*(AstRawString **)pEVar1,"undefined");
      return uVar3;
    }
  }
  else if ((uVar2 & 0x3f) == 0x29) {
    return (ulong)((uVar2 & 0x780) == 0x300);
  }
  return 0;
}

