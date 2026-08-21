
/* v8::internal::ParserBase<v8::internal::PreParser>::DoParseMemberExpressionContinuation(v8::internal::PreParserExpression)
    */

uint __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::DoParseMemberExpressionContinuation
          (ParserBase<v8::internal::PreParser> *this,uint param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  ParserBase<v8::internal::PreParser> PVar3;
  uint uVar4;
  uint uVar5;
  Scanner *this_00;
  undefined4 *puVar6;
  
  this_00 = *(Scanner **)(this + 200);
  puVar6 = *(undefined4 **)(this_00 + 8);
  bVar2 = *(byte *)(puVar6 + 0xe);
  do {
    if (bVar2 == 2) {
      Scanner::Next(this_00);
      uVar4 = ParsePropertyOrPrivatePropertyName(this);
      if ((uVar4 & 7) == 3) {
        uVar5 = param_2 & 0xf7;
        if ((uVar4 & 0xff0) == 0x80) {
          param_2 = 0x22;
          if (uVar5 != 2) {
            param_2 = 0x42;
          }
        }
        else {
          if (uVar5 == 2) goto LAB_0117fb6c;
LAB_0117fba4:
          param_2 = 0x32;
        }
      }
      else {
        if ((param_2 & 0xf7) != 2) goto LAB_0117fba4;
LAB_0117fb6c:
        param_2 = 0x12;
      }
    }
    else {
      if (bVar2 != 3) {
        puVar1 = *(undefined4 **)this_00;
        if (*(char *)(*(undefined4 **)this_00 + 0xe) != '\\') {
          puVar1 = puVar6;
        }
        param_2 = ParseTemplateLiteral(this,param_2,*puVar1,1);
        goto LAB_0117fab4;
      }
      Scanner::Next(this_00);
      PVar3 = this[0x100];
      this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
      uVar4 = ParseExpressionCoverGrammar(this);
      if ((uVar4 & 7) == 3) {
        if ((uVar4 & 0xff0) == 0x80) {
          uVar4 = 0x22;
          if ((param_2 & 0xf7) != 2) {
            uVar4 = 0x42;
          }
        }
        else {
          if ((param_2 & 0xf7) == 2) goto LAB_0117fb58;
LAB_0117fb7c:
          uVar4 = 0x32;
        }
      }
      else {
        if ((param_2 & 0xf7) != 2) goto LAB_0117fb7c;
LAB_0117fb58:
        uVar4 = 0x12;
      }
      uVar5 = Scanner::Next(*(Scanner **)(this + 200));
      if ((uVar5 & 0xff) != 7) {
        ReportUnexpectedToken(this,uVar5);
      }
      this[0x100] = PVar3;
      param_2 = uVar4;
    }
LAB_0117fab4:
    this_00 = *(Scanner **)(this + 200);
    puVar6 = *(undefined4 **)(this_00 + 8);
    bVar2 = *(byte *)(puVar6 + 0xe);
    if (3 < bVar2) {
      return param_2;
    }
  } while( true );
}

