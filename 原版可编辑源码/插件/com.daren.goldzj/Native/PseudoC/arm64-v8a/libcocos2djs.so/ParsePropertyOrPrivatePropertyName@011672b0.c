
/* v8::internal::ParserBase<v8::internal::Parser>::ParsePropertyOrPrivatePropertyName() */

VariableProxy * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParsePropertyOrPrivatePropertyName
          (ParserBase<v8::internal::Parser> *this)

{
  int iVar1;
  byte bVar2;
  AstRawString *pAVar3;
  VariableProxy *pVVar4;
  Zone *pZVar5;
  long lVar6;
  PrivateNameScopeIterator aPStack_48 [16];
  long local_38;
  
  iVar1 = **(int **)*(Scanner **)(this + 0xf8);
  bVar2 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if (((byte)Token::token_flags[bVar2] >> 1 & 1) == 0) {
    if (bVar2 != 0x6c) {
      ReportUnexpectedToken(this);
      return *(VariableProxy **)(this + 0x88);
    }
    PrivateNameScopeIterator::PrivateNameScopeIterator(aPStack_48,*(Scope **)this);
    pAVar3 = (AstRawString *)
             Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
    if (local_38 == 0) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(this + 0xb0),iVar1,iVar1 + 1,0x103,pAVar3);
      lVar6 = *(long *)(this + 0x158);
      if (*(char *)(lVar6 + 0x30) == '\0') {
        *(undefined4 *)(this + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar6 + 0x30) = 1;
        *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar6 + 0x18);
        this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
        this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
        this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
      }
      return *(VariableProxy **)(this + 0x88);
    }
    pZVar5 = *(Zone **)(this + 0x68);
    pVVar4 = *(VariableProxy **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pVVar4) < 0x18) {
      pVVar4 = (VariableProxy *)Zone::NewExpand(pZVar5,0x18);
    }
    else {
      *(VariableProxy **)(pZVar5 + 0x10) = pVVar4 + 0x18;
    }
    *(AstRawString **)(pVVar4 + 8) = pAVar3;
    *(undefined8 *)(pVVar4 + 0x10) = 0;
    *(int *)pVVar4 = iVar1;
    *(undefined4 *)(pVVar4 + 4) = 0x835;
    PrivateNameScopeIterator::AddUnresolvedPrivateName(aPStack_48,pVVar4);
  }
  else {
    pAVar3 = (AstRawString *)
             Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
    pZVar5 = *(Zone **)(this + 0x68);
    pVVar4 = *(VariableProxy **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pVVar4) < 0x10) {
      pVVar4 = (VariableProxy *)Zone::NewExpand(pZVar5,0x10);
    }
    else {
      *(VariableProxy **)(pZVar5 + 0x10) = pVVar4 + 0x10;
    }
    *(AstRawString **)(pVVar4 + 8) = pAVar3;
    *(int *)pVVar4 = iVar1;
    *(int *)(pVVar4 + 4) = 0x1a9;
  }
  FuncNameInferrer::PushLiteralName((FuncNameInferrer *)(this + 0x20),pAVar3);
  return pVVar4;
}

