
/* v8::internal::Parser::NewSuperPropertyReference(int) */

void __thiscall v8::internal::Parser::NewSuperPropertyReference(Parser *this,int param_1)

{
  Zone *pZVar1;
  VariableProxy *pVVar2;
  undefined8 *puVar3;
  int *piVar4;
  int *piVar5;
  Scope *this_00;
  undefined8 uVar6;
  
  pZVar1 = *(Zone **)(this + 0x68);
  this_00 = *(Scope **)this;
  pVVar2 = *(VariableProxy **)(pZVar1 + 0x10);
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x1e0);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)pVVar2) < 0x18) {
    pVVar2 = (VariableProxy *)Zone::NewExpand(pZVar1,0x18);
  }
  else {
    *(VariableProxy **)(pZVar1 + 0x10) = pVVar2 + 0x18;
  }
  *(undefined8 *)(pVVar2 + 8) = uVar6;
  *(undefined8 *)(pVVar2 + 0x10) = 0;
  *(int *)pVVar2 = param_1;
  *(undefined4 *)(pVVar2 + 4) = 0x835;
  Scope::AddUnresolved(this_00,pVVar2);
  pZVar1 = *(Zone **)(this + 0x68);
  puVar3 = *(undefined8 **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar3) < 0x10) {
    puVar3 = (undefined8 *)Zone::NewExpand(pZVar1,0x10);
  }
  else {
    *(undefined8 **)(pZVar1 + 0x10) = puVar3 + 2;
  }
  *(undefined1 *)(puVar3 + 1) = 0;
  *puVar3 = 0x229ffffffff;
  pZVar1 = *(Zone **)(this + 0x68);
  piVar4 = *(int **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)piVar4) < 0x18) {
    piVar4 = (int *)Zone::NewExpand(pZVar1,0x18);
  }
  else {
    *(int **)(pZVar1 + 0x10) = piVar4 + 6;
  }
  *(VariableProxy **)(piVar4 + 2) = pVVar2;
  *(undefined8 **)(piVar4 + 4) = puVar3;
  *piVar4 = param_1;
  piVar4[1] = 0x2c;
  pZVar1 = *(Zone **)(this + 0x68);
  piVar5 = *(int **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)piVar5) < 0x10) {
    piVar5 = (int *)Zone::NewExpand(pZVar1,0x10);
  }
  else {
    *(int **)(pZVar1 + 0x10) = piVar5 + 4;
  }
  *piVar5 = param_1;
  piVar5[1] = 0x30;
  *(int **)(piVar5 + 2) = piVar4;
  return;
}

