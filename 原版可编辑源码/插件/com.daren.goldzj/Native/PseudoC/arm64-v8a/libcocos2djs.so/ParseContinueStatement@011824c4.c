
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseContinueStatement() */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseContinueStatement
          (ParserBase<v8::internal::PreParser> *this)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  
  Scanner::Next(*(Scanner **)(this + 200));
  if ((*(char *)(*(long *)(*(long *)(this + 200) + 8) + 0x4c) != '\0') ||
     ((byte)(*(char *)(*(long *)(*(long *)(this + 200) + 8) + 0x38) - 0xcU) < 3)) goto LAB_01182530;
  lVar3 = Scope::AsDeclarationScope();
  cVar1 = *(char *)(lVar3 + 0x85);
  bVar2 = Scanner::Next(*(Scanner **)(this + 200));
  if ((bVar2 & 0xfc) == 0x5c) {
LAB_01182524:
    Scanner::CurrentSymbol(*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
  }
  else {
    if (bVar2 == 0x61) {
      if (3 < (byte)(cVar1 - 0xdU)) {
LAB_011825a8:
        if ((*(ushort *)(*(long *)this + 0x81) & 1) == 0) goto LAB_01182524;
      }
    }
    else if (bVar2 == 0x60) {
      if ((4 < (byte)(cVar1 - 10U)) && (this[0x71] == (ParserBase<v8::internal::PreParser>)0x0))
      goto LAB_01182524;
    }
    else if ((byte)(bVar2 + 0x9f) < 5) goto LAB_011825a8;
    ReportUnexpectedToken(this);
  }
LAB_01182530:
  ExpectSemicolon(this);
  return 3;
}

