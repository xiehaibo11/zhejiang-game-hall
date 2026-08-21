
/* v8::internal::Parser::AddTemplateSpan(v8::internal::Parser::TemplateLiteral**, bool, bool) */

void __thiscall
v8::internal::Parser::AddTemplateSpan
          (Parser *this,TemplateLiteral **param_1,bool param_2,bool param_3)

{
  int iVar1;
  AstRawString *pAVar2;
  AstRawString *pAVar3;
  int iVar4;
  
  iVar4 = 1;
  if (!param_3) {
    iVar4 = 2;
  }
  iVar1 = *(int *)(*(long *)*(Scanner **)(this + 0xf8) + 4);
  pAVar2 = (AstRawString *)
           Scanner::CurrentRawSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
  if (param_2) {
    pAVar3 = (AstRawString *)
             Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
  }
  else {
    pAVar3 = (AstRawString *)0x0;
  }
  TemplateLiteral::AddTemplateSpan(*param_1,pAVar3,pAVar2,iVar1 - iVar4,*(Zone **)(this + 0xb8));
  return;
}

