
/* v8::internal::ParserFormalParameters::ValidateStrictMode(v8::internal::Parser*) const */

void __thiscall
v8::internal::ParserFormalParameters::ValidateStrictMode
          (ParserFormalParameters *this,Parser *param_1)

{
  long lVar1;
  
  if (*(uint *)(this + 0x30) <= *(uint *)(this + 0x34)) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(param_1 + 0xb0),*(undefined4 *)(this + 0x30),
               *(undefined4 *)(this + 0x34),*(undefined4 *)(this + 0x38),0);
    lVar1 = *(long *)(param_1 + 0x158);
    if (*(char *)(lVar1 + 0x30) == '\0') {
      *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar1 + 0x30) = 1;
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + 0x18);
      param_1[0x1a0] = (Parser)0x6d;
      param_1[0x1f0] = (Parser)0x6d;
      param_1[0x240] = (Parser)0x6d;
    }
  }
  return;
}

