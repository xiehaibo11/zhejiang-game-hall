
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseBinaryContinuation(v8::internal::PreParserExpression,
   int, int) */

undefined4 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseBinaryContinuation
          (ParserBase<v8::internal::PreParser> *this,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  Scanner *this_00;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  this_00 = *(Scanner **)(this + 200);
  uVar9 = (ulong)(byte)this[0x100];
  do {
    if (param_4 ==
        (char)Token::precedence_[(ulong)*(byte *)(*(long *)(this_00 + 8) + 0x38) + uVar9 * 0x72]) {
      do {
        cVar5 = Scanner::Next(this_00);
        bVar3 = *(byte *)(*(long *)(*(long *)(this + 200) + 8) + 0x38);
        iVar1 = param_4;
        if (cVar5 != '+') {
          iVar1 = param_4 + 1;
        }
        if (bVar3 - 0x2c < 9) {
          uVar6 = ParseUnaryOrPrefixExpression(this);
        }
        else {
          lVar7 = Scope::AsDeclarationScope();
          if (*(byte *)(lVar7 + 0x85) - 10 < 5) {
            bVar4 = true;
            if (bVar3 == 0x60) {
LAB_0117d478:
              if (bVar4) {
                uVar6 = ParseAwaitExpression(this);
                goto LAB_0117d53c;
              }
            }
          }
          else if (this[0x105] != (ParserBase<v8::internal::PreParser>)0x0) {
            lVar7 = Scope::AsDeclarationScope();
            bVar4 = *(byte *)(lVar7 + 0x85) - 1 < 2;
            if (bVar3 == 0x60) goto LAB_0117d478;
          }
          uVar2 = **(undefined4 **)(*(long *)(this + 200) + 8);
          uVar6 = ParsePrimaryExpression(this);
          lVar7 = *(long *)(*(long *)(this + 200) + 8);
          bVar3 = *(byte *)(lVar7 + 0x38);
          if (bVar3 < 4) {
            uVar6 = DoParseMemberExpressionContinuation(this);
            lVar7 = *(long *)(*(long *)(this + 200) + 8);
            bVar3 = *(byte *)(lVar7 + 0x38);
          }
          uVar8 = (uint)bVar3;
          if (uVar8 < 6) {
            uVar6 = ParseLeftHandSideContinuation(this);
            lVar7 = *(long *)(*(long *)(this + 200) + 8);
            uVar8 = (uint)*(byte *)(lVar7 + 0x38);
          }
          if ((uVar8 - 0x33 < 2) && (*(char *)(lVar7 + 0x4c) == '\0')) {
            uVar6 = ParsePostfixContinuation(this,uVar6,uVar2);
          }
        }
LAB_0117d53c:
        this_00 = *(Scanner **)(this + 200);
        uVar9 = (ulong)(byte)this[0x100];
        cVar5 = Token::precedence_[(ulong)*(byte *)(*(long *)(this_00 + 8) + 0x38) + uVar9 * 0x72];
        if (iVar1 <= cVar5) {
          ParseBinaryContinuation(this,uVar6,iVar1);
          this_00 = *(Scanner **)(this + 200);
          uVar9 = (ulong)(byte)this[0x100];
          cVar5 = Token::precedence_[(ulong)*(byte *)(*(long *)(this_00 + 8) + 0x38) + uVar9 * 0x72]
          ;
        }
      } while (param_4 == cVar5);
      param_2 = 2;
    }
    bVar4 = param_4 <= param_3;
    param_4 = param_4 + -1;
    if (bVar4) {
      return param_2;
    }
  } while( true );
}

