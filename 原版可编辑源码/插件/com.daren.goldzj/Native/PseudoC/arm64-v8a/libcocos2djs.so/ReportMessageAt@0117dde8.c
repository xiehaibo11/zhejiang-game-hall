
/* v8::internal::ParserBase<v8::internal::PreParser>::ReportMessageAt(v8::internal::Scanner::Location,
   v8::internal::MessageTemplate) */

void __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ReportMessageAt
          (ParserBase<v8::internal::PreParser> *this,ulong param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  
  PendingCompilationErrorHandler::ReportMessageAt
            (*(PendingCompilationErrorHandler **)(this + 0x80),param_2,param_2 >> 0x20,param_3,0);
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

