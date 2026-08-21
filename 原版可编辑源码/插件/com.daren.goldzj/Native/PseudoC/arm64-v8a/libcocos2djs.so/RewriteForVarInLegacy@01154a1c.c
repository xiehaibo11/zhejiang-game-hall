
/* v8::internal::Parser::RewriteForVarInLegacy(v8::internal::ParserBase<v8::internal::Parser>::ForInfo
   const&) */

undefined8 * __thiscall v8::internal::Parser::RewriteForVarInLegacy(Parser *this,ForInfo *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  Zone *pZVar4;
  VariableProxy *pVVar5;
  undefined8 *puVar6;
  Assignment *pAVar7;
  undefined8 *puVar8;
  void *pvVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  Scope *this_00;
  long *plVar14;
  long lVar15;
  
  if ((((byte)param_1[0x18] < 2) || (plVar14 = *(long **)(param_1 + 0x28), plVar14[1] == 0)) ||
     ((*(uint *)(*plVar14 + 4) & 0x3f) != 0x35)) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *(int *)(this + 0x36c) = *(int *)(this + 0x36c) + 1;
    lVar12 = *plVar14;
    if ((*(uint *)(lVar12 + 4) & 0x3f) != 0x35) {
      lVar12 = 0;
    }
    plVar13 = (long *)(lVar12 + 8);
    if ((*(byte *)(lVar12 + 5) & 1) != 0) {
      plVar13 = (long *)(*plVar13 + 8);
    }
    pZVar4 = *(Zone **)(this + 0x68);
    lVar12 = *plVar13;
    this_00 = *(Scope **)this;
    pVVar5 = *(VariableProxy **)(pZVar4 + 0x10);
    uVar3 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)pVVar5) < 0x18) {
      pVVar5 = (VariableProxy *)Zone::NewExpand(pZVar4,0x18);
    }
    else {
      *(VariableProxy **)(pZVar4 + 0x10) = pVVar5 + 0x18;
    }
    *(long *)(pVVar5 + 8) = lVar12;
    *(undefined8 *)(pVVar5 + 0x10) = 0;
    *(undefined4 *)pVVar5 = uVar3;
    *(undefined4 *)(pVVar5 + 4) = 0x835;
    Scope::AddUnresolved(this_00,pVVar5);
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
    lVar12 = *(long *)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - lVar12) < 0x10) {
      lVar12 = Zone::NewExpand(pZVar4,0x10);
    }
    else {
      *(long *)(pZVar4 + 0x10) = lVar12 + 0x10;
    }
    puVar6[1] = lVar12;
    puVar6[3] = 0;
    puVar6[2] = 2;
    *(uint *)((long)puVar6 + 4) = *(uint *)((long)puVar6 + 4) | 0x80;
    uVar11 = *(uint *)(pVVar5 + 4);
    lVar15 = plVar14[1];
    lVar12 = plVar14[2];
    if (((uVar11 & 0x3f) == 0x35) && (*(uint *)(pVVar5 + 4) = uVar11 | 0x80, (uVar11 >> 8 & 1) != 0)
       ) {
      Variable::SetMaybeAssigned(*(Variable **)(pVVar5 + 8));
    }
    pZVar4 = *(Zone **)(this + 0x68);
    pAVar7 = *(Assignment **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)pAVar7) < 0x18) {
      pAVar7 = (Assignment *)Zone::NewExpand(pZVar4,0x18);
    }
    else {
      *(Assignment **)(pZVar4 + 0x10) = pAVar7 + 0x18;
    }
    Assignment::Assignment(pAVar7,0x18,0x11,pVVar5,lVar15,(int)lVar12);
    pZVar4 = *(Zone **)(this + 0x68);
    puVar8 = *(undefined8 **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar8) < 0x10) {
      puVar8 = (undefined8 *)Zone::NewExpand(pZVar4,0x10);
    }
    else {
      *(undefined8 **)(pZVar4 + 0x10) = puVar8 + 2;
    }
    puVar8[1] = pAVar7;
    *puVar8 = 0x9ffffffff;
    uVar11 = *(uint *)(puVar6 + 2);
    iVar2 = *(int *)((long)puVar6 + 0x14);
    if (iVar2 < (int)uVar11) {
      *(int *)((long)puVar6 + 0x14) = iVar2 + 1;
      *(undefined8 **)(puVar6[1] + (long)iVar2 * 8) = puVar8;
    }
    else {
      pZVar4 = *(Zone **)(this + 0xb8);
      uVar1 = uVar11 << 1 | 1;
      uVar10 = -(ulong)((uVar11 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      pvVar9 = *(void **)(pZVar4 + 0x10);
      if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)pvVar9) < uVar10) {
        pvVar9 = (void *)Zone::NewExpand(pZVar4,uVar10);
      }
      else {
        *(ulong *)(pZVar4 + 0x10) = (long)pvVar9 + uVar10;
      }
      uVar11 = *(uint *)((long)puVar6 + 0x14);
      if (0 < (int)uVar11) {
        MemCopy(pvVar9,(void *)puVar6[1],(ulong)uVar11 << 3);
        uVar11 = *(uint *)((long)puVar6 + 0x14);
      }
      puVar6[1] = pvVar9;
      *(uint *)(puVar6 + 2) = uVar1;
      *(uint *)((long)puVar6 + 0x14) = uVar11 + 1;
      *(undefined8 **)((long)pvVar9 + (long)(int)uVar11 * 8) = puVar8;
    }
  }
  return puVar6;
}

