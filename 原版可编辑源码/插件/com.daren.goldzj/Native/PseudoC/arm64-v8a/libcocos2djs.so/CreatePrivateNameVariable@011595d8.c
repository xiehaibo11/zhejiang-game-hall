
/* v8::internal::Parser::CreatePrivateNameVariable(v8::internal::ClassScope*,
   v8::internal::VariableMode, v8::internal::IsStaticFlag, v8::internal::AstRawString const*) */

undefined8 __thiscall
v8::internal::Parser::CreatePrivateNameVariable
          (Parser *this,ClassScope *param_1,undefined8 param_3,undefined8 param_4,undefined8 param_5
          )

{
  int iVar1;
  int iVar2;
  Variable *pVVar3;
  Zone *this_00;
  VariableProxy *this_01;
  long lVar4;
  char local_34 [4];
  
  iVar1 = *(int *)**(undefined8 **)(this + 0xf8);
  iVar2 = ((int *)**(undefined8 **)(this + 0xf8))[1];
  local_34[0] = '\0';
  pVVar3 = (Variable *)ClassScope::DeclarePrivateName(param_1,param_5,param_3,param_4,local_34);
  if (local_34[0] == '\0') {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0xb0),iVar1,iVar2,0xb0,
               *(undefined8 *)(pVVar3 + 8));
    lVar4 = *(long *)(this + 0x158);
    if (*(char *)(lVar4 + 0x30) == '\0') {
      *(undefined4 *)(this + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x30) = 1;
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar4 + 0x18);
      this[0x1a0] = (Parser)0x6d;
      this[0x1f0] = (Parser)0x6d;
      this[0x240] = (Parser)0x6d;
    }
  }
  this_00 = *(Zone **)(this + 0x68);
  this_01 = *(VariableProxy **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x18) {
    this_01 = (VariableProxy *)Zone::NewExpand(this_00,0x18);
  }
  else {
    *(VariableProxy **)(this_00 + 0x10) = this_01 + 0x18;
  }
  VariableProxy::VariableProxy(this_01,pVVar3,iVar1);
  return *(undefined8 *)(this_01 + 8);
}

