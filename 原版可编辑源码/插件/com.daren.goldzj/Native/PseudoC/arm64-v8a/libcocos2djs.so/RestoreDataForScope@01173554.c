
/* v8::internal::BaseConsumedPreparseData<v8::internal::ZoneVectorWrapper>::RestoreDataForScope(v8::internal::Scope*,
   v8::internal::AstValueFactory*) */

void __thiscall
v8::internal::BaseConsumedPreparseData<v8::internal::ZoneVectorWrapper>::RestoreDataForScope
          (BaseConsumedPreparseData<v8::internal::ZoneVectorWrapper> *this,Scope *param_1,
          AstValueFactory *param_2)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  DeclarationScope *this_00;
  ClassScope *this_01;
  char cVar6;
  undefined8 *puVar7;
  long *plVar8;
  Scope *pSVar9;
  Variable *pVVar10;
  Zone *this_02;
  Scope *pSVar11;
  
  if (((((byte)param_1[0x82] & 1) == 0) ||
      (lVar4 = Scope::AsDeclarationScope(), (*(byte *)(lVar4 + 0x84) & 1) == 0)) &&
     (uVar5 = PreparseDataBuilder::ScopeNeedsData(param_1), (uVar5 & 1) != 0)) {
    puVar7 = *(undefined8 **)(this + 8);
    plVar8 = (long *)*puVar7;
    iVar2 = *(int *)(puVar7 + 1);
    if ((int)plVar8[1] - (int)*plVar8 <= iVar2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","scope_data_->HasRemainingBytes(ByteData::kUint8Size)");
    }
    *(undefined1 *)((long)puVar7 + 0xc) = 0;
    *(int *)(puVar7 + 1) = iVar2 + 1;
    if ((ulong)(plVar8[1] - *plVar8) <= (ulong)(long)iVar2) {
LAB_01173974:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    bVar1 = *(byte *)(*plVar8 + (long)iVar2);
    if ((bVar1 & 1) != 0) {
      *(ushort *)(param_1 + 0x81) = *(ushort *)(param_1 + 0x81) | 2;
      lVar4 = Scope::GetDeclarationScope(param_1);
      uVar3 = *(ushort *)(lVar4 + 0x81);
      *(ushort *)(lVar4 + 0x81) = uVar3 | 2;
      if ((((uVar3 & 1) == 0) && (*(char *)(lVar4 + 0x80) != '\x01')) &&
         (*(char *)(lVar4 + 0x80) != '\x04')) {
        *(ushort *)(lVar4 + 0x81) = uVar3 | 6;
        *(undefined4 *)(lVar4 + 0x7c) = 3;
      }
      lVar4 = *(long *)(param_1 + 8);
      *(ushort *)(param_1 + 0x81) = *(ushort *)(param_1 + 0x81) | 0x40;
      while ((lVar4 != 0 && ((*(ushort *)(lVar4 + 0x81) >> 6 & 1) == 0))) {
        *(ushort *)(lVar4 + 0x81) = *(ushort *)(lVar4 + 0x81) | 0x40;
        lVar4 = *(long *)(lVar4 + 8);
      }
    }
    if ((bVar1 >> 1 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 8);
      *(ushort *)(param_1 + 0x81) = *(ushort *)(param_1 + 0x81) | 0x40;
      while ((lVar4 != 0 && ((*(ushort *)(lVar4 + 0x81) >> 6 & 1) == 0))) {
        *(ushort *)(lVar4 + 0x81) = *(ushort *)(lVar4 + 0x81) | 0x40;
        lVar4 = *(long *)(lVar4 + 8);
      }
    }
    if ((bVar1 >> 2 & 1) != 0) {
      this_00 = (DeclarationScope *)Scope::AsDeclarationScope();
      DeclarationScope::RecordNeedsPrivateNameContextChainRecalc(this_00);
    }
    if ((bVar1 >> 3 & 1) != 0) {
      lVar4 = Scope::AsClassScope();
      cVar6 = *(char *)(lVar4 + 0x9a);
      this_01 = (ClassScope *)Scope::AsClassScope();
      if (cVar6 == '\0') {
        lVar4 = *(long *)(this_01 + 0x90);
      }
      else {
        lVar4 = ClassScope::DeclareClassVariable(this_01,param_2,(AstRawString *)0x0,-1);
        this_02 = *(Zone **)(param_2 + 0x448);
        puVar7 = *(undefined8 **)(this_02 + 0x10);
        if ((ulong)(*(long *)(this_02 + 0x18) - (long)puVar7) < 8) {
          puVar7 = (undefined8 *)Zone::NewExpand(this_02,8);
        }
        else {
          *(undefined8 **)(this_02 + 0x10) = puVar7 + 1;
        }
        *puVar7 = 0xaffffffff;
        puVar7 = *(undefined8 **)(this_02 + 0x10);
        if ((ulong)(*(long *)(this_02 + 0x18) - (long)puVar7) < 8) {
          puVar7 = (undefined8 *)Zone::NewExpand(this_02,8);
        }
        else {
          *(undefined8 **)(this_02 + 0x10) = puVar7 + 1;
        }
        *puVar7 = 0x32ffffffff;
        puVar7 = *(undefined8 **)(this_02 + 0x10);
        if ((ulong)(*(long *)(this_02 + 0x18) - (long)puVar7) < 8) {
          puVar7 = (undefined8 *)Zone::NewExpand(this_02,8);
        }
        else {
          *(undefined8 **)(this_02 + 0x10) = puVar7 + 1;
        }
        *puVar7 = 0x38ffffffff;
        puVar7 = *(undefined8 **)(this_02 + 0x10);
        if ((ulong)(*(long *)(this_02 + 0x18) - (long)puVar7) < 0x18) {
          puVar7 = (undefined8 *)Zone::NewExpand(this_02,0x18);
        }
        else {
          *(undefined8 **)(this_02 + 0x10) = puVar7 + 3;
        }
        puVar7[2] = 0;
        *puVar7 = 0xffffffff;
        **(undefined8 **)(param_1 + 0x60) = puVar7;
        *(undefined8 **)(param_1 + 0x60) = puVar7 + 2;
        puVar7[1] = lVar4;
      }
      *(ushort *)(lVar4 + 0x28) = *(ushort *)(lVar4 + 0x28) | 0xc00;
      lVar4 = Scope::AsClassScope();
      *(undefined1 *)(lVar4 + 0x9b) = 1;
    }
    if (param_1[0x80] == (Scope)0x2) {
      lVar4 = Scope::AsDeclarationScope();
      pVVar10 = *(Variable **)(lVar4 + 0xb8);
      if (pVVar10 != (Variable *)0x0) {
        puVar7 = *(undefined8 **)(this + 8);
        if (*(char *)((long)puVar7 + 0xc) == '\0') {
          iVar2 = *(int *)(puVar7 + 1);
          *(int *)(puVar7 + 1) = iVar2 + 1;
          lVar4 = *(long *)*puVar7;
          if ((ulong)(((long *)*puVar7)[1] - lVar4) <= (ulong)(long)iVar2) goto LAB_01173974;
          bVar1 = *(byte *)(lVar4 + iVar2);
          *(undefined1 *)((long)puVar7 + 0xc) = 4;
          cVar6 = '\x03';
          *(byte *)((long)puVar7 + 0xd) = bVar1;
        }
        else {
          bVar1 = *(byte *)((long)puVar7 + 0xd);
          cVar6 = *(char *)((long)puVar7 + 0xc) + -1;
        }
        *(char *)((long)puVar7 + 0xc) = cVar6;
        *(byte *)((long)puVar7 + 0xd) = bVar1 << 2;
        if ((bVar1 >> 6 & 1) != 0) {
          Variable::SetMaybeAssigned(pVVar10);
        }
        if ((char)bVar1 < '\0') {
          *(ushort *)(pVVar10 + 0x28) = *(ushort *)(pVVar10 + 0x28) | 0xc00;
        }
      }
    }
    pSVar11 = *(Scope **)(param_1 + 0x40);
    for (pSVar9 = param_1 + 0x38; pSVar9 != pSVar11; pSVar9 = (Scope *)(*(long *)pSVar9 + 0x18)) {
      pVVar10 = *(Variable **)pSVar9;
      if (((*(ushort *)(pVVar10 + 0x28) & 0xf) < 0xb) &&
         ((1 << (ulong)(*(ushort *)(pVVar10 + 0x28) & 0xf) & 0x787U) != 0)) {
        puVar7 = *(undefined8 **)(this + 8);
        if (*(char *)((long)puVar7 + 0xc) == '\0') {
          iVar2 = *(int *)(puVar7 + 1);
          *(int *)(puVar7 + 1) = iVar2 + 1;
          lVar4 = *(long *)*puVar7;
          if ((ulong)(((long *)*puVar7)[1] - lVar4) <= (ulong)(long)iVar2) goto LAB_01173974;
          bVar1 = *(byte *)(lVar4 + iVar2);
          cVar6 = '\x03';
          *(undefined1 *)((long)puVar7 + 0xc) = 4;
          *(byte *)((long)puVar7 + 0xd) = bVar1;
        }
        else {
          bVar1 = *(byte *)((long)puVar7 + 0xd);
          cVar6 = *(char *)((long)puVar7 + 0xc) + -1;
        }
        *(char *)((long)puVar7 + 0xc) = cVar6;
        *(byte *)((long)puVar7 + 0xd) = bVar1 << 2;
        if ((bVar1 >> 6 & 1) != 0) {
          Variable::SetMaybeAssigned(pVVar10);
        }
        if ((char)bVar1 < '\0') {
          *(ushort *)(pVVar10 + 0x28) = *(ushort *)(pVVar10 + 0x28) | 0xc00;
        }
      }
    }
    for (pSVar9 = *(Scope **)(param_1 + 0x10); pSVar9 != (Scope *)0x0;
        pSVar9 = *(Scope **)(pSVar9 + 0x18)) {
      RestoreDataForScope(this,pSVar9,param_2);
    }
  }
  return;
}

