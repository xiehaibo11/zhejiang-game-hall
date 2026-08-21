
/* v8::internal::ParserBase<v8::internal::Parser>::ValidateFormalParameters(v8::internal::LanguageMode,
   v8::internal::ParserFormalParameters const&, bool) */

void __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ValidateFormalParameters
          (ParserBase<v8::internal::Parser> *this,ulong param_2,long param_3,ulong param_4)

{
  long lVar1;
  
  if (((param_4 & 1) == 0) && (*(uint *)(param_3 + 0x28) <= *(uint *)(param_3 + 0x2c))) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0xb0),*(undefined4 *)(param_3 + 0x28),
               *(undefined4 *)(param_3 + 0x2c),0x11d,0);
    lVar1 = *(long *)(this + 0x158);
    if (*(char *)(lVar1 + 0x30) == '\0') {
      *(undefined4 *)(this + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar1 + 0x30) = 1;
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + 0x18);
      this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
      this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
      this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
    }
  }
  if (((param_2 & 1) != 0) && (*(uint *)(param_3 + 0x30) <= *(uint *)(param_3 + 0x34))) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0xb0),*(undefined4 *)(param_3 + 0x30),
               *(undefined4 *)(param_3 + 0x34),*(undefined4 *)(param_3 + 0x38),0);
    lVar1 = *(long *)(this + 0x158);
    if (*(char *)(lVar1 + 0x30) == '\0') {
      *(undefined4 *)(this + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar1 + 0x30) = 1;
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + 0x18);
      this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
      this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
      this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
    }
  }
  return;
}

