
/* v8::internal::Parser::DesugarBindingInForEachStatement(v8::internal::ParserBase<v8::internal::Parser>::ForInfo*,
   v8::internal::Block**, v8::internal::Expression**) */

void __thiscall
v8::internal::Parser::DesugarBindingInForEachStatement
          (Parser *this,ForInfo *param_1,Block **param_2,Expression **param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  Variable *pVVar4;
  Block *pBVar5;
  undefined8 *puVar6;
  VariableProxy *pVVar7;
  uint uVar8;
  Zone *pZVar9;
  ulong uVar10;
  long lVar11;
  void *pvVar12;
  Parser *local_68;
  ulong local_60;
  ulong uStack_58;
  
  lVar11 = *(long *)(param_1 + 0x28);
  pVVar4 = (Variable *)
           Scope::NewTemporary(*(Scope **)this,
                               *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0xd8));
  local_68 = this + 200;
  local_60 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  pZVar9 = *(Zone **)(this + 0x68);
  iVar3 = *(int *)(param_1 + 0x14);
  pVVar7 = *(VariableProxy **)(pZVar9 + 0x10);
  uStack_58 = local_60;
  if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)pVVar7) < 0x18) {
    pVVar7 = (VariableProxy *)Zone::NewExpand(pZVar9,0x18);
  }
  else {
    *(VariableProxy **)(pZVar9 + 0x10) = pVVar7 + 0x18;
  }
  VariableProxy::VariableProxy(pVVar7,pVVar4,iVar3);
  *(VariableProxy **)(lVar11 + 8) = pVVar7;
  InitializeVariables(this,&local_68);
  pZVar9 = *(Zone **)(this + 0x68);
  pBVar5 = *(Block **)(pZVar9 + 0x10);
  if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)pBVar5) < 0x20) {
    pBVar5 = (Block *)Zone::NewExpand(pZVar9,0x20);
  }
  else {
    *(Block **)(pZVar9 + 0x10) = pBVar5 + 0x20;
  }
  pZVar9 = *(Zone **)(this + 0x68);
  *(undefined8 *)pBVar5 = 0x47ffffffff;
  lVar11 = *(long *)(pZVar9 + 0x10);
  if ((ulong)(*(long *)(pZVar9 + 0x18) - lVar11) < 0x18) {
    lVar11 = Zone::NewExpand(pZVar9,0x18);
  }
  else {
    *(long *)(pZVar9 + 0x10) = lVar11 + 0x18;
  }
  *(long *)(pBVar5 + 8) = lVar11;
  *(undefined8 *)(pBVar5 + 0x18) = 0;
  *(undefined8 *)(pBVar5 + 0x10) = 3;
  *param_2 = pBVar5;
  pZVar9 = *(Zone **)(this + 0x68);
  puVar6 = *(undefined8 **)(pZVar9 + 0x10);
  if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)puVar6) < 0x20) {
    puVar6 = (undefined8 *)Zone::NewExpand(pZVar9,0x20);
  }
  else {
    *(undefined8 **)(pZVar9 + 0x10) = puVar6 + 4;
  }
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0xc7ffffffff;
  puVar6[1] = 0;
  ScopedList<v8::internal::Statement*,void*>::CopyTo
            ((ScopedList<v8::internal::Statement*,void*> *)&local_68,(ZoneList *)(puVar6 + 1),
             *(Zone **)(this + 0x68));
  uVar2 = *(uint *)(pBVar5 + 0x10);
  uVar8 = *(uint *)(pBVar5 + 0x14);
  if ((int)uVar8 < (int)uVar2) {
    pvVar12 = *(void **)(pBVar5 + 8);
  }
  else {
    pZVar9 = *(Zone **)(this + 0xb8);
    uVar1 = uVar2 << 1 | 1;
    uVar10 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    pvVar12 = *(void **)(pZVar9 + 0x10);
    if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)pvVar12) < uVar10) {
      pvVar12 = (void *)Zone::NewExpand(pZVar9,uVar10);
    }
    else {
      *(ulong *)(pZVar9 + 0x10) = (long)pvVar12 + uVar10;
    }
    uVar8 = *(uint *)(pBVar5 + 0x14);
    if (0 < (int)uVar8) {
      MemCopy(pvVar12,*(void **)(pBVar5 + 8),(ulong)uVar8 << 3);
      uVar8 = *(uint *)(pBVar5 + 0x14);
    }
    *(void **)(pBVar5 + 8) = pvVar12;
    *(uint *)(pBVar5 + 0x10) = uVar1;
  }
  *(uint *)(pBVar5 + 0x14) = uVar8 + 1;
  *(undefined8 **)((long)pvVar12 + (long)(int)uVar8 * 8) = puVar6;
  pZVar9 = *(Zone **)(this + 0x68);
  iVar3 = *(int *)(param_1 + 0x14);
  pVVar7 = *(VariableProxy **)(pZVar9 + 0x10);
  if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)pVVar7) < 0x18) {
    pVVar7 = (VariableProxy *)Zone::NewExpand(pZVar9,0x18);
  }
  else {
    *(VariableProxy **)(pZVar9 + 0x10) = pVVar7 + 0x18;
  }
  VariableProxy::VariableProxy(pVVar7,pVVar4,iVar3);
  *param_3 = (Expression *)pVVar7;
  uVar10 = *(long *)(local_68 + 8) - *(long *)local_68 >> 3;
  if (local_60 < uVar10 || local_60 - uVar10 == 0) {
    if (local_60 < uVar10) {
      *(ulong *)(local_68 + 8) = *(long *)local_68 + local_60 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_68,local_60 - uVar10);
  }
  return;
}

