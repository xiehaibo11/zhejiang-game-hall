
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseNonRestrictedIdentifier() */

undefined1  [16] __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseNonRestrictedIdentifier
          (ParserBase<v8::internal::PreParser> *this)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  lVar4 = Scope::AsDeclarationScope();
  cVar2 = *(char *)(lVar4 + 0x85);
  bVar3 = Scanner::Next(*(Scanner **)(this + 200));
  if ((bVar3 & 0xfc) == 0x5c) {
LAB_011845c8:
    lVar4 = Scanner::CurrentSymbol(*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
    piVar6 = (int *)**(undefined8 **)(this + 200);
    cVar2 = (char)piVar6[0xe];
    if (cVar2 == 'l') {
      uVar9 = 8;
    }
    else if (cVar2 == '`') {
      uVar9 = 5;
    }
    else if (cVar2 == '_') {
      uVar9 = 6;
    }
    else {
      lVar7 = *(long *)(*(long *)(this + 0x28) + 0x38);
      if (*(long *)(lVar7 + 0xb0) == lVar4) {
        uVar9 = 4;
      }
      else if (*(long *)(lVar7 + 0x158) == lVar4) {
        uVar9 = 7;
      }
      else {
        iVar1 = (piVar6[1] - *piVar6) + -2;
        if (cVar2 != 'Z') {
          iVar1 = piVar6[1] - *piVar6;
        }
        if (piVar6[6] >> ((*(byte *)(piVar6 + 7) ^ 1) & 0x1f) == iVar1) {
          if (*(long *)(lVar7 + 0x118) == lVar4) {
            uVar9 = 2;
          }
          else {
            uVar5 = 3;
            if (*(long *)(lVar7 + 0x70) != lVar4) {
              uVar5 = 1;
            }
            uVar9 = (ulong)uVar5;
          }
        }
        else {
          uVar9 = 1;
        }
      }
    }
  }
  else {
    if (bVar3 == 0x61) {
      if (3 < (byte)(cVar2 - 0xdU)) {
LAB_01184784:
        if ((*(ushort *)(*(long *)this + 0x81) & 1) == 0) goto LAB_011845c8;
      }
    }
    else if (bVar3 == 0x60) {
      if ((4 < (byte)(cVar2 - 10U)) && (this[0x71] == (ParserBase<v8::internal::PreParser>)0x0))
      goto LAB_011845c8;
    }
    else if ((byte)(bVar3 + 0x9f) < 5) goto LAB_01184784;
    ReportUnexpectedToken(this);
    uVar9 = 1;
    lVar4 = *(long *)(*(long *)(*(long *)(this + 0x28) + 0x38) + 0x110);
  }
  if ((((uint)uVar9 & 0xe) == 2) && ((*(ushort *)(*(long *)this + 0x81) & 1) != 0)) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0x80),
               *(undefined4 *)**(undefined8 **)(this + 200),
               ((undefined4 *)**(undefined8 **)(this + 200))[1],0x128,0);
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
  }
  auVar10._8_8_ = uVar9;
  auVar10._0_8_ = lVar4;
  return auVar10;
}

