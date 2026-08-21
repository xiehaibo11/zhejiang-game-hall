
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseFunctionDeclaration() */

undefined4 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseFunctionDeclaration
          (ParserBase<v8::internal::PreParser> *this)

{
  undefined4 uVar1;
  Scanner *this_00;
  long lVar2;
  long lVar3;
  
  Scanner::Next(*(Scanner **)(this + 200));
  this_00 = *(Scanner **)(this + 200);
  if (*(char *)(*(long *)(this_00 + 8) + 0x38) == '(') {
    Scanner::Next(this_00);
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0x80),
               *(undefined4 *)**(undefined8 **)(this + 200),
               ((undefined4 *)**(undefined8 **)(this + 200))[1],0xee,0);
    lVar2 = *(long *)(this + 200);
    uVar1 = 0;
    lVar3 = *(long *)(lVar2 + 0x18);
    if (*(char *)(lVar3 + 0x30) == '\0') {
      *(undefined4 *)(lVar2 + 0x20) = 0xffffffff;
      uVar1 = 0;
      *(undefined1 *)(lVar3 + 0x30) = 1;
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar3 + 0x18);
      *(undefined1 *)(lVar2 + 0x60) = 0x6d;
      *(undefined1 *)(lVar2 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar2 + 0x100) = 0x6d;
    }
  }
  else {
    uVar1 = ParseHoistableDeclaration(this,**(undefined4 **)this_00,0,0,0);
  }
  return uVar1;
}

