
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseV8Intrinsic() */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseV8Intrinsic
          (ParserBase<v8::internal::PreParser> *this)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  undefined4 local_18;
  char local_14 [4];
  
  uVar1 = **(undefined4 **)(*(Scanner **)(this + 200) + 8);
  Scanner::Next(*(Scanner **)(this + 200));
  lVar4 = Scope::AsDeclarationScope();
  cVar2 = *(char *)(lVar4 + 0x85);
  bVar3 = Scanner::Next(*(Scanner **)(this + 200));
  if ((bVar3 & 0xfc) == 0x5c) {
LAB_0117b370:
    Scanner::CurrentSymbol(*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
  }
  else {
    if (bVar3 == 0x61) {
      if (3 < (byte)(cVar2 - 0xdU)) {
LAB_0117b458:
        if ((*(ushort *)(*(long *)this + 0x81) & 1) == 0) goto LAB_0117b370;
      }
    }
    else if (bVar3 == 0x60) {
      if ((4 < (byte)(cVar2 - 10U)) && (this[0x71] == (ParserBase<v8::internal::PreParser>)0x0))
      goto LAB_0117b370;
    }
    else if ((byte)(bVar3 + 0x9f) < 5) goto LAB_0117b458;
    ReportUnexpectedToken(this);
  }
  if (*(char *)(*(long *)(*(long *)(this + 200) + 8) + 0x38) == '\x05') {
    local_18 = 0;
    ParseArguments(this,&local_18,local_14,0);
    if (local_14[0] == '\0') {
      return 2;
    }
    ReportMessageAt(this,CONCAT44(*(undefined4 *)**(undefined8 **)(this + 200),uVar1),0xf5);
  }
  else {
    ReportUnexpectedToken(this);
  }
  return 1;
}

