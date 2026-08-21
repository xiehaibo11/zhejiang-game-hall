
/* v8::internal::ParserBase<v8::internal::Parser>::ParseRegExpLiteral() */

undefined4 * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseRegExpLiteral
          (ParserBase<v8::internal::Parser> *this)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  Zone *this_00;
  
  uVar1 = **(undefined4 **)(*(Scanner **)(this + 0xf8) + 8);
  uVar2 = Scanner::ScanRegExpPattern(*(Scanner **)(this + 0xf8));
  if ((uVar2 & 1) == 0) {
    Scanner::Next(*(Scanner **)(this + 0xf8));
    uVar3 = 0x14a;
  }
  else {
    uVar3 = Scanner::NextSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
    uVar2 = Scanner::ScanRegExpFlags(*(Scanner **)(this + 0xf8));
    Scanner::Next(*(Scanner **)(this + 0xf8));
    if ((uVar2 & 0xff) != 0) {
      this_00 = *(Zone **)(this + 0x68);
      puVar4 = *(undefined4 **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar4) < 0x18) {
        puVar4 = (undefined4 *)Zone::NewExpand(this_00,0x18);
      }
      else {
        *(undefined4 **)(this_00 + 0x10) = puVar4 + 6;
      }
      puVar4[1] = 0x15;
      puVar4[2] = (int)(uVar2 >> 0x20);
      *puVar4 = uVar1;
      *(undefined8 *)(puVar4 + 4) = uVar3;
      return puVar4;
    }
    uVar3 = 0x111;
  }
  ReportMessage(this,uVar3);
  return *(undefined4 **)(this + 0x88);
}

