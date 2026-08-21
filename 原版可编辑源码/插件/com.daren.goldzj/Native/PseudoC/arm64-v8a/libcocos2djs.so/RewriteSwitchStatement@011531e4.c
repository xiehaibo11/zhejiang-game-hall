
/* v8::internal::Parser::RewriteSwitchStatement(v8::internal::SwitchStatement*,
   v8::internal::Scope*) */

undefined8 * __thiscall
v8::internal::Parser::RewriteSwitchStatement(Parser *this,SwitchStatement *param_1,Scope *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  Zone *pZVar4;
  Variable *pVVar5;
  undefined8 *puVar6;
  long lVar7;
  Assignment *pAVar8;
  undefined8 *puVar9;
  VariableProxy *pVVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  uint uVar14;
  undefined4 *puVar15;
  void *pvVar16;
  
  pZVar4 = *(Zone **)(this + 0x68);
  puVar6 = *(undefined8 **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar6) < 0x20) {
    puVar6 = (undefined8 *)Zone::NewExpand(pZVar4,0x20);
  }
  else {
    *(undefined8 **)(pZVar4 + 0x10) = puVar6 + 4;
  }
  pZVar4 = *(Zone **)(this + 0x68);
  *puVar6 = 0x47ffffffff;
  lVar7 = *(long *)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - lVar7) < 0x10) {
    lVar7 = Zone::NewExpand(pZVar4,0x10);
  }
  else {
    *(long *)(pZVar4 + 0x10) = lVar7 + 0x10;
  }
  puVar6[1] = lVar7;
  puVar6[3] = 0;
  puVar6[2] = 2;
  puVar15 = *(undefined4 **)(param_1 + 0x10);
  pVVar5 = (Variable *)
           Scope::NewTemporary(*(Scope **)this,
                               *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x100))
  ;
  pZVar4 = *(Zone **)(this + 0x68);
  pVVar10 = *(VariableProxy **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)pVVar10) < 0x18) {
    pVVar10 = (VariableProxy *)Zone::NewExpand(pZVar4,0x18);
  }
  else {
    *(VariableProxy **)(pZVar4 + 0x10) = pVVar10 + 0x18;
  }
  VariableProxy::VariableProxy(pVVar10,pVVar5,-1);
  uVar2 = *(uint *)(pVVar10 + 4);
  uVar3 = *puVar15;
  if (((uVar2 & 0x3f) == 0x35) && (*(uint *)(pVVar10 + 4) = uVar2 | 0x80, (uVar2 >> 8 & 1) != 0)) {
    Variable::SetMaybeAssigned(*(Variable **)(pVVar10 + 8));
  }
  pZVar4 = *(Zone **)(this + 0x68);
  pAVar8 = *(Assignment **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)pAVar8) < 0x18) {
    pAVar8 = (Assignment *)Zone::NewExpand(pZVar4,0x18);
  }
  else {
    *(Assignment **)(pZVar4 + 0x10) = pAVar8 + 0x18;
  }
  Assignment::Assignment(pAVar8,0x18,0x11,pVVar10,puVar15,uVar3);
  pZVar4 = *(Zone **)(this + 0x68);
  puVar11 = *(undefined8 **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar11) < 0x10) {
    puVar11 = (undefined8 *)Zone::NewExpand(pZVar4,0x10);
  }
  else {
    *(undefined8 **)(pZVar4 + 0x10) = puVar11 + 2;
  }
  puVar11[1] = pAVar8;
  *puVar11 = 0x9ffffffff;
  pZVar4 = *(Zone **)(this + 0x68);
  puVar12 = *(undefined8 **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar12) < 0x20) {
    puVar12 = (undefined8 *)Zone::NewExpand(pZVar4,0x20);
  }
  else {
    *(undefined8 **)(pZVar4 + 0x10) = puVar12 + 4;
  }
  pZVar4 = *(Zone **)(this + 0x68);
  *puVar12 = 0x47ffffffff;
  puVar9 = *(undefined8 **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar9) < 8) {
    puVar9 = (undefined8 *)Zone::NewExpand(pZVar4,8);
  }
  else {
    *(undefined8 **)(pZVar4 + 0x10) = puVar9 + 1;
  }
  puVar12[1] = puVar9;
  puVar12[3] = 0;
  puVar12[2] = 0x100000001;
  *(uint *)((long)puVar12 + 4) = *(uint *)((long)puVar12 + 4) | 0x80;
  *puVar9 = puVar11;
  uVar2 = *(uint *)(puVar6 + 2);
  uVar14 = *(uint *)((long)puVar6 + 0x14);
  if ((int)uVar14 < (int)uVar2) {
    pvVar16 = (void *)puVar6[1];
  }
  else {
    pZVar4 = *(Zone **)(this + 0xb8);
    uVar1 = uVar2 << 1 | 1;
    uVar13 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    pvVar16 = *(void **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)pvVar16) < uVar13) {
      pvVar16 = (void *)Zone::NewExpand(pZVar4,uVar13);
    }
    else {
      *(ulong *)(pZVar4 + 0x10) = (long)pvVar16 + uVar13;
    }
    uVar14 = *(uint *)((long)puVar6 + 0x14);
    if (0 < (int)uVar14) {
      MemCopy(pvVar16,(void *)puVar6[1],(ulong)uVar14 << 3);
      uVar14 = *(uint *)((long)puVar6 + 0x14);
    }
    puVar6[1] = pvVar16;
    *(uint *)(puVar6 + 2) = uVar1;
  }
  *(uint *)((long)puVar6 + 0x14) = uVar14 + 1;
  *(undefined8 **)((long)pvVar16 + (long)(int)uVar14 * 8) = puVar12;
  pZVar4 = *(Zone **)(this + 0x68);
  pVVar10 = *(VariableProxy **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)pVVar10) < 0x18) {
    pVVar10 = (VariableProxy *)Zone::NewExpand(pZVar4,0x18);
  }
  else {
    *(VariableProxy **)(pZVar4 + 0x10) = pVVar10 + 0x18;
  }
  VariableProxy::VariableProxy(pVVar10,pVVar5,-1);
  *(VariableProxy **)(param_1 + 0x10) = pVVar10;
  pZVar4 = *(Zone **)(this + 0x68);
  puVar11 = *(undefined8 **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar11) < 0x20) {
    puVar11 = (undefined8 *)Zone::NewExpand(pZVar4,0x20);
  }
  else {
    *(undefined8 **)(pZVar4 + 0x10) = puVar11 + 4;
  }
  pZVar4 = *(Zone **)(this + 0x68);
  *puVar11 = 0x47ffffffff;
  puVar12 = *(undefined8 **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar12) < 8) {
    puVar12 = (undefined8 *)Zone::NewExpand(pZVar4,8);
  }
  else {
    *(undefined8 **)(pZVar4 + 0x10) = puVar12 + 1;
  }
  puVar11[1] = puVar12;
  puVar11[2] = 0x100000001;
  *puVar12 = param_1;
  puVar11[3] = param_2;
  uVar2 = *(uint *)(puVar6 + 2);
  uVar14 = *(uint *)((long)puVar6 + 0x14);
  if ((int)uVar14 < (int)uVar2) {
    pvVar16 = (void *)puVar6[1];
  }
  else {
    pZVar4 = *(Zone **)(this + 0xb8);
    uVar1 = uVar2 << 1 | 1;
    uVar13 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    pvVar16 = *(void **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)pvVar16) < uVar13) {
      pvVar16 = (void *)Zone::NewExpand(pZVar4,uVar13);
    }
    else {
      *(ulong *)(pZVar4 + 0x10) = (long)pvVar16 + uVar13;
    }
    uVar14 = *(uint *)((long)puVar6 + 0x14);
    if (0 < (int)uVar14) {
      MemCopy(pvVar16,(void *)puVar6[1],(ulong)uVar14 << 3);
      uVar14 = *(uint *)((long)puVar6 + 0x14);
    }
    puVar6[1] = pvVar16;
    *(uint *)(puVar6 + 2) = uVar1;
  }
  *(uint *)((long)puVar6 + 0x14) = uVar14 + 1;
  *(undefined8 **)((long)pvVar16 + (long)(int)uVar14 * 8) = puVar11;
  return puVar6;
}

