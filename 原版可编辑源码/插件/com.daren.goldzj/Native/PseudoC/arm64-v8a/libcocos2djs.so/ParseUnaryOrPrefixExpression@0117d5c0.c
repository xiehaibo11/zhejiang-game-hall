
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseUnaryOrPrefixExpression() */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseUnaryOrPrefixExpression
          (ParserBase<v8::internal::PreParser> *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  
  cVar6 = Scanner::Next(*(Scanner **)(this + 200));
  uVar1 = *(undefined4 *)**(undefined8 **)(this + 200);
  if ((cVar6 == '.') && (*(char *)((*(undefined8 **)(this + 200))[1] + 0x38) == 'I')) {
    *(byte *)(*(long *)(this + 0x10) + 0x39) = FLAG_max_lazy ^ 1;
  }
  uVar8 = GetCurrentStackPosition();
  if (uVar8 < *(ulong *)(this + 0x78)) {
    lVar10 = *(long *)(this + 200);
    lVar12 = *(long *)(lVar10 + 0x18);
    if (*(char *)(lVar12 + 0x30) == '\0') {
      *(undefined4 *)(lVar10 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar12 + 0x30) = 1;
      *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar12 + 0x18);
      *(undefined1 *)(lVar10 + 0x60) = 0x6d;
      *(undefined1 *)(lVar10 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar10 + 0x100) = 0x6d;
    }
    **(undefined2 **)(this + 0x80) = 0x101;
  }
  bVar4 = *(byte *)(*(undefined4 **)(*(long *)(this + 200) + 8) + 0xe);
  uVar2 = **(undefined4 **)(*(long *)(this + 200) + 8);
  if (bVar4 - 0x2c < 9) {
    uVar7 = ParseUnaryOrPrefixExpression(this);
  }
  else {
    lVar10 = Scope::AsDeclarationScope();
    if (*(byte *)(lVar10 + 0x85) - 10 < 5) {
      bVar5 = true;
      if (bVar4 == 0x60) {
LAB_0117d6c8:
        if (bVar5) {
          uVar7 = ParseAwaitExpression(this);
          goto LAB_0117d788;
        }
      }
    }
    else if (this[0x105] != (ParserBase<v8::internal::PreParser>)0x0) {
      lVar10 = Scope::AsDeclarationScope();
      bVar5 = *(byte *)(lVar10 + 0x85) - 1 < 2;
      if (bVar4 == 0x60) goto LAB_0117d6c8;
    }
    uVar3 = **(undefined4 **)(*(long *)(this + 200) + 8);
    uVar7 = ParsePrimaryExpression(this);
    lVar10 = *(long *)(*(long *)(this + 200) + 8);
    bVar4 = *(byte *)(lVar10 + 0x38);
    if (bVar4 < 4) {
      uVar7 = DoParseMemberExpressionContinuation(this);
      lVar10 = *(long *)(*(long *)(this + 200) + 8);
      bVar4 = *(byte *)(lVar10 + 0x38);
    }
    uVar11 = (uint)bVar4;
    if (uVar11 < 6) {
      uVar7 = ParseLeftHandSideContinuation(this);
      lVar10 = *(long *)(*(long *)(this + 200) + 8);
      uVar11 = (uint)*(byte *)(lVar10 + 0x38);
    }
    if ((uVar11 - 0x33 < 2) && (*(char *)(lVar10 + 0x4c) == '\0')) {
      uVar7 = ParsePostfixContinuation(this,uVar7,uVar3);
    }
  }
LAB_0117d788:
  if ((byte)(cVar6 - 0x2cU) < 7) {
    if (cVar6 == '0') {
      if ((uVar7 & 7) == 2) {
        uVar7 = uVar7 >> 4 & 0xf;
        if ((uVar7 == 4) || (uVar7 == 2)) {
          uVar9 = 5;
          goto LAB_0117d7e4;
        }
      }
      else if (((uVar7 & 7) == 3) && ((*(byte *)(*(long *)this + 0x81) & 1) != 0)) {
        uVar9 = 0x127;
LAB_0117d7e4:
        ReportMessage(this,uVar9);
        return 1;
      }
    }
    if (*(char *)(*(long *)(*(long *)(this + 200) + 8) + 0x38) == '+') {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(this + 0x80),uVar1,
                 *(undefined4 *)(*(long *)(*(long *)(this + 200) + 8) + 4),0x141,0);
      lVar10 = *(long *)(this + 200);
      lVar12 = *(long *)(lVar10 + 0x18);
      if (*(char *)(lVar12 + 0x30) != '\0') {
        return 1;
      }
      *(undefined4 *)(lVar10 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar12 + 0x30) = 1;
      *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar12 + 0x18);
      *(undefined1 *)(lVar10 + 0x60) = 0x6d;
      *(undefined1 *)(lVar10 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar10 + 0x100) = 0x6d;
      return 1;
    }
  }
  else {
    if ((uVar7 & 7) == 2) {
      if ((uVar7 >> 4 & 0xf) - 1 < 4) {
        return 2;
      }
    }
    else if (((uVar7 & 7) == 3) &&
            (((uVar7 & 0xfe0) != 0x20 || ((*(ushort *)(*(long *)this + 0x81) & 1) == 0)))) {
      lVar10 = *(long *)(this + 0x90);
      if (2 < *(byte *)(lVar10 + 0x10)) {
        return 2;
      }
      iVar13 = (int)*(undefined8 *)(lVar10 + 0x28) - (int)*(long *)(lVar10 + 0x20);
      if (iVar13 == 0) {
        return 2;
      }
      lVar10 = *(long *)(**(long **)(lVar10 + 0x18) +
                        (*(long *)(lVar10 + 0x20) + (long)(iVar13 + -1)) * 0x10);
      uVar7 = *(uint *)(lVar10 + 4);
      *(uint *)(lVar10 + 4) = uVar7 | 0x80;
      if ((uVar7 >> 8 & 1) == 0) {
        return 2;
      }
      Variable::SetMaybeAssigned(*(Variable **)(lVar10 + 8));
      return 2;
    }
    RewriteInvalidReferenceExpression
              (this,uVar7,uVar2,*(undefined4 *)(**(long **)(this + 200) + 4),0x100);
  }
  return 2;
}

