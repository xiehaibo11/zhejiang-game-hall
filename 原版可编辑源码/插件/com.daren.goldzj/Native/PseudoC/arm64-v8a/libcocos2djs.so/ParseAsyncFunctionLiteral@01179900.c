
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseAsyncFunctionLiteral() */

uint __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseAsyncFunctionLiteral
          (ParserBase<v8::internal::PreParser> *this)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  Scanner *pSVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int *piVar12;
  long lVar13;
  int iVar14;
  
  pSVar8 = *(Scanner **)(this + 200);
  piVar12 = *(int **)pSVar8;
  iVar14 = *piVar12;
  iVar1 = (piVar12[1] - iVar14) + -2;
  if ((char)piVar12[0xe] != 'Z') {
    iVar1 = piVar12[1] - iVar14;
  }
  if (piVar12[6] >> ((*(byte *)(piVar12 + 7) ^ 1) & 0x1f) != iVar1) {
    ReportUnexpectedToken(this,0x6e);
    pSVar8 = *(Scanner **)(this + 200);
    iVar14 = **(int **)pSVar8;
  }
  Scanner::Next(pSVar8);
  pSVar8 = *(Scanner **)(this + 200);
  bVar2 = *(byte *)(*(long *)(pSVar8 + 8) + 0x38);
  bVar5 = bVar2 == 0x28;
  if (bVar5) {
    Scanner::Next(pSVar8);
    pSVar8 = *(Scanner **)(this + 200);
    bVar2 = *(byte *)(*(long *)(pSVar8 + 8) + 0x38);
  }
  cVar3 = *(char *)((long)&FunctionKindForImpl(bool,v8::base::Flags<v8::internal::ParseFunctionFlag,int>)
                           ::kFunctionKinds + (ulong)bVar5 * 2 + 1);
  if (9 < bVar2 - 0x5c) {
    uVar11 = 0;
    lVar9 = 0;
    uVar10 = 0;
    goto LAB_01179aa4;
  }
  bVar6 = Scanner::Next(pSVar8);
  if ((bVar6 & 0xfc) == 0x5c) {
LAB_011799bc:
    lVar9 = Scanner::CurrentSymbol(*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
    pSVar8 = *(Scanner **)(this + 200);
    piVar12 = *(int **)pSVar8;
    cVar4 = (char)piVar12[0xe];
    if (cVar4 == 'l') {
      uVar10 = 8;
    }
    else if (cVar4 == '`') {
      uVar10 = 5;
    }
    else if (cVar4 == '_') {
      uVar10 = 6;
    }
    else {
      lVar13 = *(long *)(*(long *)(this + 0x28) + 0x38);
      if (*(long *)(lVar13 + 0xb0) == lVar9) {
        uVar10 = 4;
      }
      else if (*(long *)(lVar13 + 0x158) == lVar9) {
        uVar10 = 7;
      }
      else {
        iVar1 = (piVar12[1] - *piVar12) + -2;
        if (cVar4 != 'Z') {
          iVar1 = piVar12[1] - *piVar12;
        }
        if (piVar12[6] >> ((*(byte *)(piVar12 + 7) ^ 1) & 0x1f) == iVar1) {
          if (*(long *)(lVar13 + 0x118) == lVar9) {
            uVar10 = 2;
          }
          else {
            uVar10 = 3;
            if (*(long *)(lVar13 + 0x70) != lVar9) {
              uVar10 = 1;
            }
          }
        }
        else {
          uVar10 = 1;
        }
      }
    }
    uVar11 = 1;
  }
  else {
    if (bVar6 == 0x61) {
      if (3 < (byte)(cVar3 - 0xdU)) {
LAB_01179b78:
        if ((*(ushort *)(*(long *)this + 0x81) & 1) == 0) goto LAB_011799bc;
      }
    }
    else if (bVar6 == 0x60) {
      if ((4 < (byte)(cVar3 - 10U)) && (this[0x71] == (ParserBase<v8::internal::PreParser>)0x0))
      goto LAB_011799bc;
    }
    else if ((byte)(bVar6 + 0x9f) < 5) goto LAB_01179b78;
    ReportUnexpectedToken(this);
    uVar11 = 1;
    uVar10 = 1;
    lVar9 = *(long *)(*(long *)(*(long *)(this + 0x28) + 0x38) + 0x110);
    pSVar8 = *(Scanner **)(this + 200);
  }
LAB_01179aa4:
  uVar7 = PreParser::ParseFunctionLiteral
                    ((PreParser *)this,lVar9,uVar10,**(undefined8 **)pSVar8,
                     (ulong)(4 < (bVar2 - 0x61 & 0xff)) << 1,cVar3,iVar14,uVar11,
                     *(byte *)(*(long *)this + 0x81) & 1);
  if ((uVar7 & 7) == 0) {
    uVar7 = 1;
  }
  return uVar7;
}

