
/* v8::internal::Scope::DeserializeScopeChain(v8::internal::Isolate*, v8::internal::Zone*,
   v8::internal::ScopeInfo, v8::internal::DeclarationScope*, v8::internal::AstValueFactory*,
   v8::internal::Scope::DeserializationMode) */

DeclarationScope *
v8::internal::Scope::DeserializeScopeChain
          (Isolate *param_1,Zone *param_2,ulong param_3,DeclarationScope *param_4,
          AstValueFactory *param_5,int param_6)

{
  Isolate *pIVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong *puVar5;
  CanonicalHandleScope *this;
  DeclarationScope *pDVar6;
  undefined8 uVar7;
  ushort uVar8;
  DeclarationScope *pDVar9;
  DeclarationScope *pDVar10;
  DeclarationScope *pDVar11;
  ulong local_68;
  
  if ((int)param_3 == 0) {
    pDVar10 = (DeclarationScope *)0x0;
    pDVar6 = (DeclarationScope *)0x0;
joined_r0x014a1060:
    if ((param_6 == 0) && (*(long *)(param_4 + 0x68) == 0)) {
      *(Isolate **)(param_4 + 0x68) = param_1 + 0x478;
    }
    if (pDVar10 != (DeclarationScope *)0x0) {
      *(undefined8 *)(pDVar6 + 0x18) = *(undefined8 *)(param_4 + 0x10);
      *(DeclarationScope **)(param_4 + 0x10) = pDVar6;
      *(DeclarationScope **)(pDVar6 + 8) = param_4;
      param_4 = pDVar10;
    }
    return param_4;
  }
  pIVar1 = param_1 + 0x95a0;
  pDVar9 = (DeclarationScope *)0x0;
  pDVar11 = (DeclarationScope *)0x0;
  local_68 = param_3;
  do {
    cVar2 = ScopeInfo::scope_type((ScopeInfo *)&local_68);
    pDVar10 = pDVar9;
    if (cVar2 == '\a') {
      uVar4 = ScopeInfo::IsDebugEvaluateScope((ScopeInfo *)&local_68);
      pDVar6 = *(DeclarationScope **)(param_2 + 0x10);
      if ((uVar4 & 1) == 0) {
        if ((ulong)(*(long *)(param_2 + 0x18) - (long)pDVar6) < 0x88) {
          pDVar6 = (DeclarationScope *)Zone::NewExpand(param_2,0x88);
        }
        else {
          *(DeclarationScope **)(param_2 + 0x10) = pDVar6 + 0x88;
        }
        uVar4 = local_68;
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)pIVar1;
          if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar5 + 1;
          *puVar5 = uVar4;
        }
        else {
          puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),local_68);
        }
        uVar7 = 7;
LAB_014a0b68:
        Scope((Scope *)pDVar6,param_2,uVar7,puVar5);
      }
      else {
        if ((ulong)(*(long *)(param_2 + 0x18) - (long)pDVar6) < 0xe0) {
          pDVar6 = (DeclarationScope *)Zone::NewExpand(param_2,0xe0);
        }
        else {
          *(DeclarationScope **)(param_2 + 0x10) = pDVar6 + 0xe0;
        }
        uVar4 = local_68;
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)pIVar1;
          if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar5 + 1;
          *puVar5 = uVar4;
        }
        else {
          puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),local_68);
        }
        DeclarationScope::DeclarationScope(pDVar6,param_2,2,puVar5);
        uVar8 = *(ushort *)(pDVar6 + 0x81) | 0x20;
LAB_014a0b30:
        *(ushort *)(pDVar6 + 0x81) = uVar8;
      }
      goto joined_r0x014a0f94;
    }
    cVar2 = ScopeInfo::scope_type((ScopeInfo *)&local_68);
    uVar4 = local_68;
    if (cVar2 == '\x04') {
      if (param_6 == 0) {
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)pIVar1;
          if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar5 + 1;
          *puVar5 = uVar4;
        }
        else {
          puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),local_68);
        }
        *(ulong **)(param_4 + 0x68) = puVar5;
      }
      uVar4 = ScopeInfo::IsReplModeScope((ScopeInfo *)&local_68);
      pDVar6 = pDVar11;
      if ((uVar4 & 1) != 0) {
        *(ushort *)(param_4 + 0x81) = *(ushort *)(param_4 + 0x81) | 0x800;
      }
      goto joined_r0x014a1060;
    }
    cVar2 = ScopeInfo::scope_type((ScopeInfo *)&local_68);
    if (cVar2 == '\x02') {
      pDVar6 = *(DeclarationScope **)(param_2 + 0x10);
      if ((ulong)(*(long *)(param_2 + 0x18) - (long)pDVar6) < 0xe0) {
        pDVar6 = (DeclarationScope *)Zone::NewExpand(param_2,0xe0);
      }
      else {
        *(DeclarationScope **)(param_2 + 0x10) = pDVar6 + 0xe0;
      }
      uVar4 = local_68;
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)pIVar1;
        if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar5 + 1;
        *puVar5 = uVar4;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),local_68);
      }
      DeclarationScope::DeclarationScope(pDVar6,param_2,2,puVar5);
      if ((1 < *(int *)(local_68 + 3)) && ((*(uint *)(local_68 + 7) >> 0x10 & 1) != 0)) {
        *(ushort *)(pDVar6 + 0x83) = *(ushort *)(pDVar6 + 0x83) | 2;
      }
    }
    else {
      cVar2 = ScopeInfo::scope_type((ScopeInfo *)&local_68);
      if (cVar2 == '\x01') {
        pDVar6 = *(DeclarationScope **)(param_2 + 0x10);
        if ((ulong)(*(long *)(param_2 + 0x18) - (long)pDVar6) < 0xe0) {
          pDVar6 = (DeclarationScope *)Zone::NewExpand(param_2,0xe0);
        }
        else {
          *(DeclarationScope **)(param_2 + 0x10) = pDVar6 + 0xe0;
        }
        uVar4 = local_68;
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)pIVar1;
          if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar5 + 1;
          *puVar5 = uVar4;
        }
        else {
          puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),local_68);
        }
        uVar7 = 1;
LAB_014a0c0c:
        DeclarationScope::DeclarationScope(pDVar6,param_2,uVar7,puVar5);
      }
      else {
        cVar2 = ScopeInfo::scope_type((ScopeInfo *)&local_68);
        if (cVar2 == '\0') {
          pDVar6 = *(DeclarationScope **)(param_2 + 0x10);
          if ((ulong)(*(long *)(param_2 + 0x18) - (long)pDVar6) < 0xa0) {
            pDVar6 = (DeclarationScope *)Zone::NewExpand(param_2,0xa0);
          }
          else {
            *(ClassScope **)(param_2 + 0x10) = (ClassScope *)(pDVar6 + 0xa0);
          }
          uVar4 = local_68;
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar5 = *(ulong **)pIVar1;
            if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
              puVar5 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar1 = puVar5 + 1;
            *puVar5 = uVar4;
          }
          else {
            puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),local_68);
          }
          ClassScope::ClassScope((ClassScope *)pDVar6,param_1,param_2,param_5,puVar5);
        }
        else {
          cVar2 = ScopeInfo::scope_type((ScopeInfo *)&local_68);
          if (cVar2 == '\x06') {
            uVar4 = ScopeInfo::is_declaration_scope((ScopeInfo *)&local_68);
            pDVar6 = *(DeclarationScope **)(param_2 + 0x10);
            if ((uVar4 & 1) == 0) {
              if ((ulong)(*(long *)(param_2 + 0x18) - (long)pDVar6) < 0x88) {
                pDVar6 = (DeclarationScope *)Zone::NewExpand(param_2,0x88);
              }
              else {
                *(Scope **)(param_2 + 0x10) = (Scope *)(pDVar6 + 0x88);
              }
              uVar4 = local_68;
              if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar5 = *(ulong **)pIVar1;
                if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
                  puVar5 = (ulong *)HandleScope::Extend(param_1);
                }
                *(ulong **)pIVar1 = puVar5 + 1;
                *puVar5 = uVar4;
                uVar7 = 6;
              }
              else {
                puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                            (*(CanonicalHandleScope **)(param_1 + 0x95b8),local_68);
                uVar7 = 6;
              }
              goto LAB_014a0b68;
            }
            if ((ulong)(*(long *)(param_2 + 0x18) - (long)pDVar6) < 0xe0) {
              pDVar6 = (DeclarationScope *)Zone::NewExpand(param_2,0xe0);
            }
            else {
              *(Scope **)(param_2 + 0x10) = (Scope *)(pDVar6 + 0xe0);
            }
            uVar4 = local_68;
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar5 = *(ulong **)pIVar1;
              if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
                puVar5 = (ulong *)HandleScope::Extend(param_1);
              }
              *(ulong **)pIVar1 = puVar5 + 1;
              *puVar5 = uVar4;
              uVar7 = 6;
            }
            else {
              puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(param_1 + 0x95b8),local_68);
              uVar7 = 6;
            }
            goto LAB_014a0c0c;
          }
          cVar2 = ScopeInfo::scope_type((ScopeInfo *)&local_68);
          if (cVar2 == '\x03') {
            pDVar6 = *(DeclarationScope **)(param_2 + 0x10);
            if ((ulong)(*(long *)(param_2 + 0x18) - (long)pDVar6) < 0xe8) {
              pDVar6 = (DeclarationScope *)Zone::NewExpand(param_2,0xe8);
            }
            else {
              *(DeclarationScope **)(param_2 + 0x10) = pDVar6 + 0xe8;
            }
            uVar4 = local_68;
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar5 = *(ulong **)pIVar1;
              if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
                puVar5 = (ulong *)HandleScope::Extend(param_1);
              }
              *(ulong **)pIVar1 = puVar5 + 1;
              *puVar5 = uVar4;
            }
            else {
              puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(param_1 + 0x95b8),local_68);
            }
            DeclarationScope::DeclarationScope(pDVar6,*(undefined8 *)(param_5 + 0x448),3,puVar5);
            *(undefined8 *)(pDVar6 + 0xe0) = 0;
            uVar8 = *(ushort *)(pDVar6 + 0x81) | 1;
            goto LAB_014a0b30;
          }
          uVar4 = ScopeInfo::ContextLocalName((ScopeInfo *)&local_68,0);
          uVar3 = ScopeInfo::ContextLocalMaybeAssignedFlag((ScopeInfo *)&local_68,0);
          pDVar6 = *(DeclarationScope **)(param_2 + 0x10);
          if ((ulong)(*(long *)(param_2 + 0x18) - (long)pDVar6) < 0x88) {
            pDVar6 = (DeclarationScope *)Zone::NewExpand(param_2,0x88);
            this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
            if (this == (CanonicalHandleScope *)0x0) goto LAB_014a0efc;
LAB_014a0d50:
            puVar5 = (ulong *)CanonicalHandleScope::Lookup(this,uVar4);
          }
          else {
            *(Scope **)(param_2 + 0x10) = (Scope *)(pDVar6 + 0x88);
            this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
            if (this != (CanonicalHandleScope *)0x0) goto LAB_014a0d50;
LAB_014a0efc:
            puVar5 = *(ulong **)pIVar1;
            if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
              puVar5 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar1 = puVar5 + 1;
            *puVar5 = uVar4;
          }
          uVar7 = AstValueFactory::GetString(param_5,puVar5);
          uVar4 = local_68;
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar5 = *(ulong **)pIVar1;
            if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
              puVar5 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar1 = puVar5 + 1;
            *puVar5 = uVar4;
          }
          else {
            puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),local_68);
          }
          Scope((Scope *)pDVar6,param_2,uVar7,uVar3,puVar5);
        }
      }
    }
joined_r0x014a0f94:
    if (param_6 == 1) {
      *(undefined8 *)(pDVar6 + 0x68) = 0;
    }
    if (pDVar11 != (DeclarationScope *)0x0) {
      *(undefined8 *)(pDVar11 + 0x18) = *(undefined8 *)(pDVar6 + 0x10);
      *(DeclarationScope **)(pDVar6 + 0x10) = pDVar11;
      *(DeclarationScope **)(pDVar11 + 8) = pDVar6;
    }
    pDVar10 = pDVar6;
    if (pDVar9 != (DeclarationScope *)0x0) {
      pDVar10 = pDVar9;
    }
    uVar4 = ScopeInfo::HasOuterScopeInfo((ScopeInfo *)&local_68);
    if (((uVar4 & 1) == 0) ||
       (local_68 = ScopeInfo::OuterScopeInfo((ScopeInfo *)&local_68), pDVar9 = pDVar10,
       pDVar11 = pDVar6, (int)local_68 == 0)) goto joined_r0x014a1060;
  } while( true );
}

