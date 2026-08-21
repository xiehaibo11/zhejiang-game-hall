
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseTemplateLiteral(v8::internal::PreParserExpression,
   int, bool) */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseTemplateLiteral
          (ParserBase<v8::internal::PreParser> *this,undefined8 param_2,undefined8 param_3,
          ulong param_4)

{
  int iVar1;
  undefined4 uVar2;
  ParserBase<v8::internal::PreParser> PVar3;
  char cVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  
  if ((param_4 & 1) != 0) {
    this[0x106] = (ParserBase<v8::internal::PreParser>)0x0;
  }
  cVar4 = *(char *)(*(long *)(*(Scanner **)(this + 200) + 8) + 0x38);
  Scanner::Next(*(Scanner **)(this + 200));
  plVar5 = *(long **)(this + 200);
  lVar7 = *plVar5;
  iVar1 = *(int *)(lVar7 + 0x3c);
  if (cVar4 == '\x01') {
    if (iVar1 != 0) {
      if ((param_4 & 1) == 0) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0x80),*(undefined4 *)(lVar7 + 0x40),
                   *(undefined4 *)(lVar7 + 0x44),iVar1,0);
        plVar5 = *(long **)(this + 200);
        lVar7 = plVar5[3];
        if (*(char *)(lVar7 + 0x30) == '\0') {
          *(undefined4 *)(plVar5 + 4) = 0xffffffff;
          *(undefined1 *)(lVar7 + 0x30) = 1;
          *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar7 + 0x18);
          *(undefined1 *)(plVar5 + 0xc) = 0x6d;
          *(undefined1 *)(plVar5 + 0x16) = 0x6d;
          *(undefined1 *)(plVar5 + 0x20) = 0x6d;
          plVar5 = *(long **)(this + 200);
        }
      }
      *(undefined4 *)(*plVar5 + 0x3c) = 0;
    }
  }
  else {
    if (iVar1 != 0) {
      if ((param_4 & 1) == 0) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0x80),*(undefined4 *)(lVar7 + 0x40),
                   *(undefined4 *)(lVar7 + 0x44),iVar1,0);
        plVar5 = *(long **)(this + 200);
        lVar7 = plVar5[3];
        if (*(char *)(lVar7 + 0x30) == '\0') {
          *(undefined4 *)(plVar5 + 4) = 0xffffffff;
          *(undefined1 *)(lVar7 + 0x30) = 1;
          *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar7 + 0x18);
          *(undefined1 *)(plVar5 + 0xc) = 0x6d;
          *(undefined1 *)(plVar5 + 0x16) = 0x6d;
          *(undefined1 *)(plVar5 + 0x20) = 0x6d;
          plVar5 = *(long **)(this + 200);
        }
      }
      *(undefined4 *)(*plVar5 + 0x3c) = 0;
    }
    PVar3 = this[0x100];
    do {
      uVar2 = **(undefined4 **)(*(long *)(this + 200) + 8);
      this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
      ParseExpressionCoverGrammar(this);
      puVar6 = *(undefined4 **)(*(Scanner **)(this + 200) + 8);
      if (*(char *)(puVar6 + 0xe) != '\r') {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0x80),uVar2,*puVar6,0x14c,0);
        lVar7 = *(long *)(this + 200);
        lVar8 = *(long *)(lVar7 + 0x18);
        if (*(char *)(lVar8 + 0x30) == '\0') {
          *(undefined4 *)(lVar7 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar8 + 0x30) = 1;
          *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar8 + 0x18);
          *(undefined1 *)(lVar7 + 0x60) = 0x6d;
          *(undefined1 *)(lVar7 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar7 + 0x100) = 0x6d;
        }
        this[0x100] = PVar3;
        return 1;
      }
      cVar4 = Scanner::ScanTemplateSpan(*(Scanner **)(this + 200));
      Scanner::Next(*(Scanner **)(this + 200));
      plVar5 = *(long **)(this + 200);
      lVar7 = *plVar5;
      if (*(int *)(lVar7 + 0x3c) != 0) {
        if ((param_4 & 1) == 0) {
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(this + 0x80),*(undefined4 *)(lVar7 + 0x40)
                     ,*(undefined4 *)(lVar7 + 0x44),*(int *)(lVar7 + 0x3c),0);
          plVar5 = *(long **)(this + 200);
          lVar7 = plVar5[3];
          if (*(char *)(lVar7 + 0x30) == '\0') {
            *(undefined4 *)(plVar5 + 4) = 0xffffffff;
            *(undefined1 *)(lVar7 + 0x30) = 1;
            *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar7 + 0x18);
            *(undefined1 *)(plVar5 + 0xc) = 0x6d;
            *(undefined1 *)(plVar5 + 0x16) = 0x6d;
            *(undefined1 *)(plVar5 + 0x20) = 0x6d;
            plVar5 = *(long **)(this + 200);
          }
        }
        *(undefined4 *)(*plVar5 + 0x3c) = 0;
      }
      this[0x100] = PVar3;
    } while (cVar4 == '\0');
  }
  return 2;
}

