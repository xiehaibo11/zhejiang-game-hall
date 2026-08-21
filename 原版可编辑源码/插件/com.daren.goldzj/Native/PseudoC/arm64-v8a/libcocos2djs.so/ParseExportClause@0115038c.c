
/* v8::internal::Parser::ParseExportClause(v8::internal::Scanner::Location*) */

ZoneChunkList<v8::internal::Parser::ExportClauseData> * __thiscall
v8::internal::Parser::ParseExportClause(Parser *this,Location *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  Zone *this_00;
  Scanner *pSVar5;
  ulong uVar6;
  long lVar7;
  ZoneChunkList<v8::internal::Parser::ExportClauseData> *this_01;
  AstValueFactory *pAVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uVar11;
  long lVar12;
  long local_68;
  long lStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  
  this_00 = *(Zone **)(this + 0xb8);
  this_01 = *(ZoneChunkList<v8::internal::Parser::ExportClauseData> **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x20) {
    this_01 = (ZoneChunkList<v8::internal::Parser::ExportClauseData> *)Zone::NewExpand(this_00,0x20)
    ;
  }
  else {
    *(ZoneChunkList<v8::internal::Parser::ExportClauseData> **)(this_00 + 0x10) = this_01 + 0x20;
  }
  uVar9 = *(undefined8 *)(this + 0xb8);
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined8 *)(this_01 + 0x18) = 0;
  *(undefined8 *)this_01 = uVar9;
  *(undefined8 *)(this_01 + 8) = 0;
  uVar3 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar3 & 0xff) != 8) {
    ParserBase<v8::internal::Parser>::ReportUnexpectedToken
              ((ParserBase<v8::internal::Parser> *)this,uVar3);
  }
  pSVar5 = *(Scanner **)(this + 0xf8);
  bVar2 = *(byte *)(*(long *)(pSVar5 + 8) + 0x38);
  do {
    if (bVar2 == 0xd) {
LAB_011505b8:
      uVar3 = Scanner::Next(pSVar5);
      if ((uVar3 & 0xff) != 0xd) {
        ParserBase<v8::internal::Parser>::ReportUnexpectedToken
                  ((ParserBase<v8::internal::Parser> *)this,uVar3);
      }
      return this_01;
    }
    if (((*(uint *)(param_1 + 4) < *(uint *)param_1) && ((bVar2 & 0xfc) != 0x5c)) &&
       ((bVar2 != 0x60 || (this[0xa1] != (Parser)0x0)))) {
      *(undefined8 *)param_1 = **(undefined8 **)pSVar5;
      pSVar5 = *(Scanner **)(this + 0xf8);
    }
    uVar6 = Scanner::Next(pSVar5);
    if (((byte)Token::token_flags[uVar6 & 0xff] >> 1 & 1) == 0) {
      ParserBase<v8::internal::Parser>::ReportUnexpectedToken
                ((ParserBase<v8::internal::Parser> *)this);
      pAVar8 = *(AstValueFactory **)(this + 0x60);
      lVar10 = *(long *)(pAVar8 + 0x38);
      lVar7 = *(long *)(lVar10 + 0x110);
    }
    else {
      lVar7 = Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
      pAVar8 = *(AstValueFactory **)(this + 0x60);
      lVar10 = *(long *)(pAVar8 + 0x38);
    }
    pSVar5 = *(Scanner **)(this + 0xf8);
    piVar1 = *(int **)(pSVar5 + 8);
    uVar4 = **(undefined4 **)pSVar5;
    uVar11 = (*(undefined4 **)pSVar5)[1];
    if ((((char)piVar1[0xe] == '\\') &&
        (piVar1[6] >> ((*(byte *)(piVar1 + 7) ^ 1) & 0x1f) == piVar1[1] - *piVar1)) &&
       (lVar12 = *(long *)(lVar10 + 0x78), lVar10 = Scanner::NextSymbol(pSVar5,pAVar8),
       lVar10 == lVar12)) {
      Scanner::Next(*(Scanner **)(this + 0xf8));
      uVar6 = Scanner::Next(*(Scanner **)(this + 0xf8));
      if (((byte)Token::token_flags[uVar6 & 0xff] >> 1 & 1) == 0) {
        ParserBase<v8::internal::Parser>::ReportUnexpectedToken
                  ((ParserBase<v8::internal::Parser> *)this);
        lVar10 = *(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
      }
      else {
        lVar10 = Scanner::CurrentSymbol
                           (*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
      }
      uVar11 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
    }
    else {
      lVar10 = 0;
    }
    local_68 = lVar7;
    if (lVar10 != 0) {
      local_68 = lVar10;
    }
    lStack_60 = lVar7;
    local_58 = uVar4;
    uStack_54 = uVar11;
    ZoneChunkList<v8::internal::Parser::ExportClauseData>::push_back
              (this_01,(ExportClauseData *)&local_68);
    pSVar5 = *(Scanner **)(this + 0xf8);
    if (*(char *)(*(long *)(pSVar5 + 8) + 0x38) == '\r') goto LAB_011505b8;
    if (*(char *)(*(long *)(pSVar5 + 8) + 0x38) != '\x1e') {
      uVar4 = Scanner::Next(pSVar5);
      ParserBase<v8::internal::Parser>::ReportUnexpectedToken
                ((ParserBase<v8::internal::Parser> *)this,uVar4);
      pSVar5 = *(Scanner **)(this + 0xf8);
      goto LAB_011505b8;
    }
    Scanner::Next(pSVar5);
    pSVar5 = *(Scanner **)(this + 0xf8);
    bVar2 = *(byte *)(*(long *)(pSVar5 + 8) + 0x38);
  } while( true );
}

