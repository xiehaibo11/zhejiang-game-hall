
/* v8::internal::DeclarationScope::CheckConflictingVarDeclarations() */

long __thiscall
v8::internal::DeclarationScope::CheckConflictingVarDeclarations(DeclarationScope *this)

{
  long lVar1;
  AstRawString *pAVar2;
  Scope *pSVar3;
  DeclarationScope *pDVar4;
  DeclarationScope *pDVar5;
  DeclarationScope *pDVar6;
  long lVar7;
  AstRawString *pAVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  Scope *this_00;
  Scope *pSVar12;
  
  if (((byte)this[0x84] >> 2 & 1) == 0) {
    pDVar4 = *(DeclarationScope **)(this + 0x60);
    pDVar5 = this + 0x58;
    pDVar6 = pDVar5;
    while (pDVar6 != pDVar4) {
      lVar1 = *(long *)pDVar6;
      if (((*(uint *)(lVar1 + 4) & 0x3f) == 0 && lVar1 != 0) && (*(uint *)(lVar1 + 4) & 0x40) != 0)
      {
        pDVar6 = *(DeclarationScope **)(lVar1 + 0x18);
        do {
          if (pDVar6[0x80] != (DeclarationScope)0x5) {
            lVar7 = *(long *)(*(long *)(lVar1 + 8) + 8);
            uVar10 = (ulong)(*(int *)(pDVar6 + 0x28) - 1U & *(uint *)(lVar7 + 0x18) >> 3);
            plVar9 = (long *)(*(long *)(pDVar6 + 0x20) + uVar10 * 0x18);
            lVar11 = *plVar9;
            while (lVar11 != 0) {
              if (lVar11 == lVar7) {
                if (((lVar7 != 0) && (plVar9 != (long *)0x0)) && (plVar9[1] != 0)) {
                  return lVar1;
                }
                break;
              }
              uVar10 = (ulong)((int)uVar10 + 1U & *(int *)(pDVar6 + 0x28) - 1U);
              plVar9 = (long *)(*(long *)(pDVar6 + 0x20) + uVar10 * 0x18);
              lVar11 = *plVar9;
            }
          }
          pDVar6 = *(DeclarationScope **)(pDVar6 + 8);
        } while (pDVar6 != this);
      }
      pDVar6 = (DeclarationScope *)(lVar1 + 0x10);
    }
    if ((this[0x80] == (DeclarationScope)0x1) && (pDVar6 = this, ((byte)this[0x81] & 1) == 0)) {
      do {
        do {
          pDVar6 = *(DeclarationScope **)(pDVar6 + 8);
        } while (((byte)pDVar6[0x82] & 1) == 0);
      } while (pDVar6[0x80] == (DeclarationScope)0x1);
      if (pDVar5 != pDVar4) {
        pSVar12 = *(Scope **)(pDVar6 + 8);
LAB_014a2b54:
        lVar11 = *(long *)pDVar5;
        lVar1 = *(long *)(lVar11 + 8);
        if ((*(byte *)(lVar1 + 0x28) & 0xe) != 0) {
          pSVar3 = *(Scope **)(this + 8);
          this_00 = pSVar3;
          do {
            pAVar2 = *(AstRawString **)(lVar1 + 8);
            uVar10 = (ulong)(*(int *)(this_00 + 0x28) - 1U & *(uint *)(pAVar2 + 0x18) >> 3);
            plVar9 = (long *)(*(long *)(this_00 + 0x20) + uVar10 * 0x18);
            pAVar8 = (AstRawString *)*plVar9;
            while (pAVar8 != (AstRawString *)0x0) {
              if (pAVar8 == pAVar2) {
                if (((pAVar2 != (AstRawString *)0x0) && (plVar9 != (long *)0x0)) &&
                   (lVar1 = plVar9[1], lVar1 != 0)) goto LAB_014a2bfc;
                break;
              }
              uVar10 = (ulong)((int)uVar10 + 1U & *(int *)(this_00 + 0x28) - 1U);
              plVar9 = (long *)(*(long *)(this_00 + 0x20) + uVar10 * 0x18);
              pAVar8 = (AstRawString *)*plVar9;
            }
            if ((*(long *)(this_00 + 0x68) != 0) &&
               (lVar1 = Scope::LookupInScopeInfo(this_00,pAVar2,pSVar3), lVar1 != 0)) {
LAB_014a2bfc:
              if ((*(byte *)(lVar1 + 0x28) & 0xe) == 0) {
                return lVar11;
              }
              return 0;
            }
            this_00 = *(Scope **)(this_00 + 8);
            if (this_00 == pSVar12) goto LAB_014a2b38;
            lVar1 = *(long *)(lVar11 + 8);
            pSVar3 = *(Scope **)(this + 8);
          } while( true );
        }
        goto LAB_014a2b44;
      }
    }
  }
  return 0;
LAB_014a2b38:
  lVar11 = *(long *)pDVar5;
LAB_014a2b44:
  pDVar5 = (DeclarationScope *)(lVar11 + 0x10);
  if (pDVar5 == pDVar4) {
    return 0;
  }
  goto LAB_014a2b54;
}

