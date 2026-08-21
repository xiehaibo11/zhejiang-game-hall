
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseImportExpressions() */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseImportExpressions
          (ParserBase<v8::internal::PreParser> *this)

{
  int iVar1;
  int iVar2;
  ParserBase<v8::internal::PreParser> PVar3;
  uint uVar4;
  undefined4 uVar5;
  Scanner *this_00;
  PendingCompilationErrorHandler *pPVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  
  Scanner::Next(*(Scanner **)(this + 200));
  this_00 = *(Scanner **)(this + 200);
  piVar8 = *(int **)this_00;
  if ((this[0x103] == (ParserBase<v8::internal::PreParser>)0x0) ||
     (*(char *)(*(long *)(this_00 + 8) + 0x38) != '\x02')) {
    if (*(char *)(*(long *)(this_00 + 8) + 0x38) != '\x05') {
      if (this[0x71] != (ParserBase<v8::internal::PreParser>)0x0) {
        uVar5 = Scanner::Next(this_00);
        ReportUnexpectedToken(this,uVar5);
        return 1;
      }
      iVar2 = *piVar8;
      iVar1 = piVar8[1];
      pPVar6 = *(PendingCompilationErrorHandler **)(this + 0x80);
      uVar7 = 0x3a;
      goto LAB_0117a6a4;
    }
    Scanner::Next(this_00);
    if (*(char *)((*(undefined8 **)(this + 200))[1] + 0x38) != '\x06') {
      PVar3 = this[0x100];
      this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
      ParseAssignmentExpressionCoverGrammar(this);
      uVar4 = Scanner::Next(*(Scanner **)(this + 200));
      if ((uVar4 & 0xff) != 6) {
        ReportUnexpectedToken(this,uVar4);
      }
      this[0x100] = PVar3;
      return 2;
    }
    piVar8 = (int *)**(undefined8 **)(this + 200);
    pPVar6 = *(PendingCompilationErrorHandler **)(this + 0x80);
    uVar7 = 0x3c;
  }
  else {
    iVar2 = *piVar8;
    Scanner::Next(this_00);
    ExpectContextualKeyword
              (this,*(AstRawString **)(*(long *)(*(long *)(this + 0x28) + 0x38) + 0x150),
               "import.meta",iVar2);
    if (this[0x71] != (ParserBase<v8::internal::PreParser>)0x0) {
      return 2;
    }
    pPVar6 = *(PendingCompilationErrorHandler **)(this + 0x80);
    uVar7 = 0x3b;
    piVar8 = (int *)**(undefined8 **)(this + 200);
  }
  iVar2 = *piVar8;
  iVar1 = piVar8[1];
LAB_0117a6a4:
  PendingCompilationErrorHandler::ReportMessageAt(pPVar6,iVar2,iVar1,uVar7,0);
  lVar9 = *(long *)(this + 200);
  lVar10 = *(long *)(lVar9 + 0x18);
  if (*(char *)(lVar10 + 0x30) == '\0') {
    *(undefined4 *)(lVar9 + 0x20) = 0xffffffff;
    *(undefined1 *)(lVar10 + 0x30) = 1;
    *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
    *(undefined1 *)(lVar9 + 0x60) = 0x6d;
    *(undefined1 *)(lVar9 + 0xb0) = 0x6d;
    *(undefined1 *)(lVar9 + 0x100) = 0x6d;
  }
  return 1;
}

