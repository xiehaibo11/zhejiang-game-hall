
/* v8::internal::ParserBase<v8::internal::Parser>::CheckFunctionName(v8::internal::LanguageMode,
   v8::internal::AstRawString const*, v8::internal::FunctionNameValidity,
   v8::internal::Scanner::Location const&) */

void __thiscall
v8::internal::ParserBase<v8::internal::Parser>::CheckFunctionName
          (ParserBase<v8::internal::Parser> *this,ulong param_2,long param_3,int param_4,
          undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  PendingCompilationErrorHandler *pPVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (((param_3 != 0) && (param_4 != 1)) && ((param_2 & 1) != 0)) {
    if ((*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x118) == param_3) ||
       (*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) == param_3)) {
      uVar1 = *param_5;
      uVar2 = param_5[1];
      pPVar3 = *(PendingCompilationErrorHandler **)(this + 0xb0);
      uVar4 = 0x128;
    }
    else {
      if (param_4 != 0) {
        return;
      }
      uVar1 = *param_5;
      uVar2 = param_5[1];
      pPVar3 = *(PendingCompilationErrorHandler **)(this + 0xb0);
      uVar4 = 0x13c;
    }
    PendingCompilationErrorHandler::ReportMessageAt(pPVar3,uVar1,uVar2,uVar4,0);
    lVar5 = *(long *)(this + 0x158);
    if (*(char *)(lVar5 + 0x30) == '\0') {
      *(undefined4 *)(this + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0x30) = 1;
      *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar5 + 0x18);
      this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
      this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
      this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
    }
  }
  return;
}

