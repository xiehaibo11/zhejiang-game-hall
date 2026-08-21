
/* v8::internal::ParserBase<v8::internal::Parser>::ParseImportExpressions() */

int * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseImportExpressions
          (ParserBase<v8::internal::Parser> *this)

{
  int iVar1;
  ParserBase<v8::internal::Parser> PVar2;
  uint uVar3;
  undefined4 uVar4;
  Scanner *this_00;
  int *piVar5;
  PendingCompilationErrorHandler *pPVar6;
  undefined8 uVar7;
  Zone *this_01;
  undefined4 *puVar8;
  long lVar9;
  
  Scanner::Next(*(Scanner **)(this + 0xf8));
  this_00 = *(Scanner **)(this + 0xf8);
  piVar5 = *(int **)this_00;
  iVar1 = *piVar5;
  if ((this[0x133] == (ParserBase<v8::internal::Parser>)0x0) ||
     (*(char *)(*(long *)(this_00 + 8) + 0x38) != '\x02')) {
    if (*(char *)(*(long *)(this_00 + 8) + 0x38) != '\x05') {
      if (this[0xa1] == (ParserBase<v8::internal::Parser>)0x0) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0xb0),*piVar5,piVar5[1],0x3a,0);
        lVar9 = *(long *)(this + 0x158);
        if (*(char *)(lVar9 + 0x30) == '\0') {
          *(undefined4 *)(this + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar9 + 0x30) = 1;
          *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
          this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
          this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
          this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
          return *(int **)(this + 0x88);
        }
      }
      else {
        uVar4 = Scanner::Next(this_00);
        ReportUnexpectedToken(this,uVar4);
      }
      goto LAB_01163e1c;
    }
    Scanner::Next(this_00);
    if (*(char *)((*(undefined8 **)(this + 0xf8))[1] + 0x38) != '\x06') {
      PVar2 = this[0x130];
      this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
      uVar7 = ParseAssignmentExpressionCoverGrammar(this);
      uVar3 = Scanner::Next(*(Scanner **)(this + 0xf8));
      if ((uVar3 & 0xff) != 6) {
        ReportUnexpectedToken(this,uVar3);
      }
      this_01 = *(Zone **)(this + 0x68);
      piVar5 = *(int **)(this_01 + 0x10);
      if ((ulong)(*(long *)(this_01 + 0x18) - (long)piVar5) < 0x10) {
        piVar5 = (int *)Zone::NewExpand(this_01,0x10);
      }
      else {
        *(int **)(this_01 + 0x10) = piVar5 + 4;
      }
      *(undefined8 *)(piVar5 + 2) = uVar7;
      *piVar5 = iVar1;
      piVar5[1] = 0x28;
      this[0x130] = PVar2;
      return piVar5;
    }
    puVar8 = (undefined4 *)**(undefined8 **)(this + 0xf8);
    pPVar6 = *(PendingCompilationErrorHandler **)(this + 0xb0);
    uVar7 = 0x3c;
  }
  else {
    Scanner::Next(this_00);
    ExpectContextualKeyword
              (this,*(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x150),
               "import.meta",iVar1);
    if (this[0xa1] != (ParserBase<v8::internal::Parser>)0x0) {
      piVar5 = (int *)Parser::ImportMetaExpression((Parser *)this,iVar1);
      return piVar5;
    }
    pPVar6 = *(PendingCompilationErrorHandler **)(this + 0xb0);
    uVar7 = 0x3b;
    puVar8 = (undefined4 *)**(undefined8 **)(this + 0xf8);
  }
  PendingCompilationErrorHandler::ReportMessageAt(pPVar6,*puVar8,puVar8[1],uVar7,0);
  lVar9 = *(long *)(this + 0x158);
  if (*(char *)(lVar9 + 0x30) == '\0') {
    *(undefined4 *)(this + 0x160) = 0xffffffff;
    *(undefined1 *)(lVar9 + 0x30) = 1;
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
    this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
    this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
    this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
  }
LAB_01163e1c:
  return *(int **)(this + 0x88);
}

