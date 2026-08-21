
/* v8::internal::DeclarationScope::HoistSloppyBlockFunctions(v8::internal::AstNodeFactory*) */

void __thiscall
v8::internal::DeclarationScope::HoistSloppyBlockFunctions
          (DeclarationScope *this,AstNodeFactory *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  DeclarationScope DVar3;
  long lVar4;
  Zone *pZVar5;
  Variable *pVVar6;
  VariableProxy *this_00;
  VariableProxy *this_01;
  undefined4 *puVar7;
  DeclarationScope *pDVar8;
  long *plVar9;
  ulong uVar10;
  AstRawString *pAVar11;
  AstRawString *pAVar12;
  Scope *this_02;
  DeclarationScope *pDVar13;
  Variable *pVVar14;
  DeclarationScope *pDVar15;
  undefined4 *puVar16;
  Scope *pSVar17;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 local_64 [4];
  
  pDVar15 = this + 0xa0;
  puVar16 = *(undefined4 **)pDVar15;
  if (puVar16 != (undefined4 *)0x0) {
    pDVar8 = this;
    if (((byte)this[0x82] & 1) != 0) goto LAB_014a10e0;
    do {
      do {
        pDVar8 = *(DeclarationScope **)(pDVar8 + 8);
      } while (((byte)pDVar8[0x82] & 1) == 0);
LAB_014a10e0:
      DVar3 = pDVar8[0x80];
    } while ((DVar3 == (DeclarationScope)0x0) || (DVar3 == (DeclarationScope)0x6));
    pDVar13 = this;
    if ((DVar3 == (DeclarationScope)0x2) && (((byte)pDVar8[0x83] & 1) == 0)) {
      pDVar13 = *(DeclarationScope **)(this + 8);
    }
    pSVar17 = *(Scope **)(this + 8);
    DVar3 = this[0x80];
    while (DVar3 == (DeclarationScope)0x1) {
      for (; ((byte)pSVar17[0x82] & 1) == 0; pSVar17 = *(Scope **)(pSVar17 + 8)) {
      }
      pDVar8 = (DeclarationScope *)(pSVar17 + 0x80);
      pSVar17 = *(Scope **)(pSVar17 + 8);
      DVar3 = *pDVar8;
    }
    pDVar8 = *(DeclarationScope **)(this + 0xa8);
    if (pDVar15 != pDVar8) {
      do {
        pAVar12 = (AstRawString *)(*(long **)(puVar16 + 2))[1];
        uVar1 = *(uint *)(pAVar12 + 0x18);
        uVar10 = (ulong)(*(int *)(pDVar13 + 0x28) - 1U & uVar1 >> 3);
        plVar9 = (long *)(*(long *)(pDVar13 + 0x20) + uVar10 * 0x18);
        pAVar11 = (AstRawString *)*plVar9;
        while (pAVar11 != (AstRawString *)0x0) {
          if (pAVar11 == pAVar12) {
            if ((((pAVar12 != (AstRawString *)0x0) && (plVar9 != (long *)0x0)) && (plVar9[1] != 0))
               && ((*(ushort *)(plVar9[1] + 0x28) & 0x70) == 0x10)) goto LAB_014a1384;
            break;
          }
          uVar10 = (ulong)((int)uVar10 + 1U & *(int *)(pDVar13 + 0x28) - 1U);
          plVar9 = (long *)(*(long *)(pDVar13 + 0x20) + uVar10 * 0x18);
          pAVar11 = (AstRawString *)*plVar9;
        }
        this_02 = *(Scope **)(**(long **)(puVar16 + 2) + 8);
LAB_014a11ac:
        uVar10 = (ulong)(*(int *)(this_02 + 0x28) - 1U & uVar1 >> 3);
        plVar9 = (long *)(*(long *)(this_02 + 0x20) + uVar10 * 0x18);
        pAVar11 = (AstRawString *)*plVar9;
        while (pAVar11 != (AstRawString *)0x0) {
          if (pAVar11 == pAVar12) {
            if (((pAVar12 != (AstRawString *)0x0) && (plVar9 != (long *)0x0)) &&
               (lVar4 = plVar9[1], lVar4 != 0)) goto LAB_014a1230;
            break;
          }
          uVar10 = (ulong)((int)uVar10 + 1U & *(int *)(this_02 + 0x28) - 1U);
          plVar9 = (long *)(*(long *)(this_02 + 0x20) + uVar10 * 0x18);
          pAVar11 = (AstRawString *)*plVar9;
        }
        if ((*(long *)(this_02 + 0x68) == 0) ||
           (lVar4 = Scope::LookupInScopeInfo(this_02,pAVar12,*(Scope **)(this + 8)), lVar4 == 0)) {
          this_02 = *(Scope **)(this_02 + 8);
          if (this_02 == pSVar17) goto LAB_014a123c;
          uVar1 = *(uint *)(pAVar12 + 0x18);
          goto LAB_014a11ac;
        }
LAB_014a1230:
        if ((*(byte *)(lVar4 + 0x28) & 0xe) == 0) goto LAB_014a1384;
LAB_014a123c:
        if (param_1 == (AstNodeFactory *)0x0) {
          pVVar6 = (Variable *)Scope::DeclareVariableName((Scope *)this,pAVar12,2,auStack_6c,0);
          if (((uint)puVar16[1] >> 6 & 0xff) == 0x11) {
            Variable::SetMaybeAssigned(pVVar6);
          }
        }
        else {
          uVar2 = *puVar16;
          local_64[0] = 1;
          pZVar5 = *(Zone **)param_1;
          puVar7 = *(undefined4 **)(pZVar5 + 0x10);
          if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar7) < 0x18) {
            puVar7 = (undefined4 *)Zone::NewExpand(pZVar5,0x18);
          }
          else {
            *(undefined4 **)(pZVar5 + 0x10) = puVar7 + 6;
          }
          *(undefined8 *)(puVar7 + 4) = 0;
          *puVar7 = uVar2;
          puVar7[1] = 0;
          pVVar6 = (Variable *)
                   Scope::DeclareVariable
                             ((Scope *)this,puVar7,pAVar12,uVar2,2,0,1,auStack_68,0,local_64);
          pZVar5 = *(Zone **)param_1;
          pVVar14 = *(Variable **)(puVar16 + 2);
          this_00 = *(VariableProxy **)(pZVar5 + 0x10);
          if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)this_00) < 0x18) {
            this_00 = (VariableProxy *)Zone::NewExpand(pZVar5,0x18);
          }
          else {
            *(VariableProxy **)(pZVar5 + 0x10) = this_00 + 0x18;
          }
          VariableProxy::VariableProxy(this_00,pVVar14,-1);
          pZVar5 = *(Zone **)param_1;
          this_01 = *(VariableProxy **)(pZVar5 + 0x10);
          if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)this_01) < 0x18) {
            this_01 = (VariableProxy *)Zone::NewExpand(pZVar5,0x18);
          }
          else {
            *(VariableProxy **)(pZVar5 + 0x10) = this_01 + 0x18;
          }
          VariableProxy::VariableProxy(this_01,pVVar6,-1);
          lVar4 = AstNodeFactory::NewAssignment(param_1,(uint)puVar16[1] >> 6,this_01,this_00,uVar2)
          ;
          *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) | 0x4000;
          pZVar5 = *(Zone **)param_1;
          puVar7 = *(undefined4 **)(pZVar5 + 0x10);
          if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar7) < 0x10) {
            puVar7 = (undefined4 *)Zone::NewExpand(pZVar5,0x10);
          }
          else {
            *(undefined4 **)(pZVar5 + 0x10) = puVar7 + 4;
          }
          *puVar7 = uVar2;
          puVar7[1] = 9;
          *(long *)(puVar7 + 2) = lVar4;
          *(undefined4 **)(puVar16 + 4) = puVar7;
        }
LAB_014a1384:
        pDVar15 = (DeclarationScope *)(*(long *)pDVar15 + 0x18);
        if (pDVar15 == pDVar8) {
          return;
        }
        puVar16 = *(undefined4 **)pDVar15;
      } while( true );
    }
  }
  return;
}

