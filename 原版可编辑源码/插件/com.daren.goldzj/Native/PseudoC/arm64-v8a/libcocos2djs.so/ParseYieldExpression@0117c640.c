
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseYieldExpression() */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseYieldExpression
          (ParserBase<v8::internal::PreParser> *this)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  ParserBase<v8::internal::PreParser> *pPVar12;
  
  plVar8 = *(long **)(this + 0x90);
  puVar5 = *(undefined8 **)(*(long *)(this + 200) + 8);
  plVar10 = plVar8;
  do {
    if (*(byte *)(plVar10 + 2) == 3) {
      lVar7 = *plVar8;
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(lVar7 + 0x80),*(undefined4 *)puVar5,
                 *(undefined4 *)((long)puVar5 + 4),0x151,0);
      lVar7 = *(long *)(lVar7 + 200);
      lVar9 = *(long *)(lVar7 + 0x18);
      if (*(char *)(lVar9 + 0x30) == '\0') {
        *(undefined4 *)(lVar7 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar9 + 0x30) = 1;
        *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
        *(undefined1 *)(lVar7 + 0x60) = 0x6d;
        *(undefined1 *)(lVar7 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar7 + 0x100) = 0x6d;
      }
      break;
    }
    if (*(char *)((long)plVar8 + 0x11) == '\0') break;
    if (*(byte *)(plVar10 + 2) - 1 < 3) {
      uVar11 = *puVar5;
      *(undefined4 *)((long)plVar10 + 0x54) = 0x151;
      *(undefined8 *)((long)plVar10 + 0x4c) = uVar11;
    }
    plVar10 = (long *)plVar10[1];
  } while (plVar10 != (long *)0x0);
  Scanner::Next(*(Scanner **)(this + 200));
  piVar6 = (int *)**(undefined8 **)(this + 200);
  iVar1 = (piVar6[1] - *piVar6) + -2;
  if ((char)piVar6[0xe] != 'Z') {
    iVar1 = piVar6[1] - *piVar6;
  }
  if (piVar6[6] >> ((*(byte *)(piVar6 + 7) ^ 1) & 0x1f) != iVar1) {
    ReportUnexpectedToken(this,0x6e);
  }
  uVar4 = GetCurrentStackPosition();
  if (uVar4 < *(ulong *)(this + 0x78)) {
    lVar7 = *(long *)(this + 200);
    lVar9 = *(long *)(lVar7 + 0x18);
    if (*(char *)(lVar9 + 0x30) == '\0') {
      *(undefined4 *)(lVar7 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar9 + 0x30) = 1;
      *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
      *(undefined1 *)(lVar7 + 0x60) = 0x6d;
      *(undefined1 *)(lVar7 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar7 + 0x100) = 0x6d;
    }
    **(undefined2 **)(this + 0x80) = 0x101;
  }
  lVar7 = *(long *)(*(Scanner **)(this + 200) + 8);
  if (*(char *)(lVar7 + 0x4c) != '\0') goto LAB_0117c850;
  bVar2 = *(byte *)(lVar7 + 0x38);
  if (bVar2 == 0x28) {
    Scanner::Next(*(Scanner **)(this + 200));
    bVar3 = true;
    bVar2 = *(byte *)(*(long *)(*(long *)(this + 200) + 8) + 0x38);
    if (0x3e < bVar2) goto LAB_0117c840;
LAB_0117c7cc:
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x40000000400072c0U) == 0) goto LAB_0117c840;
    if (!bVar3) goto LAB_0117c850;
    ParseAssignmentExpressionCoverGrammar(this);
  }
  else {
    bVar3 = false;
    if (bVar2 < 0x3f) goto LAB_0117c7cc;
LAB_0117c840:
    ParseAssignmentExpressionCoverGrammar(this);
    if (!bVar3) goto LAB_0117c850;
  }
  pPVar12 = this + 0x10;
  *(int *)(*(long *)pPVar12 + 0x14) = *(int *)(*(long *)pPVar12 + 0x14) + 1;
  lVar7 = Scope::AsDeclarationScope();
  if (1 < *(byte *)(lVar7 + 0x85) - 0xd) {
    return 2;
  }
  *(int *)(*(long *)pPVar12 + 0x14) = *(int *)(*(long *)pPVar12 + 0x14) + 1;
  *(int *)(*(long *)pPVar12 + 0x14) = *(int *)(*(long *)pPVar12 + 0x14) + 1;
LAB_0117c850:
  *(int *)(*(long *)(this + 0x10) + 0x14) = *(int *)(*(long *)(this + 0x10) + 0x14) + 1;
  return 2;
}

