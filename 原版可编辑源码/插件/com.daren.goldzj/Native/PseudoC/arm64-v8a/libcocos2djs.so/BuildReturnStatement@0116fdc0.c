
/* v8::internal::ParserBase<v8::internal::Parser>::BuildReturnStatement(v8::internal::Expression*,
   int, int) */

void __thiscall
v8::internal::ParserBase<v8::internal::Parser>::BuildReturnStatement
          (ParserBase<v8::internal::Parser> *this,Expression *param_1,int param_2,int param_3)

{
  long lVar1;
  int *piVar2;
  Expression *pEVar3;
  int iVar4;
  Zone *pZVar5;
  
  if (param_1 == (Expression *)0x0) {
    pZVar5 = *(Zone **)(this + 0x68);
    pEVar3 = *(Expression **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pEVar3) < 0x10) {
      pEVar3 = (Expression *)Zone::NewExpand(pZVar5,0x10);
    }
    else {
      *(Expression **)(pZVar5 + 0x10) = pEVar3 + 0x10;
    }
    *(undefined8 *)pEVar3 = 0x329ffffffff;
  }
  else {
    lVar1 = Scope::AsDeclarationScope();
    pEVar3 = param_1;
    if (*(byte *)(lVar1 + 0x85) - 0xd < 2) {
      pZVar5 = *(Zone **)(this + 0x68);
      pEVar3 = *(Expression **)(pZVar5 + 0x10);
      if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pEVar3) < 0x10) {
        pEVar3 = (Expression *)Zone::NewExpand(pZVar5,0x10);
      }
      else {
        *(Expression **)(pZVar5 + 0x10) = pEVar3 + 0x10;
      }
      *(Expression **)(pEVar3 + 8) = param_1;
      *(undefined8 *)pEVar3 = 0x19ffffffff;
      *(int *)(*(long *)(this + 0x10) + 0x14) = *(int *)(*(long *)(this + 0x10) + 0x14) + 1;
    }
  }
  lVar1 = Scope::AsDeclarationScope();
  pZVar5 = *(Zone **)(this + 0x68);
  piVar2 = *(int **)(pZVar5 + 0x10);
  if (*(byte *)(lVar1 + 0x85) - 10 < 5) {
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)piVar2) < 0x18) {
      piVar2 = (int *)Zone::NewExpand(pZVar5,0x18);
      iVar4 = 0x4f;
    }
    else {
      *(int **)(pZVar5 + 0x10) = piVar2 + 6;
      iVar4 = 0x4f;
    }
  }
  else {
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)piVar2) < 0x18) {
      piVar2 = (int *)Zone::NewExpand(pZVar5,0x18);
    }
    else {
      *(int **)(pZVar5 + 0x10) = piVar2 + 6;
    }
    iVar4 = 0xf;
  }
  *(Expression **)(piVar2 + 2) = pEVar3;
  piVar2[4] = param_3;
  *piVar2 = param_2;
  piVar2[1] = iVar4;
  return;
}

