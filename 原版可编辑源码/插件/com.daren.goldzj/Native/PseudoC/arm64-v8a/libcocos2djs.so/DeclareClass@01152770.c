
/* v8::internal::Parser::DeclareClass(v8::internal::AstRawString const*, v8::internal::Expression*,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*, int, int) */

undefined8 * __thiscall
v8::internal::Parser::DeclareClass
          (Parser *this,AstRawString *param_1,Expression *param_2,ZoneList *param_3,int param_4,
          int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  Zone *pZVar5;
  VariableProxy *this_00;
  int *piVar6;
  Assignment *pAVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  void *pvVar14;
  Scope *pSVar15;
  undefined1 auStack_6c [4];
  char local_68 [4];
  char local_64 [4];
  
  pZVar5 = *(Zone **)(this + 0x68);
  this_00 = *(VariableProxy **)(pZVar5 + 0x10);
  uVar3 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)this_00) < 0x18) {
    this_00 = (VariableProxy *)Zone::NewExpand(pZVar5,0x18);
  }
  else {
    *(VariableProxy **)(pZVar5 + 0x10) = this_00 + 0x18;
  }
  *(AstRawString **)(this_00 + 8) = param_1;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined4 *)this_00 = uVar3;
  *(undefined4 *)(this_00 + 4) = 0x835;
  pZVar5 = *(Zone **)(this + 0x68);
  pSVar15 = *(Scope **)this;
  piVar6 = *(int **)(pZVar5 + 0x10);
  iVar4 = *(int *)(**(long **)(this + 0xf8) + 4);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)piVar6) < 0x18) {
    piVar6 = (int *)Zone::NewExpand(pZVar5,0x18);
  }
  else {
    *(int **)(pZVar5 + 0x10) = piVar6 + 6;
  }
  piVar6[4] = 0;
  piVar6[5] = 0;
  *piVar6 = param_4;
  piVar6[1] = 0;
  local_64[0] = '\x01';
  local_68[0] = '\0';
  Scope::DeclareVariable(pSVar15,piVar6,param_1,param_4,0,0,0,auStack_6c,local_68,local_64);
  if (local_64[0] == '\0') {
    if (iVar4 == -1) {
      iVar4 = param_4 + 1;
    }
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0xb0),param_4,iVar4,0xb0,
               *(undefined8 *)(*(long *)(piVar6 + 2) + 8));
    lVar13 = *(long *)(this + 0x158);
    if (*(char *)(lVar13 + 0x30) == '\0') {
      *(undefined4 *)(this + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar13 + 0x30) = 1;
      *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(lVar13 + 0x18);
      this[0x1a0] = (Parser)0x6d;
      this[0x1f0] = (Parser)0x6d;
      this[0x240] = (Parser)0x6d;
    }
  }
  else if (local_68[0] != '\0') {
    *(int *)(this + 0x368) = *(int *)(this + 0x368) + 1;
  }
  VariableProxy::BindTo(this_00,*(Variable **)(piVar6 + 2));
  *(int *)(*(long *)(this_00 + 8) + 0x24) = param_5;
  if (param_3 != (ZoneList *)0x0) {
    uVar2 = *(uint *)(param_3 + 8);
    uVar12 = *(uint *)(param_3 + 0xc);
    if ((int)uVar12 < (int)uVar2) {
      pvVar14 = *(void **)param_3;
    }
    else {
      pZVar5 = *(Zone **)(this + 0xb8);
      uVar1 = uVar2 << 1 | 1;
      uVar11 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      pvVar14 = *(void **)(pZVar5 + 0x10);
      if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pvVar14) < uVar11) {
        pvVar14 = (void *)Zone::NewExpand(pZVar5,uVar11);
      }
      else {
        *(ulong *)(pZVar5 + 0x10) = (long)pvVar14 + uVar11;
      }
      uVar12 = *(uint *)(param_3 + 0xc);
      if (0 < (int)uVar12) {
        MemCopy(pvVar14,*(void **)param_3,(ulong)uVar12 << 3);
        uVar12 = *(uint *)(param_3 + 0xc);
      }
      *(void **)param_3 = pvVar14;
      *(uint *)(param_3 + 8) = uVar1;
    }
    *(uint *)(param_3 + 0xc) = uVar12 + 1;
    *(AstRawString **)((long)pvVar14 + (long)(int)uVar12 * 8) = param_1;
  }
  pZVar5 = *(Zone **)(this + 0x68);
  pAVar7 = *(Assignment **)(pZVar5 + 0x10);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pAVar7) < 0x18) {
    pAVar7 = (Assignment *)Zone::NewExpand(pZVar5,0x18);
  }
  else {
    *(Assignment **)(pZVar5 + 0x10) = pAVar7 + 0x18;
  }
  Assignment::Assignment(pAVar7,0x18,0x10,this_00,param_2,param_4);
  pZVar5 = *(Zone **)(this + 0x68);
  puVar8 = *(undefined8 **)(pZVar5 + 0x10);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar8) < 0x10) {
    puVar8 = (undefined8 *)Zone::NewExpand(pZVar5,0x10);
  }
  else {
    *(undefined8 **)(pZVar5 + 0x10) = puVar8 + 2;
  }
  puVar8[1] = pAVar7;
  *puVar8 = 0x9ffffffff;
  pZVar5 = *(Zone **)(this + 0x68);
  puVar9 = *(undefined8 **)(pZVar5 + 0x10);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar9) < 0x20) {
    puVar9 = (undefined8 *)Zone::NewExpand(pZVar5,0x20);
  }
  else {
    *(undefined8 **)(pZVar5 + 0x10) = puVar9 + 4;
  }
  pZVar5 = *(Zone **)(this + 0x68);
  *puVar9 = 0x47ffffffff;
  puVar10 = *(undefined8 **)(pZVar5 + 0x10);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar10) < 8) {
    puVar10 = (undefined8 *)Zone::NewExpand(pZVar5,8);
  }
  else {
    *(undefined8 **)(pZVar5 + 0x10) = puVar10 + 1;
  }
  puVar9[1] = puVar10;
  puVar9[3] = 0;
  puVar9[2] = 0x100000001;
  *(uint *)((long)puVar9 + 4) = *(uint *)((long)puVar9 + 4) | 0x80;
  *puVar10 = puVar8;
  return puVar9;
}

