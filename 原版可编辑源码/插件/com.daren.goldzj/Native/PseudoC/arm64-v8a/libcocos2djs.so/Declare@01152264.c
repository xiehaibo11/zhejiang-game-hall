
/* v8::internal::Parser::Declare(v8::internal::Declaration*, v8::internal::AstRawString const*,
   v8::internal::VariableKind, v8::internal::VariableMode, v8::internal::InitializationFlag,
   v8::internal::Scope*, bool*, int, int) */

void __thiscall
v8::internal::Parser::Declare
          (Parser *this,long param_1,undefined8 param_2,uint param_4,undefined8 param_5,
          undefined4 param_6,Scope *param_7,undefined8 param_8,int param_9,int param_10)

{
  long lVar1;
  char local_38 [4];
  char local_34 [4];
  
  local_34[0] = '\x01';
  local_38[0] = '\0';
  Scope::DeclareVariable
            (param_7,param_1,param_2,param_9,param_5,param_4,param_6,param_8,local_38,local_34);
  if (local_34[0] == '\0') {
    if (param_10 == -1) {
      param_10 = param_9 + 1;
    }
    if ((param_4 & 0xff) == 1) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(this + 0xb0),param_9,param_10,0x11d,0);
    }
    else {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(this + 0xb0),param_9,param_10,0xb0,
                 *(undefined8 *)(*(long *)(param_1 + 8) + 8));
    }
    lVar1 = *(long *)(this + 0x158);
    if (*(char *)(lVar1 + 0x30) == '\0') {
      *(undefined4 *)(this + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar1 + 0x30) = 1;
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + 0x18);
      this[0x1a0] = (Parser)0x6d;
      this[0x1f0] = (Parser)0x6d;
      this[0x240] = (Parser)0x6d;
    }
  }
  else if (local_38[0] != '\0') {
    *(int *)(this + 0x368) = *(int *)(this + 0x368) + 1;
  }
  return;
}

