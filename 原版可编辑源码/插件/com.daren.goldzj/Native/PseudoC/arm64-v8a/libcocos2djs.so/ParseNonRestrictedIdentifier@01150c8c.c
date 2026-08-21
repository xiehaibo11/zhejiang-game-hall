
/* v8::internal::ParserBase<v8::internal::Parser>::ParseNonRestrictedIdentifier() */

long __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseNonRestrictedIdentifier
          (ParserBase<v8::internal::Parser> *this)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = Scope::AsDeclarationScope();
  cVar1 = *(char *)(lVar3 + 0x85);
  bVar2 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((bVar2 & 0xfc) == 0x5c) {
LAB_01150cc0:
    lVar3 = Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
  }
  else {
    if (bVar2 == 0x61) {
      if (3 < (byte)(cVar1 - 0xdU)) {
LAB_01150dc0:
        if ((*(ushort *)(*(long *)this + 0x81) & 1) == 0) goto LAB_01150cc0;
      }
    }
    else if (bVar2 == 0x60) {
      if ((4 < (byte)(cVar1 - 10U)) && (this[0xa1] == (ParserBase<v8::internal::Parser>)0x0))
      goto LAB_01150cc0;
    }
    else if ((byte)(bVar2 + 0x9f) < 5) goto LAB_01150dc0;
    ReportUnexpectedToken(this);
    lVar3 = *(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
  }
  if (((*(byte *)(*(long *)this + 0x81) & 1) != 0) &&
     ((*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x118) == lVar3 ||
      (*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) == lVar3)))) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0xb0),
               *(undefined4 *)**(undefined8 **)(this + 0xf8),
               ((undefined4 *)**(undefined8 **)(this + 0xf8))[1],0x128,0);
    lVar4 = *(long *)(this + 0x158);
    if (*(char *)(lVar4 + 0x30) == '\0') {
      *(undefined4 *)(this + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x30) = 1;
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar4 + 0x18);
      this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
      this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
      this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
    }
  }
  return lVar3;
}

