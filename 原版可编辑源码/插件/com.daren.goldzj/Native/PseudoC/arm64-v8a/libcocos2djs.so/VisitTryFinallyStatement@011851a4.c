
/* v8::internal::Processor::VisitTryFinallyStatement(v8::internal::TryFinallyStatement*) */

void __thiscall
v8::internal::Processor::VisitTryFinallyStatement(Processor *this,TryFinallyStatement *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  Variable *pVVar5;
  VariableProxy *this_00;
  VariableProxy *this_01;
  Assignment *pAVar6;
  Assignment *pAVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  Zone *pZVar11;
  int iVar12;
  AstNode *pAVar13;
  void *pvVar14;
  
  if (this[0x53] != (Processor)0x0) {
    this[0x52] = (Processor)0x1;
    if (this[0x50] == (Processor)0x0) {
      pAVar13 = *(AstNode **)(param_1 + 0x10);
      uVar4 = GetCurrentStackPosition();
      if (uVar4 < *(ulong *)(this + 0x48)) {
        this[0x50] = (Processor)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar13);
      }
    }
    lVar10 = *(long *)(this + 8);
    if ((*(uint *)(lVar10 + 4) & 0x3f) != 7) {
      lVar10 = 0;
    }
    *(long *)(param_1 + 0x10) = lVar10;
    if (*(Scope **)(this + 0x18) == (Scope *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(closure_scope()) != nullptr");
    }
    pVVar5 = (Variable *)
             Scope::NewTemporary(*(Scope **)(this + 0x18),
                                 *(AstRawString **)(*(long *)(*(long *)(this + 0x28) + 0x38) + 0xf8)
                                );
    pZVar11 = *(Zone **)(this + 0x20);
    this_00 = *(VariableProxy **)(pZVar11 + 0x10);
    if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)this_00) < 0x18) {
      this_00 = (VariableProxy *)Zone::NewExpand(pZVar11,0x18);
    }
    else {
      *(VariableProxy **)(pZVar11 + 0x10) = this_00 + 0x18;
    }
    VariableProxy::VariableProxy(this_00,pVVar5,-1);
    pZVar11 = *(Zone **)(this + 0x20);
    pVVar5 = *(Variable **)this;
    this_01 = *(VariableProxy **)(pZVar11 + 0x10);
    if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)this_01) < 0x18) {
      this_01 = (VariableProxy *)Zone::NewExpand(pZVar11,0x18);
    }
    else {
      *(VariableProxy **)(pZVar11 + 0x10) = this_01 + 0x18;
    }
    VariableProxy::VariableProxy(this_01,pVVar5,-1);
    uVar3 = *(uint *)(this_00 + 4);
    if (((uVar3 & 0x3f) == 0x35) && (*(uint *)(this_00 + 4) = uVar3 | 0x80, (uVar3 >> 8 & 1) != 0))
    {
      Variable::SetMaybeAssigned(*(Variable **)(this_00 + 8));
    }
    pZVar11 = *(Zone **)(this + 0x20);
    pAVar6 = *(Assignment **)(pZVar11 + 0x10);
    if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)pAVar6) < 0x18) {
      pAVar6 = (Assignment *)Zone::NewExpand(pZVar11,0x18);
    }
    else {
      *(Assignment **)(pZVar11 + 0x10) = pAVar6 + 0x18;
    }
    Assignment::Assignment(pAVar6,0x18,0x11,this_00,this_01,0xffffffff);
    uVar3 = *(uint *)(this_01 + 4);
    if (((uVar3 & 0x3f) == 0x35) && (*(uint *)(this_01 + 4) = uVar3 | 0x80, (uVar3 >> 8 & 1) != 0))
    {
      Variable::SetMaybeAssigned(*(Variable **)(this_01 + 8));
    }
    pZVar11 = *(Zone **)(this + 0x20);
    pAVar7 = *(Assignment **)(pZVar11 + 0x10);
    if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)pAVar7) < 0x18) {
      pAVar7 = (Assignment *)Zone::NewExpand(pZVar11,0x18);
    }
    else {
      *(Assignment **)(pZVar11 + 0x10) = pAVar7 + 0x18;
    }
    Assignment::Assignment(pAVar7,0x18,0x11,this_01,this_00,0xffffffff);
    pZVar11 = *(Zone **)(this + 0x20);
    lVar10 = *(long *)(param_1 + 0x10);
    puVar8 = *(undefined8 **)(pZVar11 + 0x10);
    if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)puVar8) < 0x10) {
      puVar8 = (undefined8 *)Zone::NewExpand(pZVar11,0x10);
    }
    else {
      *(undefined8 **)(pZVar11 + 0x10) = puVar8 + 2;
    }
    puVar8[1] = pAVar6;
    *puVar8 = 0x9ffffffff;
    uVar3 = *(uint *)(lVar10 + 0x10);
    uVar9 = *(uint *)(lVar10 + 0x14);
    if ((int)uVar9 < (int)uVar3) {
      pvVar14 = *(void **)(lVar10 + 8);
    }
    else {
      pZVar11 = *(Zone **)(this + 0x10);
      uVar2 = uVar3 << 1 | 1;
      uVar4 = -(ulong)((uVar3 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar2 << 3;
      pvVar14 = *(void **)(pZVar11 + 0x10);
      if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)pvVar14) < uVar4) {
        pvVar14 = (void *)Zone::NewExpand(pZVar11,uVar4);
      }
      else {
        *(ulong *)(pZVar11 + 0x10) = (long)pvVar14 + uVar4;
      }
      uVar9 = *(uint *)(lVar10 + 0x14);
      if (0 < (int)uVar9) {
        MemCopy(pvVar14,*(void **)(lVar10 + 8),(ulong)uVar9 << 3);
        uVar9 = *(uint *)(lVar10 + 0x14);
      }
      *(void **)(lVar10 + 8) = pvVar14;
      *(uint *)(lVar10 + 0x10) = uVar2;
    }
    *(uint *)(lVar10 + 0x14) = uVar9 + 1;
    *(undefined8 **)((long)pvVar14 + (long)(int)uVar9 * 8) = puVar8;
    uVar3 = *(int *)(lVar10 + 0x14) - 1;
    if (0 < (int)uVar3) {
      uVar4 = (ulong)uVar3;
      iVar12 = *(int *)(lVar10 + 0x14) + -2;
      do {
        lVar1 = (long)iVar12;
        iVar12 = iVar12 + -1;
        *(undefined8 *)(*(long *)(lVar10 + 8) + uVar4 * 8) =
             *(undefined8 *)(*(long *)(lVar10 + 8) + lVar1 * 8);
        uVar4 = uVar4 - 1;
      } while (0 < (long)uVar4);
    }
    **(undefined8 **)(lVar10 + 8) = puVar8;
    pZVar11 = *(Zone **)(this + 0x20);
    lVar10 = *(long *)(param_1 + 0x10);
    puVar8 = *(undefined8 **)(pZVar11 + 0x10);
    if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)puVar8) < 0x10) {
      puVar8 = (undefined8 *)Zone::NewExpand(pZVar11,0x10);
    }
    else {
      *(undefined8 **)(pZVar11 + 0x10) = puVar8 + 2;
    }
    *puVar8 = 0x9ffffffff;
    puVar8[1] = pAVar7;
    uVar3 = *(uint *)(lVar10 + 0x10);
    uVar9 = *(uint *)(lVar10 + 0x14);
    if ((int)uVar9 < (int)uVar3) {
      pvVar14 = *(void **)(lVar10 + 8);
    }
    else {
      pZVar11 = *(Zone **)(this + 0x10);
      uVar2 = uVar3 << 1 | 1;
      uVar4 = -(ulong)((uVar3 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar2 << 3;
      pvVar14 = *(void **)(pZVar11 + 0x10);
      if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)pvVar14) < uVar4) {
        pvVar14 = (void *)Zone::NewExpand(pZVar11,uVar4);
      }
      else {
        *(ulong *)(pZVar11 + 0x10) = (long)pvVar14 + uVar4;
      }
      uVar9 = *(uint *)(lVar10 + 0x14);
      if (0 < (int)uVar9) {
        MemCopy(pvVar14,*(void **)(lVar10 + 8),(ulong)uVar9 << 3);
        uVar9 = *(uint *)(lVar10 + 0x14);
      }
      *(void **)(lVar10 + 8) = pvVar14;
      *(uint *)(lVar10 + 0x10) = uVar2;
    }
    *(uint *)(lVar10 + 0x14) = uVar9 + 1;
    *(undefined8 **)((long)pvVar14 + (long)(int)uVar9 * 8) = puVar8;
    this[0x52] = (Processor)0x0;
  }
  if (this[0x50] == (Processor)0x0) {
    pAVar13 = *(AstNode **)(param_1 + 8);
    uVar4 = GetCurrentStackPosition();
    if (uVar4 < *(ulong *)(this + 0x48)) {
      this[0x50] = (Processor)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar13);
    }
  }
  lVar10 = *(long *)(this + 8);
  if ((*(uint *)(lVar10 + 4) & 0x3f) != 7) {
    lVar10 = 0;
  }
  *(long *)(param_1 + 8) = lVar10;
  if (this[0x52] == (Processor)0x0) {
    param_1 = (TryFinallyStatement *)AssignUndefinedBefore(this,(Statement *)param_1);
  }
  *(TryFinallyStatement **)(this + 8) = param_1;
  this[0x52] = (Processor)0x1;
  return;
}

