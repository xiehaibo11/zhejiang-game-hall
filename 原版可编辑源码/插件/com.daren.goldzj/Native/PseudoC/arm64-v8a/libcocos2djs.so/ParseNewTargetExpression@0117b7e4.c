
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseNewTargetExpression() */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseNewTargetExpression
          (ParserBase<v8::internal::PreParser> *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = **(int **)*(Scanner **)(this + 200);
  Scanner::Next(*(Scanner **)(this + 200));
  ExpectContextualKeyword
            (this,*(AstRawString **)(*(long *)(*(long *)(this + 0x28) + 0x38) + 0x1d0),"new.target",
             iVar1);
  lVar2 = Scope::GetReceiverScope(*(Scope **)this);
  if (*(char *)(lVar2 + 0x80) == '\x02') {
    uVar3 = 2;
  }
  else {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0x80),
               *(undefined4 *)**(undefined8 **)(this + 200),
               ((undefined4 *)**(undefined8 **)(this + 200))[1],0x13e,0);
    lVar2 = *(long *)(this + 200);
    uVar3 = 1;
    lVar4 = *(long *)(lVar2 + 0x18);
    if (*(char *)(lVar4 + 0x30) == '\0') {
      *(undefined4 *)(lVar2 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x30) = 1;
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar4 + 0x18);
      *(undefined1 *)(lVar2 + 0x60) = 0x6d;
      *(undefined1 *)(lVar2 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar2 + 0x100) = 0x6d;
    }
  }
  return uVar3;
}

