
/* v8::internal::ParserBase<v8::internal::Parser>::ParseFunctionDeclaration() */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseFunctionDeclaration
          (ParserBase<v8::internal::Parser> *this)

{
  Scanner *this_00;
  undefined8 uVar1;
  long lVar2;
  
  Scanner::Next(*(Scanner **)(this + 0xf8));
  this_00 = *(Scanner **)(this + 0xf8);
  if (*(char *)(*(long *)(this_00 + 8) + 0x38) == '(') {
    Scanner::Next(this_00);
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0xb0),
               *(undefined4 *)**(undefined8 **)(this + 0xf8),
               ((undefined4 *)**(undefined8 **)(this + 0xf8))[1],0xee,0);
    lVar2 = *(long *)(this + 0x158);
    if (*(char *)(lVar2 + 0x30) == '\0') {
      *(undefined4 *)(this + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar2 + 0x30) = 1;
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar2 + 0x18);
      this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
      this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
      this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
    }
    return 0;
  }
  uVar1 = ParseHoistableDeclaration(this,**(undefined4 **)this_00,0,0,0);
  return uVar1;
}

