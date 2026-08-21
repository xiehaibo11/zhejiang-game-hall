
/* v8::internal::ParserBase<v8::internal::Parser>::ExpectContextualKeyword(v8::internal::AstRawString
   const*, char const*, int) */

void __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ExpectContextualKeyword
          (ParserBase<v8::internal::Parser> *this,AstRawString *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  AstRawString *pAVar4;
  long lVar5;
  int *piVar6;
  
  uVar3 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar3 & 0xff) != 0x5c) {
    ReportUnexpectedToken(this,uVar3);
  }
  pAVar4 = (AstRawString *)
           Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
  if (pAVar4 != param_1) {
    ReportUnexpectedToken(this,*(undefined1 *)(**(long **)(this + 0xf8) + 0x38));
  }
  piVar6 = (int *)**(undefined8 **)(this + 0xf8);
  iVar2 = piVar6[1] - *piVar6;
  iVar1 = iVar2 + -2;
  if ((char)piVar6[0xe] != 'Z') {
    iVar1 = iVar2;
  }
  if (piVar6[6] >> ((*(byte *)(piVar6 + 7) ^ 1) & 0x1f) != iVar1) {
    if (param_2 == (char *)0x0) {
      param_2 = *(char **)(param_1 + 8);
    }
    iVar1 = *piVar6;
    if (param_3 != -1) {
      iVar1 = param_3;
    }
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0xb0),iVar1,piVar6[1],0xfa,param_2);
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

