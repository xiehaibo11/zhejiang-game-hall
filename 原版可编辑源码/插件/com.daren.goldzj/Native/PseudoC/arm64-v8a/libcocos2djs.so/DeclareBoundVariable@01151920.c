
/* v8::internal::Parser::DeclareBoundVariable(v8::internal::AstRawString const*,
   v8::internal::VariableMode, int) */

VariableProxy * __thiscall
v8::internal::Parser::DeclareBoundVariable
          (Parser *this,undefined8 param_1,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  Zone *this_00;
  Variable *pVVar2;
  VariableProxy *this_01;
  undefined1 auStack_44 [4];
  
  this_00 = *(Zone **)(this + 0x68);
  this_01 = *(VariableProxy **)(this_00 + 0x10);
  uVar1 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x18) {
    this_01 = (VariableProxy *)Zone::NewExpand(this_00,0x18);
  }
  else {
    *(VariableProxy **)(this_00 + 0x10) = this_01 + 0x18;
  }
  *(undefined8 *)(this_01 + 8) = param_1;
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined4 *)this_01 = uVar1;
  *(undefined4 *)(this_01 + 4) = 0x835;
  pVVar2 = (Variable *)
           DeclareVariable(this,param_1,0,param_3,(param_3 & 0xff) == 2,*(undefined8 *)this,
                           auStack_44,param_4,*(undefined4 *)(**(long **)(this + 0xf8) + 4));
  VariableProxy::BindTo(this_01,pVVar2);
  return this_01;
}

