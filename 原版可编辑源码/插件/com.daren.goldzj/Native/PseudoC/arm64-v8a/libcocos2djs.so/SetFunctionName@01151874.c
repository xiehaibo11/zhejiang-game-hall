
/* v8::internal::Parser::SetFunctionName(v8::internal::Expression*, v8::internal::AstRawString
   const*, v8::internal::AstRawString const*) */

void __thiscall
v8::internal::Parser::SetFunctionName
          (Parser *this,Expression *param_1,AstRawString *param_2,AstRawString *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  Expression *pEVar3;
  
  uVar1 = Expression::IsAnonymousFunctionDefinition(param_1);
  if ((((uVar1 & 1) != 0) ||
      (uVar1 = Expression::IsConciseMethodDefinition(param_1), (uVar1 & 1) != 0)) ||
     (uVar1 = Expression::IsAccessorFunctionDefinition(param_1), (uVar1 & 1) != 0)) {
    pEVar3 = param_1;
    if ((*(uint *)(param_1 + 4) & 0x3f) != 0x26) {
      pEVar3 = (Expression *)0x0;
    }
    if ((*(uint *)(param_1 + 4) & 0x3f) == 0x1f) {
      pEVar3 = *(Expression **)(param_1 + 0x20);
    }
    if (pEVar3 != (Expression *)0x0) {
      if (param_2 == (AstRawString *)0x0) {
        uVar2 = 0;
      }
      else if (param_3 == (AstRawString *)0x0) {
        uVar2 = AstValueFactory::NewConsString(*(AstValueFactory **)(this + 0x60),param_2);
      }
      else {
        uVar2 = AstValueFactory::NewConsString(*(AstValueFactory **)(this + 0x60),param_3,param_2);
      }
      *(undefined8 *)(pEVar3 + 0x20) = uVar2;
    }
  }
  return;
}

