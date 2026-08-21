
/* v8::internal::ParserBase<v8::internal::Parser>::ReportMessage(v8::internal::MessageTemplate) */

void __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ReportMessage
          (ParserBase<v8::internal::Parser> *this,undefined4 param_2)

{
  long lVar1;
  
  PendingCompilationErrorHandler::ReportMessageAt
            (*(PendingCompilationErrorHandler **)(this + 0xb0),
             *(undefined4 *)**(undefined8 **)(this + 0xf8),
             ((undefined4 *)**(undefined8 **)(this + 0xf8))[1],param_2,0);
  lVar1 = *(long *)(this + 0x158);
  if (*(char *)(lVar1 + 0x30) == '\0') {
    *(undefined4 *)(this + 0x160) = 0xffffffff;
    *(undefined1 *)(lVar1 + 0x30) = 1;
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + 0x18);
    this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
    this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
    this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
  }
  return;
}

