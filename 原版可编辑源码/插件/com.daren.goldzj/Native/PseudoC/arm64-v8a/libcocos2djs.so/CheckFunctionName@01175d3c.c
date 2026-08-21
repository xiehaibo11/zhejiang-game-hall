
/* v8::internal::ParserBase<v8::internal::PreParser>::CheckFunctionName(v8::internal::LanguageMode,
   v8::internal::PreParserIdentifier, v8::internal::FunctionNameValidity,
   v8::internal::Scanner::Location const&) */

void v8::internal::ParserBase<v8::internal::PreParser>::CheckFunctionName
               (long param_1,ulong param_2,undefined8 param_3,byte param_4,int param_5,
               undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  PendingCompilationErrorHandler *pPVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if (((param_5 != 1) && (param_4 != 0)) && ((param_2 & 1) != 0)) {
    if ((param_4 & 0xfe) == 2) {
      uVar1 = *param_6;
      uVar2 = param_6[1];
      pPVar3 = *(PendingCompilationErrorHandler **)(param_1 + 0x80);
      uVar4 = 0x128;
    }
    else {
      if (param_5 != 0) {
        return;
      }
      uVar1 = *param_6;
      uVar2 = param_6[1];
      pPVar3 = *(PendingCompilationErrorHandler **)(param_1 + 0x80);
      uVar4 = 0x13c;
    }
    PendingCompilationErrorHandler::ReportMessageAt(pPVar3,uVar1,uVar2,uVar4,0);
    lVar5 = *(long *)(param_1 + 200);
    lVar6 = *(long *)(lVar5 + 0x18);
    if (*(char *)(lVar6 + 0x30) == '\0') {
      *(undefined4 *)(lVar5 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar6 + 0x18);
      *(undefined1 *)(lVar5 + 0x60) = 0x6d;
      *(undefined1 *)(lVar5 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar5 + 0x100) = 0x6d;
    }
  }
  return;
}

