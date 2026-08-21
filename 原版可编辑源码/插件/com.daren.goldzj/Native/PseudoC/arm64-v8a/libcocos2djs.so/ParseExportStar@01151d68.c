
/* v8::internal::Parser::ParseExportStar() */

void __thiscall v8::internal::Parser::ParseExportStar(Parser *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *piVar8;
  Scope *pSVar9;
  Zone *this_00;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_54 [4];
  char local_38 [4];
  char local_34 [4];
  
  iVar1 = **(int **)*(Scanner **)(this + 0xf8);
  Scanner::Next(*(Scanner **)(this + 0xf8));
  if (FLAG_harmony_namespace_exports != '\0') {
    piVar8 = *(int **)(*(Scanner **)(this + 0xf8) + 8);
    if ((((char)piVar8[0xe] == '\\') &&
        (piVar8[6] >> ((*(byte *)(piVar8 + 7) ^ 1) & 0x1f) == piVar8[1] - *piVar8)) &&
       (lVar11 = *(long *)(*(long *)(*(AstValueFactory **)(this + 0x60) + 0x38) + 0x78),
       lVar4 = Scanner::NextSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60)),
       lVar4 == lVar11)) {
      if (FLAG_harmony_namespace_exports != '\0') {
        ParserBase<v8::internal::Parser>::ExpectContextualKeyword
                  ((ParserBase<v8::internal::Parser> *)this,
                   *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x78),(char *)0x0,
                   -1);
        uVar6 = Scanner::Next(*(Scanner **)(this + 0xf8));
        if (((byte)Token::token_flags[uVar6 & 0xff] >> 1 & 1) == 0) {
          ParserBase<v8::internal::Parser>::ReportUnexpectedToken
                    ((ParserBase<v8::internal::Parser> *)this);
          uVar10 = *(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
        }
        else {
          uVar10 = Scanner::CurrentSymbol
                             (*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
        }
        uVar5 = *(undefined8 *)**(undefined8 **)(this + 0xf8);
        uVar12 = NextInternalNamespaceExportName();
        this_00 = *(Zone **)(this + 0x68);
        piVar8 = *(int **)(this_00 + 0x10);
        pSVar9 = *(Scope **)this;
        iVar2 = *(int *)(**(long **)(this + 0xf8) + 4);
        if ((ulong)(*(long *)(this_00 + 0x18) - (long)piVar8) < 0x18) {
          piVar8 = (int *)Zone::NewExpand(this_00,0x18);
        }
        else {
          *(int **)(this_00 + 0x10) = piVar8 + 6;
        }
        piVar8[4] = 0;
        piVar8[5] = 0;
        *piVar8 = iVar1;
        piVar8[1] = 0;
        local_34[0] = '\x01';
        local_38[0] = '\0';
        Scope::DeclareVariable(pSVar9,piVar8,uVar12,iVar1,1,0,1,auStack_54,local_38,local_34);
        if (local_34[0] == '\0') {
          if (iVar2 == -1) {
            iVar2 = iVar1 + 1;
          }
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(this + 0xb0),iVar1,iVar2,0xb0,
                     *(undefined8 *)(*(long *)(piVar8 + 2) + 8));
          lVar4 = *(long *)(this + 0x158);
          if (*(char *)(lVar4 + 0x30) == '\0') {
            *(undefined4 *)(this + 0x160) = 0xffffffff;
            *(undefined1 *)(lVar4 + 0x30) = 1;
            *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar4 + 0x18);
            this[0x1a0] = (Parser)0x6d;
            this[0x1f0] = (Parser)0x6d;
            this[0x240] = (Parser)0x6d;
          }
        }
        else if (local_38[0] != '\0') {
          *(int *)(this + 0x368) = *(int *)(this + 0x368) + 1;
        }
        ParserBase<v8::internal::Parser>::ExpectContextualKeyword
                  ((ParserBase<v8::internal::Parser> *)this,
                   *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x120),(char *)0x0,
                   -1);
        uVar13 = **(undefined8 **)(*(Scanner **)(this + 0xf8) + 8);
        uVar3 = Scanner::Next(*(Scanner **)(this + 0xf8));
        if ((uVar3 & 0xff) != 0x5a) {
          ParserBase<v8::internal::Parser>::ReportUnexpectedToken
                    ((ParserBase<v8::internal::Parser> *)this,uVar3);
        }
        uVar7 = Scanner::CurrentSymbol
                          (*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
        ParserBase<v8::internal::Parser>::ExpectSemicolon((ParserBase<v8::internal::Parser> *)this);
        lVar4 = Scope::AsModuleScope();
        SourceTextModuleDescriptor::AddStarImport
                  (*(SourceTextModuleDescriptor **)(lVar4 + 0xe0),uVar12,uVar7,0xffffffff,uVar13,
                   *(undefined8 *)(this + 0xb8));
        lVar4 = Scope::AsModuleScope();
        SourceTextModuleDescriptor::AddExport
                  (*(SourceTextModuleDescriptor **)(lVar4 + 0xe0),uVar12,uVar10,uVar5,
                   *(undefined8 *)(this + 0xb8));
      }
      return;
    }
  }
  uVar10 = *(undefined8 *)**(undefined8 **)(this + 0xf8);
  ParserBase<v8::internal::Parser>::ExpectContextualKeyword
            ((ParserBase<v8::internal::Parser> *)this,
             *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x120),(char *)0x0,-1);
  uVar12 = **(undefined8 **)(*(Scanner **)(this + 0xf8) + 8);
  uVar3 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar3 & 0xff) != 0x5a) {
    ParserBase<v8::internal::Parser>::ReportUnexpectedToken
              ((ParserBase<v8::internal::Parser> *)this,uVar3);
  }
  uVar5 = Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
  ParserBase<v8::internal::Parser>::ExpectSemicolon((ParserBase<v8::internal::Parser> *)this);
  lVar4 = Scope::AsModuleScope();
  SourceTextModuleDescriptor::AddStarExport
            (*(SourceTextModuleDescriptor **)(lVar4 + 0xe0),uVar5,uVar10,uVar12,
             *(undefined8 *)(this + 0xb8));
  return;
}

