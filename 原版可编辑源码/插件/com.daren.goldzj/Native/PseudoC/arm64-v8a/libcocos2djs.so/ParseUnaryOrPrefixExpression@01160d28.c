
/* v8::internal::ParserBase<v8::internal::Parser>::ParseUnaryOrPrefixExpression() */

undefined4 * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseUnaryOrPrefixExpression
          (ParserBase<v8::internal::Parser> *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  Expression *pEVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  long lVar10;
  Zone *this_00;
  uint uVar11;
  long lVar12;
  int iVar13;
  Expression *pEVar14;
  
  uVar5 = Scanner::Next(*(Scanner **)(this + 0xf8));
  uVar1 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
  if (((uVar5 & 0xff) == 0x2e) && (*(char *)((*(undefined8 **)(this + 0xf8))[1] + 0x38) == 'I')) {
    *(byte *)(*(long *)(this + 0x10) + 0x39) = FLAG_max_lazy ^ 1;
  }
  uVar6 = GetCurrentStackPosition();
  if (uVar6 < *(ulong *)(this + 0xa8)) {
    lVar10 = *(long *)(this + 0xf8);
    lVar12 = *(long *)(lVar10 + 0x18);
    if (*(char *)(lVar12 + 0x30) == '\0') {
      *(undefined4 *)(lVar10 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar12 + 0x30) = 1;
      *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar12 + 0x18);
      *(undefined1 *)(lVar10 + 0x60) = 0x6d;
      *(undefined1 *)(lVar10 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar10 + 0x100) = 0x6d;
    }
    **(undefined2 **)(this + 0xb0) = 0x101;
  }
  bVar3 = *(byte *)(*(undefined4 **)(*(long *)(this + 0xf8) + 8) + 0xe);
  uVar2 = **(undefined4 **)(*(long *)(this + 0xf8) + 8);
  if (bVar3 - 0x2c < 9) {
    pEVar7 = (Expression *)ParseUnaryOrPrefixExpression(this);
  }
  else {
    lVar10 = Scope::AsDeclarationScope();
    if (*(byte *)(lVar10 + 0x85) - 10 < 5) {
      bVar4 = true;
      if (bVar3 == 0x60) {
LAB_01160e30:
        if (bVar4) {
          pEVar7 = (Expression *)ParseAwaitExpression(this);
          goto LAB_01160e40;
        }
      }
    }
    else if (this[0x135] != (ParserBase<v8::internal::Parser>)0x0) {
      lVar10 = Scope::AsDeclarationScope();
      bVar4 = *(byte *)(lVar10 + 0x85) - 1 < 2;
      if (bVar3 == 0x60) goto LAB_01160e30;
    }
    iVar13 = **(int **)(*(long *)(this + 0xf8) + 8);
    pEVar7 = (Expression *)ParsePrimaryExpression(this);
    lVar10 = *(long *)(*(long *)(this + 0xf8) + 8);
    bVar3 = *(byte *)(lVar10 + 0x38);
    if (bVar3 < 4) {
      pEVar7 = (Expression *)DoParseMemberExpressionContinuation(this,pEVar7);
      lVar10 = *(long *)(*(long *)(this + 0xf8) + 8);
      bVar3 = *(byte *)(lVar10 + 0x38);
    }
    uVar11 = (uint)bVar3;
    if (uVar11 < 6) {
      pEVar7 = (Expression *)ParseLeftHandSideContinuation(this,pEVar7);
      lVar10 = *(long *)(*(long *)(this + 0xf8) + 8);
      uVar11 = (uint)*(byte *)(lVar10 + 0x38);
    }
    if ((uVar11 - 0x33 < 2) && (*(char *)(lVar10 + 0x4c) == '\0')) {
      pEVar7 = (Expression *)ParsePostfixContinuation(this,pEVar7,iVar13);
    }
  }
LAB_01160e40:
  if ((uVar5 - 0x2c & 0xff) < 7) {
    if ((uVar5 & 0xff) == 0x30) {
      uVar11 = *(uint *)(pEVar7 + 4) & 0x3f;
      if ((pEVar7 == (Expression *)0x0) || (uVar11 != 0x35)) {
        if ((pEVar7 == (Expression *)0x0) ||
           ((uVar11 != 0x2c ||
            (uVar6 = Expression::IsPrivateName(*(Expression **)(pEVar7 + 0x10)), (uVar6 & 1) == 0)))
           ) goto LAB_01161068;
        uVar9 = 5;
      }
      else {
        if (((*(uint *)(pEVar7 + 4) >> 10 & 1) != 0) || ((*(byte *)(*(long *)this + 0x81) & 1) == 0)
           ) goto LAB_01161068;
        uVar9 = 0x127;
      }
      ReportMessage(this,uVar9);
    }
    else {
LAB_01161068:
      if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38) != '+') {
        puVar8 = (undefined4 *)Parser::BuildUnaryExpression((Parser *)this,pEVar7,uVar5,uVar1);
        return puVar8;
      }
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(this + 0xb0),uVar1,
                 *(undefined4 *)(*(long *)(*(long *)(this + 0xf8) + 8) + 4),0x141,0);
      lVar10 = *(long *)(this + 0x158);
      if (*(char *)(lVar10 + 0x30) == '\0') {
        *(undefined4 *)(this + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar10 + 0x30) = 1;
        *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
        this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
        this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
        this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
      }
    }
    return *(undefined4 **)(this + 0x88);
  }
  uVar11 = *(uint *)(pEVar7 + 4);
  if ((pEVar7 == (Expression *)0x0) || ((uVar11 & 0x43f) != 0x35)) {
LAB_01160ee0:
    if ((uVar11 & 0x3f) != 0x2c) {
      pEVar7 = (Expression *)
               RewriteInvalidReferenceExpression
                         (this,pEVar7,uVar2,*(undefined4 *)(**(long **)(this + 0xf8) + 4),0x100);
      goto LAB_01160f40;
    }
  }
  else if ((*(byte *)(*(long *)this + 0x81) & 1) != 0) {
    pEVar14 = pEVar7 + 8;
    if ((uVar11 >> 8 & 1) != 0) {
      pEVar14 = (Expression *)(*(long *)pEVar14 + 8);
    }
    if ((*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x118) == *(long *)pEVar14) ||
       (*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) == *(long *)pEVar14))
    goto LAB_01160ee0;
  }
  if (((uVar11 & 0x43f) == 0x35) && (lVar10 = *(long *)(this + 0xc0), *(byte *)(lVar10 + 0x10) < 3))
  {
    iVar13 = (int)*(undefined8 *)(lVar10 + 0x28) - (int)*(long *)(lVar10 + 0x20);
    if (iVar13 != 0) {
      lVar10 = *(long *)(**(long **)(lVar10 + 0x18) +
                        (*(long *)(lVar10 + 0x20) + (long)(iVar13 + -1)) * 0x10);
      uVar11 = *(uint *)(lVar10 + 4);
      *(uint *)(lVar10 + 4) = uVar11 | 0x80;
      if ((uVar11 >> 8 & 1) != 0) {
        Variable::SetMaybeAssigned(*(Variable **)(lVar10 + 8));
      }
    }
  }
LAB_01160f40:
  this_00 = *(Zone **)(this + 0x68);
  puVar8 = *(undefined4 **)(this_00 + 0x10);
  uVar1 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar8) < 0x10) {
    puVar8 = (undefined4 *)Zone::NewExpand(this_00,0x10);
  }
  else {
    *(undefined4 **)(this_00 + 0x10) = puVar8 + 4;
  }
  *(Expression **)(puVar8 + 2) = pEVar7;
  *puVar8 = uVar1;
  puVar8[1] = (uVar5 & 0xff) << 8 | 0xa3;
  return puVar8;
}

