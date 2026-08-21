
/* v8::internal::Parser::DeclareFunctionNameVar(v8::internal::AstRawString const*,
   v8::internal::FunctionSyntaxKind, v8::internal::DeclarationScope*) */

void __thiscall
v8::internal::Parser::DeclareFunctionNameVar
          (undefined8 param_1_00,AstRawString *param_1,char param_3,DeclarationScope *param_4)

{
  long lVar1;
  
  if ((param_3 == '\x01') &&
     (lVar1 = VariableMap::Lookup((VariableMap *)(param_4 + 0x20),param_1), lVar1 == 0)) {
    DeclarationScope::DeclareFunctionVar(param_4,param_1,(Scope *)0x0);
    return;
  }
  return;
}

