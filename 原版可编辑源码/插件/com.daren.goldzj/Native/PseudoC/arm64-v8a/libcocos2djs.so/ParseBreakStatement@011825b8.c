
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseBreakStatement(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*) */

undefined8 v8::internal::ParserBase<v8::internal::PreParser>::ParseBreakStatement(ZoneList *param_1)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  
  Scanner::Next(*(Scanner **)(param_1 + 200));
  if ((*(char *)(*(long *)(*(long *)(param_1 + 200) + 8) + 0x4c) != '\0') ||
     ((byte)(*(char *)(*(long *)(*(long *)(param_1 + 200) + 8) + 0x38) - 0xcU) < 3))
  goto LAB_01182624;
  lVar3 = Scope::AsDeclarationScope();
  cVar1 = *(char *)(lVar3 + 0x85);
  bVar2 = Scanner::Next(*(Scanner **)(param_1 + 200));
  if ((bVar2 & 0xfc) == 0x5c) {
LAB_01182618:
    Scanner::CurrentSymbol(*(Scanner **)(param_1 + 200),*(AstValueFactory **)(param_1 + 0x28));
  }
  else {
    if (bVar2 == 0x61) {
      if (3 < (byte)(cVar1 - 0xdU)) {
LAB_0118269c:
        if ((*(ushort *)(*(long *)param_1 + 0x81) & 1) == 0) goto LAB_01182618;
      }
    }
    else if (bVar2 == 0x60) {
      if ((4 < (byte)(cVar1 - 10U)) && (param_1[0x71] == (ZoneList)0x0)) goto LAB_01182618;
    }
    else if ((byte)(bVar2 + 0x9f) < 5) goto LAB_0118269c;
    ReportUnexpectedToken(param_1);
  }
LAB_01182624:
  ExpectSemicolon((ParserBase<v8::internal::PreParser> *)param_1);
  return 3;
}

