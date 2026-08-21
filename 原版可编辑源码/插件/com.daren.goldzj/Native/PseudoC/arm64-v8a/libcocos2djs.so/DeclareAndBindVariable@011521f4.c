
/* v8::internal::Parser::DeclareAndBindVariable(v8::internal::VariableProxy*,
   v8::internal::VariableKind, v8::internal::VariableMode, v8::internal::Scope*, bool*, int) */

void __thiscall
v8::internal::Parser::DeclareAndBindVariable
          (Parser *this,VariableProxy *param_1,undefined8 param_3,uint param_4,undefined8 param_5,
          undefined8 param_6,undefined4 param_7)

{
  Variable *pVVar1;
  VariableProxy *pVVar2;
  
  pVVar2 = param_1 + 8;
  if (((byte)param_1[5] & 1) != 0) {
    pVVar2 = (VariableProxy *)(*(long *)pVVar2 + 8);
  }
  pVVar1 = (Variable *)
           DeclareVariable(this,*(undefined8 *)pVVar2,param_3,param_4,(param_4 & 0xff) == 2,param_5,
                           param_6,*(undefined4 *)param_1,0xffffffff);
  *(undefined4 *)(pVVar1 + 0x24) = param_7;
  VariableProxy::BindTo(param_1,pVVar1);
  return;
}

