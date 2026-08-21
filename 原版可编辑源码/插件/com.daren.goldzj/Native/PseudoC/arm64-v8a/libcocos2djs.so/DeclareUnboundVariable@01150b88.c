
/* v8::internal::Parser::DeclareUnboundVariable(v8::internal::AstRawString const*,
   v8::internal::VariableMode, v8::internal::InitializationFlag, int) */

void __thiscall
v8::internal::Parser::DeclareUnboundVariable
          (Parser *this,undefined8 param_1,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 auStack_14 [4];
  
  DeclareVariable(this,param_1,0,param_3,param_4,*(undefined8 *)this,auStack_14,param_5,
                  *(undefined4 *)(**(long **)(this + 0xf8) + 4));
  return;
}

