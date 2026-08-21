
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseFunctionExpression() */

uint __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseFunctionExpression
          (ParserBase<v8::internal::PreParser> *this)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  Scanner *this_00;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  char cVar13;
  
  Scanner::Next(*(Scanner **)(this + 200));
  this_00 = *(Scanner **)(this + 200);
  bVar3 = *(byte *)(*(long *)(this_00 + 8) + 0x38);
  uVar2 = **(undefined4 **)this_00;
  if (bVar3 == 0x28) {
    Scanner::Next(this_00);
    this_00 = *(Scanner **)(this + 200);
    cVar13 = '\x0f';
    bVar3 = *(byte *)(*(long *)(this_00 + 8) + 0x38);
  }
  else {
    cVar13 = '\0';
  }
  if (9 < bVar3 - 0x5c) {
    uVar10 = 0;
    lVar7 = 0;
    uVar8 = 0;
    uVar9 = 0xffffffff;
    goto LAB_0117a1cc;
  }
  bVar5 = Scanner::Next(this_00);
  if ((bVar5 & 0xfc) == 0x5c) {
LAB_0117a0dc:
    lVar7 = Scanner::CurrentSymbol(*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
    piVar11 = (int *)**(undefined8 **)(this + 200);
    cVar4 = (char)piVar11[0xe];
    if (cVar4 == 'l') {
      uVar8 = 8;
    }
    else if (cVar4 == '`') {
      uVar8 = 5;
    }
    else if (cVar4 == '_') {
      uVar8 = 6;
    }
    else {
      lVar12 = *(long *)(*(long *)(this + 0x28) + 0x38);
      if (*(long *)(lVar12 + 0xb0) == lVar7) {
        uVar8 = 4;
      }
      else if (*(long *)(lVar12 + 0x158) == lVar7) {
        uVar8 = 7;
      }
      else {
        iVar1 = (piVar11[1] - *piVar11) + -2;
        if (cVar4 != 'Z') {
          iVar1 = piVar11[1] - *piVar11;
        }
        if (piVar11[6] >> ((*(byte *)(piVar11 + 7) ^ 1) & 0x1f) == iVar1) {
          if (*(long *)(lVar12 + 0x118) == lVar7) {
            uVar8 = 2;
          }
          else {
            uVar8 = 3;
            if (*(long *)(lVar12 + 0x70) != lVar7) {
              uVar8 = 1;
            }
          }
        }
        else {
          uVar8 = 1;
        }
      }
    }
  }
  else {
    if (bVar5 == 0x61) {
      if (3 < (byte)(cVar13 - 0xdU)) {
LAB_0117a27c:
        if ((*(ushort *)(*(long *)this + 0x81) & 1) == 0) goto LAB_0117a0dc;
      }
    }
    else if (bVar5 == 0x60) {
      if ((4 < (byte)(cVar13 - 10U)) && (this[0x71] == (ParserBase<v8::internal::PreParser>)0x0))
      goto LAB_0117a0dc;
    }
    else if ((byte)(bVar5 + 0x9f) < 5) goto LAB_0117a27c;
    ReportUnexpectedToken(this);
    uVar8 = 1;
    lVar7 = *(long *)(*(long *)(*(long *)(this + 0x28) + 0x38) + 0x110);
    piVar11 = (int *)**(undefined8 **)(this + 200);
  }
  uVar9 = *(undefined8 *)piVar11;
  uVar10 = 1;
LAB_0117a1cc:
  uVar6 = PreParser::ParseFunctionLiteral
                    ((PreParser *)this,lVar7,uVar8,uVar9,(ulong)(4 < (bVar3 - 0x61 & 0xff)) << 1,
                     cVar13,uVar2,uVar10,*(byte *)(*(long *)this + 0x81) & 1);
  if ((uVar6 & 7) == 0) {
    uVar6 = 1;
  }
  return uVar6;
}

