
/* v8::internal::Parser::CheckCallable(v8::internal::Variable*, v8::internal::Expression*, int) */

void __thiscall
v8::internal::Parser::CheckCallable(Parser *this,Variable *param_1,Expression *param_2,int param_3)

{
  Zone *pZVar1;
  VariableProxy *this_00;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  pZVar1 = *(Zone **)(this + 0x68);
  this_00 = *(VariableProxy **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)this_00) < 0x18) {
    this_00 = (VariableProxy *)Zone::NewExpand(pZVar1,0x18);
  }
  else {
    *(VariableProxy **)(pZVar1 + 0x10) = this_00 + 0x18;
  }
  VariableProxy::VariableProxy(this_00,param_1,-1);
  pZVar1 = *(Zone **)(this + 0x68);
  puVar5 = *(undefined8 **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar5) < 0x10) {
    puVar5 = (undefined8 *)Zone::NewExpand(pZVar1,0x10);
  }
  else {
    *(undefined8 **)(pZVar1 + 0x10) = puVar5 + 2;
  }
  puVar5[1] = this_00;
  *puVar5 = 0x18b4ffffffff;
  pZVar1 = *(Zone **)(this + 0x68);
  puVar2 = *(undefined8 **)(pZVar1 + 0x10);
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x128);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar2) < 0x10) {
    puVar2 = (undefined8 *)Zone::NewExpand(pZVar1,0x10);
  }
  else {
    *(undefined8 **)(pZVar1 + 0x10) = puVar2 + 2;
  }
  puVar2[1] = uVar6;
  *puVar2 = 0x1a9ffffffff;
  pZVar1 = *(Zone **)(this + 0x68);
  puVar3 = *(undefined8 **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar3) < 0x18) {
    puVar3 = (undefined8 *)Zone::NewExpand(pZVar1,0x18);
  }
  else {
    *(undefined8 **)(pZVar1 + 0x10) = puVar3 + 3;
  }
  puVar3[1] = puVar5;
  puVar3[2] = puVar2;
  *puVar3 = 0x1b20ffffffff;
  pZVar1 = *(Zone **)(this + 0x68);
  piVar4 = *(int **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)piVar4) < 0x10) {
    piVar4 = (int *)Zone::NewExpand(pZVar1,0x10);
  }
  else {
    *(int **)(pZVar1 + 0x10) = piVar4 + 4;
  }
  *(Expression **)(piVar4 + 2) = param_2;
  *piVar4 = param_3;
  piVar4[1] = 9;
  pZVar1 = *(Zone **)(this + 0x68);
  uVar6 = *(undefined8 *)(this + 0x78);
  puVar5 = *(undefined8 **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar5) < 0x20) {
    puVar5 = (undefined8 *)Zone::NewExpand(pZVar1,0x20);
  }
  else {
    *(undefined8 **)(pZVar1 + 0x10) = puVar5 + 4;
  }
  puVar5[1] = puVar3;
  puVar5[2] = uVar6;
  puVar5[3] = piVar4;
  *puVar5 = 0xcffffffff;
  return;
}

