
/* v8::internal::ParserBase<v8::internal::PreParser>::CheckArityRestrictions(int,
   v8::internal::FunctionKind, bool, int, int) */

void __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::CheckArityRestrictions
          (ParserBase<v8::internal::PreParser> *this,int param_1,char param_3,ulong param_4,
          undefined4 param_5,undefined4 param_6)

{
  PendingCompilationErrorHandler *pPVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 == '\b') {
    if (param_1 != 1) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(this + 0x80),param_5,param_6,0xe1,0);
      lVar3 = *(long *)(this + 200);
      lVar4 = *(long *)(lVar3 + 0x18);
      if (*(char *)(lVar4 + 0x30) == '\0') {
        *(undefined4 *)(lVar3 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar4 + 0x30) = 1;
        *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar4 + 0x18);
        *(undefined1 *)(lVar3 + 0x60) = 0x6d;
        *(undefined1 *)(lVar3 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar3 + 0x100) = 0x6d;
      }
    }
    if ((param_4 & 1) == 0) {
      return;
    }
    pPVar1 = *(PendingCompilationErrorHandler **)(this + 0x80);
    uVar2 = 0x11c;
  }
  else {
    if (param_3 != '\a') {
      return;
    }
    if (param_1 == 0) {
      return;
    }
    pPVar1 = *(PendingCompilationErrorHandler **)(this + 0x80);
    uVar2 = 0xe0;
  }
  PendingCompilationErrorHandler::ReportMessageAt(pPVar1,param_5,param_6,uVar2,0);
  lVar3 = *(long *)(this + 200);
  lVar4 = *(long *)(lVar3 + 0x18);
  if (*(char *)(lVar4 + 0x30) == '\0') {
    *(undefined4 *)(lVar3 + 0x20) = 0xffffffff;
    *(undefined1 *)(lVar4 + 0x30) = 1;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar4 + 0x18);
    *(undefined1 *)(lVar3 + 0x60) = 0x6d;
    *(undefined1 *)(lVar3 + 0xb0) = 0x6d;
    *(undefined1 *)(lVar3 + 0x100) = 0x6d;
  }
  return;
}

