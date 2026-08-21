
/* v8::internal::Parser::RewriteReturn(v8::internal::Expression*, int) */

Expression * __thiscall
v8::internal::Parser::RewriteReturn(Parser *this,Expression *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  Variable *pVVar3;
  Assignment *pAVar4;
  undefined8 *puVar5;
  int *piVar6;
  VariableProxy *pVVar7;
  Zone *pZVar8;
  undefined8 uVar9;
  
  lVar2 = Scope::AsDeclarationScope();
  if (*(byte *)(lVar2 + 0x85) - 5 < 2) {
    pVVar3 = (Variable *)
             Scope::NewTemporary(*(Scope **)this,
                                 *(AstRawString **)
                                  (*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110));
    pZVar8 = *(Zone **)(this + 0x68);
    pVVar7 = *(VariableProxy **)(pZVar8 + 0x10);
    if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)pVVar7) < 0x18) {
      pVVar7 = (VariableProxy *)Zone::NewExpand(pZVar8,0x18);
    }
    else {
      *(VariableProxy **)(pZVar8 + 0x10) = pVVar7 + 0x18;
    }
    VariableProxy::VariableProxy(pVVar7,pVVar3,-1);
    uVar1 = *(uint *)(pVVar7 + 4);
    if (((uVar1 & 0x3f) == 0x35) && (*(uint *)(pVVar7 + 4) = uVar1 | 0x80, (uVar1 >> 8 & 1) != 0)) {
      Variable::SetMaybeAssigned(*(Variable **)(pVVar7 + 8));
    }
    pZVar8 = *(Zone **)(this + 0x68);
    pAVar4 = *(Assignment **)(pZVar8 + 0x10);
    if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)pAVar4) < 0x18) {
      pAVar4 = (Assignment *)Zone::NewExpand(pZVar8,0x18);
    }
    else {
      *(Assignment **)(pZVar8 + 0x10) = pAVar4 + 0x18;
    }
    Assignment::Assignment(pAVar4,0x18,0x11,pVVar7,param_1,param_2);
    pZVar8 = *(Zone **)(this + 0x68);
    puVar5 = *(undefined8 **)(pZVar8 + 0x10);
    if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)puVar5) < 0x10) {
      puVar5 = (undefined8 *)Zone::NewExpand(pZVar8,0x10);
    }
    else {
      *(undefined8 **)(pZVar8 + 0x10) = puVar5 + 2;
    }
    *puVar5 = 0x329ffffffff;
    pZVar8 = *(Zone **)(this + 0x68);
    piVar6 = *(int **)(pZVar8 + 0x10);
    if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)piVar6) < 0x18) {
      piVar6 = (int *)Zone::NewExpand(pZVar8,0x18);
    }
    else {
      *(int **)(pZVar8 + 0x10) = piVar6 + 6;
    }
    *(Assignment **)(piVar6 + 2) = pAVar4;
    *(undefined8 **)(piVar6 + 4) = puVar5;
    *piVar6 = param_2;
    piVar6[1] = 0x1b20;
    *(uint *)(*(long *)(this + 0x80) + 4) = *(uint *)(*(long *)(this + 0x80) + 4) & 0xffffffbf;
    pZVar8 = *(Zone **)(this + 0x68);
    uVar9 = *(undefined8 *)(this + 0x80);
    pVVar7 = *(VariableProxy **)(pZVar8 + 0x10);
    if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)pVVar7) < 0x18) {
      pVVar7 = (VariableProxy *)Zone::NewExpand(pZVar8,0x18);
    }
    else {
      *(VariableProxy **)(pZVar8 + 0x10) = pVVar7 + 0x18;
    }
    VariableProxy::VariableProxy(pVVar7,pVVar3,-1);
    pZVar8 = *(Zone **)(this + 0x68);
    param_1 = *(Expression **)(pZVar8 + 0x10);
    if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)param_1) < 0x20) {
      param_1 = (Expression *)Zone::NewExpand(pZVar8,0x20);
    }
    else {
      *(Expression **)(pZVar8 + 0x10) = param_1 + 0x20;
    }
    *(int **)(param_1 + 8) = piVar6;
    *(undefined8 *)(param_1 + 0x10) = uVar9;
    *(int *)param_1 = param_2;
    *(undefined4 *)(param_1 + 4) = 0x22;
    *(VariableProxy **)(param_1 + 0x18) = pVVar7;
  }
  return param_1;
}

