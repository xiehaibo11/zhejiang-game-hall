
/* v8::internal::BaseConsumedPreparseData<v8::internal::PreparseData>::RestoreDataForScope(v8::internal::Scope*,
   v8::internal::AstValueFactory*) */

void __thiscall
v8::internal::BaseConsumedPreparseData<v8::internal::PreparseData>::RestoreDataForScope
          (BaseConsumedPreparseData<v8::internal::PreparseData> *this,Scope *param_1,
          AstValueFactory *param_2)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  DeclarationScope *this_00;
  ClassScope *this_01;
  undefined8 *puVar6;
  long *plVar7;
  char cVar8;
  Scope *pSVar9;
  Variable *pVVar10;
  Zone *this_02;
  Scope *pSVar11;
  
  if (((((byte)param_1[0x82] & 1) == 0) ||
      (lVar4 = Scope::AsDeclarationScope(), (*(byte *)(lVar4 + 0x84) & 1) == 0)) &&
     (uVar5 = PreparseDataBuilder::ScopeNeedsData(param_1), (uVar5 & 1) != 0)) {
    plVar7 = *(long **)(this + 8);
    iVar2 = (int)plVar7[1];
    if (*(int *)(*plVar7 + 3) <= iVar2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","scope_data_->HasRemainingBytes(ByteData::kUint8Size)");
    }
    *(undefined1 *)((long)plVar7 + 0xc) = 0;
    *(int *)(plVar7 + 1) = iVar2 + 1;
    bVar1 = *(byte *)((long)iVar2 + *plVar7 + 0xb);
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
      cVar8 = *(char *)(lVar4 + 0x9a);
      this_01 = (ClassScope *)Scope::AsClassScope();
      if (cVar8 == '\0') {
        lVar4 = *(long *)(this_01 + 0x90);
      }
      else {
        lVar4 = ClassScope::DeclareClassVariable(this_01,param_2,(AstRawString *)0x0,-1);
        this_02 = *(Zone **)(param_2 + 0x448);
        puVar6 = *(undefined8 **)(this_02 + 0x10);
        if ((ulong)(*(long *)(this_02 + 0x18) - (long)puVar6) < 8) {
          puVar6 = (undefined8 *)Zone::NewExpand(this_02,8);
        }
        else {
          *(undefined8 **)(this_02 + 0x10) = puVar6 + 1;
        }
        *puVar6 = 0xaffffffff;
        puVar6 = *(undefined8 **)(this_02 + 0x10);
        if ((ulong)(*(long *)(this_02 + 0x18) - (long)puVar6) < 8) {
          puVar6 = (undefined8 *)Zone::NewExpand(this_02,8);
        }
        else {
          *(undefined8 **)(this_02 + 0x10) = puVar6 + 1;
        }
        *puVar6 = 0x32ffffffff;
        puVar6 = *(undefined8 **)(this_02 + 0x10);
        if ((ulong)(*(long *)(this_02 + 0x18) - (long)puVar6) < 8) {
          puVar6 = (undefined8 *)Zone::NewExpand(this_02,8);
        }
        else {
          *(undefined8 **)(this_02 + 0x10) = puVar6 + 1;
        }
        *puVar6 = 0x38ffffffff;
        puVar6 = *(undefined8 **)(this_02 + 0x10);
        if ((ulong)(*(long *)(this_02 + 0x18) - (long)puVar6) < 0x18) {
          puVar6 = (undefined8 *)Zone::NewExpand(this_02,0x18);
        }
        else {
          *(undefined8 **)(this_02 + 0x10) = puVar6 + 3;
        }
        puVar6[2] = 0;
        *puVar6 = 0xffffffff;
        **(undefined8 **)(param_1 + 0x60) = puVar6;
        *(undefined8 **)(param_1 + 0x60) = puVar6 + 2;
        puVar6[1] = lVar4;
      }
      *(ushort *)(lVar4 + 0x28) = *(ushort *)(lVar4 + 0x28) | 0xc00;
      lVar4 = Scope::AsClassScope();
      *(undefined1 *)(lVar4 + 0x9b) = 1;
    }
    if (param_1[0x80] == (Scope)0x2) {
      lVar4 = Scope::AsDeclarationScope();
      pVVar10 = *(Variable **)(lVar4 + 0xb8);
      if (pVVar10 != (Variable *)0x0) {
        plVar7 = *(long **)(this + 8);
        if (*(char *)((long)plVar7 + 0xc) == '\0') {
          lVar4 = plVar7[1];
          *(int *)(plVar7 + 1) = (int)lVar4 + 1;
          bVar1 = *(byte *)((long)(int)lVar4 + *plVar7 + 0xb);
          *(undefined1 *)((long)plVar7 + 0xc) = 4;
          cVar8 = '\x03';
          *(byte *)((long)plVar7 + 0xd) = bVar1;
        }
        else {
          bVar1 = *(byte *)((long)plVar7 + 0xd);
          cVar8 = *(char *)((long)plVar7 + 0xc) + -1;
        }
        *(char *)((long)plVar7 + 0xc) = cVar8;
        *(byte *)((long)plVar7 + 0xd) = bVar1 << 2;
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
        plVar7 = *(long **)(this + 8);
        if (*(char *)((long)plVar7 + 0xc) == '\0') {
          lVar4 = plVar7[1];
          *(int *)(plVar7 + 1) = (int)lVar4 + 1;
          bVar1 = *(byte *)((long)(int)lVar4 + *plVar7 + 0xb);
          cVar8 = '\x03';
          *(undefined1 *)((long)plVar7 + 0xc) = 4;
          *(byte *)((long)plVar7 + 0xd) = bVar1;
        }
        else {
          bVar1 = *(byte *)((long)plVar7 + 0xd);
          cVar8 = *(char *)((long)plVar7 + 0xc) + -1;
        }
        *(char *)((long)plVar7 + 0xc) = cVar8;
        *(byte *)((long)plVar7 + 0xd) = bVar1 << 2;
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

