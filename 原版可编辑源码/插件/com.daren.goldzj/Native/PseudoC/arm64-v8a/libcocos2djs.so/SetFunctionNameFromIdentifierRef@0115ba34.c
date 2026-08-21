
/* v8::internal::Parser::SetFunctionNameFromIdentifierRef(v8::internal::Expression*,
   v8::internal::Expression*) */

void __thiscall
v8::internal::Parser::SetFunctionNameFromIdentifierRef
          (Parser *this,Expression *param_1,Expression *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  AstRawString *pAVar3;
  Expression *pEVar4;
  
  if ((*(uint *)(param_2 + 4) & 0x3f) == 0x35) {
    pEVar4 = param_2 + 8;
    if ((*(uint *)(param_2 + 4) >> 8 & 1) != 0) {
      pEVar4 = (Expression *)(*(long *)pEVar4 + 8);
    }
    pAVar3 = *(AstRawString **)pEVar4;
    uVar1 = Expression::IsAnonymousFunctionDefinition(param_1);
    if ((((uVar1 & 1) != 0) ||
        (uVar1 = Expression::IsConciseMethodDefinition(param_1), (uVar1 & 1) != 0)) ||
       (uVar1 = Expression::IsAccessorFunctionDefinition(param_1), (uVar1 & 1) != 0)) {
      pEVar4 = param_1;
      if ((*(uint *)(param_1 + 4) & 0x3f) != 0x26) {
        pEVar4 = (Expression *)0x0;
      }
      if ((*(uint *)(param_1 + 4) & 0x3f) == 0x1f) {
        pEVar4 = *(Expression **)(param_1 + 0x20);
      }
      if (pEVar4 != (Expression *)0x0) {
        if (pAVar3 == (AstRawString *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = AstValueFactory::NewConsString(*(AstValueFactory **)(this + 0x60),pAVar3);
        }
        *(undefined8 *)(pEVar4 + 0x20) = uVar2;
      }
    }
  }
  return;
}

