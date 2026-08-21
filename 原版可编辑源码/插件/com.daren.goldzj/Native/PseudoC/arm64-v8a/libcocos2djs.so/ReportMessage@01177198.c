
/* v8::internal::ParserBase<v8::internal::PreParser>::ReportMessage(v8::internal::MessageTemplate)
    */

void __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ReportMessage
          (ParserBase<v8::internal::PreParser> *this,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  
  PendingCompilationErrorHandler::ReportMessageAt
            (*(PendingCompilationErrorHandler **)(this + 0x80),
             *(undefined4 *)**(undefined8 **)(this + 200),
             ((undefined4 *)**(undefined8 **)(this + 200))[1],param_2,0);
  lVar1 = *(long *)(this + 200);
  lVar2 = *(long *)(lVar1 + 0x18);
  if (*(char *)(lVar2 + 0x30) == '\0') {
    *(undefined4 *)(lVar1 + 0x20) = 0xffffffff;
    *(undefined1 *)(lVar2 + 0x30) = 1;
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar2 + 0x18);
    *(undefined1 *)(lVar1 + 0x60) = 0x6d;
    *(undefined1 *)(lVar1 + 0xb0) = 0x6d;
    *(undefined1 *)(lVar1 + 0x100) = 0x6d;
  }
  return;
}

