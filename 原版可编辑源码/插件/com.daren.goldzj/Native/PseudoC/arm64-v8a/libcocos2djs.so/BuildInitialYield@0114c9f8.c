
/* v8::internal::Parser::BuildInitialYield(int, v8::internal::FunctionKind) */

void v8::internal::Parser::BuildInitialYield(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  Zone *pZVar3;
  undefined4 *puVar4;
  VariableProxy *this;
  Variable *pVVar5;
  
  lVar2 = Scope::AsDeclarationScope();
  if (*(long *)(lVar2 + 0xd8) == 0) {
    pVVar5 = (Variable *)0x0;
  }
  else {
    pVVar5 = *(Variable **)(*(long *)(lVar2 + 0xd8) + 8);
  }
  pZVar3 = (Zone *)param_1[0xd];
  this = *(VariableProxy **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)this) < 0x18) {
    this = (VariableProxy *)Zone::NewExpand(pZVar3,0x18);
  }
  else {
    *(VariableProxy **)(pZVar3 + 0x10) = this + 0x18;
  }
  VariableProxy::VariableProxy(this,pVVar5,-1);
  *(int *)(param_1[2] + 0x14) = *(int *)(param_1[2] + 0x14) + 1;
  uVar1 = *(undefined4 *)(*param_1 + 0x70);
  if (this == (VariableProxy *)0x0) {
    pZVar3 = (Zone *)param_1[0xd];
    this = *(VariableProxy **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)this) < 0x10) {
      this = (VariableProxy *)Zone::NewExpand(pZVar3,0x10);
    }
    else {
      *(VariableProxy **)(pZVar3 + 0x10) = this + 0x10;
    }
    *(undefined4 *)this = uVar1;
    *(undefined4 *)(this + 4) = 0x329;
  }
  pZVar3 = (Zone *)param_1[0xd];
  puVar4 = *(undefined4 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar4) < 0x10) {
    puVar4 = (undefined4 *)Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(undefined4 **)(pZVar3 + 0x10) = puVar4 + 4;
  }
  *(VariableProxy **)(puVar4 + 2) = this;
  *puVar4 = uVar1;
  puVar4[1] = 0x36;
  return;
}

