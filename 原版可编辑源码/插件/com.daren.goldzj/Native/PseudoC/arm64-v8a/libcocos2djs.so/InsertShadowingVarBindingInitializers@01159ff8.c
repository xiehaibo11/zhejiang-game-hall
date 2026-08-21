
/* v8::internal::Parser::InsertShadowingVarBindingInitializers(v8::internal::Block*) */

void __thiscall
v8::internal::Parser::InsertShadowingVarBindingInitializers(Parser *this,Block *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  Variable *pVVar4;
  Zone *pZVar5;
  VariableProxy *pVVar6;
  VariableProxy *this_00;
  Assignment *pAVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  void *pvVar15;
  AstRawString *pAVar16;
  Scope *this_01;
  long *plVar17;
  long *plVar18;
  
  lVar14 = *(long *)(param_1 + 0x18);
  uVar10 = *(undefined8 *)this;
  plVar18 = (long *)(lVar14 + 0x58);
  lVar11 = *(long *)(lVar14 + 8);
  *(long *)this = lVar14;
  plVar17 = *(long **)(lVar14 + 0x60);
  if (plVar18 != plVar17) {
    do {
      lVar14 = *(long *)(*plVar18 + 8);
      if (((*(ushort *)(lVar14 + 0x28) & 0xf) == 2) && ((*(byte *)(*plVar18 + 4) & 0x3f) == 0)) {
        pAVar16 = *(AstRawString **)(lVar14 + 8);
        pVVar4 = (Variable *)VariableMap::Lookup((VariableMap *)(lVar11 + 0x20),pAVar16);
        if (pVVar4 != (Variable *)0x0) {
          pZVar5 = *(Zone **)(this + 0x68);
          this_01 = *(Scope **)this;
          pVVar6 = *(VariableProxy **)(pZVar5 + 0x10);
          uVar2 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
          if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pVVar6) < 0x18) {
            pVVar6 = (VariableProxy *)Zone::NewExpand(pZVar5,0x18);
          }
          else {
            *(VariableProxy **)(pZVar5 + 0x10) = pVVar6 + 0x18;
          }
          *(AstRawString **)(pVVar6 + 8) = pAVar16;
          *(undefined8 *)(pVVar6 + 0x10) = 0;
          *(undefined4 *)pVVar6 = uVar2;
          *(undefined4 *)(pVVar6 + 4) = 0x835;
          Scope::AddUnresolved(this_01,pVVar6);
          pZVar5 = *(Zone **)(this + 0x68);
          this_00 = *(VariableProxy **)(pZVar5 + 0x10);
          if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)this_00) < 0x18) {
            this_00 = (VariableProxy *)Zone::NewExpand(pZVar5,0x18);
          }
          else {
            *(VariableProxy **)(pZVar5 + 0x10) = this_00 + 0x18;
          }
          VariableProxy::VariableProxy(this_00,pVVar4,-1);
          uVar3 = *(uint *)(pVVar6 + 4);
          if (((uVar3 & 0x3f) == 0x35) &&
             (*(uint *)(pVVar6 + 4) = uVar3 | 0x80, (uVar3 >> 8 & 1) != 0)) {
            Variable::SetMaybeAssigned(*(Variable **)(pVVar6 + 8));
          }
          pZVar5 = *(Zone **)(this + 0x68);
          pAVar7 = *(Assignment **)(pZVar5 + 0x10);
          if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pAVar7) < 0x18) {
            pAVar7 = (Assignment *)Zone::NewExpand(pZVar5,0x18);
          }
          else {
            *(Assignment **)(pZVar5 + 0x10) = pAVar7 + 0x18;
          }
          Assignment::Assignment(pAVar7,0x18,0x11,pVVar6,this_00,0xffffffff);
          pZVar5 = *(Zone **)(this + 0x68);
          puVar8 = *(undefined8 **)(pZVar5 + 0x10);
          if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar8) < 0x10) {
            puVar8 = (undefined8 *)Zone::NewExpand(pZVar5,0x10);
          }
          else {
            *(undefined8 **)(pZVar5 + 0x10) = puVar8 + 2;
          }
          *puVar8 = 0x9ffffffff;
          puVar8[1] = pAVar7;
          uVar3 = *(uint *)(param_1 + 0x10);
          uVar9 = *(uint *)(param_1 + 0x14);
          if ((int)uVar9 < (int)uVar3) {
            pvVar15 = *(void **)(param_1 + 8);
          }
          else {
            pZVar5 = *(Zone **)(this + 0xb8);
            uVar1 = uVar3 << 1 | 1;
            uVar12 = -(ulong)((uVar3 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3
            ;
            pvVar15 = *(void **)(pZVar5 + 0x10);
            if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pvVar15) < uVar12) {
              pvVar15 = (void *)Zone::NewExpand(pZVar5,uVar12);
            }
            else {
              *(ulong *)(pZVar5 + 0x10) = (long)pvVar15 + uVar12;
            }
            uVar9 = *(uint *)(param_1 + 0x14);
            if (0 < (int)uVar9) {
              MemCopy(pvVar15,*(void **)(param_1 + 8),(ulong)uVar9 << 3);
              uVar9 = *(uint *)(param_1 + 0x14);
            }
            *(void **)(param_1 + 8) = pvVar15;
            *(uint *)(param_1 + 0x10) = uVar1;
          }
          *(uint *)(param_1 + 0x14) = uVar9 + 1;
          *(undefined8 **)((long)pvVar15 + (long)(int)uVar9 * 8) = puVar8;
          uVar3 = *(int *)(param_1 + 0x14) - 1;
          if (0 < (int)uVar3) {
            uVar12 = (ulong)uVar3;
            iVar13 = *(int *)(param_1 + 0x14) + -2;
            do {
              lVar14 = (long)iVar13;
              iVar13 = iVar13 + -1;
              *(undefined8 *)(*(long *)(param_1 + 8) + uVar12 * 8) =
                   *(undefined8 *)(*(long *)(param_1 + 8) + lVar14 * 8);
              uVar12 = uVar12 - 1;
            } while (0 < (long)uVar12);
          }
          **(undefined8 **)(param_1 + 8) = puVar8;
        }
      }
      plVar18 = (long *)(*plVar18 + 0x10);
    } while (plVar18 != plVar17);
  }
  *(undefined8 *)this = uVar10;
  return;
}

