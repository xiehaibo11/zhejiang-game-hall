
/* v8::internal::ParserBase<v8::internal::Parser>::ParseLogicalExpression() */

Expression * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseLogicalExpression
          (ParserBase<v8::internal::Parser> *this)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  Expression *pEVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  bVar2 = *(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38);
  if (bVar2 - 0x2c < 9) {
    pEVar4 = (Expression *)ParseUnaryOrPrefixExpression(this);
    goto LAB_01160128;
  }
  lVar5 = Scope::AsDeclarationScope();
  if (*(byte *)(lVar5 + 0x85) - 10 < 5) {
    bVar3 = true;
    if (bVar2 == 0x60) {
LAB_01160118:
      if (bVar3) {
        pEVar4 = (Expression *)ParseAwaitExpression(this);
        goto LAB_01160128;
      }
    }
  }
  else if (this[0x135] != (ParserBase<v8::internal::Parser>)0x0) {
    lVar5 = Scope::AsDeclarationScope();
    bVar3 = *(byte *)(lVar5 + 0x85) - 1 < 2;
    if (bVar2 == 0x60) goto LAB_01160118;
  }
  iVar1 = **(int **)(*(long *)(this + 0xf8) + 8);
  pEVar4 = (Expression *)ParsePrimaryExpression(this);
  lVar5 = *(long *)(*(long *)(this + 0xf8) + 8);
  bVar2 = *(byte *)(lVar5 + 0x38);
  if (bVar2 < 4) {
    pEVar4 = (Expression *)DoParseMemberExpressionContinuation(this,pEVar4);
    lVar5 = *(long *)(*(long *)(this + 0xf8) + 8);
    bVar2 = *(byte *)(lVar5 + 0x38);
  }
  uVar7 = (uint)bVar2;
  if (uVar7 < 6) {
    pEVar4 = (Expression *)ParseLeftHandSideContinuation(this,pEVar4);
    lVar5 = *(long *)(*(long *)(this + 0xf8) + 8);
    uVar7 = (uint)*(byte *)(lVar5 + 0x38);
  }
  if ((uVar7 - 0x33 < 2) && (*(char *)(lVar5 + 0x4c) == '\0')) {
    pEVar4 = (Expression *)ParsePostfixContinuation(this,pEVar4,iVar1);
  }
LAB_01160128:
  uVar6 = (ulong)*(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38);
  if ('\x05' < (char)Token::precedence_[uVar6 + (ulong)(byte)this[0x130] * 0x72]) {
    pEVar4 = (Expression *)
             ParseBinaryContinuation
                       (this,pEVar4,6,
                        (uint)(byte)Token::precedence_[uVar6 + (ulong)(byte)this[0x130] * 0x72]);
    uVar6 = (ulong)*(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38);
  }
  if (1 < (int)uVar6 - 0x20U) {
    if ((int)uVar6 == 0x1f) {
      pEVar4 = (Expression *)ParseCoalesceExpression(this,pEVar4);
      return pEVar4;
    }
    return pEVar4;
  }
  pEVar4 = (Expression *)
           ParseBinaryContinuation
                     (this,pEVar4,4,
                      (int)(char)Token::precedence_[uVar6 + (ulong)(byte)this[0x130] * 0x72]);
  return pEVar4;
}

