
/* v8::internal::ParserBase<v8::internal::Parser>::ParseFunctionExpression() */

long __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseFunctionExpression
          (ParserBase<v8::internal::Parser> *this)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  Scanner *this_00;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  
  Scanner::Next(*(Scanner **)(this + 0xf8));
  this_00 = *(Scanner **)(this + 0xf8);
  bVar2 = *(byte *)(*(long *)(this_00 + 8) + 0x38);
  uVar1 = **(undefined4 **)this_00;
  if (bVar2 == 0x28) {
    Scanner::Next(this_00);
    this_00 = *(Scanner **)(this + 0xf8);
    cVar8 = '\x0f';
    bVar2 = *(byte *)(*(long *)(this_00 + 8) + 0x38);
  }
  else {
    cVar8 = '\0';
  }
  if (*(int *)(this + 0x4a8) == -1) {
    if (bVar2 - 0x5c < 10) {
      bVar3 = Scanner::Next(this_00);
      if ((bVar3 & 0xfc) == 0x5c) {
LAB_01163930:
        uVar5 = Scanner::CurrentSymbol
                          (*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
      }
      else {
        if (bVar3 == 0x61) {
          if (3 < (byte)(cVar8 - 0xdU)) {
LAB_01163a0c:
            if ((*(ushort *)(*(long *)this + 0x81) & 1) == 0) goto LAB_01163930;
          }
        }
        else if (bVar3 == 0x60) {
          if ((4 < (byte)(cVar8 - 10U)) && (this[0xa1] == (ParserBase<v8::internal::Parser>)0x0))
          goto LAB_01163930;
        }
        else if ((byte)(bVar3 + 0x9f) < 5) goto LAB_01163a0c;
        ReportUnexpectedToken(this);
        uVar5 = *(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
      }
      uVar7 = 1;
      uVar6 = *(undefined8 *)**(undefined8 **)(this + 0xf8);
      goto LAB_01163960;
    }
  }
  else {
    Scanner::Next(this_00);
  }
  uVar7 = 0;
  uVar5 = 0;
  uVar6 = 0xffffffff;
LAB_01163960:
  lVar4 = Parser::ParseFunctionLiteral
                    ((Parser *)this,uVar5,uVar6,(ulong)(4 < (bVar2 - 0x61 & 0xff)) << 1,cVar8,uVar1,
                     uVar7,*(ushort *)(*(long *)this + 0x81) & 1,0);
  if (lVar4 == 0) {
    lVar4 = *(long *)(this + 0x88);
  }
  return lVar4;
}

