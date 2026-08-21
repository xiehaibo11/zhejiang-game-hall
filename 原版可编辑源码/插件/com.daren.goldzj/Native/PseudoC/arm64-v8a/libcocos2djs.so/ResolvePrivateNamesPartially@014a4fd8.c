
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::ClassScope::ResolvePrivateNamesPartially() */

VariableProxy * __thiscall v8::internal::ClassScope::ResolvePrivateNamesPartially(ClassScope *this)

{
  ThreadedListBase<v8::internal::VariableProxy,v8::base::EmptyBase,v8::internal::VariableProxy::UnresolvedNext>
  *this_00;
  ulong uVar1;
  int iVar2;
  uint uVar3;
  VariableProxy *this_01;
  VariableProxy *pVVar4;
  long lVar5;
  ClassScope *pCVar6;
  long *plVar7;
  ClassScope *pCVar8;
  ClassScope *pCVar9;
  ulong uVar10;
  long lVar11;
  VariableProxy *pVVar12;
  Variable *pVVar13;
  PrivateNameScopeIterator local_68 [8];
  ClassScope *local_60;
  ClassScope *local_58;
  
  this_00 = (ThreadedListBase<v8::internal::VariableProxy,v8::base::EmptyBase,v8::internal::VariableProxy::UnresolvedNext>
             *)(*(ulong *)(this + 0x88) & 0xfffffffffffffff8);
  if ((this_00 ==
       (ThreadedListBase<v8::internal::VariableProxy,v8::base::EmptyBase,v8::internal::VariableProxy::UnresolvedNext>
        *)0x0) || (*(long *)this_00 == 0)) {
    return (VariableProxy *)0x0;
  }
  local_68[0] = (PrivateNameScopeIterator)0x0;
  if ((this[0x80] == (ClassScope)0x0) && ((*(ulong *)(this + 0x88) & 7) == 0)) {
    pCVar8 = *(ClassScope **)(this + 8);
    pCVar6 = this;
  }
  else {
    if (*(ClassScope **)(this + 8) == (ClassScope *)0x0) {
      pCVar6 = (ClassScope *)0x0;
    }
    else {
      local_68[0] = (PrivateNameScopeIterator)0x0;
      pCVar8 = *(ClassScope **)(this + 8);
      pCVar9 = this;
      do {
        pCVar6 = pCVar8;
        if (pCVar6[0x80] == (ClassScope)0x0) {
          if (((byte)pCVar9[0x82] >> 1 & 1) == 0) goto LAB_014a508c;
          local_68[0] = (PrivateNameScopeIterator)0x1;
        }
        pCVar8 = *(ClassScope **)(pCVar6 + 8);
        pCVar9 = pCVar6;
      } while (*(ClassScope **)(pCVar6 + 8) != (ClassScope *)0x0);
      pCVar6 = (ClassScope *)0x0;
    }
LAB_014a508c:
    pCVar8 = *(ClassScope **)(pCVar6 + 8);
  }
  if (pCVar8 == (ClassScope *)0x0) {
    pCVar8 = (ClassScope *)0x0;
  }
  else {
    do {
      if (pCVar8[0x80] == (ClassScope)0x0) {
        if (((byte)pCVar6[0x82] >> 1 & 1) == 0) goto LAB_014a50d0;
        local_68[0] = (PrivateNameScopeIterator)0x1;
      }
      pCVar9 = pCVar8 + 8;
      pCVar6 = pCVar8;
      pCVar8 = *(ClassScope **)pCVar9;
    } while (*(ClassScope **)pCVar9 != (ClassScope *)0x0);
    pCVar8 = (ClassScope *)0x0;
  }
LAB_014a50d0:
  iVar2 = *(int *)(this_00 + 0x18);
  pVVar12 = *(VariableProxy **)this_00;
  this_01 = pVVar12;
  local_60 = this;
  local_58 = pCVar8;
  if ((pCVar8 != (ClassScope *)0x0) || (iVar2 != 0)) {
joined_r0x014a50e4:
    pVVar12 = (VariableProxy *)0x0;
    if (this_01 != (VariableProxy *)0x0) {
      pVVar12 = *(VariableProxy **)(this_01 + 0x10);
      base::
      ThreadedListBase<v8::internal::VariableProxy,v8::base::EmptyBase,v8::internal::VariableProxy::UnresolvedNext>
      ::Remove(this_00,this_01);
      if (iVar2 != 0) {
        pVVar4 = this_01 + 8;
        if (((byte)this_01[5] & 1) != 0) {
          pVVar4 = (VariableProxy *)(*(long *)pVVar4 + 8);
        }
        uVar1 = *(ulong *)(this + 0x88) & 0xfffffffffffffff8;
        if (uVar1 != 0) {
          lVar5 = *(long *)pVVar4;
          uVar3 = *(int *)(uVar1 + 0x18) - 1;
          uVar10 = (ulong)(uVar3 & *(uint *)(lVar5 + 0x18) >> 3);
          plVar7 = (long *)(*(long *)(uVar1 + 0x10) + uVar10 * 0x18);
          lVar11 = *plVar7;
          while (lVar11 != 0) {
            if (lVar11 == lVar5) {
              if (((lVar5 != 0) && (plVar7 != (long *)0x0)) &&
                 (pVVar13 = (Variable *)plVar7[1], pVVar13 != (Variable *)0x0)) {
                *(ushort *)(pVVar13 + 0x28) = *(ushort *)(pVVar13 + 0x28) | 0x800;
                VariableProxy::BindTo(this_01,pVVar13);
                this[0x99] = (ClassScope)
                             ((byte)this[0x99] |
                             ((short)*(ushort *)(pVVar13 + 0x28) < 0 &&
                             ((*(ushort *)(pVVar13 + 0x28) & 0xf) - 7 & 0xff) < 4));
                this_01 = pVVar12;
                goto joined_r0x014a50e4;
              }
              break;
            }
            uVar10 = (ulong)((int)uVar10 + 1U & uVar3);
            plVar7 = (long *)(*(long *)(uVar1 + 0x10) + uVar10 * 0x18);
            lVar11 = *plVar7;
          }
        }
      }
      if (pCVar8 == (ClassScope *)0x0) {
        return this_01;
      }
      PrivateNameScopeIterator::AddUnresolvedPrivateName(local_68,this_01);
      this_01 = pVVar12;
      goto joined_r0x014a50e4;
    }
  }
  return pVVar12;
}

