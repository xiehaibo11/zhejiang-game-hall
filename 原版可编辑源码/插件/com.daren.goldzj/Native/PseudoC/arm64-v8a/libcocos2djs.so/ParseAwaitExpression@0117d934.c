
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseAwaitExpression() */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseAwaitExpression
          (ParserBase<v8::internal::PreParser> *this)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  
  plVar11 = *(long **)(this + 0x90);
  puVar7 = *(undefined8 **)(*(long *)(this + 200) + 8);
  plVar13 = plVar11;
  do {
    if (*(byte *)(plVar13 + 2) == 3) {
      lVar9 = *plVar11;
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(lVar9 + 0x80),*(undefined4 *)puVar7,
                 *(undefined4 *)((long)puVar7 + 4),0x131,0);
      lVar9 = *(long *)(lVar9 + 200);
      lVar12 = *(long *)(lVar9 + 0x18);
      if (*(char *)(lVar12 + 0x30) == '\0') {
        *(undefined4 *)(lVar9 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar12 + 0x30) = 1;
        *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar12 + 0x18);
        *(undefined1 *)(lVar9 + 0x60) = 0x6d;
        *(undefined1 *)(lVar9 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar9 + 0x100) = 0x6d;
      }
      break;
    }
    if (*(char *)((long)plVar11 + 0x11) == '\0') break;
    if (*(byte *)(plVar13 + 2) - 1 < 3) {
      uVar14 = *puVar7;
      *(undefined4 *)((long)plVar13 + 0x54) = 0x131;
      *(undefined8 *)((long)plVar13 + 0x4c) = uVar14;
    }
    plVar13 = (long *)plVar13[1];
  } while (plVar13 != (long *)0x0);
  Scanner::Next(*(Scanner **)(this + 200));
  piVar8 = (int *)**(undefined8 **)(this + 200);
  iVar1 = (piVar8[1] - *piVar8) + -2;
  if ((char)piVar8[0xe] != 'Z') {
    iVar1 = piVar8[1] - *piVar8;
  }
  if (piVar8[6] >> ((*(byte *)(piVar8 + 7) ^ 1) & 0x1f) != iVar1) {
    ReportUnexpectedToken(this,0x6e);
  }
  uVar6 = GetCurrentStackPosition();
  if (uVar6 < *(ulong *)(this + 0x78)) {
    lVar9 = *(long *)(this + 200);
    lVar12 = *(long *)(lVar9 + 0x18);
    if (*(char *)(lVar12 + 0x30) == '\0') {
      *(undefined4 *)(lVar9 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar12 + 0x30) = 1;
      *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar12 + 0x18);
      *(undefined1 *)(lVar9 + 0x60) = 0x6d;
      *(undefined1 *)(lVar9 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar9 + 0x100) = 0x6d;
    }
    **(undefined2 **)(this + 0x80) = 0x101;
  }
  bVar3 = *(byte *)(*(long *)(*(long *)(this + 200) + 8) + 0x38);
  if (bVar3 - 0x2c < 9) {
    ParseUnaryOrPrefixExpression(this);
    goto LAB_0117db7c;
  }
  lVar9 = Scope::AsDeclarationScope();
  if (*(byte *)(lVar9 + 0x85) - 10 < 5) {
    bVar4 = true;
    if (bVar3 == 0x60) {
LAB_0117dac4:
      if (bVar4) {
        ParseAwaitExpression(this);
        goto LAB_0117db7c;
      }
    }
  }
  else if (this[0x105] != (ParserBase<v8::internal::PreParser>)0x0) {
    lVar9 = Scope::AsDeclarationScope();
    bVar4 = *(byte *)(lVar9 + 0x85) - 1 < 2;
    if (bVar3 == 0x60) goto LAB_0117dac4;
  }
  uVar2 = **(undefined4 **)(*(long *)(this + 200) + 8);
  uVar5 = ParsePrimaryExpression(this);
  lVar9 = *(long *)(*(long *)(this + 200) + 8);
  bVar3 = *(byte *)(lVar9 + 0x38);
  if (bVar3 < 4) {
    uVar5 = DoParseMemberExpressionContinuation(this);
    lVar9 = *(long *)(*(long *)(this + 200) + 8);
    bVar3 = *(byte *)(lVar9 + 0x38);
  }
  uVar10 = (uint)bVar3;
  if (uVar10 < 6) {
    uVar5 = ParseLeftHandSideContinuation(this);
    lVar9 = *(long *)(*(long *)(this + 200) + 8);
    uVar10 = (uint)*(byte *)(lVar9 + 0x38);
  }
  if ((uVar10 - 0x33 < 2) && (*(char *)(lVar9 + 0x4c) == '\0')) {
    ParsePostfixContinuation(this,uVar5,uVar2);
  }
LAB_0117db7c:
  *(int *)(*(long *)(this + 0x10) + 0x14) = *(int *)(*(long *)(this + 0x10) + 0x14) + 1;
  return 2;
}

