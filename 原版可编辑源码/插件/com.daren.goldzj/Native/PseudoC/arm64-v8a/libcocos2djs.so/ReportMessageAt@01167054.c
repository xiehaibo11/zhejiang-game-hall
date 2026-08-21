
/* v8::internal::ParserBase<v8::internal::Parser>::ReportMessageAt(v8::internal::Scanner::Location,
   v8::internal::MessageTemplate) */

void __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ReportMessageAt
          (ParserBase<v8::internal::Parser> *this,ulong param_2,undefined4 param_3)

{
  long lVar1;
  
  PendingCompilationErrorHandler::ReportMessageAt
            (*(PendingCompilationErrorHandler **)(this + 0xb0),param_2,param_2 >> 0x20,param_3,0);
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

