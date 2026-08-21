
/* v8::internal::Parser::SetFunctionNameFromPropertyName(v8::internal::ObjectLiteralProperty*,
   v8::internal::AstRawString const*, v8::internal::AstRawString const*) */

void __thiscall
v8::internal::Parser::SetFunctionNameFromPropertyName
          (Parser *this,ObjectLiteralProperty *param_1,AstRawString *param_2,AstRawString *param_3)

{
  AstRawString *pAVar1;
  AstRawString *pAVar2;
  bool bVar3;
  ulong uVar4;
  
  if ((param_1[0x10] != (ObjectLiteralProperty)0x5) &&
     (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) == '\0')) {
    uVar4 = LiteralProperty::NeedsSetFunctionName((LiteralProperty *)param_1);
    bVar3 = (uVar4 & 1) == 0;
    pAVar1 = (AstRawString *)0x0;
    if (bVar3) {
      pAVar1 = param_3;
    }
    pAVar2 = (AstRawString *)0x0;
    if (bVar3) {
      pAVar2 = param_2;
    }
    SetFunctionName(this,*(Expression **)(param_1 + 8),pAVar2,pAVar1);
    return;
  }
  return;
}

