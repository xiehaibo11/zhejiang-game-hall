
/* v8::internal::Parser::NewSuperCallReference(int) */

void __thiscall v8::internal::Parser::NewSuperCallReference(Parser *this,int param_1)

{
  VariableProxy *pVVar1;
  VariableProxy *pVVar2;
  int *piVar3;
  Zone *pZVar4;
  Scope *pSVar5;
  undefined8 uVar6;
  
  pZVar4 = *(Zone **)(this + 0x68);
  pSVar5 = *(Scope **)this;
  pVVar1 = *(VariableProxy **)(pZVar4 + 0x10);
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x168);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)pVVar1) < 0x18) {
    pVVar1 = (VariableProxy *)Zone::NewExpand(pZVar4,0x18);
  }
  else {
    *(VariableProxy **)(pZVar4 + 0x10) = pVVar1 + 0x18;
  }
  *(undefined8 *)(pVVar1 + 8) = uVar6;
  *(undefined8 *)(pVVar1 + 0x10) = 0;
  *(int *)pVVar1 = param_1;
  *(undefined4 *)(pVVar1 + 4) = 0x835;
  Scope::AddUnresolved(pSVar5,pVVar1);
  pZVar4 = *(Zone **)(this + 0x68);
  pSVar5 = *(Scope **)this;
  pVVar2 = *(VariableProxy **)(pZVar4 + 0x10);
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x1e0);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)pVVar2) < 0x18) {
    pVVar2 = (VariableProxy *)Zone::NewExpand(pZVar4,0x18);
  }
  else {
    *(VariableProxy **)(pZVar4 + 0x10) = pVVar2 + 0x18;
  }
  *(undefined8 *)(pVVar2 + 8) = uVar6;
  *(undefined8 *)(pVVar2 + 0x10) = 0;
  *(int *)pVVar2 = param_1;
  *(undefined4 *)(pVVar2 + 4) = 0x835;
  Scope::AddUnresolved(pSVar5,pVVar2);
  pZVar4 = *(Zone **)(this + 0x68);
  piVar3 = *(int **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)piVar3) < 0x18) {
    piVar3 = (int *)Zone::NewExpand(pZVar4,0x18);
  }
  else {
    *(int **)(pZVar4 + 0x10) = piVar3 + 6;
  }
  *piVar3 = param_1;
  piVar3[1] = 0x2f;
  *(VariableProxy **)(piVar3 + 2) = pVVar1;
  *(VariableProxy **)(piVar3 + 4) = pVVar2;
  return;
}

