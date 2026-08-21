
/* v8::internal::ParserBase<v8::internal::PreParser>::ExpectSemicolon() */

void __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ExpectSemicolon
          (ParserBase<v8::internal::PreParser> *this)

{
  undefined4 uVar1;
  Scanner *this_00;
  long lVar2;
  uint uVar3;
  
  this_00 = *(Scanner **)(this + 200);
  uVar3 = (uint)*(byte *)(*(long *)(this_00 + 8) + 0x38);
  if (uVar3 == 0xc) {
    Scanner::Next(this_00);
    return;
  }
  if (uVar3 - 0xc < 3 || *(char *)(*(long *)(this_00 + 8) + 0x4c) != '\0') {
    return;
  }
  if (*(char *)(*(long *)this_00 + 0x38) == '`') {
    lVar2 = Scope::AsDeclarationScope();
    if (4 < *(byte *)(lVar2 + 0x85) - 10) {
      ReportMessageAt(this,*(undefined8 *)**(undefined8 **)(this + 200),0xf);
      return;
    }
    this_00 = *(Scanner **)(this + 200);
  }
  uVar1 = Scanner::Next(this_00);
  ReportUnexpectedToken(this,uVar1);
  return;
}

