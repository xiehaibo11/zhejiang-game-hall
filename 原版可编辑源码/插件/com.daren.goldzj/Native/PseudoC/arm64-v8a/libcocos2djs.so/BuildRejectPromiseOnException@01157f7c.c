
/* v8::internal::Parser::BuildRejectPromiseOnException(v8::internal::Block*) */

undefined8 * __thiscall
v8::internal::Parser::BuildRejectPromiseOnException(Parser *this,Block *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  Zone *pZVar5;
  long lVar6;
  undefined8 *puVar7;
  Scope *pSVar8;
  VariableProxy *pVVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  void *pvVar16;
  undefined8 uVar17;
  Parser *this_00;
  Variable *pVVar18;
  Parser *local_70;
  ulong uStack_68;
  ulong local_60;
  VariableProxy *local_58;
  
  pZVar5 = *(Zone **)(this + 0x68);
  puVar7 = *(undefined8 **)(pZVar5 + 0x10);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar7) < 0x20) {
    puVar7 = (undefined8 *)Zone::NewExpand(pZVar5,0x20);
  }
  else {
    *(undefined8 **)(pZVar5 + 0x10) = puVar7 + 4;
  }
  pZVar5 = *(Zone **)(this + 0x68);
  *puVar7 = 0x47ffffffff;
  lVar6 = *(long *)(pZVar5 + 0x10);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - lVar6) < 8) {
    lVar6 = Zone::NewExpand(pZVar5,8);
  }
  else {
    *(long *)(pZVar5 + 0x10) = lVar6 + 8;
  }
  puVar7[1] = lVar6;
  puVar7[3] = 0;
  puVar7[2] = 1;
  *(uint *)((long)puVar7 + 4) = *(uint *)((long)puVar7 + 4) | 0x80;
  pZVar5 = *(Zone **)(this + 0xb8);
  uVar17 = *(undefined8 *)this;
  pSVar8 = *(Scope **)(pZVar5 + 0x10);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pSVar8) < 0x88) {
    pSVar8 = (Scope *)Zone::NewExpand(pZVar5,0x88);
  }
  else {
    *(Scope **)(pZVar5 + 0x10) = pSVar8 + 0x88;
  }
  Scope::Scope(pSVar8,*(undefined8 *)(this + 0xb8),uVar17,5);
  Scope::DeclareLocal(pSVar8,*(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x108),2,0,
                      &local_70,1);
  *(ushort *)(pSVar8 + 0x81) = *(ushort *)(pSVar8 + 0x81) | 0x10;
  uStack_68 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  local_70 = this + 200;
  local_60 = uStack_68;
  lVar6 = Scope::AsDeclarationScope();
  if (*(long *)(lVar6 + 0xd8) == 0) {
    pVVar18 = (Variable *)0x0;
  }
  else {
    pVVar18 = *(Variable **)(*(long *)(lVar6 + 0xd8) + 8);
  }
  pZVar5 = *(Zone **)(this + 0x68);
  local_58 = *(VariableProxy **)(pZVar5 + 0x10);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)local_58) < 0x18) {
    local_58 = (VariableProxy *)Zone::NewExpand(pZVar5,0x18);
    this_00 = local_70;
  }
  else {
    *(VariableProxy **)(pZVar5 + 0x10) = local_58 + 0x18;
    this_00 = this + 200;
  }
  VariableProxy::VariableProxy(local_58,pVVar18,-1);
  if (*(undefined8 **)(this_00 + 8) < *(undefined8 **)(this_00 + 0x10)) {
    **(undefined8 **)(this_00 + 8) = local_58;
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
              ((vector<void*,std::__ndk1::allocator<void*>> *)this_00,&local_58);
  }
  local_60 = local_60 + 1;
  plVar4 = *(long **)(pSVar8 + 0x20);
  do {
    plVar14 = plVar4;
    plVar4 = plVar14 + 3;
  } while (*plVar14 == 0);
  pZVar5 = *(Zone **)(this + 0x68);
  pVVar18 = (Variable *)plVar14[1];
  pVVar9 = *(VariableProxy **)(pZVar5 + 0x10);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pVVar9) < 0x18) {
    pVVar9 = (VariableProxy *)Zone::NewExpand(pZVar5,0x18);
  }
  else {
    *(VariableProxy **)(pZVar5 + 0x10) = pVVar9 + 0x18;
  }
  VariableProxy::VariableProxy(pVVar9,pVVar18,-1);
  local_58 = pVVar9;
  if (*(undefined8 **)(local_70 + 8) < *(undefined8 **)(local_70 + 0x10)) {
    **(undefined8 **)(local_70 + 8) = pVVar9;
    *(long *)(local_70 + 8) = *(long *)(local_70 + 8) + 8;
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_70,&local_58);
  }
  local_60 = local_60 + 1;
  pZVar5 = *(Zone **)(this + 0x68);
  pVVar9 = *(VariableProxy **)(pZVar5 + 0x10);
  iVar3 = *(int *)(*(long *)(this + 0x10) + 0x14);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pVVar9) < 0x10) {
    pVVar9 = (VariableProxy *)Zone::NewExpand(pZVar5,0x10);
  }
  else {
    *(VariableProxy **)(pZVar5 + 0x10) = pVVar9 + 0x10;
  }
  pVVar9[8] = (VariableProxy)(0 < iVar3);
  *(undefined8 *)pVVar9 = 0x2a9ffffffff;
  local_58 = pVVar9;
  if (*(undefined8 **)(local_70 + 8) < *(undefined8 **)(local_70 + 0x10)) {
    **(undefined8 **)(local_70 + 8) = pVVar9;
    *(long *)(local_70 + 8) = *(long *)(local_70 + 8) + 8;
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_70,&local_58);
  }
  local_60 = local_60 + 1;
  pZVar5 = *(Zone **)(this + 0x68);
  puVar10 = *(undefined8 **)(pZVar5 + 0x10);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar10) < 0x28) {
    puVar10 = (undefined8 *)Zone::NewExpand(pZVar5,0x28);
  }
  else {
    *(undefined8 **)(pZVar5 + 0x10) = puVar10 + 5;
  }
  pZVar5 = *(Zone **)(this + 0x68);
  uVar17 = Runtime::FunctionForId(0x1e1);
  puVar10[2] = uVar17;
  *puVar10 = 0x1effffffff;
  puVar10[3] = 0;
  puVar10[4] = 0;
  ScopedList<v8::internal::Expression*,void*>::CopyTo
            ((ScopedList<v8::internal::Expression*,void*> *)&local_70,(ZoneList *)(puVar10 + 3),
             pZVar5);
  uVar15 = *(long *)(local_70 + 8) - *(long *)local_70 >> 3;
  if (uStack_68 < uVar15 || uStack_68 - uVar15 == 0) {
    if (uStack_68 < uVar15) {
      *(ulong *)(local_70 + 8) = *(long *)local_70 + uStack_68 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_70,uStack_68 - uVar15);
  }
  pZVar5 = *(Zone **)(this + 0x68);
  puVar12 = *(undefined8 **)(pZVar5 + 0x10);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar12) < 0x18) {
    puVar12 = (undefined8 *)Zone::NewExpand(pZVar5,0x18);
  }
  else {
    *(undefined8 **)(pZVar5 + 0x10) = puVar12 + 3;
  }
  puVar12[1] = puVar10;
  *(undefined4 *)(puVar12 + 2) = 0xffffffff;
  *puVar12 = 0xfffffffff;
  pZVar5 = *(Zone **)(this + 0x68);
  puVar10 = *(undefined8 **)(pZVar5 + 0x10);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar10) < 0x20) {
    puVar10 = (undefined8 *)Zone::NewExpand(pZVar5,0x20);
  }
  else {
    *(undefined8 **)(pZVar5 + 0x10) = puVar10 + 4;
  }
  pZVar5 = *(Zone **)(this + 0x68);
  *puVar10 = 0x47ffffffff;
  puVar11 = *(undefined8 **)(pZVar5 + 0x10);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar11) < 8) {
    puVar11 = (undefined8 *)Zone::NewExpand(pZVar5,8);
  }
  else {
    *(undefined8 **)(pZVar5 + 0x10) = puVar11 + 1;
  }
  puVar10[1] = puVar11;
  puVar10[3] = 0;
  puVar10[2] = 0x100000001;
  *(uint *)((long)puVar10 + 4) = *(uint *)((long)puVar10 + 4) | 0x80;
  *puVar11 = puVar12;
  pZVar5 = *(Zone **)(this + 0x68);
  puVar12 = *(undefined8 **)(pZVar5 + 0x10);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar12) < 0x28) {
    puVar12 = (undefined8 *)Zone::NewExpand(pZVar5,0x28);
  }
  else {
    *(undefined8 **)(pZVar5 + 0x10) = puVar12 + 5;
  }
  puVar12[1] = param_1;
  puVar12[2] = pSVar8;
  puVar12[3] = puVar10;
  *(undefined4 *)(puVar12 + 4) = 4;
  *puVar12 = 0x11ffffffff;
  uVar2 = *(uint *)(puVar7 + 2);
  uVar13 = *(uint *)((long)puVar7 + 0x14);
  if ((int)uVar13 < (int)uVar2) {
    pvVar16 = (void *)puVar7[1];
  }
  else {
    pZVar5 = *(Zone **)(this + 0xb8);
    uVar1 = uVar2 << 1 | 1;
    uVar15 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    pvVar16 = *(void **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pvVar16) < uVar15) {
      pvVar16 = (void *)Zone::NewExpand(pZVar5,uVar15);
    }
    else {
      *(ulong *)(pZVar5 + 0x10) = (long)pvVar16 + uVar15;
    }
    uVar13 = *(uint *)((long)puVar7 + 0x14);
    if (0 < (int)uVar13) {
      MemCopy(pvVar16,(void *)puVar7[1],(ulong)uVar13 << 3);
      uVar13 = *(uint *)((long)puVar7 + 0x14);
    }
    puVar7[1] = pvVar16;
    *(uint *)(puVar7 + 2) = uVar1;
  }
  *(uint *)((long)puVar7 + 0x14) = uVar13 + 1;
  *(undefined8 **)((long)pvVar16 + (long)(int)uVar13 * 8) = puVar12;
  return puVar7;
}

