
/* v8::internal::ParserBase<v8::internal::Parser>::ParseNewTargetExpression() */

VariableProxy * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseNewTargetExpression
          (ParserBase<v8::internal::Parser> *this)

{
  Zone *this_00;
  int iVar1;
  long lVar2;
  VariableProxy *pVVar3;
  Scope *this_01;
  undefined8 uVar4;
  
  iVar1 = **(int **)*(Scanner **)(this + 0xf8);
  Scanner::Next(*(Scanner **)(this + 0xf8));
  ExpectContextualKeyword
            (this,*(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x1d0),"new.target",
             iVar1);
  lVar2 = Scope::GetReceiverScope(*(Scope **)this);
  if (*(char *)(lVar2 + 0x80) == '\x02') {
    this_00 = *(Zone **)(this + 0x68);
    this_01 = *(Scope **)this;
    pVVar3 = *(VariableProxy **)(this_00 + 0x10);
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x168);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pVVar3) < 0x18) {
      pVVar3 = (VariableProxy *)Zone::NewExpand(this_00,0x18);
    }
    else {
      *(VariableProxy **)(this_00 + 0x10) = pVVar3 + 0x18;
    }
    *(undefined8 *)(pVVar3 + 8) = uVar4;
    *(undefined8 *)(pVVar3 + 0x10) = 0;
    *(int *)pVVar3 = iVar1;
    *(undefined4 *)(pVVar3 + 4) = 0x835;
    Scope::AddUnresolved(this_01,pVVar3);
    *(uint *)(pVVar3 + 4) = *(uint *)(pVVar3 + 4) | 0x400;
  }
  else {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0xb0),
               *(undefined4 *)**(undefined8 **)(this + 0xf8),
               ((undefined4 *)**(undefined8 **)(this + 0xf8))[1],0x13e,0);
    lVar2 = *(long *)(this + 0x158);
    if (*(char *)(lVar2 + 0x30) == '\0') {
      *(undefined4 *)(this + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar2 + 0x30) = 1;
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar2 + 0x18);
      this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
      this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
      this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
    }
    pVVar3 = *(VariableProxy **)(this + 0x88);
  }
  return pVVar3;
}

