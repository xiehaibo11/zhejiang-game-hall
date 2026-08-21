
/* v8::internal::ParserBase<v8::internal::Parser>::ParseBindingPattern() */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseBindingPattern
          (ParserBase<v8::internal::Parser> *this)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 uVar7;
  AstRawString *pAVar8;
  ulong uVar9;
  undefined8 uVar10;
  Scanner *this_00;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  
  piVar11 = *(int **)(*(Scanner **)(this + 0xf8) + 8);
  bVar3 = *(byte *)(piVar11 + 0xe);
  if (9 < bVar3 - 0x5c) {
    uVar9 = GetCurrentStackPosition();
    if (uVar9 < *(ulong *)(this + 0xa8)) {
      lVar12 = *(long *)(this + 0xf8);
      lVar15 = *(long *)(lVar12 + 0x18);
      if (*(char *)(lVar15 + 0x30) == '\0') {
        *(undefined4 *)(lVar12 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar15 + 0x30) = 1;
        *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(lVar15 + 0x18);
        *(undefined1 *)(lVar12 + 0x60) = 0x6d;
        *(undefined1 *)(lVar12 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar12 + 0x100) = 0x6d;
      }
      **(undefined2 **)(this + 0xb0) = 0x101;
    }
    if (bVar3 == 8) {
      uVar10 = ParseObjectLiteral(this);
      return uVar10;
    }
    if (bVar3 == 3) {
      uVar10 = ParseArrayLiteral(this);
      return uVar10;
    }
    uVar7 = Scanner::Next(*(Scanner **)(this + 0xf8));
    ReportUnexpectedToken(this,uVar7);
    goto LAB_0115e218;
  }
  iVar2 = *piVar11;
  uVar6 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar6 & 0xfc) == 0x5c) {
    pAVar8 = (AstRawString *)
             Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
    if ((*(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) == pAVar8) &&
       (uVar9 = Scope::ShouldBanArguments(*(Scope **)this), (uVar9 & 1) != 0)) {
      ReportMessage(this,0xc);
      goto LAB_0115e394;
    }
  }
  else {
    uVar5 = *(ushort *)(*(long *)this + 0x81);
    lVar12 = Scope::AsDeclarationScope();
    cVar4 = *(char *)(lVar12 + 0x85);
    if (this[0xa1] == (ParserBase<v8::internal::Parser>)0x0) {
      lVar12 = Scope::AsDeclarationScope();
      bVar1 = 4 < *(byte *)(lVar12 + 0x85) - 10;
    }
    else {
      bVar1 = false;
    }
    if ((uVar6 & 0xff) == 0x61) {
      if (((uVar5 & 1) == 0) && (3 < (byte)(cVar4 - 0xdU))) goto LAB_0115e324;
    }
    else if ((uVar6 & 0xff) == 0x60) {
      if (bVar1) {
LAB_0115e324:
        this_00 = *(Scanner **)(this + 0xf8);
        plVar14 = *(long **)(this + 0xc0);
        plVar13 = *(long **)this_00;
        bVar3 = *(byte *)(plVar14 + 2);
        if ((uVar6 & 0xff) == 0x60) {
          if (bVar3 < 3) {
            cVar4 = (char)plVar14[9];
            plVar16 = plVar14;
            while (cVar4 != '\0') {
              if ((char)plVar16[2] == '\x02') {
                lVar12 = *plVar13;
                *(undefined4 *)((long)plVar16 + 0x54) = 0x130;
                *(long *)((long)plVar16 + 0x4c) = lVar12;
              }
              plVar16 = (long *)plVar16[1];
              if (plVar16 == (long *)0x0) break;
              cVar4 = (char)plVar14[9];
            }
            goto LAB_0115e440;
          }
        }
        else {
          if (bVar3 - 1 < 3) {
            plVar16 = (long *)*plVar14;
            if (bVar3 == 3) {
              if ((*(byte *)(*plVar16 + 0x81) & 1) == 0) {
                lVar15 = plVar16[0x22];
                lVar12 = *plVar13;
                *(undefined4 *)(lVar15 + 0x38) = 0x13c;
                *(long *)(lVar15 + 0x30) = lVar12;
              }
              else {
                PendingCompilationErrorHandler::ReportMessageAt
                          ((PendingCompilationErrorHandler *)plVar16[0x16],(int)*plVar13,
                           *(undefined4 *)((long)plVar13 + 4),0x13c,0);
                lVar12 = plVar16[0x2b];
                if (*(char *)(lVar12 + 0x30) == '\0') {
                  *(undefined4 *)(plVar16 + 0x2c) = 0xffffffff;
                  *(undefined1 *)(lVar12 + 0x30) = 1;
                  *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar12 + 0x18);
                  *(undefined1 *)(plVar16 + 0x34) = 0x6d;
                  *(undefined1 *)(plVar16 + 0x3e) = 0x6d;
                  *(undefined1 *)(plVar16 + 0x48) = 0x6d;
                }
              }
            }
            else {
              plVar16[0x23] = *plVar13;
              *(undefined4 *)(*plVar14 + 0x120) = 0x13c;
            }
          }
LAB_0115e440:
          this_00 = *(Scanner **)(this + 0xf8);
        }
        pAVar8 = (AstRawString *)Scanner::CurrentSymbol(this_00,*(AstValueFactory **)(this + 0x60));
        goto LAB_0115e118;
      }
    }
    else if (((uVar6 - 0x61 & 0xff) < 5) && ((uVar5 & 1) == 0)) goto LAB_0115e324;
    ReportUnexpectedToken(this,uVar6);
LAB_0115e394:
    pAVar8 = *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
  }
LAB_0115e118:
  if (((*(byte *)(*(long *)this + 0x81) & 1) == 0) ||
     ((*(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x118) != pAVar8 &&
      (*(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) != pAVar8)))) {
    FuncNameInferrer::PushVariableName((FuncNameInferrer *)(this + 0x20),pAVar8);
    uVar10 = ExpressionScope<v8::internal::ParserTypes<v8::internal::Parser>>::NewVariable
                       (*(ExpressionScope<v8::internal::ParserTypes<v8::internal::Parser>> **)
                         (this + 0xc0),pAVar8,iVar2);
    return uVar10;
  }
  PendingCompilationErrorHandler::ReportMessageAt
            (*(PendingCompilationErrorHandler **)(this + 0xb0),
             *(undefined4 *)**(undefined8 **)(this + 0xf8),
             ((undefined4 *)**(undefined8 **)(this + 0xf8))[1],0x128,0);
  lVar12 = *(long *)(this + 0x158);
  if (*(char *)(lVar12 + 0x30) == '\0') {
    *(undefined4 *)(this + 0x160) = 0xffffffff;
    *(undefined1 *)(lVar12 + 0x30) = 1;
    *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar12 + 0x18);
    this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
    this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
    this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
  }
LAB_0115e218:
  return *(undefined8 *)(this + 0x88);
}

