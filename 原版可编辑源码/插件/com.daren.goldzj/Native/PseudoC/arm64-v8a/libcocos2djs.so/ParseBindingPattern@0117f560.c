
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseBindingPattern() */

uint __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseBindingPattern
          (ParserBase<v8::internal::PreParser> *this)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  AstRawString *pAVar9;
  ulong uVar10;
  Scanner *this_00;
  int *piVar11;
  uint *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  
  piVar11 = *(int **)(*(Scanner **)(this + 200) + 8);
  bVar3 = *(byte *)(piVar11 + 0xe);
  if (9 < bVar3 - 0x5c) {
    uVar10 = GetCurrentStackPosition();
    if (uVar10 < *(ulong *)(this + 0x78)) {
      lVar13 = *(long *)(this + 200);
      lVar15 = *(long *)(lVar13 + 0x18);
      if (*(char *)(lVar15 + 0x30) == '\0') {
        *(undefined4 *)(lVar13 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar15 + 0x30) = 1;
        *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(lVar15 + 0x18);
        *(undefined1 *)(lVar13 + 0x60) = 0x6d;
        *(undefined1 *)(lVar13 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar13 + 0x100) = 0x6d;
      }
      **(undefined2 **)(this + 0x80) = 0x101;
    }
    if (bVar3 != 8) {
      if (bVar3 == 3) {
        uVar7 = ParseArrayLiteral(this);
        return uVar7;
      }
      uVar8 = Scanner::Next(*(Scanner **)(this + 200));
      ReportUnexpectedToken(this,uVar8);
      return 1;
    }
    uVar7 = ParseObjectLiteral(this);
    return uVar7;
  }
  iVar2 = *piVar11;
  uVar7 = Scanner::Next(*(Scanner **)(this + 200));
  if ((uVar7 & 0xfc) == 0x5c) {
    pAVar9 = (AstRawString *)
             Scanner::CurrentSymbol(*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
    piVar11 = (int *)**(undefined8 **)(this + 200);
    cVar4 = (char)piVar11[0xe];
    if (cVar4 == 'l') {
LAB_0117f980:
      uVar7 = 8;
      goto LAB_0117f99c;
    }
    if (cVar4 == '`') {
LAB_0117f874:
      uVar7 = 5;
      goto LAB_0117f99c;
    }
    if (cVar4 == '_') {
LAB_0117f5d8:
      uVar7 = 6;
      goto LAB_0117f99c;
    }
    lVar13 = *(long *)(*(long *)(this + 0x28) + 0x38);
    if (*(AstRawString **)(lVar13 + 0xb0) == pAVar9) {
LAB_0117f988:
      uVar7 = 4;
      goto LAB_0117f99c;
    }
    if (*(AstRawString **)(lVar13 + 0x158) == pAVar9) {
LAB_0117f990:
      uVar7 = 7;
      goto LAB_0117f99c;
    }
    iVar1 = (piVar11[1] - *piVar11) + -2;
    if (cVar4 != 'Z') {
      iVar1 = piVar11[1] - *piVar11;
    }
    if (piVar11[6] >> ((*(byte *)(piVar11 + 7) ^ 1) & 0x1f) != iVar1) {
LAB_0117f6dc:
      uVar7 = 1;
      goto LAB_0117f99c;
    }
    if (*(AstRawString **)(lVar13 + 0x118) == pAVar9) {
LAB_0117f998:
      uVar7 = 2;
      goto LAB_0117f99c;
    }
    if (*(AstRawString **)(lVar13 + 0x70) != pAVar9) goto LAB_0117f6dc;
    uVar10 = Scope::ShouldBanArguments(*(Scope **)this);
    if ((uVar10 & 1) == 0) {
      uVar7 = 3;
      goto LAB_0117f99c;
    }
    ReportMessage(this,0xc);
  }
  else {
    uVar5 = *(ushort *)(*(long *)this + 0x81);
    lVar13 = Scope::AsDeclarationScope();
    cVar4 = *(char *)(lVar13 + 0x85);
    if (this[0x71] == (ParserBase<v8::internal::PreParser>)0x0) {
      lVar13 = Scope::AsDeclarationScope();
      bVar6 = *(byte *)(lVar13 + 0x85) - 10 < 5;
    }
    else {
      bVar6 = true;
    }
    if ((uVar7 & 0xff) == 0x61) {
      if (((uVar5 & 1) == 0) && (3 < (byte)(cVar4 - 0xdU))) goto LAB_0117f788;
    }
    else if ((uVar7 & 0xff) == 0x60) {
      if (!bVar6) {
LAB_0117f788:
        this_00 = *(Scanner **)(this + 200);
        plVar14 = *(long **)(this + 0x90);
        puVar12 = *(uint **)this_00;
        bVar3 = *(byte *)(plVar14 + 2);
        if ((uVar7 & 0xff) == 0x60) {
          if (bVar3 < 3) {
            cVar4 = (char)plVar14[9];
            plVar16 = plVar14;
            while (cVar4 != '\0') {
              if ((char)plVar16[2] == '\x02') {
                uVar17 = *(undefined8 *)puVar12;
                *(undefined4 *)((long)plVar16 + 0x54) = 0x130;
                *(undefined8 *)((long)plVar16 + 0x4c) = uVar17;
              }
              plVar16 = (long *)plVar16[1];
              if (plVar16 == (long *)0x0) break;
              cVar4 = (char)plVar14[9];
            }
            this_00 = *(Scanner **)(this + 200);
          }
          pAVar9 = (AstRawString *)
                   Scanner::CurrentSymbol(this_00,*(AstValueFactory **)(this + 0x28));
          piVar11 = (int *)**(undefined8 **)(this + 200);
          cVar4 = (char)piVar11[0xe];
        }
        else {
          if (bVar3 - 1 < 3) {
            plVar16 = (long *)*plVar14;
            if (bVar3 == 3) {
              if ((*(byte *)(*plVar16 + 0x81) & 1) == 0) {
                *(bool *)(plVar16[0x1c] + 0x15) = *puVar12 <= puVar12[1];
              }
              else {
                PendingCompilationErrorHandler::ReportMessageAt
                          ((PendingCompilationErrorHandler *)plVar16[0x10],*puVar12,puVar12[1],0x13c
                           ,0);
                lVar13 = plVar16[0x19];
                lVar15 = *(long *)(lVar13 + 0x18);
                if (*(char *)(lVar15 + 0x30) == '\0') {
                  *(undefined4 *)(lVar13 + 0x20) = 0xffffffff;
                  *(undefined1 *)(lVar15 + 0x30) = 1;
                  *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(lVar15 + 0x18);
                  *(undefined1 *)(lVar13 + 0x60) = 0x6d;
                  *(undefined1 *)(lVar13 + 0xb0) = 0x6d;
                  *(undefined1 *)(lVar13 + 0x100) = 0x6d;
                }
              }
            }
            else {
              plVar16[0x1d] = *(long *)puVar12;
              *(undefined4 *)(*plVar14 + 0xf0) = 0x13c;
            }
          }
          pAVar9 = (AstRawString *)
                   Scanner::CurrentSymbol
                             (*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
          piVar11 = (int *)**(undefined8 **)(this + 200);
          cVar4 = (char)piVar11[0xe];
        }
        if (cVar4 != 'l') {
          if (cVar4 != '`') {
            if (cVar4 != '_') {
              lVar13 = *(long *)(*(long *)(this + 0x28) + 0x38);
              if (*(AstRawString **)(lVar13 + 0xb0) != pAVar9) {
                if (*(AstRawString **)(lVar13 + 0x158) != pAVar9) {
                  iVar1 = (piVar11[1] - *piVar11) + -2;
                  if (cVar4 != 'Z') {
                    iVar1 = piVar11[1] - *piVar11;
                  }
                  if (piVar11[6] >> ((*(byte *)(piVar11 + 7) ^ 1) & 0x1f) == iVar1) {
                    if (*(AstRawString **)(lVar13 + 0x118) != pAVar9) {
                      uVar7 = 3;
                      if (*(AstRawString **)(lVar13 + 0x70) != pAVar9) {
                        uVar7 = 1;
                      }
                      goto LAB_0117f99c;
                    }
                    goto LAB_0117f998;
                  }
                  goto LAB_0117f6dc;
                }
                goto LAB_0117f990;
              }
              goto LAB_0117f988;
            }
            goto LAB_0117f5d8;
          }
          goto LAB_0117f874;
        }
        goto LAB_0117f980;
      }
    }
    else if (((uVar7 - 0x61 & 0xff) < 5) && ((uVar5 & 1) == 0)) goto LAB_0117f788;
    ReportUnexpectedToken(this,uVar7);
  }
  uVar7 = 1;
  pAVar9 = *(AstRawString **)(*(long *)(*(long *)(this + 0x28) + 0x38) + 0x110);
LAB_0117f99c:
  if (((uVar7 & 0xe) == 2) && ((*(ushort *)(*(long *)this + 0x81) & 1) != 0)) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0x80),
               *(undefined4 *)**(undefined8 **)(this + 200),
               ((undefined4 *)**(undefined8 **)(this + 200))[1],0x128,0);
    lVar13 = *(long *)(this + 200);
    uVar7 = 1;
    lVar15 = *(long *)(lVar13 + 0x18);
    if (*(char *)(lVar15 + 0x30) == '\0') {
      *(undefined4 *)(lVar13 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar15 + 0x30) = 1;
      *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(lVar15 + 0x18);
      *(undefined1 *)(lVar13 + 0x60) = 0x6d;
      *(undefined1 *)(lVar13 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar13 + 0x100) = 0x6d;
    }
  }
  else {
    ExpressionScope<v8::internal::ParserTypes<v8::internal::PreParser>>::NewVariable
              (*(ExpressionScope<v8::internal::ParserTypes<v8::internal::PreParser>> **)
                (this + 0x90),pAVar9,iVar2);
    uVar7 = uVar7 << 4 | 3;
  }
  return uVar7;
}

