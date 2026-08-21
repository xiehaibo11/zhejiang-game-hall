
/* v8::internal::Parser::ParseModuleItem() */

undefined8 __thiscall v8::internal::Parser::ParseModuleItem(Parser *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(*(long *)(*(Scanner **)(this + 0xf8) + 8) + 0x38);
  if (cVar1 == 'k') {
    cVar1 = Scanner::PeekAhead(*(Scanner **)(this + 0xf8));
    if (((cVar1 != '\x05') || (this[0x132] == (Parser)0x0)) &&
       ((cVar1 != '\x02' || (this[0x133] == (Parser)0x0)))) {
      ParseImportDeclaration(this);
      return *(undefined8 *)(this + 0x78);
    }
  }
  else if (cVar1 == 'i') {
    uVar2 = ParseExportDeclaration(this);
    return uVar2;
  }
  uVar2 = ParserBase<v8::internal::Parser>::ParseStatementListItem
                    ((ParserBase<v8::internal::Parser> *)this);
  return uVar2;
}

