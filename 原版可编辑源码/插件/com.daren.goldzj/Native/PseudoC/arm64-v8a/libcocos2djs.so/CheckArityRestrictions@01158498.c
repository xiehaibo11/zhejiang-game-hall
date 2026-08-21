
/* v8::internal::ParserBase<v8::internal::Parser>::CheckArityRestrictions(int,
   v8::internal::FunctionKind, bool, int, int) */

void __thiscall
v8::internal::ParserBase<v8::internal::Parser>::CheckArityRestrictions
          (ParserBase<v8::internal::Parser> *this,int param_1,char param_3,ulong param_4,
          undefined4 param_5,undefined4 param_6)

{
  long lVar1;
  PendingCompilationErrorHandler *pPVar2;
  undefined8 uVar3;
  
  lVar1 = Scope::GetDeclarationScope(*(Scope **)this);
  if ((*(byte *)(lVar1 + 0x84) >> 2 & 1) == 0) {
    if (param_3 == '\b') {
      if (param_1 != 1) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0xb0),param_5,param_6,0xe1,0);
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
      if ((param_4 & 1) == 0) {
        return;
      }
      pPVar2 = *(PendingCompilationErrorHandler **)(this + 0xb0);
      uVar3 = 0x11c;
    }
    else {
      if (param_3 != '\a') {
        return;
      }
      if (param_1 == 0) {
        return;
      }
      pPVar2 = *(PendingCompilationErrorHandler **)(this + 0xb0);
      uVar3 = 0xe0;
    }
    PendingCompilationErrorHandler::ReportMessageAt(pPVar2,param_5,param_6,uVar3,0);
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

