
/* v8::internal::ParserBase<v8::internal::Parser>::ParseAsyncFunctionLiteral() */

long __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseAsyncFunctionLiteral
          (ParserBase<v8::internal::Parser> *this)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  Scanner *pSVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  int iVar11;
  
  pSVar6 = *(Scanner **)(this + 0xf8);
  piVar10 = *(int **)pSVar6;
  iVar11 = *piVar10;
  iVar1 = (piVar10[1] - iVar11) + -2;
  if ((char)piVar10[0xe] != 'Z') {
    iVar1 = piVar10[1] - iVar11;
  }
  if (piVar10[6] >> ((*(byte *)(piVar10 + 7) ^ 1) & 0x1f) != iVar1) {
    ReportUnexpectedToken(this,0x6e);
    pSVar6 = *(Scanner **)(this + 0xf8);
    iVar11 = **(int **)pSVar6;
  }
  Scanner::Next(pSVar6);
  pSVar6 = *(Scanner **)(this + 0xf8);
  bVar2 = *(byte *)(*(long *)(pSVar6 + 8) + 0x38);
  bVar4 = bVar2 == 0x28;
  if (bVar4) {
    Scanner::Next(pSVar6);
    pSVar6 = *(Scanner **)(this + 0xf8);
    bVar2 = *(byte *)(*(long *)(pSVar6 + 8) + 0x38);
  }
  cVar3 = (&DAT_019db490)[(ulong)bVar4 * 2];
  if (*(int *)(this + 0x4a8) == -1) {
    if (bVar2 - 0x5c < 10) {
      bVar5 = Scanner::Next(pSVar6);
      if ((bVar5 & 0xfc) == 0x5c) {
LAB_01163060:
        uVar8 = Scanner::CurrentSymbol
                          (*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
      }
      else {
        if (bVar5 == 0x61) {
          if (3 < (byte)(cVar3 - 0xdU)) {
LAB_01163154:
            if ((*(ushort *)(*(long *)this + 0x81) & 1) == 0) goto LAB_01163060;
          }
        }
        else if (bVar5 == 0x60) {
          if ((4 < (byte)(cVar3 - 10U)) && (this[0xa1] == (ParserBase<v8::internal::Parser>)0x0))
          goto LAB_01163060;
        }
        else if ((byte)(bVar5 + 0x9f) < 5) goto LAB_01163154;
        ReportUnexpectedToken(this);
        uVar8 = *(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
      }
      uVar9 = 1;
      goto LAB_01163080;
    }
  }
  else {
    Scanner::Next(pSVar6);
  }
  uVar9 = 0;
  uVar8 = 0;
LAB_01163080:
  lVar7 = Parser::ParseFunctionLiteral
                    ((Parser *)this,uVar8,*(undefined8 *)**(undefined8 **)(this + 0xf8),
                     (ulong)(4 < (bVar2 - 0x61 & 0xff)) << 1,cVar3,iVar11,uVar9,
                     *(ushort *)(*(long *)this + 0x81) & 1,0);
  if (lVar7 == 0) {
    lVar7 = *(long *)(this + 0x88);
  }
  return lVar7;
}

