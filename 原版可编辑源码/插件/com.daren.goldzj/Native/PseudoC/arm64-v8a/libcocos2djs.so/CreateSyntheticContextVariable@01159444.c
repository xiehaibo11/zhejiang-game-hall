
/* v8::internal::Parser::CreateSyntheticContextVariable(v8::internal::AstRawString const*) */

undefined8 __thiscall
v8::internal::Parser::CreateSyntheticContextVariable(Parser *this,AstRawString *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  Zone *pZVar4;
  VariableProxy *this_00;
  undefined8 *puVar5;
  long lVar6;
  Scope *pSVar7;
  undefined1 auStack_4c [4];
  char local_48 [4];
  char local_44 [4];
  
  pZVar4 = *(Zone **)(this + 0x68);
  this_00 = *(VariableProxy **)(pZVar4 + 0x10);
  uVar2 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)this_00) < 0x18) {
    this_00 = (VariableProxy *)Zone::NewExpand(pZVar4,0x18);
  }
  else {
    *(VariableProxy **)(pZVar4 + 0x10) = this_00 + 0x18;
  }
  *(AstRawString **)(this_00 + 8) = param_1;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined4 *)this_00 = uVar2;
  *(undefined4 *)(this_00 + 4) = 0x835;
  pZVar4 = *(Zone **)(this + 0x68);
  pSVar7 = *(Scope **)this;
  puVar5 = *(undefined8 **)(pZVar4 + 0x10);
  iVar3 = *(int *)(**(long **)(this + 0xf8) + 4);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar5) < 0x18) {
    puVar5 = (undefined8 *)Zone::NewExpand(pZVar4,0x18);
  }
  else {
    *(undefined8 **)(pZVar4 + 0x10) = puVar5 + 3;
  }
  puVar5[2] = 0;
  *puVar5 = 0xffffffff;
  local_44[0] = '\x01';
  local_48[0] = '\0';
  Scope::DeclareVariable(pSVar7,puVar5,param_1,0xffffffff,1,0,0,auStack_4c,local_48,local_44);
  if (local_44[0] == '\0') {
    iVar1 = 0;
    if (iVar3 != -1) {
      iVar1 = iVar3;
    }
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0xb0),0xffffffff,iVar1,0xb0,
               *(undefined8 *)(puVar5[1] + 8));
    lVar6 = *(long *)(this + 0x158);
    if (*(char *)(lVar6 + 0x30) == '\0') {
      *(undefined4 *)(this + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar6 + 0x18);
      this[0x1a0] = (Parser)0x6d;
      this[0x1f0] = (Parser)0x6d;
      this[0x240] = (Parser)0x6d;
    }
  }
  else if (local_48[0] != '\0') {
    *(int *)(this + 0x368) = *(int *)(this + 0x368) + 1;
  }
  VariableProxy::BindTo(this_00,(Variable *)puVar5[1]);
  *(ushort *)(*(long *)(this_00 + 8) + 0x28) = *(ushort *)(*(long *)(this_00 + 8) + 0x28) | 0x400;
  return *(undefined8 *)(this_00 + 8);
}

