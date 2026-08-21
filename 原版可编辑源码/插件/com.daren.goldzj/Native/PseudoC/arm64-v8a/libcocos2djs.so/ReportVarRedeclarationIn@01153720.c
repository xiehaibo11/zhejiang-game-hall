
/* v8::internal::Parser::ReportVarRedeclarationIn(v8::internal::AstRawString const*,
   v8::internal::Scope*) */

void __thiscall
v8::internal::Parser::ReportVarRedeclarationIn(Parser *this,AstRawString *param_1,Scope *param_2)

{
  Scope *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  
  pSVar1 = param_2 + 0x58;
  while( true ) {
    if (pSVar1 == *(Scope **)(param_2 + 0x60)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    piVar6 = *(int **)pSVar1;
    if (*(AstRawString **)(*(long *)(piVar6 + 2) + 8) == param_1) break;
    pSVar1 = (Scope *)(piVar6 + 4);
  }
  iVar2 = *piVar6;
  if (iVar2 == -1) {
    iVar4 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x10);
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = iVar3 + 1;
    }
    iVar4 = iVar4 >> 1;
    if (param_1[0x1c] != (AstRawString)0x0) {
      iVar4 = iVar3;
    }
    iVar4 = iVar4 + iVar2;
  }
  PendingCompilationErrorHandler::ReportMessageAt
            (*(PendingCompilationErrorHandler **)(this + 0xb0),iVar2,iVar4,0xb0);
  lVar5 = *(long *)(this + 0x158);
  if (*(char *)(lVar5 + 0x30) == '\0') {
    *(undefined4 *)(this + 0x160) = 0xffffffff;
    *(undefined1 *)(lVar5 + 0x30) = 1;
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar5 + 0x18);
    this[0x1a0] = (Parser)0x6d;
    this[0x1f0] = (Parser)0x6d;
    this[0x240] = (Parser)0x6d;
  }
  return;
}

