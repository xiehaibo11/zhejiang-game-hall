
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseLogicalExpression() */

uint __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseLogicalExpression
          (ParserBase<v8::internal::PreParser> *this)

{
  undefined4 uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  Scanner *this_00;
  uint uVar8;
  ulong uVar9;
  
  bVar2 = *(byte *)(*(long *)(*(long *)(this + 200) + 8) + 0x38);
  if (bVar2 - 0x2c < 9) {
    uVar5 = ParseUnaryOrPrefixExpression(this);
    goto LAB_0117ce74;
  }
  lVar7 = Scope::AsDeclarationScope();
  if (*(byte *)(lVar7 + 0x85) - 10 < 5) {
    bVar3 = true;
    if (bVar2 == 0x60) {
LAB_0117cdb4:
      if (bVar3) {
        uVar5 = ParseAwaitExpression(this);
        goto LAB_0117ce74;
      }
    }
  }
  else if (this[0x105] != (ParserBase<v8::internal::PreParser>)0x0) {
    lVar7 = Scope::AsDeclarationScope();
    bVar3 = *(byte *)(lVar7 + 0x85) - 1 < 2;
    if (bVar2 == 0x60) goto LAB_0117cdb4;
  }
  uVar6 = **(undefined4 **)(*(long *)(this + 200) + 8);
  uVar5 = ParsePrimaryExpression(this);
  lVar7 = *(long *)(*(long *)(this + 200) + 8);
  bVar2 = *(byte *)(lVar7 + 0x38);
  if (bVar2 < 4) {
    uVar5 = DoParseMemberExpressionContinuation(this);
    lVar7 = *(long *)(*(long *)(this + 200) + 8);
    bVar2 = *(byte *)(lVar7 + 0x38);
  }
  uVar8 = (uint)bVar2;
  if (uVar8 < 6) {
    uVar5 = ParseLeftHandSideContinuation(this);
    lVar7 = *(long *)(*(long *)(this + 200) + 8);
    uVar8 = (uint)*(byte *)(lVar7 + 0x38);
  }
  if ((uVar8 - 0x33 < 2) && (*(char *)(lVar7 + 0x4c) == '\0')) {
    uVar5 = ParsePostfixContinuation(this,uVar5,uVar6);
  }
LAB_0117ce74:
  this_00 = *(Scanner **)(this + 200);
  uVar9 = (ulong)*(byte *)(*(long *)(this_00 + 8) + 0x38);
  if ('\x05' < (char)Token::precedence_[uVar9 + (ulong)(byte)this[0x100] * 0x72]) {
    uVar5 = ParseBinaryContinuation
                      (this,uVar5,6,Token::precedence_[uVar9 + (ulong)(byte)this[0x100] * 0x72]);
    this_00 = *(Scanner **)(this + 200);
    uVar9 = (ulong)*(byte *)(*(long *)(this_00 + 8) + 0x38);
  }
  if ((int)uVar9 - 0x20U < 2) {
    uVar5 = ParseBinaryContinuation
                      (this,uVar5,4,
                       (long)(char)Token::precedence_[uVar9 + (ulong)(byte)this[0x100] * 0x72]);
  }
  else if ((int)uVar9 == 0x1f) {
    bVar3 = true;
    do {
      Scanner::Next(this_00);
      bVar2 = *(byte *)(*(long *)(*(long *)(this + 200) + 8) + 0x38);
      if (bVar2 - 0x2c < 9) {
        uVar6 = ParseUnaryOrPrefixExpression(this);
      }
      else {
        lVar7 = Scope::AsDeclarationScope();
        if (*(byte *)(lVar7 + 0x85) - 10 < 5) {
          bVar4 = true;
          if (bVar2 == 0x60) {
LAB_0117cfd0:
            if (bVar4) {
              uVar6 = ParseAwaitExpression(this);
              goto LAB_0117d064;
            }
          }
        }
        else if (this[0x105] != (ParserBase<v8::internal::PreParser>)0x0) {
          lVar7 = Scope::AsDeclarationScope();
          bVar4 = *(byte *)(lVar7 + 0x85) - 1 < 2;
          if (bVar2 == 0x60) goto LAB_0117cfd0;
        }
        uVar1 = **(undefined4 **)(*(long *)(this + 200) + 8);
        uVar6 = ParsePrimaryExpression(this);
        lVar7 = *(long *)(*(long *)(this + 200) + 8);
        bVar2 = *(byte *)(lVar7 + 0x38);
        if (bVar2 < 4) {
          uVar6 = DoParseMemberExpressionContinuation(this);
          lVar7 = *(long *)(*(long *)(this + 200) + 8);
          bVar2 = *(byte *)(lVar7 + 0x38);
        }
        uVar8 = (uint)bVar2;
        if (uVar8 < 6) {
          uVar6 = ParseLeftHandSideContinuation(this);
          lVar7 = *(long *)(*(long *)(this + 200) + 8);
          uVar8 = (uint)*(byte *)(lVar7 + 0x38);
        }
        if ((uVar8 - 0x33 < 2) && (*(char *)(lVar7 + 0x4c) == '\0')) {
          uVar6 = ParsePostfixContinuation(this,uVar6,uVar1);
        }
      }
LAB_0117d064:
      this_00 = *(Scanner **)(this + 200);
      uVar9 = (ulong)*(byte *)(*(long *)(this_00 + 8) + 0x38);
      if ('\x05' < (char)Token::precedence_[uVar9 + (ulong)(byte)this[0x100] * 0x72]) {
        ParseBinaryContinuation
                  (this,uVar6,6,Token::precedence_[uVar9 + (ulong)(byte)this[0x100] * 0x72]);
        this_00 = *(Scanner **)(this + 200);
        uVar9 = (ulong)*(byte *)(*(long *)(this_00 + 8) + 0x38);
      }
      uVar8 = uVar5 & 0xfffffff7;
      uVar5 = 2;
      if (!bVar3) {
        uVar5 = uVar8;
      }
      bVar3 = false;
    } while ((int)uVar9 == 0x1f);
  }
  return uVar5;
}

